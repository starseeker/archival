/* Generated from srfi-1.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:13
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: srfi-1.scm -output-file usrfi-1.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
   unit: srfi_1
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[126];


C_noret_decl(C_srfi_1_toplevel)
C_externexport void C_ccall C_srfi_1_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_922)
static void C_ccall f_922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5470)
static void C_ccall f_5470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5487)
static void C_ccall f_5487(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5495)
static void C_ccall f_5495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5447)
static void C_ccall f_5447(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5457)
static void C_ccall f_5457(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5455)
static void C_ccall f_5455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5365)
static void C_ccall f_5365r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5371)
static void C_ccall f_5371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5383)
static void C_ccall f_5383(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5407)
static void C_ccall f_5407(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5414)
static void C_ccall f_5414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5377)
static void C_ccall f_5377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5311)
static void C_ccall f_5311(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5311)
static void C_ccall f_5311r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5329)
static void C_ccall f_5329(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5353)
static void C_ccall f_5353(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5360)
static void C_ccall f_5360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5323)
static void C_ccall f_5323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5274)
static void C_ccall f_5274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5274)
static void C_ccall f_5274r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5278)
static void C_ccall f_5278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5295)
static void C_ccall f_5295(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5301)
static void C_ccall f_5301(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5309)
static void C_ccall f_5309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5237)
static void C_ccall f_5237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5237)
static void C_ccall f_5237r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5241)
static void C_ccall f_5241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5264)
static void C_ccall f_5264(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5272)
static void C_ccall f_5272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5204)
static void C_ccall f_5204(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5204)
static void C_ccall f_5204r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5208)
static void C_ccall f_5208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5214)
static void C_ccall f_5214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5225)
static void C_ccall f_5225(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5231)
static void C_ccall f_5231(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5175)
static void C_ccall f_5175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5181)
static void C_ccall f_5181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5192)
static void C_ccall f_5192(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5198)
static void C_ccall f_5198(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5120)
static void C_ccall f_5120(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5120)
static void C_ccall f_5120r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5165)
static void C_ccall f_5165(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5160)
static void C_ccall f_5160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5114)
static void C_ccall f_5114(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5109)
static void C_ccall f_5109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5054)
static void C_ccall f_5054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5054)
static void C_ccall f_5054r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5060)
static void C_ccall f_5060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5067)
static void C_ccall f_5067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4990)
static void C_ccall f_4990(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4990)
static void C_ccall f_4990r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5010)
static void C_fcall f_5010(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4952)
static void C_fcall f_4952(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4974)
static void C_ccall f_4974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4920)
static void C_fcall f_4920(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4926)
static void C_ccall f_4926(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4896)
static void C_ccall f_4896(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4902)
static C_word C_fcall f_4902(C_word t0,C_word t1);
C_noret_decl(f_4809)
static void C_ccall f_4809(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4809)
static void C_ccall f_4809r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4862)
static void C_fcall f_4862(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4875)
static void C_ccall f_4875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4825)
static void C_fcall f_4825(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4837)
static void C_ccall f_4837(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4850)
static void C_ccall f_4850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4831)
static void C_ccall f_4831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4692)
static void C_ccall f_4692(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4692)
static void C_ccall f_4692r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4780)
static void C_fcall f_4780(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4796)
static void C_ccall f_4796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4726)
static void C_fcall f_4726(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4738)
static void C_ccall f_4738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4704)
static void C_ccall f_4704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4659)
static void C_fcall f_4659(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4597)
static void C_ccall f_4597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4609)
static void C_fcall f_4609(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4631)
static void C_ccall f_4631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4615)
static void C_ccall f_4615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4559)
static void C_ccall f_4559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4573)
static void C_ccall f_4573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4543)
static void C_ccall f_4543(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4479)
static void C_ccall f_4479(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4489)
static void C_fcall f_4489(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4504)
static void C_fcall f_4504(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4520)
static void C_ccall f_4520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4432)
static void C_fcall f_4432(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4378)
static void C_fcall f_4378(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4387)
static void C_fcall f_4387(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4342)
static void C_fcall f_4342(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4307)
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4323)
static void C_ccall f_4323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4271)
static void C_fcall f_4271(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4257)
static void C_ccall f_4257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4233)
static void C_ccall f_4233(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4181)
static void C_ccall f_4181(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4149)
static void C_ccall f_4149(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4103)
static void C_fcall f_4103(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4057)
static void C_fcall f_4057(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4073)
static void C_ccall f_4073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3986)
static void C_ccall f_3986(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3951)
static void C_ccall f_3951(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3959)
static void C_ccall f_3959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3839)
static void C_ccall f_3839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3898)
static void C_fcall f_3898(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3914)
static void C_ccall f_3914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3917)
static void C_ccall f_3917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3848)
static void C_fcall f_3848(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3790)
static void C_fcall f_3790(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3796)
static void C_fcall f_3796(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3809)
static void C_ccall f_3809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3745)
static void C_fcall f_3745(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3751)
static void C_fcall f_3751(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3671)
static void C_fcall f_3671(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3698)
static void C_ccall f_3698(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3692)
static void C_ccall f_3692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3550)
static void C_fcall f_3550(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3659)
static void C_ccall f_3659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3651)
static void C_ccall f_3651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3605)
static void C_fcall f_3605(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3611)
static void C_fcall f_3611(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3624)
static void C_ccall f_3624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3572)
static void C_fcall f_3572(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3508)
static void C_fcall f_3508(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3475)
static void C_fcall f_3475(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3441)
static void C_fcall f_3441(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3453)
static void C_ccall f_3453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3463)
static void C_ccall f_3463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3470)
static void C_ccall f_3470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3396)
static void C_fcall f_3396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3409)
static void C_ccall f_3409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3356)
static void C_fcall f_3356(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3268)
static void C_ccall f_3268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3268)
static void C_ccall f_3268r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3280)
static void C_fcall f_3280(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3298)
static void C_ccall f_3298(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_fcall f_2483(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3272)
static void C_ccall f_3272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3209)
static void C_ccall f_3209r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3246)
static void C_fcall f_3246(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3259)
static void C_ccall f_3259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3225)
static void C_fcall f_3225(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3238)
static void C_ccall f_3238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3100)
static void C_fcall f_3100(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3182)
static void C_fcall f_3182(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3199)
static void C_ccall f_3199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3134)
static void C_fcall f_3134(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3163)
static void C_ccall f_3163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3112)
static void C_ccall f_3112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3064)
static void C_fcall f_3064(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3005)
static void C_fcall f_3005(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2975)
static void C_fcall f_2975(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2893)
static void C_ccall f_2893r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2939)
static void C_fcall f_2939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_fcall f_2909(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2926)
static void C_ccall f_2926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2828)
static void C_ccall f_2828(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2828)
static void C_ccall f_2828r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2870)
static void C_fcall f_2870(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2844)
static void C_fcall f_2844(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_fcall f_2286(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2804)
static void C_fcall f_2804(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2773)
static void C_fcall f_2773(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2785)
static void C_ccall f_2785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2405)
static void C_fcall f_2405(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2444)
static void C_ccall f_2444(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2450)
static void C_ccall f_2450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_2733)
static void C_fcall f_2733(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2751)
static void C_ccall f_2751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_fcall f_2699(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_2645)
static void C_fcall f_2645(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2659)
static void C_ccall f_2659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2605)
static void C_fcall f_2605(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2554)
static void C_fcall f_2554(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_fcall f_2313(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2325)
static void C_fcall f_2325(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2376)
static void C_ccall f_2376(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2370)
static void C_ccall f_2370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_fcall f_2232(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2244)
static void C_fcall f_2244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2202)
static C_word C_fcall f_2202(C_word t0,C_word t1);
C_noret_decl(f_2166)
static void C_ccall f_2166(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2172)
static void C_fcall f_2172(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2090)
static void C_ccall f_2090(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2090)
static void C_ccall f_2090r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2096)
static void C_fcall f_2096(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2125)
static void C_ccall f_2125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2127)
static void C_fcall f_2127(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2150)
static void C_ccall f_2150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2012)
static void C_fcall f_2012(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1940)
static void C_fcall f_1940(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1968)
static void C_ccall f_1968(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1876)
static void C_fcall f_1876(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1820)
static void C_fcall f_1820(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1793)
static C_word C_fcall f_1793(C_word t0);
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1749)
static void C_ccall f_1749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1706)
static void C_fcall f_1706(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1721)
static void C_ccall f_1721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1677)
static C_word C_fcall f_1677(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1620)
static void C_ccall f_1620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1630)
static void C_fcall f_1630(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1600)
static C_word C_fcall f_1600(C_word t0,C_word t1);
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1584)
static void C_ccall f_1584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1544)
static void C_ccall f_1544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1550)
static C_word C_fcall f_1550(C_word t0,C_word t1);
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1516)
static void C_fcall f_1516(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1468)
static void C_ccall f_1468(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1458)
static void C_ccall f_1458(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1438)
static void C_ccall f_1438(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1369)
static void C_ccall f_1369(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1375)
static C_word C_fcall f_1375(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1289)
static void C_fcall f_1289(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1316)
static void C_fcall f_1316(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1224)
static void C_ccall f_1224(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1230)
static C_word C_fcall f_1230(C_word t0,C_word t1);
C_noret_decl(f_1167)
static void C_ccall f_1167(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1173)
static C_word C_fcall f_1173(C_word t0,C_word t1);
C_noret_decl(f_1153)
static void C_ccall f_1153(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1153)
static void C_ccall f_1153r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1164)
static void C_ccall f_1164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1076)
static void C_ccall f_1076r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1080)
static void C_ccall f_1080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1086)
static void C_fcall f_1086(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1094)
static void C_fcall f_1094(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1046)
static void C_ccall f_1046(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1052)
static void C_fcall f_1052(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1016)
static void C_ccall f_1016(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1016)
static void C_ccall f_1016r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1022)
static void C_fcall f_1022(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1036)
static void C_ccall f_1036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_992)
static void C_fcall f_992(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1014)
static void C_ccall f_1014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_934)
static void C_ccall f_934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_939)
static void C_fcall f_939(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_924)
static void C_ccall f_924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;

C_noret_decl(trf_5010)
static void C_fcall trf_5010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5010(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5010(t0,t1,t2,t3);}

C_noret_decl(trf_4952)
static void C_fcall trf_4952(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4952(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4952(t0,t1,t2,t3);}

C_noret_decl(trf_4920)
static void C_fcall trf_4920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4920(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4920(t0,t1,t2,t3);}

C_noret_decl(trf_4862)
static void C_fcall trf_4862(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4862(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4862(t0,t1,t2,t3);}

C_noret_decl(trf_4825)
static void C_fcall trf_4825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4825(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4825(t0,t1,t2,t3);}

C_noret_decl(trf_4780)
static void C_fcall trf_4780(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4780(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4780(t0,t1,t2,t3);}

C_noret_decl(trf_4726)
static void C_fcall trf_4726(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4726(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4726(t0,t1,t2,t3);}

C_noret_decl(trf_4659)
static void C_fcall trf_4659(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4659(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4659(t0,t1,t2,t3);}

C_noret_decl(trf_4609)
static void C_fcall trf_4609(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4609(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4609(t0,t1,t2,t3);}

C_noret_decl(trf_4489)
static void C_fcall trf_4489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4489(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4489(t0,t1);}

C_noret_decl(trf_4504)
static void C_fcall trf_4504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4504(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4504(t0,t1,t2,t3);}

C_noret_decl(trf_4432)
static void C_fcall trf_4432(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4432(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4432(t0,t1,t2);}

C_noret_decl(trf_4378)
static void C_fcall trf_4378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4378(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4378(t0,t1);}

C_noret_decl(trf_4387)
static void C_fcall trf_4387(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4387(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4387(t0,t1,t2,t3);}

C_noret_decl(trf_4342)
static void C_fcall trf_4342(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4342(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4342(t0,t1,t2);}

C_noret_decl(trf_4307)
static void C_fcall trf_4307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4307(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4307(t0,t1,t2);}

C_noret_decl(trf_4271)
static void C_fcall trf_4271(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4271(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4271(t0,t1,t2);}

C_noret_decl(trf_4103)
static void C_fcall trf_4103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4103(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4103(t0,t1,t2);}

C_noret_decl(trf_4057)
static void C_fcall trf_4057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4057(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4057(t0,t1,t2);}

C_noret_decl(trf_3898)
static void C_fcall trf_3898(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3898(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3898(t0,t1,t2,t3);}

C_noret_decl(trf_3848)
static void C_fcall trf_3848(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3848(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3848(t0,t1,t2,t3);}

C_noret_decl(trf_3790)
static void C_fcall trf_3790(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3790(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3790(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3796)
static void C_fcall trf_3796(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3796(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3796(t0,t1,t2,t3);}

C_noret_decl(trf_3745)
static void C_fcall trf_3745(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3745(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3745(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3751)
static void C_fcall trf_3751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3751(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3751(t0,t1,t2,t3);}

C_noret_decl(trf_3671)
static void C_fcall trf_3671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3671(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3671(t0,t1,t2);}

C_noret_decl(trf_3550)
static void C_fcall trf_3550(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3550(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3550(t0,t1,t2);}

C_noret_decl(trf_3605)
static void C_fcall trf_3605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3605(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3605(t0,t1,t2,t3);}

C_noret_decl(trf_3611)
static void C_fcall trf_3611(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3611(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3611(t0,t1,t2);}

C_noret_decl(trf_3572)
static void C_fcall trf_3572(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3572(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3572(t0,t1,t2,t3);}

C_noret_decl(trf_3508)
static void C_fcall trf_3508(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3508(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3508(t0,t1,t2);}

C_noret_decl(trf_3475)
static void C_fcall trf_3475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3475(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3475(t0,t1,t2);}

C_noret_decl(trf_3441)
static void C_fcall trf_3441(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3441(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3441(t0,t1,t2);}

C_noret_decl(trf_3396)
static void C_fcall trf_3396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3396(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3396(t0,t1,t2);}

C_noret_decl(trf_3356)
static void C_fcall trf_3356(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3356(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3356(t0,t1,t2);}

C_noret_decl(trf_3280)
static void C_fcall trf_3280(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3280(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3280(t0,t1,t2,t3);}

C_noret_decl(trf_2483)
static void C_fcall trf_2483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2483(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2483(t0,t1,t2);}

C_noret_decl(trf_3246)
static void C_fcall trf_3246(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3246(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3246(t0,t1,t2);}

C_noret_decl(trf_3225)
static void C_fcall trf_3225(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3225(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3225(t0,t1,t2);}

C_noret_decl(trf_3100)
static void C_fcall trf_3100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3100(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3100(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3182)
static void C_fcall trf_3182(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3182(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3182(t0,t1,t2,t3);}

C_noret_decl(trf_3134)
static void C_fcall trf_3134(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3134(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3134(t0,t1,t2,t3);}

C_noret_decl(trf_3064)
static void C_fcall trf_3064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3064(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3064(t0,t1,t2,t3);}

C_noret_decl(trf_3005)
static void C_fcall trf_3005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3005(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3005(t0,t1,t2,t3);}

C_noret_decl(trf_2975)
static void C_fcall trf_2975(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2975(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2975(t0,t1,t2,t3);}

C_noret_decl(trf_2939)
static void C_fcall trf_2939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2939(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2939(t0,t1,t2);}

C_noret_decl(trf_2909)
static void C_fcall trf_2909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2909(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2909(t0,t1,t2);}

C_noret_decl(trf_2870)
static void C_fcall trf_2870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2870(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2870(t0,t1,t2);}

C_noret_decl(trf_2844)
static void C_fcall trf_2844(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2844(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2844(t0,t1,t2);}

C_noret_decl(trf_2286)
static void C_fcall trf_2286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2286(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2286(t0,t1,t2);}

C_noret_decl(trf_2804)
static void C_fcall trf_2804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2804(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2804(t0,t1,t2,t3);}

C_noret_decl(trf_2773)
static void C_fcall trf_2773(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2773(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2773(t0,t1,t2,t3);}

C_noret_decl(trf_2405)
static void C_fcall trf_2405(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2405(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2405(t0,t1,t2);}

C_noret_decl(trf_2733)
static void C_fcall trf_2733(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2733(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2733(t0,t1,t2);}

C_noret_decl(trf_2699)
static void C_fcall trf_2699(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2699(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2699(t0,t1,t2);}

C_noret_decl(trf_2645)
static void C_fcall trf_2645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2645(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2645(t0,t1,t2,t3);}

C_noret_decl(trf_2605)
static void C_fcall trf_2605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2605(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2605(t0,t1,t2,t3);}

C_noret_decl(trf_2554)
static void C_fcall trf_2554(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2554(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2554(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2313)
static void C_fcall trf_2313(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2313(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2313(t0,t1);}

C_noret_decl(trf_2325)
static void C_fcall trf_2325(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2325(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2325(t0,t1,t2);}

C_noret_decl(trf_2232)
static void C_fcall trf_2232(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2232(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2232(t0,t1);}

C_noret_decl(trf_2244)
static void C_fcall trf_2244(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2244(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2244(t0,t1,t2);}

C_noret_decl(trf_2172)
static void C_fcall trf_2172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2172(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2172(t0,t1,t2,t3);}

C_noret_decl(trf_2096)
static void C_fcall trf_2096(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2096(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2096(t0,t1,t2,t3);}

C_noret_decl(trf_2127)
static void C_fcall trf_2127(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2127(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2127(t0,t1,t2,t3);}

C_noret_decl(trf_2012)
static void C_fcall trf_2012(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2012(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2012(t0,t1,t2);}

C_noret_decl(trf_1940)
static void C_fcall trf_1940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1940(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1940(t0,t1,t2);}

C_noret_decl(trf_1876)
static void C_fcall trf_1876(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1876(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1876(t0,t1,t2);}

C_noret_decl(trf_1820)
static void C_fcall trf_1820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1820(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1820(t0,t1,t2);}

C_noret_decl(trf_1706)
static void C_fcall trf_1706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1706(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1706(t0,t1,t2,t3);}

C_noret_decl(trf_1630)
static void C_fcall trf_1630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1630(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1630(t0,t1,t2,t3);}

C_noret_decl(trf_1516)
static void C_fcall trf_1516(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1516(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1516(t0,t1,t2,t3);}

C_noret_decl(trf_1289)
static void C_fcall trf_1289(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1289(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1289(t0,t1,t2,t3);}

C_noret_decl(trf_1316)
static void C_fcall trf_1316(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1316(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1316(t0,t1,t2,t3);}

C_noret_decl(trf_1086)
static void C_fcall trf_1086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1086(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1086(t0,t1);}

C_noret_decl(trf_1094)
static void C_fcall trf_1094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1094(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1094(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1052)
static void C_fcall trf_1052(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1052(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1052(t0,t1,t2);}

C_noret_decl(trf_1022)
static void C_fcall trf_1022(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1022(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1022(t0,t1,t2,t3);}

C_noret_decl(trf_992)
static void C_fcall trf_992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_992(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_992(t0,t1,t2,t3);}

C_noret_decl(trf_939)
static void C_fcall trf_939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_939(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_939(t0,t1,t2,t3);}

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

C_noret_decl(tr6rv)
static void C_fcall tr6rv(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6rv(C_proc6 k){
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
a=C_alloc(n+1);
t6=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6);}

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
C_srfi_1_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_1_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_1_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1190)){
C_save(t1);
C_rereclaim2(1190*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,126);
lf[0]=C_h_intern(&lf[0],5,"xcons");
lf[1]=C_h_intern(&lf[1],9,"make-list");
lf[2]=C_h_intern(&lf[2],9,"\003syserror");
lf[3]=C_static_string(C_heaptop,31,"Too many arguments to MAKE-LIST");
lf[4]=C_h_intern(&lf[4],13,"list-tabulate");
lf[5]=C_h_intern(&lf[5],5,"cons*");
lf[6]=C_h_intern(&lf[6],9,"list-copy");
lf[7]=C_h_intern(&lf[7],4,"iota");
lf[8]=C_static_string(C_heaptop,19,"Negative step count");
lf[9]=C_h_intern(&lf[9],13,"circular-list");
lf[10]=C_h_intern(&lf[10],9,"last-pair");
lf[11]=C_h_intern(&lf[11],12,"proper-list\077");
lf[12]=C_h_intern(&lf[12],5,"list\077");
lf[13]=C_h_intern(&lf[13],12,"dotted-list\077");
lf[14]=C_h_intern(&lf[14],14,"circular-list\077");
lf[15]=C_h_intern(&lf[15],9,"not-pair\077");
lf[16]=C_h_intern(&lf[16],10,"null-list\077");
lf[17]=C_h_intern(&lf[17],5,"list=");
lf[18]=C_h_intern(&lf[18],7,"length+");
lf[19]=C_h_intern(&lf[19],3,"zip");
lf[20]=C_h_intern(&lf[20],3,"map");
lf[21]=C_h_intern(&lf[21],4,"list");
lf[22]=C_h_intern(&lf[22],5,"first");
lf[23]=C_h_intern(&lf[23],3,"car");
lf[24]=C_h_intern(&lf[24],6,"second");
lf[25]=C_h_intern(&lf[25],4,"cadr");
lf[26]=C_h_intern(&lf[26],5,"third");
lf[27]=C_h_intern(&lf[27],5,"caddr");
lf[28]=C_h_intern(&lf[28],6,"fourth");
lf[29]=C_h_intern(&lf[29],6,"cadddr");
lf[30]=C_h_intern(&lf[30],5,"fifth");
lf[31]=C_h_intern(&lf[31],5,"sixth");
lf[32]=C_h_intern(&lf[32],7,"seventh");
lf[33]=C_h_intern(&lf[33],6,"eighth");
lf[34]=C_h_intern(&lf[34],5,"ninth");
lf[35]=C_h_intern(&lf[35],5,"tenth");
lf[36]=C_h_intern(&lf[36],7,"car+cdr");
lf[37]=C_h_intern(&lf[37],4,"take");
lf[38]=C_h_intern(&lf[38],4,"drop");
lf[39]=C_h_intern(&lf[39],5,"take!");
lf[40]=C_h_intern(&lf[40],10,"take-right");
lf[41]=C_h_intern(&lf[41],10,"drop-right");
lf[42]=C_h_intern(&lf[42],11,"drop-right!");
lf[43]=C_h_intern(&lf[43],8,"split-at");
lf[44]=C_h_intern(&lf[44],9,"split-at!");
lf[45]=C_h_intern(&lf[45],4,"last");
lf[46]=C_h_intern(&lf[46],6,"unzip1");
lf[47]=C_h_intern(&lf[47],7,"\003sysmap");
lf[48]=C_h_intern(&lf[48],6,"unzip2");
lf[49]=C_h_intern(&lf[49],6,"unzip3");
lf[50]=C_h_intern(&lf[50],6,"unzip4");
lf[51]=C_h_intern(&lf[51],6,"unzip5");
lf[52]=C_h_intern(&lf[52],7,"append!");
lf[53]=C_h_intern(&lf[53],14,"append-reverse");
lf[54]=C_h_intern(&lf[54],15,"append-reverse!");
lf[55]=C_h_intern(&lf[55],11,"concatenate");
lf[56]=C_h_intern(&lf[56],12,"reduce-right");
lf[57]=C_h_intern(&lf[57],6,"append");
lf[58]=C_h_intern(&lf[58],12,"concatenate!");
lf[61]=C_h_intern(&lf[61],5,"count");
lf[62]=C_h_intern(&lf[62],12,"unfold-right");
lf[63]=C_h_intern(&lf[63],6,"unfold");
lf[64]=C_h_intern(&lf[64],5,"error");
lf[65]=C_static_string(C_heaptop,18,"Too many arguments");
lf[66]=C_h_intern(&lf[66],4,"fold");
lf[67]=C_h_intern(&lf[67],10,"fold-right");
lf[68]=C_h_intern(&lf[68],15,"pair-fold-right");
lf[69]=C_h_intern(&lf[69],9,"pair-fold");
lf[70]=C_h_intern(&lf[70],6,"reduce");
lf[71]=C_h_intern(&lf[71],10,"append-map");
lf[73]=C_h_intern(&lf[73],11,"append-map!");
lf[74]=C_h_intern(&lf[74],13,"pair-for-each");
lf[75]=C_h_intern(&lf[75],4,"map!");
lf[76]=C_h_intern(&lf[76],10,"filter-map");
lf[77]=C_h_intern(&lf[77],12,"map-in-order");
lf[78]=C_h_intern(&lf[78],6,"filter");
lf[79]=C_h_intern(&lf[79],7,"filter!");
lf[80]=C_h_intern(&lf[80],9,"partition");
lf[81]=C_h_intern(&lf[81],10,"partition!");
lf[82]=C_h_intern(&lf[82],6,"remove");
lf[83]=C_h_intern(&lf[83],7,"remove!");
lf[84]=C_h_intern(&lf[84],6,"delete");
lf[85]=C_h_intern(&lf[85],6,"equal\077");
lf[86]=C_h_intern(&lf[86],7,"delete!");
lf[87]=C_h_intern(&lf[87],6,"member");
lf[88]=C_h_intern(&lf[88],9,"find-tail");
lf[89]=C_h_intern(&lf[89],17,"delete-duplicates");
lf[90]=C_h_intern(&lf[90],18,"delete-duplicates!");
lf[91]=C_h_intern(&lf[91],5,"assoc");
lf[92]=C_h_intern(&lf[92],4,"find");
lf[93]=C_h_intern(&lf[93],10,"alist-cons");
lf[94]=C_h_intern(&lf[94],10,"alist-copy");
lf[95]=C_h_intern(&lf[95],12,"alist-delete");
lf[96]=C_h_intern(&lf[96],13,"alist-delete!");
lf[97]=C_h_intern(&lf[97],10,"take-while");
lf[98]=C_h_intern(&lf[98],10,"drop-while");
lf[99]=C_h_intern(&lf[99],11,"take-while!");
lf[100]=C_h_intern(&lf[100],4,"span");
lf[101]=C_h_intern(&lf[101],5,"span!");
lf[102]=C_h_intern(&lf[102],5,"break");
lf[103]=C_h_intern(&lf[103],6,"break!");
lf[104]=C_h_intern(&lf[104],3,"any");
lf[105]=C_h_intern(&lf[105],5,"every");
lf[106]=C_h_intern(&lf[106],10,"list-index");
lf[107]=C_h_intern(&lf[107],8,"reverse!");
lf[109]=C_h_intern(&lf[109],6,"lset<=");
lf[110]=C_h_intern(&lf[110],5,"lset=");
lf[111]=C_h_intern(&lf[111],11,"lset-adjoin");
lf[112]=C_h_intern(&lf[112],10,"lset-union");
lf[113]=C_h_intern(&lf[113],11,"lset-union!");
lf[114]=C_h_intern(&lf[114],17,"lset-intersection");
lf[115]=C_h_intern(&lf[115],3,"eq\077");
lf[116]=C_h_intern(&lf[116],18,"lset-intersection!");
lf[117]=C_h_intern(&lf[117],15,"lset-difference");
lf[118]=C_h_intern(&lf[118],5,"pair\077");
lf[119]=C_h_intern(&lf[119],16,"lset-difference!");
lf[120]=C_h_intern(&lf[120],8,"lset-xor");
lf[121]=C_h_intern(&lf[121],22,"lset-diff+intersection");
lf[122]=C_h_intern(&lf[122],9,"lset-xor!");
lf[123]=C_h_intern(&lf[123],23,"lset-diff+intersection!");
lf[124]=C_h_intern(&lf[124],17,"register-feature!");
lf[125]=C_h_intern(&lf[125],6,"srfi-1");
C_register_lf2(lf,126,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_922,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 60   register-feature! */
t3=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[125]);}

/* k920 */
static void C_ccall f_922(C_word c,C_word t0,C_word t1){
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
C_word ab[204],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_922,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_924,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[1]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_930,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[4]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_982,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[5]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1016,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[6]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1046,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[7]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1076,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[9]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1153,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[11]+1,*((C_word*)lf[12]+1));
t10=C_mutate((C_word*)lf[13]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1167,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[14]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1224,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[15]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1263,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[16]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1266,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[17]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1269,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[18]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1369,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[19]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1418,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[22]+1,*((C_word*)lf[23]+1));
t18=C_mutate((C_word*)lf[24]+1,*((C_word*)lf[25]+1));
t19=C_mutate((C_word*)lf[26]+1,*((C_word*)lf[27]+1));
t20=C_mutate((C_word*)lf[28]+1,*((C_word*)lf[29]+1));
t21=C_mutate((C_word*)lf[30]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1428,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[31]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1438,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[32]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1448,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[33]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1458,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[34]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1468,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[35]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1482,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[36]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1496,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[37]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1510,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[38]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1544,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[39]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1570,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[40]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1590,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[41]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1620,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[42]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1658,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate((C_word*)lf[43]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1700,tmp=(C_word)a,a+=2,tmp));
t35=C_mutate((C_word*)lf[44]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1749,tmp=(C_word)a,a+=2,tmp));
t36=C_mutate((C_word*)lf[45]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1777,tmp=(C_word)a,a+=2,tmp));
t37=C_mutate((C_word*)lf[10]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1787,tmp=(C_word)a,a+=2,tmp));
t38=C_mutate((C_word*)lf[46]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1808,tmp=(C_word)a,a+=2,tmp));
t39=C_mutate((C_word*)lf[48]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1814,tmp=(C_word)a,a+=2,tmp));
t40=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1870,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate((C_word*)lf[50]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1934,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate((C_word*)lf[51]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2006,tmp=(C_word)a,a+=2,tmp));
t43=C_mutate((C_word*)lf[52]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2090,tmp=(C_word)a,a+=2,tmp));
t44=C_mutate((C_word*)lf[53]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2166,tmp=(C_word)a,a+=2,tmp));
t45=C_mutate((C_word*)lf[54]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2196,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate((C_word*)lf[55]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2220,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate((C_word*)lf[58]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2226,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate(&lf[59],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2232,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate(&lf[60],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2313,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2542,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate((C_word*)lf[62]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2635,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate((C_word*)lf[63]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2675,tmp=(C_word)a,a+=2,tmp));
t53=C_mutate((C_word*)lf[66]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2757,tmp=(C_word)a,a+=2,tmp));
t54=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2828,tmp=(C_word)a,a+=2,tmp));
t55=C_mutate((C_word*)lf[68]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2893,tmp=(C_word)a,a+=2,tmp));
t56=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2959,tmp=(C_word)a,a+=2,tmp));
t57=C_mutate((C_word*)lf[70]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3024,tmp=(C_word)a,a+=2,tmp));
t58=C_mutate((C_word*)lf[56]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3044,tmp=(C_word)a,a+=2,tmp));
t59=C_mutate((C_word*)lf[71]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3088,tmp=(C_word)a,a+=2,tmp));
t60=C_mutate((C_word*)lf[73]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3094,tmp=(C_word)a,a+=2,tmp));
t61=C_mutate(&lf[72],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3100,tmp=(C_word)a,a+=2,tmp));
t62=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3209,tmp=(C_word)a,a+=2,tmp));
t63=C_mutate((C_word*)lf[75]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3268,tmp=(C_word)a,a+=2,tmp));
t64=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3340,tmp=(C_word)a,a+=2,tmp));
t65=C_mutate((C_word*)lf[77]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3425,tmp=(C_word)a,a+=2,tmp));
t66=C_mutate((C_word*)lf[20]+1,*((C_word*)lf[77]+1));
t67=C_mutate((C_word*)lf[78]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3502,tmp=(C_word)a,a+=2,tmp));
t68=C_mutate((C_word*)lf[79]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3544,tmp=(C_word)a,a+=2,tmp));
t69=C_mutate((C_word*)lf[80]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3665,tmp=(C_word)a,a+=2,tmp));
t70=C_mutate((C_word*)lf[81]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3733,tmp=(C_word)a,a+=2,tmp));
t71=C_mutate((C_word*)lf[82]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3945,tmp=(C_word)a,a+=2,tmp));
t72=C_mutate((C_word*)lf[83]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3961,tmp=(C_word)a,a+=2,tmp));
t73=C_mutate((C_word*)lf[84]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3977,tmp=(C_word)a,a+=2,tmp));
t74=C_mutate((C_word*)lf[86]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4002,tmp=(C_word)a,a+=2,tmp));
t75=C_mutate((C_word*)lf[87]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4027,tmp=(C_word)a,a+=2,tmp));
t76=C_mutate((C_word*)lf[89]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4048,tmp=(C_word)a,a+=2,tmp));
t77=C_mutate((C_word*)lf[90]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4094,tmp=(C_word)a,a+=2,tmp));
t78=C_mutate((C_word*)lf[91]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4140,tmp=(C_word)a,a+=2,tmp));
t79=C_mutate((C_word*)lf[93]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4165,tmp=(C_word)a,a+=2,tmp));
t80=C_mutate((C_word*)lf[94]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4175,tmp=(C_word)a,a+=2,tmp));
t81=C_mutate((C_word*)lf[95]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4195,tmp=(C_word)a,a+=2,tmp));
t82=C_mutate((C_word*)lf[96]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4224,tmp=(C_word)a,a+=2,tmp));
t83=C_mutate((C_word*)lf[92]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4253,tmp=(C_word)a,a+=2,tmp));
t84=C_mutate((C_word*)lf[88]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4265,tmp=(C_word)a,a+=2,tmp));
t85=C_mutate((C_word*)lf[97]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4301,tmp=(C_word)a,a+=2,tmp));
t86=C_mutate((C_word*)lf[98]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4336,tmp=(C_word)a,a+=2,tmp));
t87=C_mutate((C_word*)lf[99]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4368,tmp=(C_word)a,a+=2,tmp));
t88=C_mutate((C_word*)lf[100]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4426,tmp=(C_word)a,a+=2,tmp));
t89=C_mutate((C_word*)lf[101]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4479,tmp=(C_word)a,a+=2,tmp));
t90=C_mutate((C_word*)lf[102]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4543,tmp=(C_word)a,a+=2,tmp));
t91=C_mutate((C_word*)lf[103]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4559,tmp=(C_word)a,a+=2,tmp));
t92=C_mutate((C_word*)lf[104]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4575,tmp=(C_word)a,a+=2,tmp));
t93=C_mutate((C_word*)lf[105]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4692,tmp=(C_word)a,a+=2,tmp));
t94=C_mutate((C_word*)lf[106]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4809,tmp=(C_word)a,a+=2,tmp));
t95=C_mutate((C_word*)lf[107]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4896,tmp=(C_word)a,a+=2,tmp));
t96=C_mutate(&lf[108],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4920,tmp=(C_word)a,a+=2,tmp));
t97=C_mutate((C_word*)lf[109]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4932,tmp=(C_word)a,a+=2,tmp));
t98=C_mutate((C_word*)lf[110]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4990,tmp=(C_word)a,a+=2,tmp));
t99=C_mutate((C_word*)lf[111]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5054,tmp=(C_word)a,a+=2,tmp));
t100=C_mutate((C_word*)lf[112]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5072,tmp=(C_word)a,a+=2,tmp));
t101=C_mutate((C_word*)lf[113]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5120,tmp=(C_word)a,a+=2,tmp));
t102=C_mutate((C_word*)lf[114]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5171,tmp=(C_word)a,a+=2,tmp));
t103=C_mutate((C_word*)lf[116]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5204,tmp=(C_word)a,a+=2,tmp));
t104=C_mutate((C_word*)lf[117]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5237,tmp=(C_word)a,a+=2,tmp));
t105=C_mutate((C_word*)lf[119]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5274,tmp=(C_word)a,a+=2,tmp));
t106=C_mutate((C_word*)lf[120]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5311,tmp=(C_word)a,a+=2,tmp));
t107=C_mutate((C_word*)lf[122]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5365,tmp=(C_word)a,a+=2,tmp));
t108=C_mutate((C_word*)lf[121]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5423,tmp=(C_word)a,a+=2,tmp));
t109=C_mutate((C_word*)lf[123]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5463,tmp=(C_word)a,a+=2,tmp));
t110=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t110+1)))(2,t110,C_SCHEME_UNDEFINED);}

/* lset-diff+intersection! in k920 */
static void C_ccall f_5463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_5463r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5463r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5463r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5470,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1663 every */
t6=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[16]+1),t4);}

/* k5468 in lset-diff+intersection! in k920 */
static void C_ccall f_5470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5470,2,t0,t1);}
if(C_truep(t1)){
/* srfi-1.scm: 1663 values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_u_i_memq(((C_word*)t0)[4],((C_word*)t0)[3]))){
/* srfi-1.scm: 1664 values */
C_values(4,0,((C_word*)t0)[5],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5487,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1665 partition! */
t3=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[5],t2,((C_word*)t0)[4]);}}}

/* a5486 in k5468 in lset-diff+intersection! in k920 */
static void C_ccall f_5487(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5487,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5495,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5497,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1666 any */
t5=*((C_word*)lf[104]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a5496 in a5486 in k5468 in lset-diff+intersection! in k920 */
static void C_ccall f_5497(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5497,3,t0,t1,t2);}
/* srfi-1.scm: 1666 member */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5493 in a5486 in k5468 in lset-diff+intersection! in k920 */
static void C_ccall f_5495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* lset-diff+intersection in k920 */
static void C_ccall f_5423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_5423r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5423r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5423r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5430,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1654 every */
t6=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[16]+1),t4);}

/* k5428 in lset-diff+intersection in k920 */
static void C_ccall f_5430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5430,2,t0,t1);}
if(C_truep(t1)){
/* srfi-1.scm: 1654 values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_u_i_memq(((C_word*)t0)[4],((C_word*)t0)[3]))){
/* srfi-1.scm: 1655 values */
C_values(4,0,((C_word*)t0)[5],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5447,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1656 partition */
t3=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[5],t2,((C_word*)t0)[4]);}}}

/* a5446 in k5428 in lset-diff+intersection in k920 */
static void C_ccall f_5447(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5447,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5455,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5457,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1657 any */
t5=*((C_word*)lf[104]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a5456 in a5446 in k5428 in lset-diff+intersection in k920 */
static void C_ccall f_5457(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5457,3,t0,t1,t2);}
/* srfi-1.scm: 1657 member */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5453 in a5446 in k5428 in lset-diff+intersection in k920 */
static void C_ccall f_5455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* lset-xor! in k920 */
static void C_ccall f_5365(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_5365r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5365r(t0,t1,t2,t3);}}

static void C_ccall f_5365r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5371,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1631 reduce */
t5=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,C_SCHEME_END_OF_LIST,t3);}

/* a5370 in lset-xor! in k920 */
static void C_ccall f_5371(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5371,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5377,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5383,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a5382 in a5370 in lset-xor! in k920 */
static void C_ccall f_5383(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5383,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 1642 lset-difference! */
t4=*((C_word*)lf[119]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
/* srfi-1.scm: 1643 append! */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5407,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1644 pair-fold */
t5=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,t2,((C_word*)t0)[3]);}}}

/* a5406 in a5382 in a5370 in lset-xor! in k920 */
static void C_ccall f_5407(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5407,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5414,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 1645 member */
t6=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5412 in a5406 in a5382 in a5370 in lset-xor! in k920 */
static void C_ccall f_5414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* a5376 in a5370 in lset-xor! in k920 */
static void C_ccall f_5377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5377,2,t0,t1);}
/* srfi-1.scm: 1641 lset-diff+intersection! */
t2=*((C_word*)lf[123]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lset-xor in k920 */
static void C_ccall f_5311(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_5311r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5311r(t0,t1,t2,t3);}}

static void C_ccall f_5311r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5317,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1609 reduce */
t5=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,C_SCHEME_END_OF_LIST,t3);}

/* a5316 in lset-xor in k920 */
static void C_ccall f_5317(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5317,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5323,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5329,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a5328 in a5316 in lset-xor in k920 */
static void C_ccall f_5329(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5329,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 1620 lset-difference */
t4=*((C_word*)lf[117]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
/* srfi-1.scm: 1621 append */
t4=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5353,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1622 fold */
t5=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,t2,((C_word*)t0)[3]);}}}

/* a5352 in a5328 in a5316 in lset-xor in k920 */
static void C_ccall f_5353(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5353,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5360,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1623 member */
t5=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5358 in a5352 in a5328 in a5316 in lset-xor in k920 */
static void C_ccall f_5360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5360,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3])));}

/* a5322 in a5316 in lset-xor in k920 */
static void C_ccall f_5323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5323,2,t0,t1);}
/* srfi-1.scm: 1619 lset-diff+intersection */
t2=*((C_word*)lf[121]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lset-difference! in k920 */
static void C_ccall f_5274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_5274r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5274r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5274r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5278,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1598 filter */
t6=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[118]+1),t4);}

/* k5276 in lset-difference! in k920 */
static void C_ccall f_5278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5278,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
if(C_truep((C_word)C_u_i_memq(((C_word*)t0)[3],t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5295,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1601 filter! */
t3=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[3]);}}}

/* a5294 in k5276 in lset-difference! in k920 */
static void C_ccall f_5295(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5295,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5301,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1602 every */
t4=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}

/* a5300 in a5294 in k5276 in lset-difference! in k920 */
static void C_ccall f_5301(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5301,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5309,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1602 member */
t4=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5307 in a5300 in a5294 in k5276 in lset-difference! in k920 */
static void C_ccall f_5309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* lset-difference in k920 */
static void C_ccall f_5237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_5237r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5237r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5237r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5241,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1588 filter */
t6=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[118]+1),t4);}

/* k5239 in lset-difference in k920 */
static void C_ccall f_5241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5241,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
if(C_truep((C_word)C_u_i_memq(((C_word*)t0)[3],t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5258,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1591 filter */
t3=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[3]);}}}

/* a5257 in k5239 in lset-difference in k920 */
static void C_ccall f_5258(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5258,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5264,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1592 every */
t4=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}

/* a5263 in a5257 in k5239 in lset-difference in k920 */
static void C_ccall f_5264(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5264,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5272,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1592 member */
t4=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5270 in a5263 in a5257 in k5239 in lset-difference in k920 */
static void C_ccall f_5272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* lset-intersection! in k920 */
static void C_ccall f_5204(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_5204r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5204r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5204r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5208,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1578 delete */
t6=*((C_word*)lf[84]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,t3,t4,*((C_word*)lf[115]+1));}

/* k5206 in lset-intersection! in k920 */
static void C_ccall f_5208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1579 any */
t3=*((C_word*)lf[104]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[16]+1),t1);}

/* k5212 in k5206 in lset-intersection! in k920 */
static void C_ccall f_5214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5214,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5225,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1581 filter! */
t3=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[5],t2,((C_word*)t0)[3]);}}}

/* a5224 in k5212 in k5206 in lset-intersection! in k920 */
static void C_ccall f_5225(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5225,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5231,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1582 every */
t4=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}

/* a5230 in a5224 in k5212 in k5206 in lset-intersection! in k920 */
static void C_ccall f_5231(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5231,3,t0,t1,t2);}
/* srfi-1.scm: 1582 member */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* lset-intersection in k920 */
static void C_ccall f_5171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_5171r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5171r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5171r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5175,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1569 delete */
t6=*((C_word*)lf[84]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,t3,t4,*((C_word*)lf[115]+1));}

/* k5173 in lset-intersection in k920 */
static void C_ccall f_5175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5175,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1570 any */
t3=*((C_word*)lf[104]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[16]+1),t1);}

/* k5179 in k5173 in lset-intersection in k920 */
static void C_ccall f_5181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5181,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5192,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1572 filter */
t3=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[5],t2,((C_word*)t0)[3]);}}}

/* a5191 in k5179 in k5173 in lset-intersection in k920 */
static void C_ccall f_5192(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5192,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5198,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1573 every */
t4=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}

/* a5197 in a5191 in k5179 in k5173 in lset-intersection in k920 */
static void C_ccall f_5198(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5198,3,t0,t1,t2);}
/* srfi-1.scm: 1573 member */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* lset-union! in k920 */
static void C_ccall f_5120(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_5120r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5120r(t0,t1,t2,t3);}}

static void C_ccall f_5120r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5126,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1553 reduce */
t5=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,C_SCHEME_END_OF_LIST,t3);}

/* a5125 in lset-union! in k920 */
static void C_ccall f_5126(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5126,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(C_word)C_eqp(t2,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1558 pair-fold */
t6=*((C_word*)lf[69]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t5,t3,t2);}}}}

/* a5149 in a5125 in lset-union! in k920 */
static void C_ccall f_5150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5150,4,t0,t1,t2,t3);}
t4=(C_word)C_u_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5160,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5165,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1560 any */
t7=*((C_word*)lf[104]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t3);}

/* a5164 in a5149 in a5125 in lset-union! in k920 */
static void C_ccall f_5165(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5165,3,t0,t1,t2);}
/* srfi-1.scm: 1560 = */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* k5158 in a5149 in a5125 in lset-union! in k920 */
static void C_ccall f_5160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* lset-union in k920 */
static void C_ccall f_5072(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_5072r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5072r(t0,t1,t2,t3);}}

static void C_ccall f_5072r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5078,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1540 reduce */
t5=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,C_SCHEME_END_OF_LIST,t3);}

/* a5077 in lset-union in k920 */
static void C_ccall f_5078(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5078,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(C_word)C_eqp(t2,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5102,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1545 fold */
t6=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t5,t3,t2);}}}}

/* a5101 in a5077 in lset-union in k920 */
static void C_ccall f_5102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5102,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5109,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5114,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1545 any */
t6=*((C_word*)lf[104]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t3);}

/* a5113 in a5101 in a5077 in lset-union in k920 */
static void C_ccall f_5114(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5114,3,t0,t1,t2);}
/* srfi-1.scm: 1545 = */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* k5107 in a5101 in a5077 in lset-union in k920 */
static void C_ccall f_5109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5109,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3])));}

/* lset-adjoin in k920 */
static void C_ccall f_5054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr4r,(void*)f_5054r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5054r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5054r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5060,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1534 fold */
t6=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t5,t3,t4);}

/* a5059 in lset-adjoin in k920 */
static void C_ccall f_5060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5060,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5067,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1534 member */
t5=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,t3,((C_word*)t0)[2]);}

/* k5065 in a5059 in lset-adjoin in k920 */
static void C_ccall f_5067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5067,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3])));}

/* lset= in k920 */
static void C_ccall f_4990(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_4990r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4990r(t0,t1,t2,t3);}}

static void C_ccall f_4990r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(6);
t4=(C_word)C_i_pairp(t3);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_u_i_car(t3);
t7=(C_word)C_slot(t3,C_fix(1));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5010,a[2]=t2,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_5010(t11,t1,t6,t7);}}

/* lp in lset= in k920 */
static void C_fcall f_5010(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_5010,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t3);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_u_i_car(t3);
t7=(C_word)C_slot(t3,C_fix(1));
t8=(C_word)C_eqp(t2,t6);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5032,a[2]=t7,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_5032(2,t10,t8);}
else{
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5041,a[2]=t2,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1528 ##srfi1#lset2<= */
f_4920(t10,((C_word*)t0)[2],t2,t6);}}}

/* k5039 in lp in lset= in k920 */
static void C_ccall f_5041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-1.scm: 1528 ##srfi1#lset2<= */
f_4920(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
f_5032(2,t2,C_SCHEME_FALSE);}}

/* k5030 in lp in lset= in k920 */
static void C_ccall f_5032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-1.scm: 1529 lp */
t2=((C_word*)((C_word*)t0)[5])[1];
f_5010(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* lset<= in k920 */
static void C_ccall f_4932(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_4932r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4932r(t0,t1,t2,t3);}}

static void C_ccall f_4932r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(6);
t4=(C_word)C_i_pairp(t3);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_u_i_car(t3);
t7=(C_word)C_slot(t3,C_fix(1));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4952,a[2]=t2,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_4952(t11,t1,t6,t7);}}

/* lp in lset<= in k920 */
static void C_fcall f_4952(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4952,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t3);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_u_i_car(t3);
t7=(C_word)C_slot(t3,C_fix(1));
t8=(C_word)C_eqp(t6,t2);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4974,a[2]=t7,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_4974(2,t10,t8);}
else{
/* srfi-1.scm: 1517 ##srfi1#lset2<= */
f_4920(t9,((C_word*)t0)[2],t2,t6);}}}

/* k4972 in lp in lset<= in k920 */
static void C_ccall f_4974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-1.scm: 1518 lp */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4952(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##srfi1#lset2<= in k920 */
static void C_fcall f_4920(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4920,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4926,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1508 every */
t6=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,t3);}

/* a4925 in ##srfi1#lset2<= in k920 */
static void C_ccall f_4926(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4926,3,t0,t1,t2);}
/* srfi-1.scm: 1508 member */
t3=*((C_word*)lf[87]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* reverse! in k920 */
static void C_ccall f_4896(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4896,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4902,tmp=(C_word)a,a+=2,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_4902(t2,C_SCHEME_END_OF_LIST));}

/* lp in reverse! in k920 */
static C_word C_fcall f_4902(C_word t1,C_word t2){
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
t3=(C_word)C_slot(t1,C_fix(1));
t4=(C_word)C_i_setslot(t1,C_fix(1),t2);
t6=t3;
t7=t1;
t1=t6;
t2=t7;
goto loop;}}

/* list-index in k920 */
static void C_ccall f_4809(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_4809r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4809r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4809r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4825,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4825(t9,t1,t5,C_fix(0));}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4862,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4862(t8,t1,t3,C_fix(0));}}

/* lp in list-index in k920 */
static void C_fcall f_4862(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4862,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4875,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 1477 pred */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}

/* k4873 in lp in list-index in k920 */
static void C_ccall f_4875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-1.scm: 1477 lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4862(t4,((C_word*)t0)[5],t2,t3);}}

/* lp in list-index in k920 */
static void C_fcall f_4825(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4825,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4831,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a4836 in lp in list-index in k920 */
static void C_ccall f_4837(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4837,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4850,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k4848 in a4836 in lp in list-index in k920 */
static void C_ccall f_4850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-1.scm: 1472 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4825(t3,((C_word*)t0)[5],((C_word*)t0)[2],t2);}}

/* a4830 in lp in list-index in k920 */
static void C_ccall f_4831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4831,2,t0,t1);}
/* srfi-1.scm: 1469 ##srfi1#cars+cdrs */
f_2313(t1,((C_word*)t0)[2]);}

/* every in k920 */
static void C_ccall f_4692(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr4r,(void*)f_4692r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4692r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4692r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(13);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4704,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4714,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1448 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}
else{
t5=(C_word)C_i_nullp(t3);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_u_i_car(t3);
t7=(C_word)C_slot(t3,C_fix(1));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4780,a[2]=t9,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_4780(t11,t1,t6,t7);}}}

/* lp in every in k920 */
static void C_fcall f_4780(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4780,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
/* srfi-1.scm: 1460 pred */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4796,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1461 pred */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k4794 in lp in every in k920 */
static void C_ccall f_4796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_i_car(((C_word*)t0)[4]);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-1.scm: 1461 lp */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4780(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a4713 in every in k920 */
static void C_ccall f_4714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4714,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4726,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4726(t9,t1,t2,t3);}}

/* lp in a4713 in every in k920 */
static void C_fcall f_4726(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4726,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4732,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4738,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a4737 in lp in a4713 in every in k920 */
static void C_ccall f_4738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4738,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4751,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
C_apply(4,0,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4749 in a4737 in lp in a4713 in every in k920 */
static void C_ccall f_4751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-1.scm: 1453 lp */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4726(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a4731 in lp in a4713 in every in k920 */
static void C_ccall f_4732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4732,2,t0,t1);}
/* srfi-1.scm: 1451 ##srfi1#cars+cdrs */
f_2313(t1,((C_word*)t0)[2]);}

/* a4703 in every in k920 */
static void C_ccall f_4704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4704,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
/* srfi-1.scm: 1448 ##srfi1#cars+cdrs */
f_2313(t1,t2);}

/* any in k920 */
static void C_ccall f_4575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr4r,(void*)f_4575r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4575r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4575r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4587,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4597,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1421 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_u_i_car(t3);
t6=(C_word)C_slot(t3,C_fix(1));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4659,a[2]=t8,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_4659(t10,t1,t5,t6);}}}

/* lp in any in k920 */
static void C_fcall f_4659(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4659,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
/* srfi-1.scm: 1433 pred */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4672,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1434 pred */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k4670 in lp in any in k920 */
static void C_ccall f_4672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_u_i_car(((C_word*)t0)[3]);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 1434 lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4659(t4,((C_word*)t0)[4],t2,t3);}}

/* a4596 in any in k920 */
static void C_ccall f_4597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4597,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4609,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4609(t7,t1,t2,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* lp in a4596 in any in k920 */
static void C_fcall f_4609(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4609,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4615,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4621,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a4620 in lp in a4596 in any in k920 */
static void C_ccall f_4621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4621,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4631,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
C_apply(4,0,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4629 in a4620 in lp in a4596 in any in k920 */
static void C_ccall f_4631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* srfi-1.scm: 1426 lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4609(t2,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* a4614 in lp in a4596 in any in k920 */
static void C_ccall f_4615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4615,2,t0,t1);}
/* srfi-1.scm: 1424 ##srfi1#cars+cdrs */
f_2313(t1,((C_word*)t0)[2]);}

/* a4586 in any in k920 */
static void C_ccall f_4587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4587,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
/* srfi-1.scm: 1421 ##srfi1#cars+cdrs */
f_2313(t1,t2);}

/* break! in k920 */
static void C_ccall f_4559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4559,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4565,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1414 span! */
t5=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* a4564 in break! in k920 */
static void C_ccall f_4565(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4565,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4573,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1414 pred */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4571 in a4564 in break! in k920 */
static void C_ccall f_4573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* break in k920 */
static void C_ccall f_4543(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4543,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4549,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1413 span */
t5=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* a4548 in break in k920 */
static void C_ccall f_4549(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4549,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4557,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1413 pred */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4555 in a4548 in break in k920 */
static void C_ccall f_4557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* span! in k920 */
static void C_ccall f_4479(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4479,4,t0,t1,t2,t3);}
t4=(C_word)C_i_nullp(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4489,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_4489(t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4537,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_u_i_car(t3);
/* srfi-1.scm: 1403 pred */
t8=t2;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}}

/* k4535 in span! in k920 */
static void C_ccall f_4537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4489(t2,(C_word)C_i_not(t1));}

/* k4487 in span! in k920 */
static void C_fcall f_4489(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4489,NULL,2,t0,t1);}
if(C_truep(t1)){
/* srfi-1.scm: 1403 values */
C_values(4,0,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4495,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4504,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4504(t7,t2,((C_word*)t0)[3],t3);}}

/* lp in k4487 in span! in k920 */
static void C_fcall f_4504(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4504,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4520,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1407 pred */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}

/* k4518 in lp in k4487 in span! in k920 */
static void C_ccall f_4520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-1.scm: 1407 lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4504(t3,((C_word*)t0)[3],((C_word*)t0)[5],t2);}
else{
t2=(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(1),C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}}

/* k4493 in k4487 in span! in k920 */
static void C_ccall f_4495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1410 values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* span in k920 */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4426,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4432,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4432(t7,t1,t3);}

/* recur in span in k920 */
static void C_fcall f_4432(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4432,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 1394 values */
C_values(4,0,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4451,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1396 pred */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}

/* k4449 in recur in span in k920 */
static void C_ccall f_4451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4451,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4456,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4466,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1397 ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}
else{
/* srfi-1.scm: 1399 values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,((C_word*)t0)[5]);}}

/* a4465 in k4449 in recur in span in k920 */
static void C_ccall f_4466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4466,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
/* srfi-1.scm: 1398 values */
C_values(4,0,t1,t4,t3);}

/* a4455 in k4449 in recur in span in k920 */
static void C_ccall f_4456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4456,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 1397 recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4432(t3,t1,t2);}

/* take-while! in k920 */
static void C_ccall f_4368(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4368,4,t0,t1,t2,t3);}
t4=(C_word)C_i_nullp(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4378,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_4378(t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4420,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_u_i_car(t3);
/* srfi-1.scm: 1383 pred */
t8=t2;
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}}

/* k4418 in take-while! in k920 */
static void C_ccall f_4420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4378(t2,(C_word)C_i_not(t1));}

/* k4376 in take-while! in k920 */
static void C_fcall f_4378(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4378,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4381,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4387(t7,t2,((C_word*)t0)[3],t3);}}

/* lp in k4376 in take-while! in k920 */
static void C_fcall f_4387(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4387,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4403,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1387 pred */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k4401 in lp in k4376 in take-while! in k920 */
static void C_ccall f_4403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-1.scm: 1387 lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4387(t3,((C_word*)t0)[3],((C_word*)t0)[5],t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(1),C_SCHEME_END_OF_LIST));}}

/* k4379 in k4376 in take-while! in k920 */
static void C_ccall f_4381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* drop-while in k920 */
static void C_ccall f_4336(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4336,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4342,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4342(t7,t1,t3);}

/* lp in drop-while in k920 */
static void C_fcall f_4342(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4342,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4355,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 1377 pred */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k4353 in lp in drop-while in k920 */
static void C_ccall f_4355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-1.scm: 1378 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4342(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* take-while in k920 */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4301,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4307,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4307(t7,t1,t3);}

/* recur in take-while in k920 */
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4307,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4323,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1369 pred */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}

/* k4321 in recur in take-while in k920 */
static void C_ccall f_4323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4323,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4330,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 1370 recur */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4307(t4,t2,t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* k4328 in k4321 in recur in take-while in k920 */
static void C_ccall f_4330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4330,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* find-tail in k920 */
static void C_ccall f_4265(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4265,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4271,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4271(t7,t1,t3);}

/* lp in find-tail in k920 */
static void C_fcall f_4271(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4271,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4284,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 1361 pred */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k4282 in lp in find-tail in k920 */
static void C_ccall f_4284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 1362 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4271(t3,((C_word*)t0)[4],t2);}}

/* find in k920 */
static void C_ccall f_4253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4253,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4257,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1354 find-tail */
t5=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k4255 in find in k920 */
static void C_ccall f_4257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_u_i_car(t1):C_SCHEME_FALSE));}

/* alist-delete! in k920 */
static void C_ccall f_4224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4224r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4224r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4224r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[85]+1):(C_word)C_slot(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4233,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1347 filter! */
t8=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a4232 in alist-delete! in k920 */
static void C_ccall f_4233(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4233,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4241,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 1347 = */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[2],t4);}

/* k4239 in a4232 in alist-delete! in k920 */
static void C_ccall f_4241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* alist-delete in k920 */
static void C_ccall f_4195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4195r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4195r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4195r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[85]+1):(C_word)C_slot(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4204,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1343 filter */
t8=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a4203 in alist-delete in k920 */
static void C_ccall f_4204(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4204,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4212,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 1343 = */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[2],t4);}

/* k4210 in a4203 in alist-delete in k920 */
static void C_ccall f_4212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* alist-copy in k920 */
static void C_ccall f_4175(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4175,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4181,tmp=(C_word)a,a+=2,tmp);
/* srfi-1.scm: 1338 ##sys#map */
t4=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a4180 in alist-copy in k920 */
static void C_ccall f_4181(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4181,3,t0,t1,t2);}
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,t3,t4));}

/* alist-cons in k920 */
static void C_ccall f_4165(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4165,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_cons(&a,2,t2,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,t5,t4));}

/* assoc in k920 */
static void C_ccall f_4140(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4140r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4140r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4140r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[85]+1):(C_word)C_slot(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4149,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1333 find */
t8=*((C_word*)lf[92]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a4148 in assoc in k920 */
static void C_ccall f_4149(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4149,3,t0,t1,t2);}
t3=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 1333 = */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,((C_word*)t0)[2],t3);}

/* delete-duplicates! in k920 */
static void C_ccall f_4094(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4094r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4094r(t0,t1,t2,t3);}}

static void C_ccall f_4094r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(6);
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?*((C_word*)lf[85]+1):(C_word)C_slot(t3,C_fix(0)));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4103,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4103(t9,t1,t2);}

/* recur in delete-duplicates! in k920 */
static void C_fcall f_4103(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4103,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4119,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4132,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1323 delete! */
t7=*((C_word*)lf[86]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t3,t4,((C_word*)t0)[2]);}}

/* k4130 in recur in delete-duplicates! in k920 */
static void C_ccall f_4132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1323 recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4103(t2,((C_word*)t0)[2],t1);}

/* k4117 in recur in delete-duplicates! in k920 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4119,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1)));}

/* delete-duplicates in k920 */
static void C_ccall f_4048(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4048r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4048r(t0,t1,t2,t3);}}

static void C_ccall f_4048r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(6);
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?*((C_word*)lf[85]+1):(C_word)C_slot(t3,C_fix(0)));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4057,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4057(t9,t1,t2);}

/* recur in delete-duplicates in k920 */
static void C_fcall f_4057(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4057,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4073,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4086,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1313 delete */
t7=*((C_word*)lf[84]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t3,t4,((C_word*)t0)[2]);}}

/* k4084 in recur in delete-duplicates in k920 */
static void C_ccall f_4086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1313 recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4057(t2,((C_word*)t0)[2],t1);}

/* k4071 in recur in delete-duplicates in k920 */
static void C_ccall f_4073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4073,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1)));}

/* member in k920 */
static void C_ccall f_4027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4027r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4027r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4027r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[85]+1):(C_word)C_slot(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4036,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1288 find-tail */
t8=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a4035 in member in k920 */
static void C_ccall f_4036(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4036,3,t0,t1,t2);}
/* srfi-1.scm: 1288 = */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* delete! in k920 */
static void C_ccall f_4002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4002r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4002r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4002r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[85]+1):(C_word)C_slot(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4011,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1283 filter! */
t8=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a4010 in delete! in k920 */
static void C_ccall f_4011(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4011,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4019,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1283 = */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k4017 in a4010 in delete! in k920 */
static void C_ccall f_4019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* delete in k920 */
static void C_ccall f_3977(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4rv,(void*)f_3977r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_3977r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3977r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[85]+1):(C_word)C_slot(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3986,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1279 filter */
t8=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a3985 in delete in k920 */
static void C_ccall f_3986(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3986,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3994,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1279 = */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k3992 in a3985 in delete in k920 */
static void C_ccall f_3994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* remove! in k920 */
static void C_ccall f_3961(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3961,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3967,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1256 filter! */
t5=*((C_word*)lf[79]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* a3966 in remove! in k920 */
static void C_ccall f_3967(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3967,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3975,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1256 pred */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3973 in a3966 in remove! in k920 */
static void C_ccall f_3975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* remove in k920 */
static void C_ccall f_3945(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3945,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3951,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1255 filter */
t5=*((C_word*)lf[78]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* a3950 in remove in k920 */
static void C_ccall f_3951(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3951,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3959,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1255 pred */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k3957 in a3950 in remove in k920 */
static void C_ccall f_3959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* partition! in k920 */
static void C_ccall f_3733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3733,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
/* srfi-1.scm: 1212 values */
C_values(4,0,t1,t3,t3);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3745,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3790,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3839,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t11=(C_word)C_u_i_car(t3);
/* srfi-1.scm: 1237 pred */
t12=t2;
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}}

/* k3837 in partition! in k920 */
static void C_ccall f_3839(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3839,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3848,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3848(t6,((C_word*)t0)[3],((C_word*)t0)[6],t2);}
else{
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3898,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3898(t6,((C_word*)t0)[3],((C_word*)t0)[6],t2);}}

/* lp in k3837 in partition! in k920 */
static void C_fcall f_3898(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3898,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3914,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_u_i_car(t3);
/* srfi-1.scm: 1248 pred */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* srfi-1.scm: 1247 values */
C_values(4,0,t1,t3,((C_word*)t0)[5]);}}

/* k3912 in lp in k3837 in partition! in k920 */
static void C_ccall f_3914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3914,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3917,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* srfi-1.scm: 1249 scan-in */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3745(t4,t2,((C_word*)t0)[6],((C_word*)t0)[3],t3);}
else{
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* srfi-1.scm: 1251 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3898(t3,((C_word*)t0)[7],((C_word*)t0)[6],t2);}}

/* k3915 in k3912 in lp in k3837 in partition! in k920 */
static void C_ccall f_3917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1250 values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k3837 in partition! in k920 */
static void C_fcall f_3848(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3848,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3864,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_u_i_car(t3);
/* srfi-1.scm: 1241 pred */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* srfi-1.scm: 1240 values */
C_values(4,0,t1,((C_word*)t0)[4],t3);}}

/* k3862 in lp in k3837 in partition! in k920 */
static void C_ccall f_3864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3864,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
/* srfi-1.scm: 1241 lp */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3848(t3,((C_word*)t0)[5],((C_word*)t0)[7],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3874,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
/* srfi-1.scm: 1242 scan-out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3790(t4,t2,((C_word*)t0)[2],((C_word*)t0)[7],t3);}}

/* k3872 in k3862 in lp in k3837 in partition! in k920 */
static void C_ccall f_3874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1243 values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* scan-out in partition! in k920 */
static void C_fcall f_3790(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3790,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3796,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3796(t8,t1,t3,t4);}

/* lp in scan-out in partition! in k920 */
static void C_fcall f_3796(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3796,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3809,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_u_i_car(t3);
/* srfi-1.scm: 1230 pred */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(1),t3));}}

/* k3807 in lp in scan-out in partition! in k920 */
static void C_ccall f_3809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_setslot(((C_word*)t0)[7],C_fix(1),((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* srfi-1.scm: 1232 scan-in */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3745(t4,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],t3);}
else{
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* srfi-1.scm: 1233 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3796(t3,((C_word*)t0)[4],((C_word*)t0)[6],t2);}}

/* scan-in in partition! in k920 */
static void C_fcall f_3745(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3745,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3751(t8,t1,t2,t4);}

/* lp in scan-in in partition! in k920 */
static void C_fcall f_3751(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3751,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3764,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_u_i_car(t3);
/* srfi-1.scm: 1221 pred */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(1),t3));}}

/* k3762 in lp in scan-in in partition! in k920 */
static void C_ccall f_3764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
/* srfi-1.scm: 1222 lp */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3751(t3,((C_word*)t0)[5],((C_word*)t0)[7],t2);}
else{
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(1),((C_word*)t0)[7]);
t3=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
/* srfi-1.scm: 1224 scan-out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3790(t4,((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[7],t3);}}

/* partition in k920 */
static void C_ccall f_3665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3665,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3671,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3671(t7,t1,t3);}

/* recur in partition in k920 */
static void C_fcall f_3671(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3671,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 1179 values */
C_values(4,0,t1,t2,t2);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3692,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3698,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}}

/* a3697 in recur in partition in k920 */
static void C_ccall f_3698(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3698,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3705,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 1183 pred */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}

/* k3703 in a3697 in recur in partition in k920 */
static void C_ccall f_3705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3705,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_pairp(((C_word*)t0)[6]);
t3=(C_truep(t2)?(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]):((C_word*)t0)[3]);
/* srfi-1.scm: 1184 values */
C_values(4,0,((C_word*)t0)[2],t3,((C_word*)t0)[6]);}
else{
t2=(C_word)C_i_pairp(((C_word*)t0)[4]);
t3=(C_truep(t2)?(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]):((C_word*)t0)[3]);
/* srfi-1.scm: 1185 values */
C_values(4,0,((C_word*)t0)[2],((C_word*)t0)[4],t3);}}

/* a3691 in recur in partition in k920 */
static void C_ccall f_3692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3692,2,t0,t1);}
/* srfi-1.scm: 1182 recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3671(t2,t1,((C_word*)t0)[2]);}

/* filter! in k920 */
static void C_ccall f_3544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3544,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3550,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3550(t7,t1,t3);}

/* lp in filter! in k920 */
static void C_fcall f_3550(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3550,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3659,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 1144 pred */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}}

/* k3657 in lp in filter! in k920 */
static void C_ccall f_3659(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3659,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3572,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3651,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 1168 scan-in */
t10=((C_word*)t3)[1];
f_3572(t10,t8,((C_word*)t0)[3],t9);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 1144 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3550(t3,((C_word*)t0)[4],t2);}}

/* k3649 in k3657 in lp in filter! in k920 */
static void C_ccall f_3651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* scan-out in k3657 in lp in filter! in k920 */
static void C_fcall f_3605(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3605,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3611,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3611(t7,t1,t3);}

/* lp in scan-out in k3657 in lp in filter! in k920 */
static void C_fcall f_3611(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3611,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3624,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 1163 pred */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(1),t2));}}

/* k3622 in lp in scan-out in k3657 in lp in filter! in k920 */
static void C_ccall f_3624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(1),((C_word*)t0)[5]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-1.scm: 1165 scan-in */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3572(t4,((C_word*)t0)[3],((C_word*)t0)[5],t3);}
else{
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-1.scm: 1166 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3611(t3,((C_word*)t0)[3],t2);}}

/* scan-in in k3657 in lp in filter! in k920 */
static void C_fcall f_3572(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3572,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3585,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_u_i_car(t3);
/* srfi-1.scm: 1157 pred */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k3583 in scan-in in k3657 in lp in filter! in k920 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* srfi-1.scm: 1158 scan-in */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3572(t3,((C_word*)t0)[4],((C_word*)t0)[6],t2);}
else{
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
/* srfi-1.scm: 1159 scan-out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3605(t3,((C_word*)t0)[4],((C_word*)t0)[2],t2);}}

/* filter in k920 */
static void C_ccall f_3502(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3502,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3508,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3508(t7,t1,t3);}

/* recur in filter in k920 */
static void C_fcall f_3508(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3508,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3527,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 1093 pred */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}}

/* k3525 in recur in filter in k920 */
static void C_ccall f_3527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3527,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3530,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1094 recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3508(t3,t2,((C_word*)t0)[6]);}
else{
/* srfi-1.scm: 1097 recur */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3508(t2,((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* k3528 in k3525 in recur in filter in k920 */
static void C_ccall f_3530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3530,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1)));}

/* map-in-order in k920 */
static void C_ccall f_3425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_3425r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3425r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3425r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3441,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3441(t9,t1,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3475,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3475(t8,t1,t3);}}

/* recur in map-in-order in k920 */
static void C_fcall f_3475(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3475,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_slot(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3488,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 1071 f */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}}

/* k3486 in recur in map-in-order in k920 */
static void C_ccall f_3488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3495,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1072 recur */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3475(t3,t2,((C_word*)t0)[2]);}

/* k3493 in k3486 in recur in map-in-order in k920 */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3495,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* recur in map-in-order in k920 */
static void C_fcall f_3441(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3441,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3447,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}

/* a3452 in recur in map-in-order in k920 */
static void C_ccall f_3453(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3453,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3463,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* k3461 in a3452 in recur in map-in-order in k920 */
static void C_ccall f_3463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3463,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3470,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1064 recur */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3441(t3,t2,((C_word*)t0)[2]);}

/* k3468 in k3461 in a3452 in recur in map-in-order in k920 */
static void C_ccall f_3470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3470,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a3446 in recur in map-in-order in k920 */
static void C_ccall f_3447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3447,2,t0,t1);}
/* srfi-1.scm: 1061 ##srfi1#cars+cdrs */
f_2313(t1,((C_word*)t0)[2]);}

/* filter-map in k920 */
static void C_ccall f_3340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_3340r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3340r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3340r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3356,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3356(t9,t1,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3396,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3396(t8,t1,t3);}}

/* recur in filter-map in k920 */
static void C_fcall f_3396(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3396,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3406,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(1));
/* srfi-1.scm: 1048 recur */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k3404 in recur in filter-map in k920 */
static void C_ccall f_3406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3409,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_i_car(((C_word*)t0)[3]);
/* srfi-1.scm: 1049 f */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k3407 in k3404 in recur in filter-map in k920 */
static void C_ccall f_3409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3409,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]):((C_word*)t0)[2]));}

/* recur in filter-map in k920 */
static void C_fcall f_3356(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3356,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3362,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}

/* a3367 in recur in filter-map in k920 */
static void C_ccall f_3368(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3368,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3378,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* k3376 in a3367 in recur in filter-map in k920 */
static void C_ccall f_3378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3378,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3388,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1041 recur */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3356(t3,t2,((C_word*)t0)[2]);}
else{
/* srfi-1.scm: 1042 recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3356(t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k3386 in k3376 in a3367 in recur in filter-map in k920 */
static void C_ccall f_3388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3388,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a3361 in recur in filter-map in k920 */
static void C_ccall f_3362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3362,2,t0,t1);}
/* srfi-1.scm: 1039 ##srfi1#cars+cdrs */
f_2313(t1,((C_word*)t0)[2]);}

/* map! in k920 */
static void C_ccall f_3268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr4r,(void*)f_3268r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3268r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3268r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(13);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3272,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3280,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3280(t9,t5,t3,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3326,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1030 pair-for-each */
t7=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t3);}}

/* a3325 in map! in k920 */
static void C_ccall f_3326(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3326,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3334,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 1030 f */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k3332 in a3325 in map! in k920 */
static void C_ccall f_3334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(0),t1));}

/* lp in map! in k920 */
static void C_fcall f_3280(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3280,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3292,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1025 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}}

/* a3297 in lp in map! in k920 */
static void C_ccall f_3298(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3298,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3313,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_u_i_car(((C_word*)t0)[4]);
C_apply(5,0,t4,((C_word*)t0)[2],t5,t2);}

/* k3311 in a3297 in lp in map! in k920 */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(0),t1);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-1.scm: 1027 lp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3280(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* a3291 in lp in map! in k920 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3292,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2483,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2483(t6,t1,t2);}

/* recur in a3291 in lp in map! in k920 */
static void C_fcall f_2483(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2483,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2495,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 846  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}
else{
/* srfi-1.scm: 850  values */
C_values(4,0,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* a2500 in recur in a3291 in lp in map! in k920 */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2501,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2507,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2513,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a2512 in a2500 in recur in a3291 in lp in map! in k920 */
static void C_ccall f_2513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2513,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2525,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a2524 in a2512 in a2500 in recur in a3291 in lp in map! in k920 */
static void C_ccall f_2525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2525,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
/* srfi-1.scm: 849  values */
C_values(4,0,t1,t4,t5);}

/* a2518 in a2512 in a2500 in recur in a3291 in lp in map! in k920 */
static void C_ccall f_2519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2519,2,t0,t1);}
/* srfi-1.scm: 848  recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2483(t2,t1,((C_word*)t0)[2]);}

/* a2506 in a2500 in recur in a3291 in lp in map! in k920 */
static void C_ccall f_2507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2507,2,t0,t1);}
/* srfi-1.scm: 847  car+cdr */
t2=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a2494 in recur in a3291 in lp in map! in k920 */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2495,2,t0,t1);}
/* srfi-1.scm: 846  car+cdr */
t2=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k3270 in map! in k920 */
static void C_ccall f_3272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* pair-for-each in k920 */
static void C_ccall f_3209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_3209r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3209r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3209r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3225,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3225(t9,t1,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3246,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3246(t8,t1,t3);}}

/* lp in pair-for-each in k920 */
static void C_fcall f_3246(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3246,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_slot(t2,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3259,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1016 proc */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k3257 in lp in pair-for-each in k920 */
static void C_ccall f_3259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1017 lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3246(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in pair-for-each in k920 */
static void C_fcall f_3225(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3225,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3229,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1007 ##srfi1#cdrs */
f_2232(t3,t2);}

/* k3227 in lp in pair-for-each in k920 */
static void C_ccall f_3229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3229,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3238,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3236 in k3227 in lp in pair-for-each in k920 */
static void C_ccall f_3238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1010 lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3225(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##srfi1#really-append-map in k920 */
static void C_fcall f_3100(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_save_and_reclaim((void*)trf_3100,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3112,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3122,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 986  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t6,t7);}
else{
if(C_truep((C_word)C_i_nullp(t4))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=(C_word)C_u_i_car(t4);
t7=(C_word)C_slot(t4,C_fix(1));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3182,a[2]=t3,a[3]=t9,a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3182(t11,t1,t6,t7);}}}

/* recur in ##srfi1#really-append-map in k920 */
static void C_fcall f_3182(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3182,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3186,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 997  f */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3184 in recur in ##srfi1#really-append-map in k920 */
static void C_ccall f_3186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3186,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[5]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3199,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_u_i_car(((C_word*)t0)[5]);
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* srfi-1.scm: 999  recur */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3182(t5,t2,t3,t4);}}

/* k3197 in k3184 in recur in ##srfi1#really-append-map in k920 */
static void C_ccall f_3199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 999  appender */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3121 in ##srfi1#really-append-map in k920 */
static void C_ccall f_3122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3122,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3134,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3134(t7,t1,t2,t3);}}

/* recur in a3121 in ##srfi1#really-append-map in k920 */
static void C_fcall f_3134(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3134,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3138,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t2);}

/* k3136 in recur in a3121 in ##srfi1#really-append-map in k920 */
static void C_ccall f_3138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3138,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3143,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3149,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a3148 in k3136 in recur in a3121 in ##srfi1#really-append-map in k920 */
static void C_ccall f_3149(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3149,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3163,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 992  recur */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3134(t5,t4,t2,t3);}}

/* k3161 in a3148 in k3136 in recur in a3121 in ##srfi1#really-append-map in k920 */
static void C_ccall f_3163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 992  appender */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3142 in k3136 in recur in a3121 in ##srfi1#really-append-map in k920 */
static void C_ccall f_3143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3143,2,t0,t1);}
/* srfi-1.scm: 990  ##srfi1#cars+cdrs */
f_2313(t1,((C_word*)t0)[2]);}

/* a3111 in ##srfi1#really-append-map in k920 */
static void C_ccall f_3112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3112,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
/* srfi-1.scm: 986  ##srfi1#cars+cdrs */
f_2313(t1,t2);}

/* append-map! in k920 */
static void C_ccall f_3094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3094r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3094r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3094r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
/* srfi-1.scm: 981  ##srfi1#really-append-map */
f_3100(t1,*((C_word*)lf[52]+1),t2,t3,t4);}

/* append-map in k920 */
static void C_ccall f_3088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3088r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3088r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3088r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
/* srfi-1.scm: 979  ##srfi1#really-append-map */
f_3100(t1,*((C_word*)lf[57]+1),t2,t3,t4);}

/* reduce-right in k920 */
static void C_ccall f_3044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3044,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_u_i_car(t4);
t6=(C_word)C_slot(t4,C_fix(1));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3064,a[2]=t8,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3064(t10,t1,t5,t6);}}

/* recur in reduce-right in k920 */
static void C_fcall f_3064(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3064,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3078,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_u_i_car(t3);
t6=(C_word)C_slot(t3,C_fix(1));
/* srfi-1.scm: 970  recur */
t8=t4;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k3076 in recur in reduce-right in k920 */
static void C_ccall f_3078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 970  f */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* reduce in k920 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3024,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_u_i_car(t4);
t6=(C_word)C_slot(t4,C_fix(1));
/* srfi-1.scm: 963  fold */
t7=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t2,t5,t6);}}

/* pair-fold in k920 */
static void C_ccall f_2959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr5r,(void*)f_2959r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2959r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2959r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(15);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2975,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_2975(t10,t1,t6,t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3005,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3005(t9,t1,t4,t3);}}

/* lp in pair-fold in k920 */
static void C_fcall f_3005(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3005,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3022,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 954  f */
t6=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,t3);}}

/* k3020 in lp in pair-fold in k920 */
static void C_ccall f_3022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 954  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3005(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* lp in pair-fold in k920 */
static void C_fcall f_2975(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2975,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2979,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 947  ##srfi1#cdrs */
f_2232(t4,t2);}

/* k2977 in lp in pair-fold in k920 */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2979,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2992,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
/* srfi-1.scm: 949  append! */
t5=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k2994 in k2977 in lp in pair-fold in k920 */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2990 in k2977 in lp in pair-fold in k920 */
static void C_ccall f_2992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 949  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2975(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* pair-fold-right in k920 */
static void C_ccall f_2893(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr5r,(void*)f_2893r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2893r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2893r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(17);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2909,a[2]=t8,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2909(t10,t1,t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2939,a[2]=t7,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2939(t9,t1,t4);}}

/* recur in pair-fold-right in k920 */
static void C_fcall f_2939(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2939,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2953,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(1));
/* srfi-1.scm: 941  recur */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k2951 in recur in pair-fold-right in k920 */
static void C_ccall f_2953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 941  f */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* recur in pair-fold-right in k920 */
static void C_fcall f_2909(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2909,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 936  ##srfi1#cdrs */
f_2232(t3,t2);}

/* k2911 in recur in pair-fold-right in k920 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2913,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2926,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2934,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 938  recur */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2909(t4,t3,t1);}}

/* k2932 in k2911 in recur in pair-fold-right in k920 */
static void C_ccall f_2934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2934,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* srfi-1.scm: 938  append! */
t3=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2924 in k2911 in recur in pair-fold-right in k920 */
static void C_ccall f_2926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* fold-right in k920 */
static void C_ccall f_2828(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr5r,(void*)f_2828r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2828r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2828r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(17);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2844,a[2]=t8,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2844(t10,t1,t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2870,a[2]=t7,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2870(t9,t1,t4);}}

/* recur in fold-right in k920 */
static void C_fcall f_2870(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2870,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2887,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(1));
/* srfi-1.scm: 929  recur */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k2885 in recur in fold-right in k920 */
static void C_ccall f_2887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 929  kons */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* recur in fold-right in k920 */
static void C_fcall f_2844(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2844,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2848,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 922  ##srfi1#cdrs */
f_2232(t3,t2);}

/* k2846 in recur in fold-right in k920 */
static void C_ccall f_2848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2848,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2861,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2865,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 924  recur */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2844(t4,t3,t1);}}

/* k2863 in k2846 in recur in fold-right in k920 */
static void C_ccall f_2865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2865,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2286,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2286(t6,((C_word*)t0)[2],t2);}

/* recur in k2863 in k2846 in recur in fold-right in k920 */
static void C_fcall f_2286(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2286,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_u_i_caar(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2304,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(t2,C_fix(1));
/* srfi-1.scm: 810  recur */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]));}}

/* k2302 in recur in k2863 in k2846 in recur in fold-right in k920 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2304,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2859 in k2846 in recur in fold-right in k920 */
static void C_ccall f_2861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* fold in k920 */
static void C_ccall f_2757(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr5r,(void*)f_2757r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2757r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2757r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(15);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2773,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_2773(t10,t1,t6,t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2804,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_2804(t9,t1,t4,t3);}}

/* lp in fold in k920 */
static void C_fcall f_2804(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2804,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2822,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 915  kons */
t7=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t3);}}

/* k2820 in lp in fold in k920 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 915  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2804(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* lp in fold in k920 */
static void C_fcall f_2773(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2773,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2779,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a2784 in lp in fold in k920 */
static void C_ccall f_2785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2785,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2799,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t2);}}

/* k2797 in a2784 in lp in fold in k920 */
static void C_ccall f_2799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 911  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2773(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2778 in lp in fold in k920 */
static void C_ccall f_2779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2779,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2399,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 831  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t4);}

/* a2398 in a2778 in lp in fold in k920 */
static void C_ccall f_2399(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2399,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2405,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2405(t6,t1,((C_word*)t0)[2]);}

/* recur in a2398 in a2778 in lp in fold in k920 */
static void C_fcall f_2405(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2405,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2417,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 835  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}
else{
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* srfi-1.scm: 840  values */
C_values(4,0,t1,t3,C_SCHEME_END_OF_LIST);}}

/* a2422 in recur in a2398 in a2778 in lp in fold in k920 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2423,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 836  abort */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2438,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2444,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 837  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}}

/* a2443 in a2422 in recur in a2398 in a2778 in lp in fold in k920 */
static void C_ccall f_2444(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2444,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2456,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a2455 in a2443 in a2422 in recur in a2398 in a2778 in lp in fold in k920 */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2456,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
/* srfi-1.scm: 839  values */
C_values(4,0,t1,t4,t5);}

/* a2449 in a2443 in a2422 in recur in a2398 in a2778 in lp in fold in k920 */
static void C_ccall f_2450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2450,2,t0,t1);}
/* srfi-1.scm: 838  recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2405(t2,t1,((C_word*)t0)[2]);}

/* a2437 in a2422 in recur in a2398 in a2778 in lp in fold in k920 */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2438,2,t0,t1);}
/* srfi-1.scm: 837  car+cdr */
t2=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a2416 in recur in a2398 in a2778 in lp in fold in k920 */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2417,2,t0,t1);}
/* srfi-1.scm: 835  car+cdr */
t2=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* unfold in k920 */
static void C_ccall f_2675(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr6r,(void*)f_2675r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_2675r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_2675r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a=C_alloc(17);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(C_word)C_u_i_car(t6);
t8=(C_word)C_slot(t6,C_fix(1));
if(C_truep((C_word)C_i_pairp(t8))){
C_apply(10,0,t1,*((C_word*)lf[64]+1),lf[65],*((C_word*)lf[63]+1),t2,t3,t4,t5,t6);}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2699,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t10,a[6]=t7,tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_2699(t12,t1,t5);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2733,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_2733(t10,t1,t5);}}

/* recur in unfold in k920 */
static void C_fcall f_2733(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2733,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2740,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 901  p */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2738 in recur in unfold in k920 */
static void C_ccall f_2740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2740,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 902  f */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* k2745 in k2738 in recur in unfold in k920 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2751,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2755,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 902  g */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2753 in k2745 in k2738 in recur in unfold in k920 */
static void C_ccall f_2755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 902  recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2733(t2,((C_word*)t0)[2],t1);}

/* k2749 in k2745 in k2738 in recur in unfold in k920 */
static void C_ccall f_2751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2751,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* recur in unfold in k920 */
static void C_fcall f_2699(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2699,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-1.scm: 897  p */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2704 in recur in unfold in k920 */
static void C_ccall f_2706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2706,2,t0,t1);}
if(C_truep(t1)){
/* srfi-1.scm: 897  tail-gen */
t2=((C_word*)t0)[7];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2716,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 898  f */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}}

/* k2714 in k2704 in recur in unfold in k920 */
static void C_ccall f_2716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2720,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2724,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 898  g */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2722 in k2714 in k2704 in recur in unfold in k920 */
static void C_ccall f_2724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 898  recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2699(t2,((C_word*)t0)[2],t1);}

/* k2718 in k2714 in k2704 in recur in unfold in k920 */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2720,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* unfold-right in k920 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr6rv,(void*)f_2635r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest_vector(a,C_rest_count(0));
f_2635r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_2635r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(8);
t7=(C_word)C_vemptyp(t6);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t6,C_fix(0)));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2645,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2645(t12,t1,t5,t8);}

/* lp in unfold-right in k920 */
static void C_fcall f_2645(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2645,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-1.scm: 881  p */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2650 in lp in unfold-right in k920 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2652,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2659,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 882  g */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* k2657 in k2650 in lp in unfold-right in k920 */
static void C_ccall f_2659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2667,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 883  f */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2665 in k2657 in k2650 in lp in unfold-right in k920 */
static void C_ccall f_2667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2667,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* srfi-1.scm: 882  lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2645(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* count in k920 */
static void C_ccall f_2542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_2542r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2542r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2542r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(12);
if(C_truep((C_word)C_i_pairp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2554,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2554(t8,t1,t3,t4,C_fix(0));}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2605,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2605(t8,t1,t3,C_fix(0));}}

/* lp in count in k920 */
static void C_fcall f_2605(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2605,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2626,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_u_i_car(t2);
/* srfi-1.scm: 870  pred */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}

/* k2624 in lp in count in k920 */
static void C_ccall f_2626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1)):((C_word*)t0)[5]);
/* srfi-1.scm: 870  lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2605(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* lp in count in k920 */
static void C_fcall f_2554(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2554,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2566,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 862  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}}

/* a2571 in lp in count in k920 */
static void C_ccall f_2572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2572,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[5]);}
else{
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2593,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_u_i_car(((C_word*)t0)[4]);
C_apply(5,0,t5,((C_word*)t0)[2],t6,t2);}}

/* k2591 in a2571 in lp in count in k920 */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?(C_word)C_u_fixnum_plus(((C_word*)t0)[6],C_fix(1)):((C_word*)t0)[6]);
/* srfi-1.scm: 864  lp */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2554(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a2565 in lp in count in k920 */
static void C_ccall f_2566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2566,2,t0,t1);}
/* srfi-1.scm: 862  ##srfi1#cars+cdrs */
f_2313(t1,((C_word*)t0)[2]);}

/* ##srfi1#cars+cdrs in k920 */
static void C_fcall f_2313(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2313,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2319,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 817  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t3);}

/* a2318 in ##srfi1#cars+cdrs in k920 */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2319,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2325,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2325(t6,t1,((C_word*)t0)[2]);}

/* recur in a2318 in ##srfi1#cars+cdrs in k920 */
static void C_fcall f_2325(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2325,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2337,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 821  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}
else{
/* srfi-1.scm: 826  values */
C_values(4,0,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* a2342 in recur in a2318 in ##srfi1#cars+cdrs in k920 */
static void C_ccall f_2343(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2343,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 822  abort */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2358,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2364,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 823  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}}

/* a2363 in a2342 in recur in a2318 in ##srfi1#cars+cdrs in k920 */
static void C_ccall f_2364(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2364,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2376,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a2375 in a2363 in a2342 in recur in a2318 in ##srfi1#cars+cdrs in k920 */
static void C_ccall f_2376(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2376,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
/* srfi-1.scm: 825  values */
C_values(4,0,t1,t4,t5);}

/* a2369 in a2363 in a2342 in recur in a2318 in ##srfi1#cars+cdrs in k920 */
static void C_ccall f_2370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2370,2,t0,t1);}
/* srfi-1.scm: 824  recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2325(t2,t1,((C_word*)t0)[2]);}

/* a2357 in a2342 in recur in a2318 in ##srfi1#cars+cdrs in k920 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2358,2,t0,t1);}
/* srfi-1.scm: 823  car+cdr */
t2=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a2336 in recur in a2318 in ##srfi1#cars+cdrs in k920 */
static void C_ccall f_2337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2337,2,t0,t1);}
/* srfi-1.scm: 821  car+cdr */
t2=*((C_word*)lf[36]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* ##srfi1#cdrs in k920 */
static void C_fcall f_2232(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2232,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2238,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 799  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t3);}

/* a2237 in ##srfi1#cdrs in k920 */
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2238,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2244,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2244(t6,t1,((C_word*)t0)[2]);}

/* recur in a2237 in ##srfi1#cdrs in k920 */
static void C_fcall f_2244(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2244,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_u_i_car(t2);
if(C_truep((C_word)C_i_nullp(t3))){
/* srfi-1.scm: 804  abort */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_slot(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2274,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t2,C_fix(1));
/* srfi-1.scm: 805  recur */
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}

/* k2272 in recur in a2237 in ##srfi1#cdrs in k920 */
static void C_ccall f_2274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2274,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* concatenate! in k920 */
static void C_ccall f_2226(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2226,3,t0,t1,t2);}
/* srfi-1.scm: 776  reduce-right */
t3=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,*((C_word*)lf[52]+1),C_SCHEME_END_OF_LIST,t2);}

/* concatenate in k920 */
static void C_ccall f_2220(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2220,3,t0,t1,t2);}
/* srfi-1.scm: 775  reduce-right */
t3=*((C_word*)lf[56]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,*((C_word*)lf[57]+1),C_SCHEME_END_OF_LIST,t2);}

/* append-reverse! in k920 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2196,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2202,tmp=(C_word)a,a+=2,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_2202(t2,t3));}

/* lp in append-reverse! in k920 */
static C_word C_fcall f_2202(C_word t1,C_word t2){
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
t3=(C_word)C_slot(t1,C_fix(1));
t4=(C_word)C_i_setslot(t1,C_fix(1),t2);
t6=t3;
t7=t1;
t1=t6;
t2=t7;
goto loop;}}

/* append-reverse in k920 */
static void C_ccall f_2166(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2166,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2172,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2172(t7,t1,t2,t3);}

/* lp in append-reverse in k920 */
static void C_fcall f_2172(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2172,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_u_i_car(t2);
t6=(C_word)C_a_i_cons(&a,2,t5,t3);
/* srfi-1.scm: 765  lp */
t8=t1;
t9=t4;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}

/* append! in k920 */
static void C_ccall f_2090(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2090r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2090r(t0,t1,t2);}}

static void C_ccall f_2090r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2096,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2096(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* lp in append! in k920 */
static void C_fcall f_2096(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2096,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_pairp(t4))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2125,a[2]=t5,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 733  last-pair */
t7=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
/* srfi-1.scm: 730  lp */
t8=t1;
t9=t5;
t10=t4;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2123 in lp in append! in k920 */
static void C_ccall f_2125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2125,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2127,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2127(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* lp2 in k2123 in lp in append! in k920 */
static void C_fcall f_2127(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2127,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_u_i_car(t3);
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_i_setslot(t2,C_fix(1),t4);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2150,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
/* srfi-1.scm: 739  last-pair */
t8=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}
else{
t8=t7;
f_2150(2,t8,t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}}

/* k2148 in lp2 in k2123 in lp in append! in k920 */
static void C_ccall f_2150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 739  lp2 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2127(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* unzip5 in k920 */
static void C_ccall f_2006(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2006,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2012,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2012(t6,t1,t2);}

/* recur in unzip5 in k920 */
static void C_fcall f_2012(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2012,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 711  values */
C_values(7,0,t1,t2,t2,t2,t2,t2);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2030,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2040,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}}

/* a2039 in recur in unzip5 in k920 */
static void C_ccall f_2040(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2040,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_u_i_car(((C_word*)t0)[2]);
t8=(C_word)C_a_i_cons(&a,2,t7,t2);
t9=(C_word)C_u_i_cadr(((C_word*)t0)[2]);
t10=(C_word)C_a_i_cons(&a,2,t9,t3);
t11=(C_word)C_u_i_caddr(((C_word*)t0)[2]);
t12=(C_word)C_a_i_cons(&a,2,t11,t4);
t13=(C_word)C_u_i_cadddr(((C_word*)t0)[2]);
t14=(C_word)C_a_i_cons(&a,2,t13,t5);
t15=(C_word)C_u_i_cddddr(((C_word*)t0)[2]);
t16=(C_word)C_u_i_car(t15);
t17=(C_word)C_a_i_cons(&a,2,t16,t6);
/* srfi-1.scm: 714  values */
C_values(7,0,t1,t8,t10,t12,t14,t17);}

/* a2029 in recur in unzip5 in k920 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2030,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 713  recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2012(t3,t1,t2);}

/* unzip4 in k920 */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1934,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1940,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_1940(t6,t1,t2);}

/* recur in unzip4 in k920 */
static void C_fcall f_1940(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1940,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 701  values */
C_values(6,0,t1,t2,t2,t2,t2);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1958,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1968,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}}

/* a1967 in recur in unzip4 in k920 */
static void C_ccall f_1968(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1968,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_u_i_car(((C_word*)t0)[2]);
t7=(C_word)C_a_i_cons(&a,2,t6,t2);
t8=(C_word)C_u_i_cadr(((C_word*)t0)[2]);
t9=(C_word)C_a_i_cons(&a,2,t8,t3);
t10=(C_word)C_u_i_caddr(((C_word*)t0)[2]);
t11=(C_word)C_a_i_cons(&a,2,t10,t4);
t12=(C_word)C_u_i_cadddr(((C_word*)t0)[2]);
t13=(C_word)C_a_i_cons(&a,2,t12,t5);
/* srfi-1.scm: 704  values */
C_values(6,0,t1,t7,t9,t11,t13);}

/* a1957 in recur in unzip4 in k920 */
static void C_ccall f_1958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1958,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 703  recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1940(t3,t1,t2);}

/* unzip3 in k920 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1870,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1876,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_1876(t6,t1,t2);}

/* recur in unzip3 in k920 */
static void C_fcall f_1876(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1876,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 692  values */
C_values(5,0,t1,t2,t2,t2);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1894,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1904,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}}

/* a1903 in recur in unzip3 in k920 */
static void C_ccall f_1904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1904,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_u_i_car(((C_word*)t0)[2]);
t6=(C_word)C_a_i_cons(&a,2,t5,t2);
t7=(C_word)C_u_i_cadr(((C_word*)t0)[2]);
t8=(C_word)C_a_i_cons(&a,2,t7,t3);
t9=(C_word)C_u_i_caddr(((C_word*)t0)[2]);
t10=(C_word)C_a_i_cons(&a,2,t9,t4);
/* srfi-1.scm: 695  values */
C_values(5,0,t1,t6,t8,t10);}

/* a1893 in recur in unzip3 in k920 */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1894,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 694  recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1876(t3,t1,t2);}

/* unzip2 in k920 */
static void C_ccall f_1814(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1814,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1820,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_1820(t6,t1,t2);}

/* recur in unzip2 in k920 */
static void C_fcall f_1820(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1820,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 684  values */
C_values(4,0,t1,t2,t2);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1838,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1848,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}}

/* a1847 in recur in unzip2 in k920 */
static void C_ccall f_1848(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1848,4,t0,t1,t2,t3);}
t4=(C_word)C_u_i_car(((C_word*)t0)[2]);
t5=(C_word)C_a_i_cons(&a,2,t4,t2);
t6=(C_word)C_u_i_cadr(((C_word*)t0)[2]);
t7=(C_word)C_a_i_cons(&a,2,t6,t3);
/* srfi-1.scm: 687  values */
C_values(4,0,t1,t5,t7);}

/* a1837 in recur in unzip2 in k920 */
static void C_ccall f_1838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1838,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 686  recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1820(t3,t1,t2);}

/* unzip1 in k920 */
static void C_ccall f_1808(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1808,3,t0,t1,t2);}
/* map */
t3=*((C_word*)lf[47]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,*((C_word*)lf[23]+1),t2);}

/* last-pair in k920 */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1787,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1793,tmp=(C_word)a,a+=2,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1793(t2));}

/* lp in last-pair in k920 */
static C_word C_fcall f_1793(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:
t2=(C_word)C_slot(t1,C_fix(1));
if(C_truep((C_word)C_i_pairp(t2))){
t4=t2;
t1=t4;
goto loop;}
else{
return(t1);}}

/* last in k920 */
static void C_ccall f_1777(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1777,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1785,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 668  last-pair */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1783 in last in k920 */
static void C_ccall f_1785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_u_i_car(t1));}

/* split-at! in k920 */
static void C_ccall f_1749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1749,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_fix(0),t3);
if(C_truep(t4)){
/* srfi-1.scm: 661  values */
C_values(4,0,t1,C_SCHEME_END_OF_LIST,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1762,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_u_fixnum_difference(t3,C_fix(1));
/* srfi-1.scm: 662  drop */
t7=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t2,t6);}}

/* k1760 in split-at! in k920 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(t1,C_fix(1));
t3=(C_word)C_i_set_i_slot(t1,C_fix(1),C_SCHEME_END_OF_LIST);
/* srfi-1.scm: 665  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* split-at in k920 */
static void C_ccall f_1700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1700,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1706,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_1706(t7,t1,t2,t3);}

/* recur in split-at in k920 */
static void C_fcall f_1706(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1706,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_fix(0),t3);
if(C_truep(t4)){
/* srfi-1.scm: 654  values */
C_values(4,0,t1,C_SCHEME_END_OF_LIST,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1721,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1735,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 655  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}}

/* a1734 in recur in split-at in k920 */
static void C_ccall f_1735(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1735,4,t0,t1,t2,t3);}
t4=(C_word)C_u_i_car(((C_word*)t0)[2]);
t5=(C_word)C_a_i_cons(&a,2,t4,t2);
/* srfi-1.scm: 656  values */
C_values(4,0,t1,t5,t3);}

/* a1720 in recur in split-at in k920 */
static void C_ccall f_1721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1721,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 655  recur */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1706(t4,t1,t2,t3);}

/* drop-right! in k920 */
static void C_ccall f_1658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1658,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1662,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 595  drop */
t5=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k1660 in drop-right! in k920 */
static void C_ccall f_1662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1662,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(C_word)C_slot(t1,C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1677(t3,((C_word*)t0)[3],t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* lp in k1660 in drop-right! in k920 */
static C_word C_fcall f_1677(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t1,C_fix(1));
t4=(C_word)C_slot(t2,C_fix(1));
t7=t3;
t8=t4;
t1=t7;
t2=t8;
goto loop;}
else{
t3=(C_word)C_i_set_i_slot(t1,C_fix(1),C_SCHEME_END_OF_LIST);
return(((C_word*)t0)[2]);}}

/* drop-right in k920 */
static void C_ccall f_1620(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1620,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1628,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 586  drop */
t5=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k1626 in drop-right in k920 */
static void C_ccall f_1628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1628,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1630,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1630(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* recur in k1626 in drop-right in k920 */
static void C_fcall f_1630(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1630,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_u_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1648,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_slot(t3,C_fix(1));
/* srfi-1.scm: 588  recur */
t9=t5;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* k1646 in recur in k1626 in drop-right in k920 */
static void C_ccall f_1648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1648,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* take-right in k920 */
static void C_ccall f_1590(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1590,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1598,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 579  drop */
t5=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k1596 in take-right in k920 */
static void C_ccall f_1598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1600,tmp=(C_word)a,a+=2,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1600(((C_word*)t0)[2],t1));}

/* lp in k1596 in take-right in k920 */
static C_word C_fcall f_1600(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t1,C_fix(1));
t4=(C_word)C_slot(t2,C_fix(1));
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}
else{
return(t1);}}

/* take! in k920 */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1570,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_fix(0),t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1584,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_u_fixnum_difference(t3,C_fix(1));
/* srfi-1.scm: 570  drop */
t7=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t2,t6);}}

/* k1582 in take! in k920 */
static void C_ccall f_1584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_set_i_slot(t1,C_fix(1),C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* drop in k920 */
static void C_ccall f_1544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1544,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1550,tmp=(C_word)a,a+=2,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_1550(t2,t3));}

/* iter in drop in k920 */
static C_word C_fcall f_1550(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
return(t1);}
else{
t4=(C_word)C_slot(t1,C_fix(1));
t5=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* take in k920 */
static void C_ccall f_1510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1510,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1516,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_1516(t7,t1,t2,t3);}

/* recur in take in k920 */
static void C_fcall f_1516(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1516,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_fix(0),t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=(C_word)C_u_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1534,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_u_fixnum_difference(t3,C_fix(1));
/* srfi-1.scm: 558  recur */
t10=t6;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* k1532 in recur in take in k920 */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1534,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* car+cdr in k920 */
static void C_ccall f_1496(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1496,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
/* srfi-1.scm: 548  values */
C_values(4,0,t1,t3,t4);}

/* tenth in k920 */
static void C_ccall f_1482(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1482,3,t0,t1,t2);}
t3=(C_word)C_u_i_cddddr(t2);
t4=(C_word)C_u_i_cddddr(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u_i_cadr(t4));}

/* ninth in k920 */
static void C_ccall f_1468(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1468,3,t0,t1,t2);}
t3=(C_word)C_u_i_cddddr(t2);
t4=(C_word)C_u_i_cddddr(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u_i_car(t4));}

/* eighth in k920 */
static void C_ccall f_1458(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1458,3,t0,t1,t2);}
t3=(C_word)C_u_i_cddddr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u_i_cadddr(t3));}

/* seventh in k920 */
static void C_ccall f_1448(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1448,3,t0,t1,t2);}
t3=(C_word)C_u_i_cddddr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u_i_caddr(t3));}

/* sixth in k920 */
static void C_ccall f_1438(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1438,3,t0,t1,t2);}
t3=(C_word)C_u_i_cddddr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u_i_cadr(t3));}

/* fifth in k920 */
static void C_ccall f_1428(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1428,3,t0,t1,t2);}
t3=(C_word)C_u_i_cddddr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u_i_car(t3));}

/* zip in k920 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1418r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1418r(t0,t1,t2,t3);}}

static void C_ccall f_1418r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_apply(6,0,t1,*((C_word*)lf[20]+1),*((C_word*)lf[21]+1),t2,t3);}

/* length+ in k920 */
static void C_ccall f_1369(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1369,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1375,tmp=(C_word)a,a+=2,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1375(t2,t2,C_fix(0)));}

/* lp in length+ in k920 */
static C_word C_fcall f_1375(C_word t1,C_word t2,C_word t3){
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
loop:
if(C_truep((C_word)C_i_pairp(t1))){
t4=(C_word)C_slot(t1,C_fix(1));
t5=(C_word)C_u_fixnum_plus(t3,C_fix(1));
if(C_truep((C_word)C_i_pairp(t4))){
t6=(C_word)C_slot(t4,C_fix(1));
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_u_fixnum_plus(t5,C_fix(1));
t9=(C_word)C_eqp(t6,t7);
if(C_truep(t9)){
return(C_SCHEME_FALSE);}
else{
t11=t6;
t12=t7;
t13=t8;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}
else{
return(t5);}}
else{
return(t3);}}

/* list= in k920 */
static void C_ccall f_1269(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1269r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1269r(t0,t1,t2,t3);}}

static void C_ccall f_1269r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t4=(C_word)C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_u_i_car(t3);
t6=(C_word)C_slot(t3,C_fix(1));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1289,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_1289(t10,t1,t5,t6);}}

/* lp1 in list= in k920 */
static void C_fcall f_1289(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1289,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_u_i_car(t3);
t6=(C_word)C_slot(t3,C_fix(1));
t7=(C_word)C_eqp(t2,t5);
if(C_truep(t7)){
/* srfi-1.scm: 465  lp1 */
t12=t1;
t13=t5;
t14=t6;
t1=t12;
t2=t13;
t3=t14;
goto loop;}
else{
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1316,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_1316(t11,t1,t2,t5);}}}

/* lp2 in lp1 in list= in k920 */
static void C_fcall f_1316(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1316,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_i_nullp(t3))){
/* srfi-1.scm: 469  lp1 */
t4=((C_word*)((C_word*)t0)[6])[1];
f_1289(t4,t1,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1344,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_u_i_car(t2);
t6=(C_word)C_u_i_car(t3);
/* srfi-1.scm: 471  = */
t7=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t5,t6);}}}

/* k1342 in lp2 in lp1 in list= in k920 */
static void C_ccall f_1344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-1.scm: 472  lp2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1316(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* null-list? in k920 */
static void C_ccall f_1266(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1266,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_null_list_p(t2));}

/* not-pair? in k920 */
static void C_ccall f_1263(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1263,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not_pair_p(t2));}

/* circular-list? in k920 */
static void C_ccall f_1224(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1224,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1230,tmp=(C_word)a,a+=2,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1230(t2,t2));}

/* lp in circular-list? in k920 */
static C_word C_fcall f_1230(C_word t1,C_word t2){
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
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_eqp(t4,t5);
if(C_truep(t6)){
return(t6);}
else{
t8=t4;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}

/* dotted-list? in k920 */
static void C_ccall f_1167(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1167,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1173,tmp=(C_word)a,a+=2,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1173(t2,t2));}

/* lp in dotted-list? in k920 */
static C_word C_fcall f_1173(C_word t1,C_word t2){
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
if(C_truep((C_word)C_i_pairp(t1))){
t3=(C_word)C_slot(t1,C_fix(1));
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_eqp(t4,t5);
if(C_truep(t6)){
return(C_SCHEME_FALSE);}
else{
t10=t4;
t11=t5;
t1=t10;
t2=t11;
goto loop;}}
else{
t4=(C_word)C_i_nullp(t3);
return((C_word)C_i_not(t4));}}
else{
t3=(C_word)C_i_nullp(t1);
return((C_word)C_i_not(t3));}}

/* circular-list in k920 */
static void C_ccall f_1153(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1153r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1153r(t0,t1,t2,t3);}}

static void C_ccall f_1153r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1164,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 402  last-pair */
t6=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k1162 in circular-list in k920 */
static void C_ccall f_1164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(t1,C_fix(1),((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}

/* iota in k920 */
static void C_ccall f_1076(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1076r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1076r(t0,t1,t2,t3);}}

static void C_ccall f_1076r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1080,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_lessp(t2,C_fix(0)))){
/* srfi-1.scm: 338  ##sys#error */
t5=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[7],lf[8],*((C_word*)lf[7]+1),t2);}
else{
t5=t4;
f_1080(2,t5,C_SCHEME_UNDEFINED);}}

/* k1078 in iota in k920 */
static void C_ccall f_1080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1080,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?C_fix(0):(C_word)C_u_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1086,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t6=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t7=(C_word)C_i_nullp(t6);
t8=t5;
f_1086(t8,(C_truep(t7)?C_fix(1):(C_word)C_u_i_car(t6)));}
else{
t6=t5;
f_1086(t6,C_fix(1));}}

/* k1084 in k1078 in iota in k920 */
static void C_fcall f_1086(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1086,NULL,2,t0,t1);}
t2=(C_word)C_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_a_i_times(&a,2,t2,t1);
t4=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[3],t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1094,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1094(t8,((C_word*)t0)[2],((C_word*)t0)[4],t4,C_SCHEME_END_OF_LIST);}

/* do36 in k1084 in k1078 in iota in k920 */
static void C_fcall f_1094(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
a=C_alloc(11);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1094,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_less_or_equalp(t2,C_fix(0)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_a_i_minus(&a,2,t2,C_fix(1));
t6=(C_word)C_a_i_minus(&a,2,t3,((C_word*)t0)[3]);
t7=(C_word)C_a_i_cons(&a,2,t3,t4);
t9=t1;
t10=t5;
t11=t6;
t12=t7;
t1=t9;
t2=t10;
t3=t11;
t4=t12;
goto loop;}}

/* list-copy in k920 */
static void C_ccall f_1046(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1046,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1052,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_1052(t6,t1,t2);}

/* recur in list-copy in k920 */
static void C_fcall f_1052(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1052,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1070,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(t2,C_fix(1));
/* srfi-1.scm: 330  recur */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1068 in recur in list-copy in k920 */
static void C_ccall f_1070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1070,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* cons* in k920 */
static void C_ccall f_1016(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1016r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1016r(t0,t1,t2,t3);}}

static void C_ccall f_1016r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1022,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_1022(t7,t1,t2,t3);}

/* recur in cons* in k920 */
static void C_fcall f_1022(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1022,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1036,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_u_i_car(t3);
t6=(C_word)C_slot(t3,C_fix(1));
/* srfi-1.scm: 322  recur */
t8=t4;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k1034 in recur in cons* in k920 */
static void C_ccall f_1036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1036,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* list-tabulate in k920 */
static void C_ccall f_982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_982,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_992,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_992(t8,t1,t4,C_SCHEME_END_OF_LIST);}

/* do12 in list-tabulate in k920 */
static void C_fcall f_992(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_992,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1014,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 311  proc */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}

/* k1012 in do12 in list-tabulate in k920 */
static void C_ccall f_1014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1014,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_992(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* make-list in k920 */
static void C_ccall f_930(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_930r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_930r(t0,t1,t2,t3);}}

static void C_ccall f_930r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_934,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_934(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_934(2,t6,(C_word)C_u_i_car(t3));}
else{
t6=(C_word)C_a_i_cons(&a,2,t2,t3);
/* srfi-1.scm: 294  ##sys#error */
t7=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t4,lf[1],lf[3],t6);}}}

/* k932 in make-list in k920 */
static void C_ccall f_934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_934,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_939,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_939(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* do5 in k932 in make-list in k920 */
static void C_fcall f_939(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_939,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t7=t1;
t8=t4;
t9=t5;
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* xcons in k920 */
static void C_ccall f_924(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_924,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t3,t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[418] = {
{"toplevelsrfi-1.scm",(void*)C_srfi_1_toplevel},
{"f_922srfi-1.scm",(void*)f_922},
{"f_5463srfi-1.scm",(void*)f_5463},
{"f_5470srfi-1.scm",(void*)f_5470},
{"f_5487srfi-1.scm",(void*)f_5487},
{"f_5497srfi-1.scm",(void*)f_5497},
{"f_5495srfi-1.scm",(void*)f_5495},
{"f_5423srfi-1.scm",(void*)f_5423},
{"f_5430srfi-1.scm",(void*)f_5430},
{"f_5447srfi-1.scm",(void*)f_5447},
{"f_5457srfi-1.scm",(void*)f_5457},
{"f_5455srfi-1.scm",(void*)f_5455},
{"f_5365srfi-1.scm",(void*)f_5365},
{"f_5371srfi-1.scm",(void*)f_5371},
{"f_5383srfi-1.scm",(void*)f_5383},
{"f_5407srfi-1.scm",(void*)f_5407},
{"f_5414srfi-1.scm",(void*)f_5414},
{"f_5377srfi-1.scm",(void*)f_5377},
{"f_5311srfi-1.scm",(void*)f_5311},
{"f_5317srfi-1.scm",(void*)f_5317},
{"f_5329srfi-1.scm",(void*)f_5329},
{"f_5353srfi-1.scm",(void*)f_5353},
{"f_5360srfi-1.scm",(void*)f_5360},
{"f_5323srfi-1.scm",(void*)f_5323},
{"f_5274srfi-1.scm",(void*)f_5274},
{"f_5278srfi-1.scm",(void*)f_5278},
{"f_5295srfi-1.scm",(void*)f_5295},
{"f_5301srfi-1.scm",(void*)f_5301},
{"f_5309srfi-1.scm",(void*)f_5309},
{"f_5237srfi-1.scm",(void*)f_5237},
{"f_5241srfi-1.scm",(void*)f_5241},
{"f_5258srfi-1.scm",(void*)f_5258},
{"f_5264srfi-1.scm",(void*)f_5264},
{"f_5272srfi-1.scm",(void*)f_5272},
{"f_5204srfi-1.scm",(void*)f_5204},
{"f_5208srfi-1.scm",(void*)f_5208},
{"f_5214srfi-1.scm",(void*)f_5214},
{"f_5225srfi-1.scm",(void*)f_5225},
{"f_5231srfi-1.scm",(void*)f_5231},
{"f_5171srfi-1.scm",(void*)f_5171},
{"f_5175srfi-1.scm",(void*)f_5175},
{"f_5181srfi-1.scm",(void*)f_5181},
{"f_5192srfi-1.scm",(void*)f_5192},
{"f_5198srfi-1.scm",(void*)f_5198},
{"f_5120srfi-1.scm",(void*)f_5120},
{"f_5126srfi-1.scm",(void*)f_5126},
{"f_5150srfi-1.scm",(void*)f_5150},
{"f_5165srfi-1.scm",(void*)f_5165},
{"f_5160srfi-1.scm",(void*)f_5160},
{"f_5072srfi-1.scm",(void*)f_5072},
{"f_5078srfi-1.scm",(void*)f_5078},
{"f_5102srfi-1.scm",(void*)f_5102},
{"f_5114srfi-1.scm",(void*)f_5114},
{"f_5109srfi-1.scm",(void*)f_5109},
{"f_5054srfi-1.scm",(void*)f_5054},
{"f_5060srfi-1.scm",(void*)f_5060},
{"f_5067srfi-1.scm",(void*)f_5067},
{"f_4990srfi-1.scm",(void*)f_4990},
{"f_5010srfi-1.scm",(void*)f_5010},
{"f_5041srfi-1.scm",(void*)f_5041},
{"f_5032srfi-1.scm",(void*)f_5032},
{"f_4932srfi-1.scm",(void*)f_4932},
{"f_4952srfi-1.scm",(void*)f_4952},
{"f_4974srfi-1.scm",(void*)f_4974},
{"f_4920srfi-1.scm",(void*)f_4920},
{"f_4926srfi-1.scm",(void*)f_4926},
{"f_4896srfi-1.scm",(void*)f_4896},
{"f_4902srfi-1.scm",(void*)f_4902},
{"f_4809srfi-1.scm",(void*)f_4809},
{"f_4862srfi-1.scm",(void*)f_4862},
{"f_4875srfi-1.scm",(void*)f_4875},
{"f_4825srfi-1.scm",(void*)f_4825},
{"f_4837srfi-1.scm",(void*)f_4837},
{"f_4850srfi-1.scm",(void*)f_4850},
{"f_4831srfi-1.scm",(void*)f_4831},
{"f_4692srfi-1.scm",(void*)f_4692},
{"f_4780srfi-1.scm",(void*)f_4780},
{"f_4796srfi-1.scm",(void*)f_4796},
{"f_4714srfi-1.scm",(void*)f_4714},
{"f_4726srfi-1.scm",(void*)f_4726},
{"f_4738srfi-1.scm",(void*)f_4738},
{"f_4751srfi-1.scm",(void*)f_4751},
{"f_4732srfi-1.scm",(void*)f_4732},
{"f_4704srfi-1.scm",(void*)f_4704},
{"f_4575srfi-1.scm",(void*)f_4575},
{"f_4659srfi-1.scm",(void*)f_4659},
{"f_4672srfi-1.scm",(void*)f_4672},
{"f_4597srfi-1.scm",(void*)f_4597},
{"f_4609srfi-1.scm",(void*)f_4609},
{"f_4621srfi-1.scm",(void*)f_4621},
{"f_4631srfi-1.scm",(void*)f_4631},
{"f_4615srfi-1.scm",(void*)f_4615},
{"f_4587srfi-1.scm",(void*)f_4587},
{"f_4559srfi-1.scm",(void*)f_4559},
{"f_4565srfi-1.scm",(void*)f_4565},
{"f_4573srfi-1.scm",(void*)f_4573},
{"f_4543srfi-1.scm",(void*)f_4543},
{"f_4549srfi-1.scm",(void*)f_4549},
{"f_4557srfi-1.scm",(void*)f_4557},
{"f_4479srfi-1.scm",(void*)f_4479},
{"f_4537srfi-1.scm",(void*)f_4537},
{"f_4489srfi-1.scm",(void*)f_4489},
{"f_4504srfi-1.scm",(void*)f_4504},
{"f_4520srfi-1.scm",(void*)f_4520},
{"f_4495srfi-1.scm",(void*)f_4495},
{"f_4426srfi-1.scm",(void*)f_4426},
{"f_4432srfi-1.scm",(void*)f_4432},
{"f_4451srfi-1.scm",(void*)f_4451},
{"f_4466srfi-1.scm",(void*)f_4466},
{"f_4456srfi-1.scm",(void*)f_4456},
{"f_4368srfi-1.scm",(void*)f_4368},
{"f_4420srfi-1.scm",(void*)f_4420},
{"f_4378srfi-1.scm",(void*)f_4378},
{"f_4387srfi-1.scm",(void*)f_4387},
{"f_4403srfi-1.scm",(void*)f_4403},
{"f_4381srfi-1.scm",(void*)f_4381},
{"f_4336srfi-1.scm",(void*)f_4336},
{"f_4342srfi-1.scm",(void*)f_4342},
{"f_4355srfi-1.scm",(void*)f_4355},
{"f_4301srfi-1.scm",(void*)f_4301},
{"f_4307srfi-1.scm",(void*)f_4307},
{"f_4323srfi-1.scm",(void*)f_4323},
{"f_4330srfi-1.scm",(void*)f_4330},
{"f_4265srfi-1.scm",(void*)f_4265},
{"f_4271srfi-1.scm",(void*)f_4271},
{"f_4284srfi-1.scm",(void*)f_4284},
{"f_4253srfi-1.scm",(void*)f_4253},
{"f_4257srfi-1.scm",(void*)f_4257},
{"f_4224srfi-1.scm",(void*)f_4224},
{"f_4233srfi-1.scm",(void*)f_4233},
{"f_4241srfi-1.scm",(void*)f_4241},
{"f_4195srfi-1.scm",(void*)f_4195},
{"f_4204srfi-1.scm",(void*)f_4204},
{"f_4212srfi-1.scm",(void*)f_4212},
{"f_4175srfi-1.scm",(void*)f_4175},
{"f_4181srfi-1.scm",(void*)f_4181},
{"f_4165srfi-1.scm",(void*)f_4165},
{"f_4140srfi-1.scm",(void*)f_4140},
{"f_4149srfi-1.scm",(void*)f_4149},
{"f_4094srfi-1.scm",(void*)f_4094},
{"f_4103srfi-1.scm",(void*)f_4103},
{"f_4132srfi-1.scm",(void*)f_4132},
{"f_4119srfi-1.scm",(void*)f_4119},
{"f_4048srfi-1.scm",(void*)f_4048},
{"f_4057srfi-1.scm",(void*)f_4057},
{"f_4086srfi-1.scm",(void*)f_4086},
{"f_4073srfi-1.scm",(void*)f_4073},
{"f_4027srfi-1.scm",(void*)f_4027},
{"f_4036srfi-1.scm",(void*)f_4036},
{"f_4002srfi-1.scm",(void*)f_4002},
{"f_4011srfi-1.scm",(void*)f_4011},
{"f_4019srfi-1.scm",(void*)f_4019},
{"f_3977srfi-1.scm",(void*)f_3977},
{"f_3986srfi-1.scm",(void*)f_3986},
{"f_3994srfi-1.scm",(void*)f_3994},
{"f_3961srfi-1.scm",(void*)f_3961},
{"f_3967srfi-1.scm",(void*)f_3967},
{"f_3975srfi-1.scm",(void*)f_3975},
{"f_3945srfi-1.scm",(void*)f_3945},
{"f_3951srfi-1.scm",(void*)f_3951},
{"f_3959srfi-1.scm",(void*)f_3959},
{"f_3733srfi-1.scm",(void*)f_3733},
{"f_3839srfi-1.scm",(void*)f_3839},
{"f_3898srfi-1.scm",(void*)f_3898},
{"f_3914srfi-1.scm",(void*)f_3914},
{"f_3917srfi-1.scm",(void*)f_3917},
{"f_3848srfi-1.scm",(void*)f_3848},
{"f_3864srfi-1.scm",(void*)f_3864},
{"f_3874srfi-1.scm",(void*)f_3874},
{"f_3790srfi-1.scm",(void*)f_3790},
{"f_3796srfi-1.scm",(void*)f_3796},
{"f_3809srfi-1.scm",(void*)f_3809},
{"f_3745srfi-1.scm",(void*)f_3745},
{"f_3751srfi-1.scm",(void*)f_3751},
{"f_3764srfi-1.scm",(void*)f_3764},
{"f_3665srfi-1.scm",(void*)f_3665},
{"f_3671srfi-1.scm",(void*)f_3671},
{"f_3698srfi-1.scm",(void*)f_3698},
{"f_3705srfi-1.scm",(void*)f_3705},
{"f_3692srfi-1.scm",(void*)f_3692},
{"f_3544srfi-1.scm",(void*)f_3544},
{"f_3550srfi-1.scm",(void*)f_3550},
{"f_3659srfi-1.scm",(void*)f_3659},
{"f_3651srfi-1.scm",(void*)f_3651},
{"f_3605srfi-1.scm",(void*)f_3605},
{"f_3611srfi-1.scm",(void*)f_3611},
{"f_3624srfi-1.scm",(void*)f_3624},
{"f_3572srfi-1.scm",(void*)f_3572},
{"f_3585srfi-1.scm",(void*)f_3585},
{"f_3502srfi-1.scm",(void*)f_3502},
{"f_3508srfi-1.scm",(void*)f_3508},
{"f_3527srfi-1.scm",(void*)f_3527},
{"f_3530srfi-1.scm",(void*)f_3530},
{"f_3425srfi-1.scm",(void*)f_3425},
{"f_3475srfi-1.scm",(void*)f_3475},
{"f_3488srfi-1.scm",(void*)f_3488},
{"f_3495srfi-1.scm",(void*)f_3495},
{"f_3441srfi-1.scm",(void*)f_3441},
{"f_3453srfi-1.scm",(void*)f_3453},
{"f_3463srfi-1.scm",(void*)f_3463},
{"f_3470srfi-1.scm",(void*)f_3470},
{"f_3447srfi-1.scm",(void*)f_3447},
{"f_3340srfi-1.scm",(void*)f_3340},
{"f_3396srfi-1.scm",(void*)f_3396},
{"f_3406srfi-1.scm",(void*)f_3406},
{"f_3409srfi-1.scm",(void*)f_3409},
{"f_3356srfi-1.scm",(void*)f_3356},
{"f_3368srfi-1.scm",(void*)f_3368},
{"f_3378srfi-1.scm",(void*)f_3378},
{"f_3388srfi-1.scm",(void*)f_3388},
{"f_3362srfi-1.scm",(void*)f_3362},
{"f_3268srfi-1.scm",(void*)f_3268},
{"f_3326srfi-1.scm",(void*)f_3326},
{"f_3334srfi-1.scm",(void*)f_3334},
{"f_3280srfi-1.scm",(void*)f_3280},
{"f_3298srfi-1.scm",(void*)f_3298},
{"f_3313srfi-1.scm",(void*)f_3313},
{"f_3292srfi-1.scm",(void*)f_3292},
{"f_2483srfi-1.scm",(void*)f_2483},
{"f_2501srfi-1.scm",(void*)f_2501},
{"f_2513srfi-1.scm",(void*)f_2513},
{"f_2525srfi-1.scm",(void*)f_2525},
{"f_2519srfi-1.scm",(void*)f_2519},
{"f_2507srfi-1.scm",(void*)f_2507},
{"f_2495srfi-1.scm",(void*)f_2495},
{"f_3272srfi-1.scm",(void*)f_3272},
{"f_3209srfi-1.scm",(void*)f_3209},
{"f_3246srfi-1.scm",(void*)f_3246},
{"f_3259srfi-1.scm",(void*)f_3259},
{"f_3225srfi-1.scm",(void*)f_3225},
{"f_3229srfi-1.scm",(void*)f_3229},
{"f_3238srfi-1.scm",(void*)f_3238},
{"f_3100srfi-1.scm",(void*)f_3100},
{"f_3182srfi-1.scm",(void*)f_3182},
{"f_3186srfi-1.scm",(void*)f_3186},
{"f_3199srfi-1.scm",(void*)f_3199},
{"f_3122srfi-1.scm",(void*)f_3122},
{"f_3134srfi-1.scm",(void*)f_3134},
{"f_3138srfi-1.scm",(void*)f_3138},
{"f_3149srfi-1.scm",(void*)f_3149},
{"f_3163srfi-1.scm",(void*)f_3163},
{"f_3143srfi-1.scm",(void*)f_3143},
{"f_3112srfi-1.scm",(void*)f_3112},
{"f_3094srfi-1.scm",(void*)f_3094},
{"f_3088srfi-1.scm",(void*)f_3088},
{"f_3044srfi-1.scm",(void*)f_3044},
{"f_3064srfi-1.scm",(void*)f_3064},
{"f_3078srfi-1.scm",(void*)f_3078},
{"f_3024srfi-1.scm",(void*)f_3024},
{"f_2959srfi-1.scm",(void*)f_2959},
{"f_3005srfi-1.scm",(void*)f_3005},
{"f_3022srfi-1.scm",(void*)f_3022},
{"f_2975srfi-1.scm",(void*)f_2975},
{"f_2979srfi-1.scm",(void*)f_2979},
{"f_2996srfi-1.scm",(void*)f_2996},
{"f_2992srfi-1.scm",(void*)f_2992},
{"f_2893srfi-1.scm",(void*)f_2893},
{"f_2939srfi-1.scm",(void*)f_2939},
{"f_2953srfi-1.scm",(void*)f_2953},
{"f_2909srfi-1.scm",(void*)f_2909},
{"f_2913srfi-1.scm",(void*)f_2913},
{"f_2934srfi-1.scm",(void*)f_2934},
{"f_2926srfi-1.scm",(void*)f_2926},
{"f_2828srfi-1.scm",(void*)f_2828},
{"f_2870srfi-1.scm",(void*)f_2870},
{"f_2887srfi-1.scm",(void*)f_2887},
{"f_2844srfi-1.scm",(void*)f_2844},
{"f_2848srfi-1.scm",(void*)f_2848},
{"f_2865srfi-1.scm",(void*)f_2865},
{"f_2286srfi-1.scm",(void*)f_2286},
{"f_2304srfi-1.scm",(void*)f_2304},
{"f_2861srfi-1.scm",(void*)f_2861},
{"f_2757srfi-1.scm",(void*)f_2757},
{"f_2804srfi-1.scm",(void*)f_2804},
{"f_2822srfi-1.scm",(void*)f_2822},
{"f_2773srfi-1.scm",(void*)f_2773},
{"f_2785srfi-1.scm",(void*)f_2785},
{"f_2799srfi-1.scm",(void*)f_2799},
{"f_2779srfi-1.scm",(void*)f_2779},
{"f_2399srfi-1.scm",(void*)f_2399},
{"f_2405srfi-1.scm",(void*)f_2405},
{"f_2423srfi-1.scm",(void*)f_2423},
{"f_2444srfi-1.scm",(void*)f_2444},
{"f_2456srfi-1.scm",(void*)f_2456},
{"f_2450srfi-1.scm",(void*)f_2450},
{"f_2438srfi-1.scm",(void*)f_2438},
{"f_2417srfi-1.scm",(void*)f_2417},
{"f_2675srfi-1.scm",(void*)f_2675},
{"f_2733srfi-1.scm",(void*)f_2733},
{"f_2740srfi-1.scm",(void*)f_2740},
{"f_2747srfi-1.scm",(void*)f_2747},
{"f_2755srfi-1.scm",(void*)f_2755},
{"f_2751srfi-1.scm",(void*)f_2751},
{"f_2699srfi-1.scm",(void*)f_2699},
{"f_2706srfi-1.scm",(void*)f_2706},
{"f_2716srfi-1.scm",(void*)f_2716},
{"f_2724srfi-1.scm",(void*)f_2724},
{"f_2720srfi-1.scm",(void*)f_2720},
{"f_2635srfi-1.scm",(void*)f_2635},
{"f_2645srfi-1.scm",(void*)f_2645},
{"f_2652srfi-1.scm",(void*)f_2652},
{"f_2659srfi-1.scm",(void*)f_2659},
{"f_2667srfi-1.scm",(void*)f_2667},
{"f_2542srfi-1.scm",(void*)f_2542},
{"f_2605srfi-1.scm",(void*)f_2605},
{"f_2626srfi-1.scm",(void*)f_2626},
{"f_2554srfi-1.scm",(void*)f_2554},
{"f_2572srfi-1.scm",(void*)f_2572},
{"f_2593srfi-1.scm",(void*)f_2593},
{"f_2566srfi-1.scm",(void*)f_2566},
{"f_2313srfi-1.scm",(void*)f_2313},
{"f_2319srfi-1.scm",(void*)f_2319},
{"f_2325srfi-1.scm",(void*)f_2325},
{"f_2343srfi-1.scm",(void*)f_2343},
{"f_2364srfi-1.scm",(void*)f_2364},
{"f_2376srfi-1.scm",(void*)f_2376},
{"f_2370srfi-1.scm",(void*)f_2370},
{"f_2358srfi-1.scm",(void*)f_2358},
{"f_2337srfi-1.scm",(void*)f_2337},
{"f_2232srfi-1.scm",(void*)f_2232},
{"f_2238srfi-1.scm",(void*)f_2238},
{"f_2244srfi-1.scm",(void*)f_2244},
{"f_2274srfi-1.scm",(void*)f_2274},
{"f_2226srfi-1.scm",(void*)f_2226},
{"f_2220srfi-1.scm",(void*)f_2220},
{"f_2196srfi-1.scm",(void*)f_2196},
{"f_2202srfi-1.scm",(void*)f_2202},
{"f_2166srfi-1.scm",(void*)f_2166},
{"f_2172srfi-1.scm",(void*)f_2172},
{"f_2090srfi-1.scm",(void*)f_2090},
{"f_2096srfi-1.scm",(void*)f_2096},
{"f_2125srfi-1.scm",(void*)f_2125},
{"f_2127srfi-1.scm",(void*)f_2127},
{"f_2150srfi-1.scm",(void*)f_2150},
{"f_2006srfi-1.scm",(void*)f_2006},
{"f_2012srfi-1.scm",(void*)f_2012},
{"f_2040srfi-1.scm",(void*)f_2040},
{"f_2030srfi-1.scm",(void*)f_2030},
{"f_1934srfi-1.scm",(void*)f_1934},
{"f_1940srfi-1.scm",(void*)f_1940},
{"f_1968srfi-1.scm",(void*)f_1968},
{"f_1958srfi-1.scm",(void*)f_1958},
{"f_1870srfi-1.scm",(void*)f_1870},
{"f_1876srfi-1.scm",(void*)f_1876},
{"f_1904srfi-1.scm",(void*)f_1904},
{"f_1894srfi-1.scm",(void*)f_1894},
{"f_1814srfi-1.scm",(void*)f_1814},
{"f_1820srfi-1.scm",(void*)f_1820},
{"f_1848srfi-1.scm",(void*)f_1848},
{"f_1838srfi-1.scm",(void*)f_1838},
{"f_1808srfi-1.scm",(void*)f_1808},
{"f_1787srfi-1.scm",(void*)f_1787},
{"f_1793srfi-1.scm",(void*)f_1793},
{"f_1777srfi-1.scm",(void*)f_1777},
{"f_1785srfi-1.scm",(void*)f_1785},
{"f_1749srfi-1.scm",(void*)f_1749},
{"f_1762srfi-1.scm",(void*)f_1762},
{"f_1700srfi-1.scm",(void*)f_1700},
{"f_1706srfi-1.scm",(void*)f_1706},
{"f_1735srfi-1.scm",(void*)f_1735},
{"f_1721srfi-1.scm",(void*)f_1721},
{"f_1658srfi-1.scm",(void*)f_1658},
{"f_1662srfi-1.scm",(void*)f_1662},
{"f_1677srfi-1.scm",(void*)f_1677},
{"f_1620srfi-1.scm",(void*)f_1620},
{"f_1628srfi-1.scm",(void*)f_1628},
{"f_1630srfi-1.scm",(void*)f_1630},
{"f_1648srfi-1.scm",(void*)f_1648},
{"f_1590srfi-1.scm",(void*)f_1590},
{"f_1598srfi-1.scm",(void*)f_1598},
{"f_1600srfi-1.scm",(void*)f_1600},
{"f_1570srfi-1.scm",(void*)f_1570},
{"f_1584srfi-1.scm",(void*)f_1584},
{"f_1544srfi-1.scm",(void*)f_1544},
{"f_1550srfi-1.scm",(void*)f_1550},
{"f_1510srfi-1.scm",(void*)f_1510},
{"f_1516srfi-1.scm",(void*)f_1516},
{"f_1534srfi-1.scm",(void*)f_1534},
{"f_1496srfi-1.scm",(void*)f_1496},
{"f_1482srfi-1.scm",(void*)f_1482},
{"f_1468srfi-1.scm",(void*)f_1468},
{"f_1458srfi-1.scm",(void*)f_1458},
{"f_1448srfi-1.scm",(void*)f_1448},
{"f_1438srfi-1.scm",(void*)f_1438},
{"f_1428srfi-1.scm",(void*)f_1428},
{"f_1418srfi-1.scm",(void*)f_1418},
{"f_1369srfi-1.scm",(void*)f_1369},
{"f_1375srfi-1.scm",(void*)f_1375},
{"f_1269srfi-1.scm",(void*)f_1269},
{"f_1289srfi-1.scm",(void*)f_1289},
{"f_1316srfi-1.scm",(void*)f_1316},
{"f_1344srfi-1.scm",(void*)f_1344},
{"f_1266srfi-1.scm",(void*)f_1266},
{"f_1263srfi-1.scm",(void*)f_1263},
{"f_1224srfi-1.scm",(void*)f_1224},
{"f_1230srfi-1.scm",(void*)f_1230},
{"f_1167srfi-1.scm",(void*)f_1167},
{"f_1173srfi-1.scm",(void*)f_1173},
{"f_1153srfi-1.scm",(void*)f_1153},
{"f_1164srfi-1.scm",(void*)f_1164},
{"f_1076srfi-1.scm",(void*)f_1076},
{"f_1080srfi-1.scm",(void*)f_1080},
{"f_1086srfi-1.scm",(void*)f_1086},
{"f_1094srfi-1.scm",(void*)f_1094},
{"f_1046srfi-1.scm",(void*)f_1046},
{"f_1052srfi-1.scm",(void*)f_1052},
{"f_1070srfi-1.scm",(void*)f_1070},
{"f_1016srfi-1.scm",(void*)f_1016},
{"f_1022srfi-1.scm",(void*)f_1022},
{"f_1036srfi-1.scm",(void*)f_1036},
{"f_982srfi-1.scm",(void*)f_982},
{"f_992srfi-1.scm",(void*)f_992},
{"f_1014srfi-1.scm",(void*)f_1014},
{"f_930srfi-1.scm",(void*)f_930},
{"f_934srfi-1.scm",(void*)f_934},
{"f_939srfi-1.scm",(void*)f_939},
{"f_924srfi-1.scm",(void*)f_924},
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
