/* Generated from srfi-1.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:15
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: srfi-1.scm -output-file srfi-1.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: srfi_1
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[411];


C_noret_decl(C_srfi_1_toplevel)
C_externexport void C_ccall C_srfi_1_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5531)
static void C_ccall f_5531(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5474)
static void C_ccall f_5474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5491)
static void C_ccall f_5491(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5501)
static void C_ccall f_5501(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5499)
static void C_ccall f_5499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5415)
static void C_ccall f_5415(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5451)
static void C_ccall f_5451(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5421)
static void C_ccall f_5421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5361)
static void C_ccall f_5361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5373)
static void C_ccall f_5373(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5397)
static void C_ccall f_5397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5404)
static void C_ccall f_5404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5367)
static void C_ccall f_5367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5318)
static void C_ccall f_5318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5318)
static void C_ccall f_5318r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5322)
static void C_ccall f_5322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5339)
static void C_ccall f_5339(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5345)
static void C_ccall f_5345(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5353)
static void C_ccall f_5353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5281)
static void C_ccall f_5281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5281)
static void C_ccall f_5281r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5285)
static void C_ccall f_5285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5302)
static void C_ccall f_5302(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5308)
static void C_ccall f_5308(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5316)
static void C_ccall f_5316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5252)
static void C_ccall f_5252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5275)
static void C_ccall f_5275(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5215)
static void C_ccall f_5215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5215)
static void C_ccall f_5215r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5219)
static void C_ccall f_5219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5225)
static void C_ccall f_5225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5242)
static void C_ccall f_5242(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5170)
static void C_ccall f_5170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5194)
static void C_ccall f_5194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5204)
static void C_ccall f_5204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5116)
static void C_ccall f_5116(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5116)
static void C_ccall f_5116r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5146)
static void C_ccall f_5146(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5158)
static void C_ccall f_5158(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5153)
static void C_ccall f_5153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5111)
static void C_ccall f_5111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5054)
static void C_fcall f_5054(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5085)
static void C_ccall f_5085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4976)
static void C_ccall f_4976(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4976)
static void C_ccall f_4976r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4996)
static void C_fcall f_4996(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5018)
static void C_ccall f_5018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4964)
static void C_fcall f_4964(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4970)
static void C_ccall f_4970(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4946)
static C_word C_fcall f_4946(C_word t0,C_word t1);
C_noret_decl(f_4853)
static void C_ccall f_4853(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4853)
static void C_ccall f_4853r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4906)
static void C_fcall f_4906(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4869)
static void C_fcall f_4869(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4875)
static void C_ccall f_4875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4824)
static void C_fcall f_4824(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4758)
static void C_ccall f_4758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4770)
static void C_fcall f_4770(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4782)
static void C_ccall f_4782(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4776)
static void C_ccall f_4776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4748)
static void C_ccall f_4748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4619)
static void C_ccall f_4619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4619)
static void C_ccall f_4619r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4703)
static void C_fcall f_4703(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4653)
static void C_fcall f_4653(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4665)
static void C_ccall f_4665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4675)
static void C_ccall f_4675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4659)
static void C_ccall f_4659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4631)
static void C_ccall f_4631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4603)
static void C_ccall f_4603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4593)
static void C_ccall f_4593(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4601)
static void C_ccall f_4601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4523)
static void C_ccall f_4523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4533)
static void C_fcall f_4533(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4548)
static void C_fcall f_4548(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4564)
static void C_ccall f_4564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4539)
static void C_ccall f_4539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4470)
static void C_ccall f_4470(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4476)
static void C_fcall f_4476(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4495)
static void C_ccall f_4495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4500)
static void C_ccall f_4500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4412)
static void C_ccall f_4412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4422)
static void C_fcall f_4422(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4431)
static void C_fcall f_4431(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4447)
static void C_ccall f_4447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4425)
static void C_ccall f_4425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4380)
static void C_ccall f_4380(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4386)
static void C_fcall f_4386(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4351)
static void C_fcall f_4351(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4367)
static void C_ccall f_4367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4374)
static void C_ccall f_4374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4315)
static void C_fcall f_4315(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4328)
static void C_ccall f_4328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4285)
static void C_ccall f_4285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4248)
static void C_ccall f_4248(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4256)
static void C_ccall f_4256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4147)
static void C_fcall f_4147(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4176)
static void C_ccall f_4176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4163)
static void C_ccall f_4163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4101)
static void C_fcall f_4101(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4080)
static void C_ccall f_4080(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4038)
static void C_ccall f_4038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4019)
static void C_ccall f_4019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4003)
static void C_ccall f_4003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3942)
static void C_fcall f_3942(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3958)
static void C_ccall f_3958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3892)
static void C_fcall f_3892(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3834)
static void C_fcall f_3834(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3840)
static void C_fcall f_3840(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3789)
static void C_fcall f_3789(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3795)
static void C_fcall f_3795(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3715)
static void C_fcall f_3715(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3594)
static void C_fcall f_3594(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3649)
static void C_fcall f_3649(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3655)
static void C_fcall f_3655(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3616)
static void C_fcall f_3616(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3546)
static void C_ccall f_3546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3552)
static void C_fcall f_3552(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3469)
static void C_ccall f_3469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3469)
static void C_ccall f_3469r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3519)
static void C_fcall f_3519(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3532)
static void C_ccall f_3532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3485)
static void C_fcall f_3485(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3384)
static void C_ccall f_3384(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3384)
static void C_ccall f_3384r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3440)
static void C_fcall f_3440(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3453)
static void C_ccall f_3453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3400)
static void C_fcall f_3400(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3422)
static void C_ccall f_3422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3312)
static void C_ccall f_3312(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3312)
static void C_ccall f_3312r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3324)
static void C_fcall f_3324(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3357)
static void C_ccall f_3357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2527)
static void C_fcall f_2527(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3290)
static void C_fcall f_3290(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3269)
static void C_fcall f_3269(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3144)
static void C_fcall f_3144(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3226)
static void C_fcall f_3226(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3230)
static void C_ccall f_3230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3166)
static void C_ccall f_3166(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3178)
static void C_fcall f_3178(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3182)
static void C_ccall f_3182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3193)
static void C_ccall f_3193(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3108)
static void C_fcall f_3108(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3049)
static void C_fcall f_3049(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3019)
static void C_fcall f_3019(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2983)
static void C_fcall f_2983(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2997)
static void C_ccall f_2997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2953)
static void C_fcall f_2953(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2914)
static void C_fcall f_2914(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2888)
static void C_fcall f_2888(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2330)
static void C_fcall f_2330(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2848)
static void C_fcall f_2848(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2817)
static void C_fcall f_2817(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2449)
static void C_fcall f_2449(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2500)
static void C_ccall f_2500(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2494)
static void C_ccall f_2494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_2777)
static void C_fcall f_2777(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_fcall f_2743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_2689)
static void C_fcall f_2689(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2586)
static void C_ccall f_2586(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2586)
static void C_ccall f_2586r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2649)
static void C_fcall f_2649(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2598)
static void C_fcall f_2598(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2357)
static void C_fcall f_2357(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2369)
static void C_fcall f_2369(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2387)
static void C_ccall f_2387(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2276)
static void C_fcall f_2276(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2288)
static void C_fcall f_2288(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2246)
static C_word C_fcall f_2246(C_word t0,C_word t1);
C_noret_decl(f_2210)
static void C_ccall f_2210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2216)
static void C_fcall f_2216(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2140)
static void C_fcall f_2140(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2171)
static void C_fcall f_2171(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2056)
static void C_fcall f_2056(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2084)
static void C_ccall f_2084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2074)
static void C_ccall f_2074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1978)
static void C_ccall f_1978(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1984)
static void C_fcall f_1984(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1914)
static void C_ccall f_1914(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1920)
static void C_fcall f_1920(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1948)
static void C_ccall f_1948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1864)
static void C_fcall f_1864(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1892)
static void C_ccall f_1892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1837)
static C_word C_fcall f_1837(C_word t0);
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1747)
static void C_fcall f_1747(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static C_word C_fcall f_1715(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1666)
static void C_ccall f_1666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1668)
static void C_fcall f_1668(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1636)
static void C_ccall f_1636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1638)
static C_word C_fcall f_1638(C_word t0,C_word t1);
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1585)
static C_word C_fcall f_1585(C_word t0,C_word t1);
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1548)
static void C_fcall f_1548(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1522)
static void C_ccall f_1522(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1484)
static void C_ccall f_1484(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1464)
static void C_ccall f_1464(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1454)
static void C_ccall f_1454(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1401)
static C_word C_fcall f_1401(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1315)
static void C_fcall f_1315(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1342)
static void C_fcall f_1342(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1256)
static C_word C_fcall f_1256(C_word t0,C_word t1);
C_noret_decl(f_1193)
static void C_ccall f_1193(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1199)
static C_word C_fcall f_1199(C_word t0,C_word t1);
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1093)
static void C_ccall f_1093(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1093)
static void C_ccall f_1093r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1100)
static void C_ccall f_1100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1106)
static void C_fcall f_1106(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1120)
static void C_fcall f_1120(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1063)
static void C_ccall f_1063(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1069)
static void C_fcall f_1069(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1087)
static void C_ccall f_1087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1033)
static void C_ccall f_1033(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1033)
static void C_ccall f_1033r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1039)
static void C_fcall f_1039(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1009)
static void C_fcall f_1009(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1031)
static void C_ccall f_1031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_941)
static void C_ccall f_941(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_941)
static void C_ccall f_941r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_948)
static void C_ccall f_948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_953)
static void C_fcall f_953(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_935)
static void C_ccall f_935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;

C_noret_decl(trf_5054)
static void C_fcall trf_5054(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5054(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5054(t0,t1,t2,t3);}

C_noret_decl(trf_4996)
static void C_fcall trf_4996(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4996(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4996(t0,t1,t2,t3);}

C_noret_decl(trf_4964)
static void C_fcall trf_4964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4964(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4964(t0,t1,t2,t3);}

C_noret_decl(trf_4906)
static void C_fcall trf_4906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4906(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4906(t0,t1,t2,t3);}

C_noret_decl(trf_4869)
static void C_fcall trf_4869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4869(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4869(t0,t1,t2,t3);}

C_noret_decl(trf_4824)
static void C_fcall trf_4824(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4824(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4824(t0,t1,t2,t3);}

C_noret_decl(trf_4770)
static void C_fcall trf_4770(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4770(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4770(t0,t1,t2,t3);}

C_noret_decl(trf_4703)
static void C_fcall trf_4703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4703(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4703(t0,t1,t2,t3);}

C_noret_decl(trf_4653)
static void C_fcall trf_4653(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4653(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4653(t0,t1,t2,t3);}

C_noret_decl(trf_4533)
static void C_fcall trf_4533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4533(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4533(t0,t1);}

C_noret_decl(trf_4548)
static void C_fcall trf_4548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4548(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4548(t0,t1,t2,t3);}

C_noret_decl(trf_4476)
static void C_fcall trf_4476(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4476(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4476(t0,t1,t2);}

C_noret_decl(trf_4422)
static void C_fcall trf_4422(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4422(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4422(t0,t1);}

C_noret_decl(trf_4431)
static void C_fcall trf_4431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4431(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4431(t0,t1,t2,t3);}

C_noret_decl(trf_4386)
static void C_fcall trf_4386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4386(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4386(t0,t1,t2);}

C_noret_decl(trf_4351)
static void C_fcall trf_4351(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4351(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4351(t0,t1,t2);}

C_noret_decl(trf_4315)
static void C_fcall trf_4315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4315(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4315(t0,t1,t2);}

C_noret_decl(trf_4147)
static void C_fcall trf_4147(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4147(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4147(t0,t1,t2);}

C_noret_decl(trf_4101)
static void C_fcall trf_4101(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4101(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4101(t0,t1,t2);}

C_noret_decl(trf_3942)
static void C_fcall trf_3942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3942(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3942(t0,t1,t2,t3);}

C_noret_decl(trf_3892)
static void C_fcall trf_3892(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3892(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3892(t0,t1,t2,t3);}

C_noret_decl(trf_3834)
static void C_fcall trf_3834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3834(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3834(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3840)
static void C_fcall trf_3840(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3840(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3840(t0,t1,t2,t3);}

C_noret_decl(trf_3789)
static void C_fcall trf_3789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3789(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3789(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3795)
static void C_fcall trf_3795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3795(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3795(t0,t1,t2,t3);}

C_noret_decl(trf_3715)
static void C_fcall trf_3715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3715(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3715(t0,t1,t2);}

C_noret_decl(trf_3594)
static void C_fcall trf_3594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3594(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3594(t0,t1,t2);}

C_noret_decl(trf_3649)
static void C_fcall trf_3649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3649(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3649(t0,t1,t2,t3);}

C_noret_decl(trf_3655)
static void C_fcall trf_3655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3655(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3655(t0,t1,t2);}

C_noret_decl(trf_3616)
static void C_fcall trf_3616(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3616(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3616(t0,t1,t2,t3);}

C_noret_decl(trf_3552)
static void C_fcall trf_3552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3552(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3552(t0,t1,t2);}

C_noret_decl(trf_3519)
static void C_fcall trf_3519(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3519(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3519(t0,t1,t2);}

C_noret_decl(trf_3485)
static void C_fcall trf_3485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3485(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3485(t0,t1,t2);}

C_noret_decl(trf_3440)
static void C_fcall trf_3440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3440(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3440(t0,t1,t2);}

C_noret_decl(trf_3400)
static void C_fcall trf_3400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3400(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3400(t0,t1,t2);}

C_noret_decl(trf_3324)
static void C_fcall trf_3324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3324(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3324(t0,t1,t2,t3);}

C_noret_decl(trf_2527)
static void C_fcall trf_2527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2527(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2527(t0,t1,t2);}

C_noret_decl(trf_3290)
static void C_fcall trf_3290(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3290(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3290(t0,t1,t2);}

C_noret_decl(trf_3269)
static void C_fcall trf_3269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3269(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3269(t0,t1,t2);}

C_noret_decl(trf_3144)
static void C_fcall trf_3144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3144(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3144(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3226)
static void C_fcall trf_3226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3226(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3226(t0,t1,t2,t3);}

C_noret_decl(trf_3178)
static void C_fcall trf_3178(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3178(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3178(t0,t1,t2,t3);}

C_noret_decl(trf_3108)
static void C_fcall trf_3108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3108(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3108(t0,t1,t2,t3);}

C_noret_decl(trf_3049)
static void C_fcall trf_3049(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3049(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3049(t0,t1,t2,t3);}

C_noret_decl(trf_3019)
static void C_fcall trf_3019(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3019(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3019(t0,t1,t2,t3);}

C_noret_decl(trf_2983)
static void C_fcall trf_2983(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2983(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2983(t0,t1,t2);}

C_noret_decl(trf_2953)
static void C_fcall trf_2953(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2953(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2953(t0,t1,t2);}

C_noret_decl(trf_2914)
static void C_fcall trf_2914(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2914(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2914(t0,t1,t2);}

C_noret_decl(trf_2888)
static void C_fcall trf_2888(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2888(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2888(t0,t1,t2);}

C_noret_decl(trf_2330)
static void C_fcall trf_2330(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2330(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2330(t0,t1,t2);}

C_noret_decl(trf_2848)
static void C_fcall trf_2848(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2848(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2848(t0,t1,t2,t3);}

C_noret_decl(trf_2817)
static void C_fcall trf_2817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2817(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2817(t0,t1,t2,t3);}

C_noret_decl(trf_2449)
static void C_fcall trf_2449(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2449(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2449(t0,t1,t2);}

C_noret_decl(trf_2777)
static void C_fcall trf_2777(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2777(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2777(t0,t1,t2);}

C_noret_decl(trf_2743)
static void C_fcall trf_2743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2743(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2743(t0,t1,t2);}

C_noret_decl(trf_2689)
static void C_fcall trf_2689(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2689(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2689(t0,t1,t2,t3);}

C_noret_decl(trf_2649)
static void C_fcall trf_2649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2649(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2649(t0,t1,t2,t3);}

C_noret_decl(trf_2598)
static void C_fcall trf_2598(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2598(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2598(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2357)
static void C_fcall trf_2357(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2357(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2357(t0,t1);}

C_noret_decl(trf_2369)
static void C_fcall trf_2369(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2369(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2369(t0,t1,t2);}

C_noret_decl(trf_2276)
static void C_fcall trf_2276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2276(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2276(t0,t1);}

C_noret_decl(trf_2288)
static void C_fcall trf_2288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2288(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2288(t0,t1,t2);}

C_noret_decl(trf_2216)
static void C_fcall trf_2216(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2216(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2216(t0,t1,t2,t3);}

C_noret_decl(trf_2140)
static void C_fcall trf_2140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2140(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2140(t0,t1,t2,t3);}

C_noret_decl(trf_2171)
static void C_fcall trf_2171(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2171(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2171(t0,t1,t2,t3);}

C_noret_decl(trf_2056)
static void C_fcall trf_2056(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2056(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2056(t0,t1,t2);}

C_noret_decl(trf_1984)
static void C_fcall trf_1984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1984(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1984(t0,t1,t2);}

C_noret_decl(trf_1920)
static void C_fcall trf_1920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1920(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1920(t0,t1,t2);}

C_noret_decl(trf_1864)
static void C_fcall trf_1864(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1864(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1864(t0,t1,t2);}

C_noret_decl(trf_1747)
static void C_fcall trf_1747(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1747(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1747(t0,t1,t2,t3);}

C_noret_decl(trf_1668)
static void C_fcall trf_1668(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1668(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1668(t0,t1,t2,t3);}

C_noret_decl(trf_1548)
static void C_fcall trf_1548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1548(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1548(t0,t1,t2,t3);}

C_noret_decl(trf_1315)
static void C_fcall trf_1315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1315(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1315(t0,t1,t2,t3);}

C_noret_decl(trf_1342)
static void C_fcall trf_1342(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1342(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1342(t0,t1,t2,t3);}

C_noret_decl(trf_1106)
static void C_fcall trf_1106(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1106(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1106(t0,t1);}

C_noret_decl(trf_1120)
static void C_fcall trf_1120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1120(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1120(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1069)
static void C_fcall trf_1069(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1069(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1069(t0,t1,t2);}

C_noret_decl(trf_1039)
static void C_fcall trf_1039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1039(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1039(t0,t1,t2,t3);}

C_noret_decl(trf_1009)
static void C_fcall trf_1009(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1009(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1009(t0,t1,t2,t3);}

C_noret_decl(trf_953)
static void C_fcall trf_953(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_953(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_953(t0,t1,t2,t3);}

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
if(!C_demand_2(1200)){
C_save(t1);
C_rereclaim2(1200*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,411);
lf[0]=C_h_intern(&lf[0],5,"xcons");
lf[1]=C_static_lambda_info(C_heaptop,13,"(xcons d0 a1)");
lf[2]=C_h_intern(&lf[2],9,"make-list");
lf[3]=C_static_lambda_info(C_heaptop,13,"(do5 i7 ans8)");
lf[4]=C_h_intern(&lf[4],9,"\003syserror");
lf[5]=C_static_string(C_heaptop,31,"Too many arguments to MAKE-LIST");
lf[6]=C_static_lambda_info(C_heaptop,29,"(make-list len2 . maybe-elt3)");
lf[7]=C_h_intern(&lf[7],13,"list-tabulate");
lf[8]=C_static_lambda_info(C_heaptop,16,"(do13 i15 ans16)");
lf[9]=C_static_lambda_info(C_heaptop,28,"(list-tabulate len11 proc12)");
lf[10]=C_h_intern(&lf[10],5,"cons*");
lf[11]=C_static_lambda_info(C_heaptop,18,"(recur x22 rest23)");
lf[12]=C_static_lambda_info(C_heaptop,24,"(cons* first19 . rest20)");
lf[13]=C_h_intern(&lf[13],9,"list-copy");
lf[14]=C_static_lambda_info(C_heaptop,13,"(recur lis27)");
lf[15]=C_static_lambda_info(C_heaptop,17,"(list-copy lis25)");
lf[16]=C_h_intern(&lf[16],4,"iota");
lf[17]=C_static_lambda_info(C_heaptop,26,"(do38 count40 val41 ans42)");
lf[18]=C_static_string(C_heaptop,19,"Negative step count");
lf[19]=C_static_lambda_info(C_heaptop,35,"(iota count29 . maybe-start+step30)");
lf[20]=C_h_intern(&lf[20],13,"circular-list");
lf[21]=C_h_intern(&lf[21],9,"last-pair");
lf[22]=C_static_lambda_info(C_heaptop,31,"(circular-list val148 . vals49)");
lf[23]=C_h_intern(&lf[23],12,"proper-list\077");
lf[24]=C_h_intern(&lf[24],5,"list\077");
lf[25]=C_h_intern(&lf[25],12,"dotted-list\077");
lf[26]=C_static_lambda_info(C_heaptop,10,"(lp lag55)");
lf[27]=C_static_lambda_info(C_heaptop,18,"(dotted-list\077 x52)");
lf[28]=C_h_intern(&lf[28],14,"circular-list\077");
lf[29]=C_static_lambda_info(C_heaptop,10,"(lp lag63)");
lf[30]=C_static_lambda_info(C_heaptop,20,"(circular-list\077 x60)");
lf[31]=C_h_intern(&lf[31],9,"not-pair\077");
lf[32]=C_static_lambda_info(C_heaptop,15,"(not-pair\077 x70)");
lf[33]=C_h_intern(&lf[33],10,"null-list\077");
lf[34]=C_static_lambda_info(C_heaptop,16,"(null-list\077 l71)");
lf[35]=C_h_intern(&lf[35],5,"list=");
lf[36]=C_static_lambda_info(C_heaptop,15,"(lp2 la84 lb85)");
lf[37]=C_static_lambda_info(C_heaptop,23,"(lp1 list-a77 others78)");
lf[38]=C_static_lambda_info(C_heaptop,21,"(list= =72 . lists73)");
lf[39]=C_h_intern(&lf[39],7,"length+");
lf[40]=C_static_lambda_info(C_heaptop,16,"(lp lag91 len92)");
lf[41]=C_static_lambda_info(C_heaptop,13,"(length+ x88)");
lf[42]=C_h_intern(&lf[42],3,"zip");
lf[43]=C_h_intern(&lf[43],3,"map");
lf[44]=C_h_intern(&lf[44],4,"list");
lf[45]=C_static_lambda_info(C_heaptop,29,"(zip list199 . more-lists100)");
lf[46]=C_h_intern(&lf[46],5,"first");
lf[47]=C_h_intern(&lf[47],3,"car");
lf[48]=C_h_intern(&lf[48],6,"second");
lf[49]=C_h_intern(&lf[49],4,"cadr");
lf[50]=C_h_intern(&lf[50],5,"third");
lf[51]=C_h_intern(&lf[51],5,"caddr");
lf[52]=C_h_intern(&lf[52],6,"fourth");
lf[53]=C_h_intern(&lf[53],6,"cadddr");
lf[54]=C_h_intern(&lf[54],5,"fifth");
lf[55]=C_static_lambda_info(C_heaptop,12,"(fifth x101)");
lf[56]=C_h_intern(&lf[56],5,"sixth");
lf[57]=C_static_lambda_info(C_heaptop,12,"(sixth x102)");
lf[58]=C_h_intern(&lf[58],7,"seventh");
lf[59]=C_static_lambda_info(C_heaptop,14,"(seventh x103)");
lf[60]=C_h_intern(&lf[60],6,"eighth");
lf[61]=C_static_lambda_info(C_heaptop,13,"(eighth x104)");
lf[62]=C_h_intern(&lf[62],5,"ninth");
lf[63]=C_static_lambda_info(C_heaptop,12,"(ninth x105)");
lf[64]=C_h_intern(&lf[64],5,"tenth");
lf[65]=C_static_lambda_info(C_heaptop,12,"(tenth x106)");
lf[66]=C_h_intern(&lf[66],7,"car+cdr");
lf[67]=C_static_lambda_info(C_heaptop,17,"(car+cdr pair107)");
lf[68]=C_h_intern(&lf[68],4,"take");
lf[69]=C_static_lambda_info(C_heaptop,19,"(recur lis112 k113)");
lf[70]=C_static_lambda_info(C_heaptop,18,"(take lis109 k110)");
lf[71]=C_h_intern(&lf[71],4,"drop");
lf[72]=C_static_lambda_info(C_heaptop,11,"(iter k120)");
lf[73]=C_static_lambda_info(C_heaptop,18,"(drop lis116 k117)");
lf[74]=C_h_intern(&lf[74],5,"take!");
lf[75]=C_static_lambda_info(C_heaptop,19,"(take! lis123 k124)");
lf[76]=C_h_intern(&lf[76],10,"take-right");
lf[77]=C_static_lambda_info(C_heaptop,12,"(lp lead131)");
lf[78]=C_static_lambda_info(C_heaptop,24,"(take-right lis127 k128)");
lf[79]=C_h_intern(&lf[79],10,"drop-right");
lf[80]=C_static_lambda_info(C_heaptop,22,"(recur lag136 lead137)");
lf[81]=C_static_lambda_info(C_heaptop,24,"(drop-right lis133 k134)");
lf[82]=C_h_intern(&lf[82],11,"drop-right!");
lf[83]=C_static_lambda_info(C_heaptop,12,"(lp lead144)");
lf[84]=C_static_lambda_info(C_heaptop,25,"(drop-right! lis139 k140)");
lf[85]=C_h_intern(&lf[85],8,"split-at");
lf[86]=C_static_lambda_info(C_heaptop,7,"(a1761)");
lf[87]=C_static_lambda_info(C_heaptop,27,"(a1775 prefix152 suffix153)");
lf[88]=C_static_lambda_info(C_heaptop,19,"(recur lis150 k151)");
lf[89]=C_static_lambda_info(C_heaptop,20,"(split-at x147 k148)");
lf[90]=C_h_intern(&lf[90],9,"split-at!");
lf[91]=C_static_lambda_info(C_heaptop,21,"(split-at! x156 k157)");
lf[92]=C_h_intern(&lf[92],4,"last");
lf[93]=C_static_lambda_info(C_heaptop,13,"(last lis162)");
lf[94]=C_static_lambda_info(C_heaptop,4,"(lp)");
lf[95]=C_static_lambda_info(C_heaptop,18,"(last-pair lis163)");
lf[96]=C_h_intern(&lf[96],6,"unzip1");
lf[97]=C_h_intern(&lf[97],7,"\003sysmap");
lf[98]=C_static_lambda_info(C_heaptop,15,"(unzip1 lis168)");
lf[99]=C_h_intern(&lf[99],6,"unzip2");
lf[100]=C_static_lambda_info(C_heaptop,7,"(a1881)");
lf[101]=C_static_lambda_info(C_heaptop,17,"(a1891 a173 b174)");
lf[102]=C_static_lambda_info(C_heaptop,14,"(recur lis171)");
lf[103]=C_static_lambda_info(C_heaptop,15,"(unzip2 lis169)");
lf[104]=C_h_intern(&lf[104],6,"unzip3");
lf[105]=C_static_lambda_info(C_heaptop,7,"(a1937)");
lf[106]=C_static_lambda_info(C_heaptop,22,"(a1947 a180 b181 c182)");
lf[107]=C_static_lambda_info(C_heaptop,14,"(recur lis178)");
lf[108]=C_static_lambda_info(C_heaptop,15,"(unzip3 lis176)");
lf[109]=C_h_intern(&lf[109],6,"unzip4");
lf[110]=C_static_lambda_info(C_heaptop,7,"(a2001)");
lf[111]=C_static_lambda_info(C_heaptop,27,"(a2011 a188 b189 c190 d191)");
lf[112]=C_static_lambda_info(C_heaptop,14,"(recur lis186)");
lf[113]=C_static_lambda_info(C_heaptop,15,"(unzip4 lis184)");
lf[114]=C_h_intern(&lf[114],6,"unzip5");
lf[115]=C_static_lambda_info(C_heaptop,7,"(a2073)");
lf[116]=C_static_lambda_info(C_heaptop,32,"(a2083 a197 b198 c199 d200 e201)");
lf[117]=C_static_lambda_info(C_heaptop,14,"(recur lis195)");
lf[118]=C_static_lambda_info(C_heaptop,15,"(unzip5 lis193)");
lf[119]=C_h_intern(&lf[119],7,"append!");
lf[120]=C_static_lambda_info(C_heaptop,26,"(lp2 tail-cons210 rest211)");
lf[121]=C_static_lambda_info(C_heaptop,21,"(lp lists205 prev206)");
lf[122]=C_static_lambda_info(C_heaptop,20,"(append! . lists203)");
lf[123]=C_h_intern(&lf[123],14,"append-reverse");
lf[124]=C_static_lambda_info(C_heaptop,24,"(lp rev-head220 tail221)");
lf[125]=C_static_lambda_info(C_heaptop,36,"(append-reverse rev-head217 tail218)");
lf[126]=C_h_intern(&lf[126],15,"append-reverse!");
lf[127]=C_static_lambda_info(C_heaptop,12,"(lp tail227)");
lf[128]=C_static_lambda_info(C_heaptop,37,"(append-reverse! rev-head223 tail224)");
lf[129]=C_h_intern(&lf[129],11,"concatenate");
lf[130]=C_h_intern(&lf[130],12,"reduce-right");
lf[131]=C_h_intern(&lf[131],6,"append");
lf[132]=C_static_lambda_info(C_heaptop,22,"(concatenate lists231)");
lf[133]=C_h_intern(&lf[133],12,"concatenate!");
lf[134]=C_static_lambda_info(C_heaptop,23,"(concatenate! lists232)");
lf[136]=C_static_lambda_info(C_heaptop,16,"(recur lists236)");
lf[137]=C_static_lambda_info(C_heaptop,16,"(a2281 abort234)");
lf[138]=C_static_lambda_info(C_heaptop,23,"(##srfi1#cdrs lists233)");
lf[140]=C_static_lambda_info(C_heaptop,7,"(a2380)");
lf[141]=C_static_lambda_info(C_heaptop,7,"(a2401)");
lf[142]=C_static_lambda_info(C_heaptop,7,"(a2413)");
lf[143]=C_static_lambda_info(C_heaptop,23,"(a2419 cars252 cdrs253)");
lf[144]=C_static_lambda_info(C_heaptop,17,"(a2407 a250 d251)");
lf[145]=C_static_lambda_info(C_heaptop,30,"(a2386 list248 other-lists249)");
lf[146]=C_static_lambda_info(C_heaptop,16,"(recur lists247)");
lf[147]=C_static_lambda_info(C_heaptop,16,"(a2362 abort245)");
lf[148]=C_static_lambda_info(C_heaptop,28,"(##srfi1#cars+cdrs lists244)");
lf[149]=C_h_intern(&lf[149],5,"count");
lf[150]=C_static_lambda_info(C_heaptop,7,"(a2609)");
lf[151]=C_static_lambda_info(C_heaptop,19,"(a2615 as284 ds285)");
lf[152]=C_static_lambda_info(C_heaptop,27,"(lp list1281 lists282 i283)");
lf[153]=C_static_lambda_info(C_heaptop,16,"(lp lis288 i289)");
lf[154]=C_static_lambda_info(C_heaptop,35,"(count pred277 list1278 . lists279)");
lf[155]=C_h_intern(&lf[155],12,"unfold-right");
lf[156]=C_static_lambda_info(C_heaptop,19,"(lp seed297 ans298)");
lf[157]=C_static_lambda_info(C_heaptop,53,"(unfold-right p291 f292 g293 seed294 . maybe-tail295)");
lf[158]=C_h_intern(&lf[158],6,"unfold");
lf[159]=C_h_intern(&lf[159],5,"error");
lf[160]=C_static_string(C_heaptop,18,"Too many arguments");
lf[161]=C_static_lambda_info(C_heaptop,15,"(recur seed309)");
lf[162]=C_static_lambda_info(C_heaptop,15,"(recur seed312)");
lf[163]=C_static_lambda_info(C_heaptop,51,"(unfold p302 f303 g304 seed305 . maybe-tail-gen306)");
lf[164]=C_h_intern(&lf[164],4,"fold");
lf[165]=C_static_lambda_info(C_heaptop,7,"(a2460)");
lf[166]=C_static_lambda_info(C_heaptop,7,"(a2481)");
lf[167]=C_static_lambda_info(C_heaptop,7,"(a2493)");
lf[168]=C_static_lambda_info(C_heaptop,23,"(a2499 cars264 cdrs265)");
lf[169]=C_static_lambda_info(C_heaptop,17,"(a2487 a262 d263)");
lf[170]=C_static_lambda_info(C_heaptop,30,"(a2466 list260 other-lists261)");
lf[171]=C_static_lambda_info(C_heaptop,16,"(recur lists259)");
lf[172]=C_static_lambda_info(C_heaptop,16,"(a2442 abort257)");
lf[173]=C_static_lambda_info(C_heaptop,7,"(a2822)");
lf[174]=C_static_lambda_info(C_heaptop,27,"(a2828 cars+ans321 cdrs322)");
lf[175]=C_static_lambda_info(C_heaptop,20,"(lp lists319 ans320)");
lf[176]=C_static_lambda_info(C_heaptop,18,"(lp lis325 ans326)");
lf[177]=C_static_lambda_info(C_heaptop,41,"(fold kons314 knil315 lis1316 . lists317)");
lf[178]=C_h_intern(&lf[178],10,"fold-right");
lf[179]=C_h_intern(&lf[179],4,"caar");
lf[180]=C_static_lambda_info(C_heaptop,16,"(recur lists242)");
lf[181]=C_static_lambda_info(C_heaptop,16,"(recur lists333)");
lf[182]=C_static_lambda_info(C_heaptop,14,"(recur lis337)");
lf[183]=C_static_lambda_info(C_heaptop,47,"(fold-right kons328 knil329 lis1330 . lists331)");
lf[184]=C_h_intern(&lf[184],15,"pair-fold-right");
lf[185]=C_static_lambda_info(C_heaptop,16,"(recur lists345)");
lf[186]=C_static_lambda_info(C_heaptop,14,"(recur lis349)");
lf[187]=C_static_lambda_info(C_heaptop,49,"(pair-fold-right f340 zero341 lis1342 . lists343)");
lf[188]=C_h_intern(&lf[188],9,"pair-fold");
lf[189]=C_static_lambda_info(C_heaptop,20,"(lp lists356 ans357)");
lf[190]=C_static_lambda_info(C_heaptop,18,"(lp lis361 ans362)");
lf[191]=C_static_lambda_info(C_heaptop,43,"(pair-fold f351 zero352 lis1353 . lists354)");
lf[192]=C_h_intern(&lf[192],6,"reduce");
lf[193]=C_static_lambda_info(C_heaptop,33,"(reduce f365 ridentity366 lis367)");
lf[194]=C_static_lambda_info(C_heaptop,22,"(recur head372 lis373)");
lf[195]=C_static_lambda_info(C_heaptop,39,"(reduce-right f368 ridentity369 lis370)");
lf[196]=C_h_intern(&lf[196],10,"append-map");
lf[198]=C_static_lambda_info(C_heaptop,36,"(append-map f375 lis1376 . lists377)");
lf[199]=C_h_intern(&lf[199],11,"append-map!");
lf[200]=C_static_lambda_info(C_heaptop,37,"(append-map! f378 lis1379 . lists380)");
lf[201]=C_static_lambda_info(C_heaptop,7,"(a3155)");
lf[202]=C_static_lambda_info(C_heaptop,7,"(a3186)");
lf[203]=C_static_lambda_info(C_heaptop,25,"(a3192 cars2392 cdrs2393)");
lf[204]=C_static_lambda_info(C_heaptop,23,"(recur cars389 cdrs390)");
lf[205]=C_static_lambda_info(C_heaptop,23,"(a3165 cars386 cdrs387)");
lf[206]=C_static_lambda_info(C_heaptop,22,"(recur elt396 rest397)");
lf[207]=C_static_lambda_info(C_heaptop,61,"(##srfi1#really-append-map appender382 f383 lis1384 lists385)");
lf[208]=C_h_intern(&lf[208],13,"pair-for-each");
lf[209]=C_static_lambda_info(C_heaptop,13,"(lp lists404)");
lf[210]=C_static_lambda_info(C_heaptop,11,"(lp lis409)");
lf[211]=C_static_lambda_info(C_heaptop,42,"(pair-for-each proc400 lis1401 . lists402)");
lf[212]=C_h_intern(&lf[212],4,"map!");
lf[213]=C_static_lambda_info(C_heaptop,7,"(a2538)");
lf[214]=C_static_lambda_info(C_heaptop,7,"(a2550)");
lf[215]=C_static_lambda_info(C_heaptop,7,"(a2562)");
lf[216]=C_static_lambda_info(C_heaptop,23,"(a2568 cars274 cdrs275)");
lf[217]=C_static_lambda_info(C_heaptop,17,"(a2556 a272 d273)");
lf[218]=C_static_lambda_info(C_heaptop,30,"(a2544 list270 other-lists271)");
lf[219]=C_static_lambda_info(C_heaptop,16,"(recur lists269)");
lf[220]=C_static_lambda_info(C_heaptop,7,"(a3335)");
lf[221]=C_static_lambda_info(C_heaptop,25,"(a3341 heads419 tails420)");
lf[222]=C_static_lambda_info(C_heaptop,21,"(lp lis1417 lists418)");
lf[223]=C_static_lambda_info(C_heaptop,15,"(a3369 pair423)");
lf[224]=C_static_lambda_info(C_heaptop,30,"(map! f413 lis1414 . lists415)");
lf[225]=C_h_intern(&lf[225],10,"filter-map");
lf[226]=C_static_lambda_info(C_heaptop,7,"(a3405)");
lf[227]=C_static_lambda_info(C_heaptop,23,"(a3411 cars430 cdrs431)");
lf[228]=C_static_lambda_info(C_heaptop,16,"(recur lists429)");
lf[229]=C_static_lambda_info(C_heaptop,14,"(recur lis437)");
lf[230]=C_static_lambda_info(C_heaptop,36,"(filter-map f425 lis1426 . lists427)");
lf[231]=C_h_intern(&lf[231],12,"map-in-order");
lf[232]=C_static_lambda_info(C_heaptop,7,"(a3490)");
lf[233]=C_static_lambda_info(C_heaptop,23,"(a3496 cars448 cdrs449)");
lf[234]=C_static_lambda_info(C_heaptop,16,"(recur lists447)");
lf[235]=C_static_lambda_info(C_heaptop,14,"(recur lis453)");
lf[236]=C_static_lambda_info(C_heaptop,38,"(map-in-order f443 lis1444 . lists445)");
lf[237]=C_h_intern(&lf[237],6,"filter");
lf[238]=C_static_lambda_info(C_heaptop,14,"(recur lis460)");
lf[239]=C_static_lambda_info(C_heaptop,23,"(filter pred457 lis458)");
lf[240]=C_h_intern(&lf[240],7,"filter!");
lf[241]=C_static_lambda_info(C_heaptop,24,"(scan-in prev471 lis472)");
lf[242]=C_static_lambda_info(C_heaptop,11,"(lp lis476)");
lf[243]=C_static_lambda_info(C_heaptop,25,"(scan-out prev473 lis474)");
lf[244]=C_static_lambda_info(C_heaptop,11,"(lp ans468)");
lf[245]=C_static_lambda_info(C_heaptop,24,"(filter! pred465 lis466)");
lf[246]=C_h_intern(&lf[246],9,"partition");
lf[247]=C_static_lambda_info(C_heaptop,7,"(a3735)");
lf[248]=C_static_lambda_info(C_heaptop,20,"(a3741 in489 out490)");
lf[249]=C_static_lambda_info(C_heaptop,14,"(recur lis486)");
lf[250]=C_static_lambda_info(C_heaptop,26,"(partition pred483 lis484)");
lf[251]=C_h_intern(&lf[251],10,"partition!");
lf[252]=C_static_lambda_info(C_heaptop,22,"(lp in-prev500 lis501)");
lf[253]=C_static_lambda_info(C_heaptop,39,"(scan-in in-prev496 out-prev497 lis498)");
lf[254]=C_static_lambda_info(C_heaptop,23,"(lp out-prev508 lis509)");
lf[255]=C_static_lambda_info(C_heaptop,40,"(scan-out in-prev504 out-prev505 lis506)");
lf[256]=C_static_lambda_info(C_heaptop,19,"(lp prev-l513 l514)");
lf[257]=C_static_lambda_info(C_heaptop,19,"(lp prev-l518 l519)");
lf[258]=C_static_lambda_info(C_heaptop,27,"(partition! pred492 lis493)");
lf[259]=C_h_intern(&lf[259],6,"remove");
lf[260]=C_static_lambda_info(C_heaptop,12,"(a3994 x526)");
lf[261]=C_static_lambda_info(C_heaptop,21,"(remove pred524 l525)");
lf[262]=C_h_intern(&lf[262],7,"remove!");
lf[263]=C_static_lambda_info(C_heaptop,12,"(a4010 x529)");
lf[264]=C_static_lambda_info(C_heaptop,22,"(remove! pred527 l528)");
lf[265]=C_h_intern(&lf[265],6,"delete");
lf[266]=C_h_intern(&lf[266],6,"equal\077");
lf[267]=C_static_lambda_info(C_heaptop,12,"(a4029 y536)");
lf[268]=C_static_lambda_info(C_heaptop,33,"(delete x530 lis531 . maybe-=532)");
lf[269]=C_h_intern(&lf[269],7,"delete!");
lf[270]=C_static_lambda_info(C_heaptop,12,"(a4054 y543)");
lf[271]=C_static_lambda_info(C_heaptop,34,"(delete! x537 lis538 . maybe-=539)");
lf[272]=C_h_intern(&lf[272],6,"member");
lf[273]=C_static_lambda_info(C_heaptop,12,"(a4079 y550)");
lf[274]=C_h_intern(&lf[274],9,"find-tail");
lf[275]=C_static_lambda_info(C_heaptop,33,"(member x544 lis545 . maybe-=546)");
lf[276]=C_h_intern(&lf[276],17,"delete-duplicates");
lf[277]=C_static_lambda_info(C_heaptop,14,"(recur lis557)");
lf[278]=C_static_lambda_info(C_heaptop,39,"(delete-duplicates lis551 . maybe-=552)");
lf[279]=C_h_intern(&lf[279],18,"delete-duplicates!");
lf[280]=C_static_lambda_info(C_heaptop,14,"(recur lis568)");
lf[281]=C_static_lambda_info(C_heaptop,40,"(delete-duplicates! lis562 . maybe-=563)");
lf[282]=C_h_intern(&lf[282],5,"assoc");
lf[283]=C_static_lambda_info(C_heaptop,16,"(a4192 entry579)");
lf[284]=C_h_intern(&lf[284],4,"find");
lf[285]=C_static_lambda_info(C_heaptop,32,"(assoc x573 lis574 . maybe-=575)");
lf[286]=C_h_intern(&lf[286],10,"alist-cons");
lf[287]=C_static_lambda_info(C_heaptop,37,"(alist-cons key580 datum581 alist582)");
lf[288]=C_h_intern(&lf[288],10,"alist-copy");
lf[289]=C_static_lambda_info(C_heaptop,14,"(a4224 elt584)");
lf[290]=C_static_lambda_info(C_heaptop,21,"(alist-copy alist583)");
lf[291]=C_h_intern(&lf[291],12,"alist-delete");
lf[292]=C_static_lambda_info(C_heaptop,14,"(a4247 elt591)");
lf[293]=C_static_lambda_info(C_heaptop,43,"(alist-delete key585 alist586 . maybe-=587)");
lf[294]=C_h_intern(&lf[294],13,"alist-delete!");
lf[295]=C_static_lambda_info(C_heaptop,14,"(a4276 elt598)");
lf[296]=C_static_lambda_info(C_heaptop,44,"(alist-delete! key592 alist593 . maybe-=594)");
lf[297]=C_static_lambda_info(C_heaptop,22,"(find pred599 list600)");
lf[298]=C_static_lambda_info(C_heaptop,12,"(lp list606)");
lf[299]=C_static_lambda_info(C_heaptop,27,"(find-tail pred603 list604)");
lf[300]=C_h_intern(&lf[300],10,"take-while");
lf[301]=C_static_lambda_info(C_heaptop,14,"(recur lis611)");
lf[302]=C_static_lambda_info(C_heaptop,27,"(take-while pred608 lis609)");
lf[303]=C_h_intern(&lf[303],10,"drop-while");
lf[304]=C_static_lambda_info(C_heaptop,11,"(lp lis617)");
lf[305]=C_static_lambda_info(C_heaptop,27,"(drop-while pred614 lis615)");
lf[306]=C_h_intern(&lf[306],11,"take-while!");
lf[307]=C_static_lambda_info(C_heaptop,20,"(lp prev624 rest625)");
lf[308]=C_static_lambda_info(C_heaptop,28,"(take-while! pred619 lis620)");
lf[309]=C_h_intern(&lf[309],4,"span");
lf[310]=C_static_lambda_info(C_heaptop,7,"(a4499)");
lf[311]=C_static_lambda_info(C_heaptop,27,"(a4509 prefix634 suffix635)");
lf[312]=C_static_lambda_info(C_heaptop,14,"(recur lis632)");
lf[313]=C_static_lambda_info(C_heaptop,21,"(span pred629 lis630)");
lf[314]=C_h_intern(&lf[314],5,"span!");
lf[315]=C_static_lambda_info(C_heaptop,20,"(lp prev643 rest644)");
lf[316]=C_static_lambda_info(C_heaptop,22,"(span! pred637 lis638)");
lf[317]=C_h_intern(&lf[317],5,"break");
lf[318]=C_static_lambda_info(C_heaptop,12,"(a4592 x650)");
lf[319]=C_static_lambda_info(C_heaptop,22,"(break pred648 lis649)");
lf[320]=C_h_intern(&lf[320],6,"break!");
lf[321]=C_static_lambda_info(C_heaptop,12,"(a4608 x653)");
lf[322]=C_static_lambda_info(C_heaptop,23,"(break! pred651 lis652)");
lf[323]=C_h_intern(&lf[323],3,"any");
lf[324]=C_static_lambda_info(C_heaptop,7,"(a4630)");
lf[325]=C_static_lambda_info(C_heaptop,7,"(a4658)");
lf[326]=C_static_lambda_info(C_heaptop,35,"(a4664 next-heads662 next-tails663)");
lf[327]=C_static_lambda_info(C_heaptop,22,"(lp heads660 tails661)");
lf[328]=C_static_lambda_info(C_heaptop,25,"(a4640 heads657 tails658)");
lf[329]=C_static_lambda_info(C_heaptop,20,"(lp head668 tail669)");
lf[330]=C_static_lambda_info(C_heaptop,32,"(any pred654 lis1655 . lists656)");
lf[331]=C_h_intern(&lf[331],5,"every");
lf[332]=C_static_lambda_info(C_heaptop,7,"(a4747)");
lf[333]=C_static_lambda_info(C_heaptop,7,"(a4775)");
lf[334]=C_static_lambda_info(C_heaptop,35,"(a4781 next-heads683 next-tails684)");
lf[335]=C_static_lambda_info(C_heaptop,22,"(lp heads681 tails682)");
lf[336]=C_static_lambda_info(C_heaptop,25,"(a4757 heads676 tails677)");
lf[337]=C_static_lambda_info(C_heaptop,20,"(lp head689 tail690)");
lf[338]=C_static_lambda_info(C_heaptop,34,"(every pred673 lis1674 . lists675)");
lf[339]=C_h_intern(&lf[339],10,"list-index");
lf[340]=C_static_lambda_info(C_heaptop,7,"(a4874)");
lf[341]=C_static_lambda_info(C_heaptop,25,"(a4880 heads698 tails699)");
lf[342]=C_static_lambda_info(C_heaptop,18,"(lp lists696 n697)");
lf[343]=C_static_lambda_info(C_heaptop,16,"(lp lis702 n703)");
lf[344]=C_static_lambda_info(C_heaptop,39,"(list-index pred692 lis1693 . lists694)");
lf[345]=C_h_intern(&lf[345],8,"reverse!");
lf[346]=C_static_lambda_info(C_heaptop,11,"(lp ans708)");
lf[347]=C_static_lambda_info(C_heaptop,17,"(reverse! lis705)");
lf[349]=C_static_lambda_info(C_heaptop,12,"(a4969 x715)");
lf[350]=C_static_lambda_info(C_heaptop,38,"(##srfi1#lset2<= =712 lis1713 lis2714)");
lf[351]=C_h_intern(&lf[351],6,"lset<=");
lf[352]=C_static_lambda_info(C_heaptop,18,"(lp s1721 rest722)");
lf[353]=C_static_lambda_info(C_heaptop,24,"(lset<= =716 . lists717)");
lf[354]=C_h_intern(&lf[354],5,"lset=");
lf[355]=C_static_lambda_info(C_heaptop,18,"(lp s1735 rest736)");
lf[356]=C_static_lambda_info(C_heaptop,23,"(lset= =730 . lists731)");
lf[357]=C_h_intern(&lf[357],11,"lset-adjoin");
lf[358]=C_static_lambda_info(C_heaptop,21,"(a5103 elt747 ans748)");
lf[359]=C_static_lambda_info(C_heaptop,35,"(lset-adjoin =744 lis745 . elts746)");
lf[360]=C_h_intern(&lf[360],10,"lset-union");
lf[361]=C_static_lambda_info(C_heaptop,12,"(a5157 x755)");
lf[362]=C_static_lambda_info(C_heaptop,21,"(a5145 elt753 ans754)");
lf[363]=C_static_lambda_info(C_heaptop,21,"(a5121 lis751 ans752)");
lf[364]=C_static_lambda_info(C_heaptop,28,"(lset-union =749 . lists750)");
lf[365]=C_h_intern(&lf[365],11,"lset-union!");
lf[366]=C_static_lambda_info(C_heaptop,12,"(a5208 x763)");
lf[367]=C_static_lambda_info(C_heaptop,22,"(a5193 pair760 ans761)");
lf[368]=C_static_lambda_info(C_heaptop,21,"(a5169 lis758 ans759)");
lf[369]=C_static_lambda_info(C_heaptop,29,"(lset-union! =756 . lists757)");
lf[370]=C_h_intern(&lf[370],17,"lset-intersection");
lf[371]=C_static_lambda_info(C_heaptop,14,"(a5241 lis770)");
lf[372]=C_static_lambda_info(C_heaptop,12,"(a5235 x769)");
lf[373]=C_h_intern(&lf[373],3,"eq\077");
lf[374]=C_static_lambda_info(C_heaptop,43,"(lset-intersection =765 lis1766 . lists767)");
lf[375]=C_h_intern(&lf[375],18,"lset-intersection!");
lf[376]=C_static_lambda_info(C_heaptop,14,"(a5274 lis776)");
lf[377]=C_static_lambda_info(C_heaptop,12,"(a5268 x775)");
lf[378]=C_static_lambda_info(C_heaptop,44,"(lset-intersection! =771 lis1772 . lists773)");
lf[379]=C_h_intern(&lf[379],15,"lset-difference");
lf[380]=C_static_lambda_info(C_heaptop,14,"(a5307 lis782)");
lf[381]=C_static_lambda_info(C_heaptop,12,"(a5301 x781)");
lf[382]=C_h_intern(&lf[382],5,"pair\077");
lf[383]=C_static_lambda_info(C_heaptop,41,"(lset-difference =777 lis1778 . lists779)");
lf[384]=C_h_intern(&lf[384],16,"lset-difference!");
lf[385]=C_static_lambda_info(C_heaptop,14,"(a5344 lis788)");
lf[386]=C_static_lambda_info(C_heaptop,12,"(a5338 x787)");
lf[387]=C_static_lambda_info(C_heaptop,42,"(lset-difference! =783 lis1784 . lists785)");
lf[388]=C_h_intern(&lf[388],8,"lset-xor");
lf[389]=C_h_intern(&lf[389],22,"lset-diff+intersection");
lf[390]=C_static_lambda_info(C_heaptop,7,"(a5366)");
lf[391]=C_static_lambda_info(C_heaptop,20,"(a5396 xb795 ans796)");
lf[392]=C_static_lambda_info(C_heaptop,25,"(a5372 a-b793 a-int-b794)");
lf[393]=C_static_lambda_info(C_heaptop,17,"(a5360 b791 a792)");
lf[394]=C_static_lambda_info(C_heaptop,26,"(lset-xor =789 . lists790)");
lf[395]=C_h_intern(&lf[395],9,"lset-xor!");
lf[396]=C_h_intern(&lf[396],23,"lset-diff+intersection!");
lf[397]=C_static_lambda_info(C_heaptop,7,"(a5420)");
lf[398]=C_static_lambda_info(C_heaptop,24,"(a5450 b-pair803 ans804)");
lf[399]=C_static_lambda_info(C_heaptop,25,"(a5426 a-b801 a-int-b802)");
lf[400]=C_static_lambda_info(C_heaptop,17,"(a5414 b799 a800)");
lf[401]=C_static_lambda_info(C_heaptop,27,"(lset-xor! =797 . lists798)");
lf[402]=C_static_lambda_info(C_heaptop,14,"(a5500 lis810)");
lf[403]=C_static_lambda_info(C_heaptop,14,"(a5490 elt809)");
lf[404]=C_static_lambda_info(C_heaptop,48,"(lset-diff+intersection =806 lis1807 . lists808)");
lf[405]=C_static_lambda_info(C_heaptop,14,"(a5540 lis815)");
lf[406]=C_static_lambda_info(C_heaptop,14,"(a5530 elt814)");
lf[407]=C_static_lambda_info(C_heaptop,49,"(lset-diff+intersection! =811 lis1812 . lists813)");
lf[408]=C_h_intern(&lf[408],17,"register-feature!");
lf[409]=C_h_intern(&lf[409],6,"srfi-1");
lf[410]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,411,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_933,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 60   register-feature! */
t3=*((C_word*)lf[408]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[409]);}

/* k931 */
static void C_ccall f_933(C_word c,C_word t0,C_word t1){
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
C_word ab[306],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_933,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_935,a[2]=lf[1],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[2]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_941,a[2]=lf[6],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[7]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_996,a[2]=lf[9],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[10]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1033,a[2]=lf[12],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[13]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1063,a[2]=lf[15],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[16]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1093,a[2]=lf[19],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[20]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1179,a[2]=lf[22],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[23]+1,*((C_word*)lf[24]+1));
t10=C_mutate((C_word*)lf[25]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1193,a[2]=lf[27],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[28]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1250,a[2]=lf[30],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[31]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1289,a[2]=lf[32],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[33]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1292,a[2]=lf[34],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[35]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1295,a[2]=lf[38],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[39]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1395,a[2]=lf[41],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[42]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1444,a[2]=lf[45],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[46]+1,*((C_word*)lf[47]+1));
t18=C_mutate((C_word*)lf[48]+1,*((C_word*)lf[49]+1));
t19=C_mutate((C_word*)lf[50]+1,*((C_word*)lf[51]+1));
t20=C_mutate((C_word*)lf[52]+1,*((C_word*)lf[53]+1));
t21=C_mutate((C_word*)lf[54]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1454,a[2]=lf[55],tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[56]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1464,a[2]=lf[57],tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[58]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1474,a[2]=lf[59],tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[60]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1484,a[2]=lf[61],tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[62]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1494,a[2]=lf[63],tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[64]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1508,a[2]=lf[65],tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[66]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1522,a[2]=lf[67],tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[68]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1539,a[2]=lf[70],tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[71]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1576,a[2]=lf[73],tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1605,a[2]=lf[75],tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1628,a[2]=lf[78],tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[79]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1658,a[2]=lf[81],tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[82]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1696,a[2]=lf[84],tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[85]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1738,a[2]=lf[89],tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[90]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1790,a[2]=lf[91],tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[92]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1821,a[2]=lf[93],tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[21]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1831,a[2]=lf[95],tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[96]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1852,a[2]=lf[98],tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[99]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1858,a[2]=lf[103],tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[104]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1914,a[2]=lf[108],tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[109]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1978,a[2]=lf[113],tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[114]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2050,a[2]=lf[118],tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[119]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2134,a[2]=lf[122],tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[123]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2210,a[2]=lf[125],tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[126]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2240,a[2]=lf[128],tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[129]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2264,a[2]=lf[132],tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[133]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2270,a[2]=lf[134],tmp=(C_word)a,a+=3,tmp));
t48=C_mutate(&lf[135],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2276,a[2]=lf[138],tmp=(C_word)a,a+=3,tmp));
t49=C_mutate(&lf[139],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2357,a[2]=lf[148],tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[149]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2586,a[2]=lf[154],tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[155]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2679,a[2]=lf[157],tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[158]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2719,a[2]=lf[163],tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[164]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2801,a[2]=lf[177],tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[178]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2872,a[2]=lf[183],tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[184]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2937,a[2]=lf[187],tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[188]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3003,a[2]=lf[191],tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[192]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3068,a[2]=lf[193],tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[130]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3088,a[2]=lf[195],tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[196]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3132,a[2]=lf[198],tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[199]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3138,a[2]=lf[200],tmp=(C_word)a,a+=3,tmp));
t61=C_mutate(&lf[197],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3144,a[2]=lf[207],tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[208]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=lf[211],tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[212]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3312,a[2]=lf[224],tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[225]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3384,a[2]=lf[230],tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[231]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3469,a[2]=lf[236],tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[43]+1,*((C_word*)lf[231]+1));
t67=C_mutate((C_word*)lf[237]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3546,a[2]=lf[239],tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[240]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3588,a[2]=lf[245],tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[246]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3709,a[2]=lf[250],tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[251]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3777,a[2]=lf[258],tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[259]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3989,a[2]=lf[261],tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[262]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4005,a[2]=lf[264],tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[265]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4021,a[2]=lf[268],tmp=(C_word)a,a+=3,tmp));
t74=C_mutate((C_word*)lf[269]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4046,a[2]=lf[271],tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[272]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4071,a[2]=lf[275],tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[276]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4092,a[2]=lf[278],tmp=(C_word)a,a+=3,tmp));
t77=C_mutate((C_word*)lf[279]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4138,a[2]=lf[281],tmp=(C_word)a,a+=3,tmp));
t78=C_mutate((C_word*)lf[282]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4184,a[2]=lf[285],tmp=(C_word)a,a+=3,tmp));
t79=C_mutate((C_word*)lf[286]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4209,a[2]=lf[287],tmp=(C_word)a,a+=3,tmp));
t80=C_mutate((C_word*)lf[288]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4219,a[2]=lf[290],tmp=(C_word)a,a+=3,tmp));
t81=C_mutate((C_word*)lf[291]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4239,a[2]=lf[293],tmp=(C_word)a,a+=3,tmp));
t82=C_mutate((C_word*)lf[294]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4268,a[2]=lf[296],tmp=(C_word)a,a+=3,tmp));
t83=C_mutate((C_word*)lf[284]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4297,a[2]=lf[297],tmp=(C_word)a,a+=3,tmp));
t84=C_mutate((C_word*)lf[274]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4309,a[2]=lf[299],tmp=(C_word)a,a+=3,tmp));
t85=C_mutate((C_word*)lf[300]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4345,a[2]=lf[302],tmp=(C_word)a,a+=3,tmp));
t86=C_mutate((C_word*)lf[303]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4380,a[2]=lf[305],tmp=(C_word)a,a+=3,tmp));
t87=C_mutate((C_word*)lf[306]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4412,a[2]=lf[308],tmp=(C_word)a,a+=3,tmp));
t88=C_mutate((C_word*)lf[309]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4470,a[2]=lf[313],tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[314]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4523,a[2]=lf[316],tmp=(C_word)a,a+=3,tmp));
t90=C_mutate((C_word*)lf[317]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4587,a[2]=lf[319],tmp=(C_word)a,a+=3,tmp));
t91=C_mutate((C_word*)lf[320]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4603,a[2]=lf[322],tmp=(C_word)a,a+=3,tmp));
t92=C_mutate((C_word*)lf[323]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4619,a[2]=lf[330],tmp=(C_word)a,a+=3,tmp));
t93=C_mutate((C_word*)lf[331]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4736,a[2]=lf[338],tmp=(C_word)a,a+=3,tmp));
t94=C_mutate((C_word*)lf[339]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4853,a[2]=lf[344],tmp=(C_word)a,a+=3,tmp));
t95=C_mutate((C_word*)lf[345]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4940,a[2]=lf[347],tmp=(C_word)a,a+=3,tmp));
t96=C_mutate(&lf[348],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4964,a[2]=lf[350],tmp=(C_word)a,a+=3,tmp));
t97=C_mutate((C_word*)lf[351]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4976,a[2]=lf[353],tmp=(C_word)a,a+=3,tmp));
t98=C_mutate((C_word*)lf[354]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5034,a[2]=lf[356],tmp=(C_word)a,a+=3,tmp));
t99=C_mutate((C_word*)lf[357]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5098,a[2]=lf[359],tmp=(C_word)a,a+=3,tmp));
t100=C_mutate((C_word*)lf[360]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5116,a[2]=lf[364],tmp=(C_word)a,a+=3,tmp));
t101=C_mutate((C_word*)lf[365]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5164,a[2]=lf[369],tmp=(C_word)a,a+=3,tmp));
t102=C_mutate((C_word*)lf[370]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5215,a[2]=lf[374],tmp=(C_word)a,a+=3,tmp));
t103=C_mutate((C_word*)lf[375]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5248,a[2]=lf[378],tmp=(C_word)a,a+=3,tmp));
t104=C_mutate((C_word*)lf[379]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5281,a[2]=lf[383],tmp=(C_word)a,a+=3,tmp));
t105=C_mutate((C_word*)lf[384]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5318,a[2]=lf[387],tmp=(C_word)a,a+=3,tmp));
t106=C_mutate((C_word*)lf[388]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5355,a[2]=lf[394],tmp=(C_word)a,a+=3,tmp));
t107=C_mutate((C_word*)lf[395]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5409,a[2]=lf[401],tmp=(C_word)a,a+=3,tmp));
t108=C_mutate((C_word*)lf[389]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5467,a[2]=lf[404],tmp=(C_word)a,a+=3,tmp));
t109=C_mutate((C_word*)lf[396]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5507,a[2]=lf[407],tmp=(C_word)a,a+=3,tmp));
t110=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t110+1)))(2,t110,C_SCHEME_UNDEFINED);}

/* lset-diff+intersection! in k931 */
static void C_ccall f_5507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_5507r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5507r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5507r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5514,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1663 every */
t6=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[33]+1),t4);}

/* k5512 in lset-diff+intersection! in k931 */
static void C_ccall f_5514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5514,2,t0,t1);}
if(C_truep(t1)){
/* srfi-1.scm: 1663 values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],((C_word*)t0)[3]))){
/* srfi-1.scm: 1664 values */
C_values(4,0,((C_word*)t0)[5],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5531,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=lf[406],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1665 partition! */
t3=*((C_word*)lf[251]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[5],t2,((C_word*)t0)[4]);}}}

/* a5530 in k5512 in lset-diff+intersection! in k931 */
static void C_ccall f_5531(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5531,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5539,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5541,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[405],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1666 any */
t5=*((C_word*)lf[323]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a5540 in a5530 in k5512 in lset-diff+intersection! in k931 */
static void C_ccall f_5541(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5541,3,t0,t1,t2);}
/* srfi-1.scm: 1666 member */
t3=*((C_word*)lf[272]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5537 in a5530 in k5512 in lset-diff+intersection! in k931 */
static void C_ccall f_5539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* lset-diff+intersection in k931 */
static void C_ccall f_5467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_5467r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5467r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5467r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5474,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1654 every */
t6=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[33]+1),t4);}

/* k5472 in lset-diff+intersection in k931 */
static void C_ccall f_5474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5474,2,t0,t1);}
if(C_truep(t1)){
/* srfi-1.scm: 1654 values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],((C_word*)t0)[3]))){
/* srfi-1.scm: 1655 values */
C_values(4,0,((C_word*)t0)[5],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5491,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=lf[403],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1656 partition */
t3=*((C_word*)lf[246]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[5],t2,((C_word*)t0)[4]);}}}

/* a5490 in k5472 in lset-diff+intersection in k931 */
static void C_ccall f_5491(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5491,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5499,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5501,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[402],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1657 any */
t5=*((C_word*)lf[323]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a5500 in a5490 in k5472 in lset-diff+intersection in k931 */
static void C_ccall f_5501(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5501,3,t0,t1,t2);}
/* srfi-1.scm: 1657 member */
t3=*((C_word*)lf[272]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5497 in a5490 in k5472 in lset-diff+intersection in k931 */
static void C_ccall f_5499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* lset-xor! in k931 */
static void C_ccall f_5409(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5409r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5409r(t0,t1,t2,t3);}}

static void C_ccall f_5409r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5415,a[2]=t2,a[3]=lf[400],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1631 reduce */
t5=*((C_word*)lf[192]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,C_SCHEME_END_OF_LIST,t3);}

/* a5414 in lset-xor! in k931 */
static void C_ccall f_5415(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5415,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5421,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=lf[397],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5427,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=lf[399],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a5426 in a5414 in lset-xor! in k931 */
static void C_ccall f_5427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5427,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 1642 lset-difference! */
t4=*((C_word*)lf[384]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
/* srfi-1.scm: 1643 append! */
t4=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5451,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=lf[398],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1644 pair-fold */
t5=*((C_word*)lf[188]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,t2,((C_word*)t0)[3]);}}}

/* a5450 in a5426 in a5414 in lset-xor! in k931 */
static void C_ccall f_5451(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5451,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5458,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(t2);
/* srfi-1.scm: 1645 member */
t6=*((C_word*)lf[272]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5456 in a5450 in a5426 in a5414 in lset-xor! in k931 */
static void C_ccall f_5458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* a5420 in a5414 in lset-xor! in k931 */
static void C_ccall f_5421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5421,2,t0,t1);}
/* srfi-1.scm: 1641 lset-diff+intersection! */
t2=*((C_word*)lf[396]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lset-xor in k931 */
static void C_ccall f_5355(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5355r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5355r(t0,t1,t2,t3);}}

static void C_ccall f_5355r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5361,a[2]=t2,a[3]=lf[393],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1609 reduce */
t5=*((C_word*)lf[192]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,C_SCHEME_END_OF_LIST,t3);}

/* a5360 in lset-xor in k931 */
static void C_ccall f_5361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5361,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5367,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=lf[390],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5373,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=lf[392],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a5372 in a5360 in lset-xor in k931 */
static void C_ccall f_5373(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5373,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* srfi-1.scm: 1620 lset-difference */
t4=*((C_word*)lf[379]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
/* srfi-1.scm: 1621 append */
t4=*((C_word*)lf[131]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5397,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=lf[391],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1622 fold */
t5=*((C_word*)lf[164]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,t2,((C_word*)t0)[3]);}}}

/* a5396 in a5372 in a5360 in lset-xor in k931 */
static void C_ccall f_5397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5397,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5404,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1623 member */
t5=*((C_word*)lf[272]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5402 in a5396 in a5372 in a5360 in lset-xor in k931 */
static void C_ccall f_5404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5404,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3])));}

/* a5366 in a5360 in lset-xor in k931 */
static void C_ccall f_5367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5367,2,t0,t1);}
/* srfi-1.scm: 1619 lset-diff+intersection */
t2=*((C_word*)lf[389]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lset-difference! in k931 */
static void C_ccall f_5318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_5318r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5318r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5318r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5322,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1598 filter */
t6=*((C_word*)lf[237]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[382]+1),t4);}

/* k5320 in lset-difference! in k931 */
static void C_ccall f_5322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5322,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[3],t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5339,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=lf[386],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1601 filter! */
t3=*((C_word*)lf[240]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[3]);}}}

/* a5338 in k5320 in lset-difference! in k931 */
static void C_ccall f_5339(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5339,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5345,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[385],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1602 every */
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}

/* a5344 in a5338 in k5320 in lset-difference! in k931 */
static void C_ccall f_5345(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5345,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5353,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1602 member */
t4=*((C_word*)lf[272]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5351 in a5344 in a5338 in k5320 in lset-difference! in k931 */
static void C_ccall f_5353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* lset-difference in k931 */
static void C_ccall f_5281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_5281r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5281r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5281r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5285,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1588 filter */
t6=*((C_word*)lf[237]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,*((C_word*)lf[382]+1),t4);}

/* k5283 in lset-difference in k931 */
static void C_ccall f_5285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5285,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[3],t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5302,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=lf[381],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1591 filter */
t3=*((C_word*)lf[237]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[3]);}}}

/* a5301 in k5283 in lset-difference in k931 */
static void C_ccall f_5302(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5302,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5308,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[380],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1592 every */
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}

/* a5307 in a5301 in k5283 in lset-difference in k931 */
static void C_ccall f_5308(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5308,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5316,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1592 member */
t4=*((C_word*)lf[272]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5314 in a5307 in a5301 in k5283 in lset-difference in k931 */
static void C_ccall f_5316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* lset-intersection! in k931 */
static void C_ccall f_5248(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_5248r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5248r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5248r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5252,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1578 delete */
t6=*((C_word*)lf[265]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,t3,t4,*((C_word*)lf[373]+1));}

/* k5250 in lset-intersection! in k931 */
static void C_ccall f_5252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5258,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1579 any */
t3=*((C_word*)lf[323]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[33]+1),t1);}

/* k5256 in k5250 in lset-intersection! in k931 */
static void C_ccall f_5258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5258,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5269,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=lf[377],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1581 filter! */
t3=*((C_word*)lf[240]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[5],t2,((C_word*)t0)[3]);}}}

/* a5268 in k5256 in k5250 in lset-intersection! in k931 */
static void C_ccall f_5269(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5269,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5275,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[376],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1582 every */
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}

/* a5274 in a5268 in k5256 in k5250 in lset-intersection! in k931 */
static void C_ccall f_5275(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5275,3,t0,t1,t2);}
/* srfi-1.scm: 1582 member */
t3=*((C_word*)lf[272]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* lset-intersection in k931 */
static void C_ccall f_5215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_5215r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5215r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5215r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5219,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1569 delete */
t6=*((C_word*)lf[265]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,t3,t4,*((C_word*)lf[373]+1));}

/* k5217 in lset-intersection in k931 */
static void C_ccall f_5219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5219,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1570 any */
t3=*((C_word*)lf[323]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[33]+1),t1);}

/* k5223 in k5217 in lset-intersection in k931 */
static void C_ccall f_5225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5225,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5236,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=lf[372],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1572 filter */
t3=*((C_word*)lf[237]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[5],t2,((C_word*)t0)[3]);}}}

/* a5235 in k5223 in k5217 in lset-intersection in k931 */
static void C_ccall f_5236(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5236,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5242,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[371],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1573 every */
t4=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,((C_word*)t0)[2]);}

/* a5241 in a5235 in k5223 in k5217 in lset-intersection in k931 */
static void C_ccall f_5242(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5242,3,t0,t1,t2);}
/* srfi-1.scm: 1573 member */
t3=*((C_word*)lf[272]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* lset-union! in k931 */
static void C_ccall f_5164(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5164r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5164r(t0,t1,t2,t3);}}

static void C_ccall f_5164r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5170,a[2]=t2,a[3]=lf[368],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1553 reduce */
t5=*((C_word*)lf[192]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,C_SCHEME_END_OF_LIST,t3);}

/* a5169 in lset-union! in k931 */
static void C_ccall f_5170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5170,4,t0,t1,t2,t3);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5194,a[2]=((C_word*)t0)[2],a[3]=lf[367],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1558 pair-fold */
t6=*((C_word*)lf[188]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t5,t3,t2);}}}}

/* a5193 in a5169 in lset-union! in k931 */
static void C_ccall f_5194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5194,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5204,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5209,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[366],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1560 any */
t7=*((C_word*)lf[323]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t3);}

/* a5208 in a5193 in a5169 in lset-union! in k931 */
static void C_ccall f_5209(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5209,3,t0,t1,t2);}
/* srfi-1.scm: 1560 = */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* k5202 in a5193 in a5169 in lset-union! in k931 */
static void C_ccall f_5204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* lset-union in k931 */
static void C_ccall f_5116(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5116r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5116r(t0,t1,t2,t3);}}

static void C_ccall f_5116r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5122,a[2]=t2,a[3]=lf[363],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1540 reduce */
t5=*((C_word*)lf[192]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t4,C_SCHEME_END_OF_LIST,t3);}

/* a5121 in lset-union in k931 */
static void C_ccall f_5122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5122,4,t0,t1,t2,t3);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5146,a[2]=((C_word*)t0)[2],a[3]=lf[362],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1545 fold */
t6=*((C_word*)lf[164]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t5,t3,t2);}}}}

/* a5145 in a5121 in lset-union in k931 */
static void C_ccall f_5146(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5146,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5153,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5158,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[361],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1545 any */
t6=*((C_word*)lf[323]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t3);}

/* a5157 in a5145 in a5121 in lset-union in k931 */
static void C_ccall f_5158(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5158,3,t0,t1,t2);}
/* srfi-1.scm: 1545 = */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* k5151 in a5145 in a5121 in lset-union in k931 */
static void C_ccall f_5153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5153,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3])));}

/* lset-adjoin in k931 */
static void C_ccall f_5098(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_5098r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5098r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5098r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5104,a[2]=t2,a[3]=lf[358],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1534 fold */
t6=*((C_word*)lf[164]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t5,t3,t4);}

/* a5103 in lset-adjoin in k931 */
static void C_ccall f_5104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5104,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5111,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1534 member */
t5=*((C_word*)lf[272]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,t2,t3,((C_word*)t0)[2]);}

/* k5109 in a5103 in lset-adjoin in k931 */
static void C_ccall f_5111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5111,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3])));}

/* lset= in k931 */
static void C_ccall f_5034(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_5034r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5034r(t0,t1,t2,t3);}}

static void C_ccall f_5034r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(7);
t4=(C_word)C_i_pairp(t3);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_i_car(t3);
t7=(C_word)C_i_cdr(t3);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5054,a[2]=t2,a[3]=t9,a[4]=lf[355],tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5054(t11,t1,t6,t7);}}

/* lp in lset= in k931 */
static void C_fcall f_5054(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5054,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t3);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_i_car(t3);
t7=(C_word)C_i_cdr(t3);
t8=(C_word)C_eqp(t2,t6);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5076,a[2]=t7,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_5076(2,t10,t8);}
else{
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5085,a[2]=t2,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t9,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1528 ##srfi1#lset2<= */
f_4964(t10,((C_word*)t0)[2],t2,t6);}}}

/* k5083 in lp in lset= in k931 */
static void C_ccall f_5085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-1.scm: 1528 ##srfi1#lset2<= */
f_4964(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
f_5076(2,t2,C_SCHEME_FALSE);}}

/* k5074 in lp in lset= in k931 */
static void C_ccall f_5076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-1.scm: 1529 lp */
t2=((C_word*)((C_word*)t0)[5])[1];
f_5054(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* lset<= in k931 */
static void C_ccall f_4976(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_4976r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4976r(t0,t1,t2,t3);}}

static void C_ccall f_4976r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(7);
t4=(C_word)C_i_pairp(t3);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_i_car(t3);
t7=(C_word)C_i_cdr(t3);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4996,a[2]=t2,a[3]=t9,a[4]=lf[352],tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4996(t11,t1,t6,t7);}}

/* lp in lset<= in k931 */
static void C_fcall f_4996(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4996,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t3);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_i_car(t3);
t7=(C_word)C_i_cdr(t3);
t8=(C_word)C_eqp(t6,t2);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5018,a[2]=t7,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_5018(2,t10,t8);}
else{
/* srfi-1.scm: 1517 ##srfi1#lset2<= */
f_4964(t9,((C_word*)t0)[2],t2,t6);}}}

/* k5016 in lp in lset<= in k931 */
static void C_ccall f_5018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-1.scm: 1518 lp */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4996(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##srfi1#lset2<= in k931 */
static void C_fcall f_4964(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4964,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4970,a[2]=t2,a[3]=t4,a[4]=lf[349],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1508 every */
t6=*((C_word*)lf[331]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t5,t3);}

/* a4969 in ##srfi1#lset2<= in k931 */
static void C_ccall f_4970(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4970,3,t0,t1,t2);}
/* srfi-1.scm: 1508 member */
t3=*((C_word*)lf[272]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* reverse! in k931 */
static void C_ccall f_4940(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4940,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4946,a[2]=lf[346],tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_4946(t2,C_SCHEME_END_OF_LIST));}

/* lp in reverse! in k931 */
static C_word C_fcall f_4946(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
if(C_truep((C_word)C_i_null_list_p(t1))){
return(t2);}
else{
t3=(C_word)C_i_cdr(t1);
t4=(C_word)C_i_set_cdr(t1,t2);
t6=t3;
t7=t1;
t1=t6;
t2=t7;
goto loop;}}

/* list-index in k931 */
static void C_ccall f_4853(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_4853r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4853r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4853r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4869,a[2]=t2,a[3]=t7,a[4]=lf[342],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4869(t9,t1,t5,C_fix(0));}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4906,a[2]=t2,a[3]=t6,a[4]=lf[343],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4906(t8,t1,t3,C_fix(0));}}

/* lp in list-index in k931 */
static void C_fcall f_4906(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4906,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4919,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t2);
/* srfi-1.scm: 1477 pred */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}}

/* k4917 in lp in list-index in k931 */
static void C_ccall f_4919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-1.scm: 1477 lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4906(t4,((C_word*)t0)[5],t2,t3);}}

/* lp in list-index in k931 */
static void C_fcall f_4869(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4869,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4875,a[2]=t2,a[3]=lf[340],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=lf[341],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a4880 in lp in list-index in k931 */
static void C_ccall f_4881(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4881,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4894,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k4892 in a4880 in lp in list-index in k931 */
static void C_ccall f_4894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-1.scm: 1472 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4869(t3,((C_word*)t0)[5],((C_word*)t0)[2],t2);}}

/* a4874 in lp in list-index in k931 */
static void C_ccall f_4875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4875,2,t0,t1);}
/* srfi-1.scm: 1469 ##srfi1#cars+cdrs */
f_2357(t1,((C_word*)t0)[2]);}

/* every in k931 */
static void C_ccall f_4736(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr4r,(void*)f_4736r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4736r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4736r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(16);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4748,a[2]=t4,a[3]=t3,a[4]=lf[332],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4758,a[2]=t2,a[3]=lf[336],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1448 ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}
else{
t5=(C_word)C_i_null_list_p(t3);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_i_car(t3);
t7=(C_word)C_i_cdr(t3);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4824,a[2]=t9,a[3]=t2,a[4]=lf[337],tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4824(t11,t1,t6,t7);}}}

/* lp in every in k931 */
static void C_fcall f_4824(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4824,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t3))){
/* srfi-1.scm: 1460 pred */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4840,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1461 pred */
t5=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k4838 in lp in every in k931 */
static void C_ccall f_4840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-1.scm: 1461 lp */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4824(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a4757 in every in k931 */
static void C_ccall f_4758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4758,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4770,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=lf[335],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4770(t9,t1,t2,t3);}}

/* lp in a4757 in every in k931 */
static void C_fcall f_4770(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4770,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4776,a[2]=t3,a[3]=lf[333],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4782,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=lf[334],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a4781 in lp in a4757 in every in k931 */
static void C_ccall f_4782(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4782,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4795,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
C_apply(4,0,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4793 in a4781 in lp in a4757 in every in k931 */
static void C_ccall f_4795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-1.scm: 1453 lp */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4770(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a4775 in lp in a4757 in every in k931 */
static void C_ccall f_4776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4776,2,t0,t1);}
/* srfi-1.scm: 1451 ##srfi1#cars+cdrs */
f_2357(t1,((C_word*)t0)[2]);}

/* a4747 in every in k931 */
static void C_ccall f_4748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4748,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
/* srfi-1.scm: 1448 ##srfi1#cars+cdrs */
f_2357(t1,t2);}

/* any in k931 */
static void C_ccall f_4619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr4r,(void*)f_4619r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4619r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4619r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(16);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4631,a[2]=t4,a[3]=t3,a[4]=lf[324],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4641,a[2]=t2,a[3]=lf[328],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1421 ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}
else{
if(C_truep((C_word)C_i_null_list_p(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_car(t3);
t6=(C_word)C_i_cdr(t3);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4703,a[2]=t8,a[3]=t2,a[4]=lf[329],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4703(t10,t1,t5,t6);}}}

/* lp in any in k931 */
static void C_fcall f_4703(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4703,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t3))){
/* srfi-1.scm: 1433 pred */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4716,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1434 pred */
t5=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k4714 in lp in any in k931 */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-1.scm: 1434 lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4703(t4,((C_word*)t0)[4],t2,t3);}}

/* a4640 in any in k931 */
static void C_ccall f_4641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4641,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4653,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=lf[327],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4653(t7,t1,t2,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* lp in a4640 in any in k931 */
static void C_fcall f_4653(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4653,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4659,a[2]=t3,a[3]=lf[325],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4665,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=lf[326],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a4664 in lp in a4640 in any in k931 */
static void C_ccall f_4665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4665,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4675,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
C_apply(4,0,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4673 in a4664 in lp in a4640 in any in k931 */
static void C_ccall f_4675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* srfi-1.scm: 1426 lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4653(t2,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* a4658 in lp in a4640 in any in k931 */
static void C_ccall f_4659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4659,2,t0,t1);}
/* srfi-1.scm: 1424 ##srfi1#cars+cdrs */
f_2357(t1,((C_word*)t0)[2]);}

/* a4630 in any in k931 */
static void C_ccall f_4631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4631,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
/* srfi-1.scm: 1421 ##srfi1#cars+cdrs */
f_2357(t1,t2);}

/* break! in k931 */
static void C_ccall f_4603(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4603,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4609,a[2]=t2,a[3]=lf[321],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1414 span! */
t5=*((C_word*)lf[314]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* a4608 in break! in k931 */
static void C_ccall f_4609(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4609,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4617,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1414 pred */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k4615 in a4608 in break! in k931 */
static void C_ccall f_4617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* break in k931 */
static void C_ccall f_4587(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4587,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4593,a[2]=t2,a[3]=lf[318],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1413 span */
t5=*((C_word*)lf[309]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* a4592 in break in k931 */
static void C_ccall f_4593(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4593,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4601,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1413 pred */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k4599 in a4592 in break in k931 */
static void C_ccall f_4601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* span! in k931 */
static void C_ccall f_4523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4523,4,t0,t1,t2,t3);}
t4=(C_word)C_i_null_list_p(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4533,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_4533(t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4581,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_i_car(t3);
/* srfi-1.scm: 1403 pred */
t8=t2;
((C_proc3)C_retrieve_proc(t8))(3,t8,t6,t7);}}

/* k4579 in span! in k931 */
static void C_ccall f_4581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4533(t2,(C_word)C_i_not(t1));}

/* k4531 in span! in k931 */
static void C_fcall f_4533(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4533,NULL,2,t0,t1);}
if(C_truep(t1)){
/* srfi-1.scm: 1403 values */
C_values(4,0,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4539,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4548,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=lf[315],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4548(t7,t2,((C_word*)t0)[3],t3);}}

/* lp in k4531 in span! in k931 */
static void C_fcall f_4548(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4548,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4564,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1407 pred */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}}

/* k4562 in lp in k4531 in span! in k931 */
static void C_ccall f_4564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* srfi-1.scm: 1407 lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4548(t3,((C_word*)t0)[3],((C_word*)t0)[5],t2);}
else{
t2=(C_word)C_i_set_cdr(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}}

/* k4537 in k4531 in span! in k931 */
static void C_ccall f_4539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1410 values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* span in k931 */
static void C_ccall f_4470(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4470,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4476,a[2]=t2,a[3]=t5,a[4]=lf[312],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4476(t7,t1,t3);}

/* recur in span in k931 */
static void C_fcall f_4476(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4476,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
/* srfi-1.scm: 1394 values */
C_values(4,0,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4495,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1396 pred */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}}

/* k4493 in recur in span in k931 */
static void C_ccall f_4495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4495,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4500,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[310],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4510,a[2]=((C_word*)t0)[3],a[3]=lf[311],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1397 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}
else{
/* srfi-1.scm: 1399 values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,((C_word*)t0)[5]);}}

/* a4509 in k4493 in recur in span in k931 */
static void C_ccall f_4510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4510,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
/* srfi-1.scm: 1398 values */
C_values(4,0,t1,t4,t3);}

/* a4499 in k4493 in recur in span in k931 */
static void C_ccall f_4500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4500,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-1.scm: 1397 recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4476(t3,t1,t2);}

/* take-while! in k931 */
static void C_ccall f_4412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4412,4,t0,t1,t2,t3);}
t4=(C_word)C_i_null_list_p(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4422,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_4422(t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4464,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_i_car(t3);
/* srfi-1.scm: 1383 pred */
t8=t2;
((C_proc3)C_retrieve_proc(t8))(3,t8,t6,t7);}}

/* k4462 in take-while! in k931 */
static void C_ccall f_4464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4422(t2,(C_word)C_i_not(t1));}

/* k4420 in take-while! in k931 */
static void C_fcall f_4422(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4422,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4425,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4431,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=lf[307],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4431(t7,t2,((C_word*)t0)[3],t3);}}

/* lp in k4420 in take-while! in k931 */
static void C_fcall f_4431(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4431,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4447,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1387 pred */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k4445 in lp in k4420 in take-while! in k931 */
static void C_ccall f_4447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* srfi-1.scm: 1387 lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4431(t3,((C_word*)t0)[3],((C_word*)t0)[5],t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_cdr(((C_word*)t0)[2],C_SCHEME_END_OF_LIST));}}

/* k4423 in k4420 in take-while! in k931 */
static void C_ccall f_4425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* drop-while in k931 */
static void C_ccall f_4380(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4380,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4386,a[2]=t2,a[3]=t5,a[4]=lf[304],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4386(t7,t1,t3);}

/* lp in drop-while in k931 */
static void C_fcall f_4386(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4386,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4399,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* srfi-1.scm: 1377 pred */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}}

/* k4397 in lp in drop-while in k931 */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-1.scm: 1378 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4386(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* take-while in k931 */
static void C_ccall f_4345(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4345,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4351,a[2]=t2,a[3]=t5,a[4]=lf[301],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4351(t7,t1,t3);}

/* recur in take-while in k931 */
static void C_fcall f_4351(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4351,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4367,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1369 pred */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}}

/* k4365 in recur in take-while in k931 */
static void C_ccall f_4367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4367,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4374,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-1.scm: 1370 recur */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4351(t4,t2,t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* k4372 in k4365 in recur in take-while in k931 */
static void C_ccall f_4374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4374,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* find-tail in k931 */
static void C_ccall f_4309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4309,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4315,a[2]=t2,a[3]=t5,a[4]=lf[298],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4315(t7,t1,t3);}

/* lp in find-tail in k931 */
static void C_fcall f_4315(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4315,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4328,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* srfi-1.scm: 1361 pred */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}}

/* k4326 in lp in find-tail in k931 */
static void C_ccall f_4328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-1.scm: 1362 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4315(t3,((C_word*)t0)[4],t2);}}

/* find in k931 */
static void C_ccall f_4297(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4297,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4301,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1354 find-tail */
t5=*((C_word*)lf[274]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k4299 in find in k931 */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_i_car(t1):C_SCHEME_FALSE));}

/* alist-delete! in k931 */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4268r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4268r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4268r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[266]+1):(C_word)C_i_vector_ref(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4277,a[2]=t2,a[3]=t6,a[4]=lf[295],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1347 filter! */
t8=*((C_word*)lf[240]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a4276 in alist-delete! in k931 */
static void C_ccall f_4277(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4277,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4285,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_car(t2);
/* srfi-1.scm: 1347 = */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}

/* k4283 in a4276 in alist-delete! in k931 */
static void C_ccall f_4285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* alist-delete in k931 */
static void C_ccall f_4239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4239r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4239r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4239r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[266]+1):(C_word)C_i_vector_ref(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4248,a[2]=t2,a[3]=t6,a[4]=lf[292],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1343 filter */
t8=*((C_word*)lf[237]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a4247 in alist-delete in k931 */
static void C_ccall f_4248(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4248,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4256,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_car(t2);
/* srfi-1.scm: 1343 = */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}

/* k4254 in a4247 in alist-delete in k931 */
static void C_ccall f_4256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* alist-copy in k931 */
static void C_ccall f_4219(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4219,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4225,a[2]=lf[289],tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1338 ##sys#map */
t4=*((C_word*)lf[97]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t3,t2);}

/* a4224 in alist-copy in k931 */
static void C_ccall f_4225(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4225,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,t3,t4));}

/* alist-cons in k931 */
static void C_ccall f_4209(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4209,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_cons(&a,2,t2,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,t5,t4));}

/* assoc in k931 */
static void C_ccall f_4184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4184r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4184r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4184r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[266]+1):(C_word)C_i_vector_ref(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4193,a[2]=t2,a[3]=t6,a[4]=lf[283],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1333 find */
t8=*((C_word*)lf[284]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a4192 in assoc in k931 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4193,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
/* srfi-1.scm: 1333 = */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[2],t3);}

/* delete-duplicates! in k931 */
static void C_ccall f_4138(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4138r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4138r(t0,t1,t2,t3);}}

static void C_ccall f_4138r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(7);
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?*((C_word*)lf[266]+1):(C_word)C_i_vector_ref(t3,C_fix(0)));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4147,a[2]=t5,a[3]=t7,a[4]=lf[280],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4147(t9,t1,t2);}

/* recur in delete-duplicates! in k931 */
static void C_fcall f_4147(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4147,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4163,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4176,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1323 delete! */
t7=*((C_word*)lf[269]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t3,t4,((C_word*)t0)[2]);}}

/* k4174 in recur in delete-duplicates! in k931 */
static void C_ccall f_4176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1323 recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4147(t2,((C_word*)t0)[2],t1);}

/* k4161 in recur in delete-duplicates! in k931 */
static void C_ccall f_4163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4163,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1)));}

/* delete-duplicates in k931 */
static void C_ccall f_4092(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4092r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4092r(t0,t1,t2,t3);}}

static void C_ccall f_4092r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(7);
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?*((C_word*)lf[266]+1):(C_word)C_i_vector_ref(t3,C_fix(0)));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4101,a[2]=t5,a[3]=t7,a[4]=lf[277],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_4101(t9,t1,t2);}

/* recur in delete-duplicates in k931 */
static void C_fcall f_4101(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4101,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4117,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4130,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1313 delete */
t7=*((C_word*)lf[265]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t3,t4,((C_word*)t0)[2]);}}

/* k4128 in recur in delete-duplicates in k931 */
static void C_ccall f_4130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1313 recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4101(t2,((C_word*)t0)[2],t1);}

/* k4115 in recur in delete-duplicates in k931 */
static void C_ccall f_4117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4117,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1)));}

/* member in k931 */
static void C_ccall f_4071(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4071r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4071r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4071r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[266]+1):(C_word)C_i_vector_ref(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4080,a[2]=t2,a[3]=t6,a[4]=lf[273],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1288 find-tail */
t8=*((C_word*)lf[274]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a4079 in member in k931 */
static void C_ccall f_4080(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4080,3,t0,t1,t2);}
/* srfi-1.scm: 1288 = */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* delete! in k931 */
static void C_ccall f_4046(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4046r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4046r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4046r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[266]+1):(C_word)C_i_vector_ref(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4055,a[2]=t2,a[3]=t6,a[4]=lf[270],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1283 filter! */
t8=*((C_word*)lf[240]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a4054 in delete! in k931 */
static void C_ccall f_4055(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4055,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4063,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1283 = */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k4061 in a4054 in delete! in k931 */
static void C_ccall f_4063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* delete in k931 */
static void C_ccall f_4021(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4021r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4021r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4021r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?*((C_word*)lf[266]+1):(C_word)C_i_vector_ref(t4,C_fix(0)));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4030,a[2]=t2,a[3]=t6,a[4]=lf[267],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1279 filter */
t8=*((C_word*)lf[237]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,t7,t3);}

/* a4029 in delete in k931 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4030,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4038,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1279 = */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k4036 in a4029 in delete in k931 */
static void C_ccall f_4038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* remove! in k931 */
static void C_ccall f_4005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4005,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4011,a[2]=t2,a[3]=lf[263],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1256 filter! */
t5=*((C_word*)lf[240]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* a4010 in remove! in k931 */
static void C_ccall f_4011(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4011,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4019,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1256 pred */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k4017 in a4010 in remove! in k931 */
static void C_ccall f_4019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* remove in k931 */
static void C_ccall f_3989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3989,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3995,a[2]=t2,a[3]=lf[260],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1255 filter */
t5=*((C_word*)lf[237]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t3);}

/* a3994 in remove in k931 */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3995,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4003,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 1255 pred */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k4001 in a3994 in remove in k931 */
static void C_ccall f_4003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* partition! in k931 */
static void C_ccall f_3777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3777,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t3))){
/* srfi-1.scm: 1212 values */
C_values(4,0,t1,t3,t3);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3789,a[2]=t2,a[3]=t7,a[4]=lf[253],tmp=(C_word)a,a+=5,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3834,a[2]=t2,a[3]=t5,a[4]=lf[255],tmp=(C_word)a,a+=5,tmp));
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3883,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t11=(C_word)C_i_car(t3);
/* srfi-1.scm: 1237 pred */
t12=t2;
((C_proc3)C_retrieve_proc(t12))(3,t12,t10,t11);}}

/* k3881 in partition! in k931 */
static void C_ccall f_3883(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3883,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3892,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=lf[256],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_3892(t6,((C_word*)t0)[3],((C_word*)t0)[6],t2);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3942,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=lf[257],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_3942(t6,((C_word*)t0)[3],((C_word*)t0)[6],t2);}}

/* lp in k3881 in partition! in k931 */
static void C_fcall f_3942(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3942,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3958,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_i_car(t3);
/* srfi-1.scm: 1248 pred */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
/* srfi-1.scm: 1247 values */
C_values(4,0,t1,t3,((C_word*)t0)[5]);}}

/* k3956 in lp in k3881 in partition! in k931 */
static void C_ccall f_3958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3958,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3961,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* srfi-1.scm: 1249 scan-in */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3789(t4,t2,((C_word*)t0)[6],((C_word*)t0)[3],t3);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* srfi-1.scm: 1251 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3942(t3,((C_word*)t0)[7],((C_word*)t0)[6],t2);}}

/* k3959 in k3956 in lp in k3881 in partition! in k931 */
static void C_ccall f_3961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1250 values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k3881 in partition! in k931 */
static void C_fcall f_3892(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3892,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3908,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_i_car(t3);
/* srfi-1.scm: 1241 pred */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
/* srfi-1.scm: 1240 values */
C_values(4,0,t1,((C_word*)t0)[4],t3);}}

/* k3906 in lp in k3881 in partition! in k931 */
static void C_ccall f_3908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3908,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* srfi-1.scm: 1241 lp */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3892(t3,((C_word*)t0)[5],((C_word*)t0)[7],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3918,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* srfi-1.scm: 1242 scan-out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3834(t4,t2,((C_word*)t0)[2],((C_word*)t0)[7],t3);}}

/* k3916 in k3906 in lp in k3881 in partition! in k931 */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1243 values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* scan-out in partition! in k931 */
static void C_fcall f_3834(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3834,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3840,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=lf[254],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3840(t8,t1,t3,t4);}

/* lp in scan-out in partition! in k931 */
static void C_fcall f_3840(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3840,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3853,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_i_car(t3);
/* srfi-1.scm: 1230 pred */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_cdr(((C_word*)t0)[5],t3));}}

/* k3851 in lp in scan-out in partition! in k931 */
static void C_ccall f_3853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_set_cdr(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* srfi-1.scm: 1232 scan-in */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3789(t4,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],t3);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* srfi-1.scm: 1233 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3840(t3,((C_word*)t0)[4],((C_word*)t0)[6],t2);}}

/* scan-in in partition! in k931 */
static void C_fcall f_3789(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3789,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t6,a[6]=lf[252],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_3795(t8,t1,t2,t4);}

/* lp in scan-in in partition! in k931 */
static void C_fcall f_3795(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3795,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3808,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_i_car(t3);
/* srfi-1.scm: 1221 pred */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_cdr(((C_word*)t0)[4],t3));}}

/* k3806 in lp in scan-in in partition! in k931 */
static void C_ccall f_3808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* srfi-1.scm: 1222 lp */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3795(t3,((C_word*)t0)[5],((C_word*)t0)[7],t2);}
else{
t2=(C_word)C_i_set_cdr(((C_word*)t0)[4],((C_word*)t0)[7]);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* srfi-1.scm: 1224 scan-out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3834(t4,((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[7],t3);}}

/* partition in k931 */
static void C_ccall f_3709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3709,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3715,a[2]=t2,a[3]=t5,a[4]=lf[249],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3715(t7,t1,t3);}

/* recur in partition in k931 */
static void C_fcall f_3715(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3715,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
/* srfi-1.scm: 1179 values */
C_values(4,0,t1,t2,t2);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3736,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=lf[247],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=lf[248],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}}

/* a3741 in recur in partition in k931 */
static void C_ccall f_3742(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3742,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3749,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 1183 pred */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[4]);}

/* k3747 in a3741 in recur in partition in k931 */
static void C_ccall f_3749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3749,2,t0,t1);}
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

/* a3735 in recur in partition in k931 */
static void C_ccall f_3736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3736,2,t0,t1);}
/* srfi-1.scm: 1182 recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3715(t2,t1,((C_word*)t0)[2]);}

/* filter! in k931 */
static void C_ccall f_3588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3588,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3594,a[2]=t5,a[3]=t2,a[4]=lf[244],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3594(t7,t1,t3);}

/* lp in filter! in k931 */
static void C_fcall f_3594(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3594,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3703,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_car(t2);
/* srfi-1.scm: 1144 pred */
t5=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}}

/* k3701 in lp in filter! in k931 */
static void C_ccall f_3703(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3703,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3616,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=t3,a[5]=lf[241],tmp=(C_word)a,a+=6,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3649,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=lf[243],tmp=(C_word)a,a+=5,tmp));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3695,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-1.scm: 1168 scan-in */
t10=((C_word*)t3)[1];
f_3616(t10,t8,((C_word*)t0)[3],t9);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-1.scm: 1144 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3594(t3,((C_word*)t0)[4],t2);}}

/* k3693 in k3701 in lp in filter! in k931 */
static void C_ccall f_3695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* scan-out in k3701 in lp in filter! in k931 */
static void C_fcall f_3649(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3649,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3655,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=lf[242],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_3655(t7,t1,t3);}

/* lp in scan-out in k3701 in lp in filter! in k931 */
static void C_fcall f_3655(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3655,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3668,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_car(t2);
/* srfi-1.scm: 1163 pred */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_set_cdr(((C_word*)t0)[5],t2));}}

/* k3666 in lp in scan-out in k3701 in lp in filter! in k931 */
static void C_ccall f_3668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_set_cdr(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* srfi-1.scm: 1165 scan-in */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3616(t4,((C_word*)t0)[3],((C_word*)t0)[5],t3);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* srfi-1.scm: 1166 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3655(t3,((C_word*)t0)[3],t2);}}

/* scan-in in k3701 in lp in filter! in k931 */
static void C_fcall f_3616(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3616,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3629,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_i_car(t3);
/* srfi-1.scm: 1157 pred */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k3627 in scan-in in k3701 in lp in filter! in k931 */
static void C_ccall f_3629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* srfi-1.scm: 1158 scan-in */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3616(t3,((C_word*)t0)[4],((C_word*)t0)[6],t2);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* srfi-1.scm: 1159 scan-out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3649(t3,((C_word*)t0)[4],((C_word*)t0)[2],t2);}}

/* filter in k931 */
static void C_ccall f_3546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3546,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3552,a[2]=t2,a[3]=t5,a[4]=lf[238],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3552(t7,t1,t3);}

/* recur in filter in k931 */
static void C_fcall f_3552(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3552,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3571,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 1093 pred */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}}

/* k3569 in recur in filter in k931 */
static void C_ccall f_3571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3571,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3574,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1094 recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3552(t3,t2,((C_word*)t0)[6]);}
else{
/* srfi-1.scm: 1097 recur */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3552(t2,((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* k3572 in k3569 in recur in filter in k931 */
static void C_ccall f_3574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3574,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1)));}

/* map-in-order in k931 */
static void C_ccall f_3469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_3469r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3469r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3469r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3485,a[2]=t2,a[3]=t7,a[4]=lf[234],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_3485(t9,t1,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3519,a[2]=t2,a[3]=t6,a[4]=lf[235],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3519(t8,t1,t3);}}

/* recur in map-in-order in k931 */
static void C_fcall f_3519(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3519,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3532,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(t2);
/* srfi-1.scm: 1071 f */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}}

/* k3530 in recur in map-in-order in k931 */
static void C_ccall f_3532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3539,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1072 recur */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3519(t3,t2,((C_word*)t0)[2]);}

/* k3537 in k3530 in recur in map-in-order in k931 */
static void C_ccall f_3539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3539,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* recur in map-in-order in k931 */
static void C_fcall f_3485(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3485,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3491,a[2]=t2,a[3]=lf[232],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[233],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a3496 in recur in map-in-order in k931 */
static void C_ccall f_3497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3497,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3507,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* k3505 in a3496 in recur in map-in-order in k931 */
static void C_ccall f_3507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3514,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1064 recur */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3485(t3,t2,((C_word*)t0)[2]);}

/* k3512 in k3505 in a3496 in recur in map-in-order in k931 */
static void C_ccall f_3514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3514,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a3490 in recur in map-in-order in k931 */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3491,2,t0,t1);}
/* srfi-1.scm: 1061 ##srfi1#cars+cdrs */
f_2357(t1,((C_word*)t0)[2]);}

/* filter-map in k931 */
static void C_ccall f_3384(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_3384r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3384r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3384r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3400,a[2]=t2,a[3]=t7,a[4]=lf[228],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_3400(t9,t1,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3440,a[2]=t6,a[3]=t2,a[4]=lf[229],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3440(t8,t1,t3);}}

/* recur in filter-map in k931 */
static void C_fcall f_3440(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3440,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3450,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cdr(t2);
/* srfi-1.scm: 1048 recur */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k3448 in recur in filter-map in k931 */
static void C_ccall f_3450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3453,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* srfi-1.scm: 1049 f */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k3451 in k3448 in recur in filter-map in k931 */
static void C_ccall f_3453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3453,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]):((C_word*)t0)[2]));}

/* recur in filter-map in k931 */
static void C_fcall f_3400(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3400,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3406,a[2]=t2,a[3]=lf[226],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[227],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a3411 in recur in filter-map in k931 */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3412,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3422,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* k3420 in a3411 in recur in filter-map in k931 */
static void C_ccall f_3422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3422,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3432,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1041 recur */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3400(t3,t2,((C_word*)t0)[2]);}
else{
/* srfi-1.scm: 1042 recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3400(t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k3430 in k3420 in a3411 in recur in filter-map in k931 */
static void C_ccall f_3432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3432,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a3405 in recur in filter-map in k931 */
static void C_ccall f_3406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3406,2,t0,t1);}
/* srfi-1.scm: 1039 ##srfi1#cars+cdrs */
f_2357(t1,((C_word*)t0)[2]);}

/* map! in k931 */
static void C_ccall f_3312(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_3312r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3312r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3312r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(15);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3316,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3324,a[2]=t2,a[3]=t7,a[4]=lf[222],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_3324(t9,t5,t3,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3370,a[2]=t2,a[3]=lf[223],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 1030 pair-for-each */
t7=*((C_word*)lf[208]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t3);}}

/* a3369 in map! in k931 */
static void C_ccall f_3370(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3370,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3378,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(t2);
/* srfi-1.scm: 1030 f */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* k3376 in a3369 in map! in k931 */
static void C_ccall f_3378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_car(((C_word*)t0)[2],t1));}

/* lp in map! in k931 */
static void C_fcall f_3324(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3324,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3336,a[2]=t3,a[3]=lf[220],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=lf[221],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1025 ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a3341 in lp in map! in k931 */
static void C_ccall f_3342(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3342,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3357,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[4]);
C_apply(5,0,t4,((C_word*)t0)[2],t5,t2);}

/* k3355 in a3341 in lp in map! in k931 */
static void C_ccall f_3357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_set_car(((C_word*)t0)[5],t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* srfi-1.scm: 1027 lp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3324(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* a3335 in lp in map! in k931 */
static void C_ccall f_3336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3336,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2527,a[2]=t4,a[3]=lf[219],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2527(t6,t1,t2);}

/* recur in a3335 in lp in map! in k931 */
static void C_fcall f_2527(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2527,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2539,a[2]=t2,a[3]=lf[213],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2545,a[2]=((C_word*)t0)[2],a[3]=lf[218],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 846  ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}
else{
/* srfi-1.scm: 850  values */
C_values(4,0,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* a2544 in recur in a3335 in lp in map! in k931 */
static void C_ccall f_2545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2545,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2551,a[2]=t2,a[3]=lf[214],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2557,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=lf[217],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a2556 in a2544 in recur in a3335 in lp in map! in k931 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2557,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2563,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[215],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2569,a[2]=t3,a[3]=t2,a[4]=lf[216],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a2568 in a2556 in a2544 in recur in a3335 in lp in map! in k931 */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2569,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
/* srfi-1.scm: 849  values */
C_values(4,0,t1,t4,t5);}

/* a2562 in a2556 in a2544 in recur in a3335 in lp in map! in k931 */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2563,2,t0,t1);}
/* srfi-1.scm: 848  recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2527(t2,t1,((C_word*)t0)[2]);}

/* a2550 in a2544 in recur in a3335 in lp in map! in k931 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
/* srfi-1.scm: 847  car+cdr */
t2=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a2538 in recur in a3335 in lp in map! in k931 */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2539,2,t0,t1);}
/* srfi-1.scm: 846  car+cdr */
t2=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* k3314 in map! in k931 */
static void C_ccall f_3316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* pair-for-each in k931 */
static void C_ccall f_3253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_3253r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3253r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3253r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3269,a[2]=t2,a[3]=t7,a[4]=lf[209],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_3269(t9,t1,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3290,a[2]=t2,a[3]=t6,a[4]=lf[210],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3290(t8,t1,t3);}}

/* lp in pair-for-each in k931 */
static void C_fcall f_3290(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3290,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3303,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 1016 proc */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k3301 in lp in pair-for-each in k931 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1017 lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3290(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in pair-for-each in k931 */
static void C_fcall f_3269(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3269,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3273,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 1007 ##srfi1#cdrs */
f_2276(t3,t2);}

/* k3271 in lp in pair-for-each in k931 */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3273,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3282,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3280 in k3271 in lp in pair-for-each in k931 */
static void C_ccall f_3282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 1010 lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3269(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##srfi1#really-append-map in k931 */
static void C_fcall f_3144(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3144,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3156,a[2]=t5,a[3]=t4,a[4]=lf[201],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3166,a[2]=t3,a[3]=t2,a[4]=lf[205],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 986  ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}
else{
if(C_truep((C_word)C_i_null_list_p(t4))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=(C_word)C_i_car(t4);
t7=(C_word)C_i_cdr(t4);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3226,a[2]=t3,a[3]=t9,a[4]=t2,a[5]=lf[206],tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3226(t11,t1,t6,t7);}}}

/* recur in ##srfi1#really-append-map in k931 */
static void C_fcall f_3226(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3226,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3230,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 997  f */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k3228 in recur in ##srfi1#really-append-map in k931 */
static void C_ccall f_3230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3230,2,t0,t1);}
if(C_truep((C_word)C_i_null_list_p(((C_word*)t0)[5]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3243,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* srfi-1.scm: 999  recur */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3226(t5,t2,t3,t4);}}

/* k3241 in k3228 in recur in ##srfi1#really-append-map in k931 */
static void C_ccall f_3243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 999  appender */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3165 in ##srfi1#really-append-map in k931 */
static void C_ccall f_3166(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3166,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3178,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=lf[204],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3178(t7,t1,t2,t3);}}

/* recur in a3165 in ##srfi1#really-append-map in k931 */
static void C_fcall f_3178(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3178,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3182,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t2);}

/* k3180 in recur in a3165 in ##srfi1#really-append-map in k931 */
static void C_ccall f_3182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3187,a[2]=((C_word*)t0)[5],a[3]=lf[202],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3193,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=lf[203],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a3192 in k3180 in recur in a3165 in ##srfi1#really-append-map in k931 */
static void C_ccall f_3193(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3193,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 992  recur */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3178(t5,t4,t2,t3);}}

/* k3205 in a3192 in k3180 in recur in a3165 in ##srfi1#really-append-map in k931 */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 992  appender */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3186 in k3180 in recur in a3165 in ##srfi1#really-append-map in k931 */
static void C_ccall f_3187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3187,2,t0,t1);}
/* srfi-1.scm: 990  ##srfi1#cars+cdrs */
f_2357(t1,((C_word*)t0)[2]);}

/* a3155 in ##srfi1#really-append-map in k931 */
static void C_ccall f_3156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3156,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
/* srfi-1.scm: 986  ##srfi1#cars+cdrs */
f_2357(t1,t2);}

/* append-map! in k931 */
static void C_ccall f_3138(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3138r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3138r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3138r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
/* srfi-1.scm: 981  ##srfi1#really-append-map */
f_3144(t1,*((C_word*)lf[119]+1),t2,t3,t4);}

/* append-map in k931 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3132r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3132r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3132r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
/* srfi-1.scm: 979  ##srfi1#really-append-map */
f_3144(t1,*((C_word*)lf[131]+1),t2,t3,t4);}

/* reduce-right in k931 */
static void C_ccall f_3088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3088,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_null_list_p(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_i_car(t4);
t6=(C_word)C_i_cdr(t4);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3108,a[2]=t8,a[3]=t2,a[4]=lf[194],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3108(t10,t1,t5,t6);}}

/* recur in reduce-right in k931 */
static void C_fcall f_3108(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3108,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3122,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(t3);
t6=(C_word)C_i_cdr(t3);
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

/* k3120 in recur in reduce-right in k931 */
static void C_ccall f_3122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 970  f */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* reduce in k931 */
static void C_ccall f_3068(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3068,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_null_list_p(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_i_car(t4);
t6=(C_word)C_i_cdr(t4);
/* srfi-1.scm: 963  fold */
t7=*((C_word*)lf[164]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t2,t5,t6);}}

/* pair-fold in k931 */
static void C_ccall f_3003(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr5r,(void*)f_3003r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3003r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3003r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3019,a[2]=t2,a[3]=t8,a[4]=lf[189],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3019(t10,t1,t6,t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3049,a[2]=t2,a[3]=t7,a[4]=lf[190],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_3049(t9,t1,t4,t3);}}

/* lp in pair-fold in k931 */
static void C_fcall f_3049(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3049,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3066,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 954  f */
t6=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t2,t3);}}

/* k3064 in lp in pair-fold in k931 */
static void C_ccall f_3066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 954  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3049(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* lp in pair-fold in k931 */
static void C_fcall f_3019(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3019,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3023,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 947  ##srfi1#cdrs */
f_2276(t4,t2);}

/* k3021 in lp in pair-fold in k931 */
static void C_ccall f_3023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3023,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3036,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3040,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
/* srfi-1.scm: 949  append! */
t5=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k3038 in k3021 in lp in pair-fold in k931 */
static void C_ccall f_3040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3034 in k3021 in lp in pair-fold in k931 */
static void C_ccall f_3036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 949  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3019(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* pair-fold-right in k931 */
static void C_ccall f_2937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr5r,(void*)f_2937r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2937r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2937r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(19);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2953,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=lf[185],tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_2953(t10,t1,t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2983,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=lf[186],tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_2983(t9,t1,t4);}}

/* recur in pair-fold-right in k931 */
static void C_fcall f_2983(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2983,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2997,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cdr(t2);
/* srfi-1.scm: 941  recur */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k2995 in recur in pair-fold-right in k931 */
static void C_ccall f_2997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 941  f */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* recur in pair-fold-right in k931 */
static void C_fcall f_2953(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2953,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2957,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 936  ##srfi1#cdrs */
f_2276(t3,t2);}

/* k2955 in recur in pair-fold-right in k931 */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2957,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2970,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2978,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 938  recur */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2953(t4,t3,t1);}}

/* k2976 in k2955 in recur in pair-fold-right in k931 */
static void C_ccall f_2978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2978,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* srfi-1.scm: 938  append! */
t3=*((C_word*)lf[119]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2968 in k2955 in recur in pair-fold-right in k931 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* fold-right in k931 */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr5r,(void*)f_2872r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2872r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2872r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(19);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2888,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=lf[181],tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_2888(t10,t1,t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2914,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=lf[182],tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_2914(t9,t1,t4);}}

/* recur in fold-right in k931 */
static void C_fcall f_2914(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2914,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2931,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cdr(t2);
/* srfi-1.scm: 929  recur */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k2929 in recur in fold-right in k931 */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 929  kons */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* recur in fold-right in k931 */
static void C_fcall f_2888(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2888,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2892,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 922  ##srfi1#cdrs */
f_2276(t3,t2);}

/* k2890 in recur in fold-right in k931 */
static void C_ccall f_2892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2892,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2905,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2909,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 924  recur */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2888(t4,t3,t1);}}

/* k2907 in k2890 in recur in fold-right in k931 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2909,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2330,a[2]=t1,a[3]=t4,a[4]=lf[180],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2330(t6,((C_word*)t0)[2],t2);}

/* recur in k2907 in k2890 in recur in fold-right in k931 */
static void C_fcall f_2330(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2330,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2344,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 810  caar */
t4=*((C_word*)lf[179]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]));}}

/* k2342 in recur in k2907 in k2890 in recur in fold-right in k931 */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2348,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-1.scm: 810  recur */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2330(t4,t2,t3);}

/* k2346 in k2342 in recur in k2907 in k2890 in recur in fold-right in k931 */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2348,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2903 in k2890 in recur in fold-right in k931 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* fold in k931 */
static void C_ccall f_2801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr5r,(void*)f_2801r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2801r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2801r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2817,a[2]=t2,a[3]=t8,a[4]=lf[175],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2817(t10,t1,t6,t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2848,a[2]=t2,a[3]=t7,a[4]=lf[176],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2848(t9,t1,t4,t3);}}

/* lp in fold in k931 */
static void C_fcall f_2848(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2848,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2866,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_car(t2);
/* srfi-1.scm: 915  kons */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,t6,t3);}}

/* k2864 in lp in fold in k931 */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 915  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2848(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* lp in fold in k931 */
static void C_fcall f_2817(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2817,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2823,a[2]=t3,a[3]=t2,a[4]=lf[173],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=lf[174],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a2828 in lp in fold in k931 */
static void C_ccall f_2829(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2829,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2843,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_apply(4,0,t4,((C_word*)t0)[2],t2);}}

/* k2841 in a2828 in lp in fold in k931 */
static void C_ccall f_2843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 911  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2817(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2822 in lp in fold in k931 */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2823,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2443,a[2]=t2,a[3]=t3,a[4]=lf[172],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 831  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t4);}

/* a2442 in a2822 in lp in fold in k931 */
static void C_ccall f_2443(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2443,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2449,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,a[5]=lf[171],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2449(t6,t1,((C_word*)t0)[2]);}

/* recur in a2442 in a2822 in lp in fold in k931 */
static void C_fcall f_2449(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2449,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2461,a[2]=t2,a[3]=lf[165],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2467,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[170],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 835  ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}
else{
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* srfi-1.scm: 840  values */
C_values(4,0,t1,t3,C_SCHEME_END_OF_LIST);}}

/* a2466 in recur in a2442 in a2822 in lp in fold in k931 */
static void C_ccall f_2467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2467,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t2))){
/* srfi-1.scm: 836  abort */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2482,a[2]=t2,a[3]=lf[166],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2488,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=lf[169],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 837  ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a2487 in a2466 in recur in a2442 in a2822 in lp in fold in k931 */
static void C_ccall f_2488(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2488,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[167],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2500,a[2]=t3,a[3]=t2,a[4]=lf[168],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a2499 in a2487 in a2466 in recur in a2442 in a2822 in lp in fold in k931 */
static void C_ccall f_2500(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2500,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
/* srfi-1.scm: 839  values */
C_values(4,0,t1,t4,t5);}

/* a2493 in a2487 in a2466 in recur in a2442 in a2822 in lp in fold in k931 */
static void C_ccall f_2494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2494,2,t0,t1);}
/* srfi-1.scm: 838  recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2449(t2,t1,((C_word*)t0)[2]);}

/* a2481 in a2466 in recur in a2442 in a2822 in lp in fold in k931 */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2482,2,t0,t1);}
/* srfi-1.scm: 837  car+cdr */
t2=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a2460 in recur in a2442 in a2822 in lp in fold in k931 */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2461,2,t0,t1);}
/* srfi-1.scm: 835  car+cdr */
t2=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* unfold in k931 */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr6r,(void*)f_2719r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_2719r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_2719r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a=C_alloc(19);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(C_word)C_i_car(t6);
t8=(C_word)C_i_cdr(t6);
if(C_truep((C_word)C_i_pairp(t8))){
C_apply(10,0,t1,*((C_word*)lf[159]+1),lf[160],*((C_word*)lf[158]+1),t2,t3,t4,t5,t6);}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2743,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t10,a[6]=t7,a[7]=lf[161],tmp=(C_word)a,a+=8,tmp));
t12=((C_word*)t10)[1];
f_2743(t12,t1,t5);}}
else{
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2777,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t8,a[6]=lf[162],tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_2777(t10,t1,t5);}}

/* recur in unfold in k931 */
static void C_fcall f_2777(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2777,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2784,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 901  p */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2782 in recur in unfold in k931 */
static void C_ccall f_2784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2784,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2791,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 902  f */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}}

/* k2789 in k2782 in recur in unfold in k931 */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2795,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2799,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 902  g */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2797 in k2789 in k2782 in recur in unfold in k931 */
static void C_ccall f_2799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 902  recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2777(t2,((C_word*)t0)[2],t1);}

/* k2793 in k2789 in k2782 in recur in unfold in k931 */
static void C_ccall f_2795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2795,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* recur in unfold in k931 */
static void C_fcall f_2743(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2743,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2750,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-1.scm: 897  p */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2748 in recur in unfold in k931 */
static void C_ccall f_2750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2750,2,t0,t1);}
if(C_truep(t1)){
/* srfi-1.scm: 897  tail-gen */
t2=((C_word*)t0)[7];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2760,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 898  f */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[5]);}}

/* k2758 in k2748 in recur in unfold in k931 */
static void C_ccall f_2760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2760,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2764,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2768,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 898  g */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2766 in k2758 in k2748 in recur in unfold in k931 */
static void C_ccall f_2768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 898  recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2743(t2,((C_word*)t0)[2],t1);}

/* k2762 in k2758 in k2748 in recur in unfold in k931 */
static void C_ccall f_2764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2764,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* unfold-right in k931 */
static void C_ccall f_2679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr6rv,(void*)f_2679r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest_vector(a,C_rest_count(0));
f_2679r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_2679r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(9);
t7=(C_word)C_vemptyp(t6);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:(C_word)C_i_vector_ref(t6,C_fix(0)));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2689,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t10,a[6]=lf[156],tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_2689(t12,t1,t5,t8);}

/* lp in unfold-right in k931 */
static void C_fcall f_2689(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2689,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2696,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-1.scm: 881  p */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k2694 in lp in unfold-right in k931 */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2696,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2703,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 882  g */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}}

/* k2701 in k2694 in lp in unfold-right in k931 */
static void C_ccall f_2703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2711,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 883  f */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2709 in k2701 in k2694 in lp in unfold-right in k931 */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2711,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* srfi-1.scm: 882  lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2689(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* count in k931 */
static void C_ccall f_2586(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr4r,(void*)f_2586r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2586r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2586r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(14);
if(C_truep((C_word)C_i_pairp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2598,a[2]=t2,a[3]=t6,a[4]=lf[152],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2598(t8,t1,t3,t4,C_fix(0));}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2649,a[2]=t2,a[3]=t6,a[4]=lf[153],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2649(t8,t1,t3,C_fix(0));}}

/* lp in count in k931 */
static void C_fcall f_2649(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2649,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2670,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_car(t2);
/* srfi-1.scm: 870  pred */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}}

/* k2668 in lp in count in k931 */
static void C_ccall f_2670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1)):((C_word*)t0)[5]);
/* srfi-1.scm: 870  lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2649(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* lp in count in k931 */
static void C_fcall f_2598(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2598,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2610,a[2]=t3,a[3]=lf[150],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,a[6]=lf[151],tmp=(C_word)a,a+=7,tmp);
/* srfi-1.scm: 862  ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}}

/* a2615 in lp in count in k931 */
static void C_ccall f_2616(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2616,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[5]);}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2637,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[4]);
C_apply(5,0,t5,((C_word*)t0)[2],t6,t2);}}

/* k2635 in a2615 in lp in count in k931 */
static void C_ccall f_2637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1)):((C_word*)t0)[6]);
/* srfi-1.scm: 864  lp */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2598(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a2609 in lp in count in k931 */
static void C_ccall f_2610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2610,2,t0,t1);}
/* srfi-1.scm: 862  ##srfi1#cars+cdrs */
f_2357(t1,((C_word*)t0)[2]);}

/* ##srfi1#cars+cdrs in k931 */
static void C_fcall f_2357(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2357,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2363,a[2]=t2,a[3]=lf[147],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 817  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t3);}

/* a2362 in ##srfi1#cars+cdrs in k931 */
static void C_ccall f_2363(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2363,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2369,a[2]=t4,a[3]=t2,a[4]=lf[146],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2369(t6,t1,((C_word*)t0)[2]);}

/* recur in a2362 in ##srfi1#cars+cdrs in k931 */
static void C_fcall f_2369(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2369,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2381,a[2]=t2,a[3]=lf[140],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[145],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 821  ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}
else{
/* srfi-1.scm: 826  values */
C_values(4,0,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* a2386 in recur in a2362 in ##srfi1#cars+cdrs in k931 */
static void C_ccall f_2387(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2387,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t2))){
/* srfi-1.scm: 822  abort */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2402,a[2]=t2,a[3]=lf[141],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2408,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=lf[144],tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 823  ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a2407 in a2386 in recur in a2362 in ##srfi1#cars+cdrs in k931 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2408,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[142],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2420,a[2]=t3,a[3]=t2,a[4]=lf[143],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a2419 in a2407 in a2386 in recur in a2362 in ##srfi1#cars+cdrs in k931 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2420,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
/* srfi-1.scm: 825  values */
C_values(4,0,t1,t4,t5);}

/* a2413 in a2407 in a2386 in recur in a2362 in ##srfi1#cars+cdrs in k931 */
static void C_ccall f_2414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2414,2,t0,t1);}
/* srfi-1.scm: 824  recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2369(t2,t1,((C_word*)t0)[2]);}

/* a2401 in a2386 in recur in a2362 in ##srfi1#cars+cdrs in k931 */
static void C_ccall f_2402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2402,2,t0,t1);}
/* srfi-1.scm: 823  car+cdr */
t2=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* a2380 in recur in a2362 in ##srfi1#cars+cdrs in k931 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2381,2,t0,t1);}
/* srfi-1.scm: 821  car+cdr */
t2=*((C_word*)lf[66]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* ##srfi1#cdrs in k931 */
static void C_fcall f_2276(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2276,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2282,a[2]=t2,a[3]=lf[137],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 799  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t3);}

/* a2281 in ##srfi1#cdrs in k931 */
static void C_ccall f_2282(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2282,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2288,a[2]=t4,a[3]=t2,a[4]=lf[136],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2288(t6,t1,((C_word*)t0)[2]);}

/* recur in a2281 in ##srfi1#cdrs in k931 */
static void C_fcall f_2288(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2288,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_null_list_p(t3))){
/* srfi-1.scm: 804  abort */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2318,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
/* srfi-1.scm: 805  recur */
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}}

/* k2316 in recur in a2281 in ##srfi1#cdrs in k931 */
static void C_ccall f_2318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2318,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* concatenate! in k931 */
static void C_ccall f_2270(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2270,3,t0,t1,t2);}
/* srfi-1.scm: 776  reduce-right */
t3=*((C_word*)lf[130]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,*((C_word*)lf[119]+1),C_SCHEME_END_OF_LIST,t2);}

/* concatenate in k931 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2264,3,t0,t1,t2);}
/* srfi-1.scm: 775  reduce-right */
t3=*((C_word*)lf[130]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,*((C_word*)lf[131]+1),C_SCHEME_END_OF_LIST,t2);}

/* append-reverse! in k931 */
static void C_ccall f_2240(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2240,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2246,a[2]=lf[127],tmp=(C_word)a,a+=3,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_2246(t2,t3));}

/* lp in append-reverse! in k931 */
static C_word C_fcall f_2246(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
if(C_truep((C_word)C_i_null_list_p(t1))){
return(t2);}
else{
t3=(C_word)C_i_cdr(t1);
t4=(C_word)C_i_set_cdr(t1,t2);
t6=t3;
t7=t1;
t1=t6;
t2=t7;
goto loop;}}

/* append-reverse in k931 */
static void C_ccall f_2210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2210,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2216,a[2]=t5,a[3]=lf[124],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2216(t7,t1,t2,t3);}

/* lp in append-reverse in k931 */
static void C_fcall f_2216(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_2216,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_a_i_cons(&a,2,t5,t3);
/* srfi-1.scm: 765  lp */
t8=t1;
t9=t4;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}

/* append! in k931 */
static void C_ccall f_2134(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_2134r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2134r(t0,t1,t2);}}

static void C_ccall f_2134r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2140,a[2]=t4,a[3]=lf[121],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2140(t6,t1,t2,C_SCHEME_END_OF_LIST);}

/* lp in append! in k931 */
static void C_fcall f_2140(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_2140,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t4))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2169,a[2]=t5,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* srfi-1.scm: 733  last-pair */
t7=*((C_word*)lf[21]+1);
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

/* k2167 in lp in append! in k931 */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2169,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=lf[120],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2171(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* lp2 in k2167 in lp in append! in k931 */
static void C_fcall f_2171(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2171,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_car(t3);
t5=(C_word)C_i_cdr(t3);
t6=(C_word)C_i_set_cdr(t2,t4);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2194,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
/* srfi-1.scm: 739  last-pair */
t8=*((C_word*)lf[21]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}
else{
t8=t7;
f_2194(2,t8,t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}}

/* k2192 in lp2 in k2167 in lp in append! in k931 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-1.scm: 739  lp2 */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2171(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* unzip5 in k931 */
static void C_ccall f_2050(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2050,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2056,a[2]=t4,a[3]=lf[117],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2056(t6,t1,t2);}

/* recur in unzip5 in k931 */
static void C_fcall f_2056(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2056,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
/* srfi-1.scm: 711  values */
C_values(7,0,t1,t2,t2,t2,t2,t2);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2074,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=lf[115],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2084,a[2]=t3,a[3]=lf[116],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a2083 in recur in unzip5 in k931 */
static void C_ccall f_2084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2084,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_car(((C_word*)t0)[2]);
t8=(C_word)C_a_i_cons(&a,2,t7,t2);
t9=(C_word)C_i_cadr(((C_word*)t0)[2]);
t10=(C_word)C_a_i_cons(&a,2,t9,t3);
t11=(C_word)C_i_caddr(((C_word*)t0)[2]);
t12=(C_word)C_a_i_cons(&a,2,t11,t4);
t13=(C_word)C_i_cadddr(((C_word*)t0)[2]);
t14=(C_word)C_a_i_cons(&a,2,t13,t5);
t15=(C_word)C_i_cddddr(((C_word*)t0)[2]);
t16=(C_word)C_i_car(t15);
t17=(C_word)C_a_i_cons(&a,2,t16,t6);
/* srfi-1.scm: 714  values */
C_values(7,0,t1,t8,t10,t12,t14,t17);}

/* a2073 in recur in unzip5 in k931 */
static void C_ccall f_2074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2074,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-1.scm: 713  recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2056(t3,t1,t2);}

/* unzip4 in k931 */
static void C_ccall f_1978(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1978,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1984,a[2]=t4,a[3]=lf[112],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1984(t6,t1,t2);}

/* recur in unzip4 in k931 */
static void C_fcall f_1984(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1984,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
/* srfi-1.scm: 701  values */
C_values(6,0,t1,t2,t2,t2,t2);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2002,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=lf[110],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2012,a[2]=t3,a[3]=lf[111],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a2011 in recur in unzip4 in k931 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2012,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_car(((C_word*)t0)[2]);
t7=(C_word)C_a_i_cons(&a,2,t6,t2);
t8=(C_word)C_i_cadr(((C_word*)t0)[2]);
t9=(C_word)C_a_i_cons(&a,2,t8,t3);
t10=(C_word)C_i_caddr(((C_word*)t0)[2]);
t11=(C_word)C_a_i_cons(&a,2,t10,t4);
t12=(C_word)C_i_cadddr(((C_word*)t0)[2]);
t13=(C_word)C_a_i_cons(&a,2,t12,t5);
/* srfi-1.scm: 704  values */
C_values(6,0,t1,t7,t9,t11,t13);}

/* a2001 in recur in unzip4 in k931 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2002,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-1.scm: 703  recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1984(t3,t1,t2);}

/* unzip3 in k931 */
static void C_ccall f_1914(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1914,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1920,a[2]=t4,a[3]=lf[107],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1920(t6,t1,t2);}

/* recur in unzip3 in k931 */
static void C_fcall f_1920(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1920,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
/* srfi-1.scm: 692  values */
C_values(5,0,t1,t2,t2,t2);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1938,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=lf[105],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1948,a[2]=t3,a[3]=lf[106],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a1947 in recur in unzip3 in k931 */
static void C_ccall f_1948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1948,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[2]);
t6=(C_word)C_a_i_cons(&a,2,t5,t2);
t7=(C_word)C_i_cadr(((C_word*)t0)[2]);
t8=(C_word)C_a_i_cons(&a,2,t7,t3);
t9=(C_word)C_i_caddr(((C_word*)t0)[2]);
t10=(C_word)C_a_i_cons(&a,2,t9,t4);
/* srfi-1.scm: 695  values */
C_values(5,0,t1,t6,t8,t10);}

/* a1937 in recur in unzip3 in k931 */
static void C_ccall f_1938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1938,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-1.scm: 694  recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1920(t3,t1,t2);}

/* unzip2 in k931 */
static void C_ccall f_1858(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1858,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1864,a[2]=t4,a[3]=lf[102],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1864(t6,t1,t2);}

/* recur in unzip2 in k931 */
static void C_fcall f_1864(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1864,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_null_list_p(t2))){
/* srfi-1.scm: 684  values */
C_values(4,0,t1,t2,t2);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=lf[100],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1892,a[2]=t3,a[3]=lf[101],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a1891 in recur in unzip2 in k931 */
static void C_ccall f_1892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1892,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(((C_word*)t0)[2]);
t5=(C_word)C_a_i_cons(&a,2,t4,t2);
t6=(C_word)C_i_cadr(((C_word*)t0)[2]);
t7=(C_word)C_a_i_cons(&a,2,t6,t3);
/* srfi-1.scm: 687  values */
C_values(4,0,t1,t5,t7);}

/* a1881 in recur in unzip2 in k931 */
static void C_ccall f_1882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1882,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-1.scm: 686  recur */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1864(t3,t1,t2);}

/* unzip1 in k931 */
static void C_ccall f_1852(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1852,3,t0,t1,t2);}
/* map */
t3=*((C_word*)lf[97]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,*((C_word*)lf[47]+1),t2);}

/* last-pair in k931 */
static void C_ccall f_1831(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1831,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1837,a[2]=lf[94],tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1837(t2));}

/* lp in last-pair in k931 */
static C_word C_fcall f_1837(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:
C_stack_check;
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_pairp(t2))){
t4=t2;
t1=t4;
goto loop;}
else{
return(t1);}}

/* last in k931 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1821,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1829,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-1.scm: 668  last-pair */
t4=*((C_word*)lf[21]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1827 in last in k931 */
static void C_ccall f_1829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_car(t1));}

/* split-at! in k931 */
static void C_ccall f_1790(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1790,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[90]);
t5=(C_word)C_eqp(C_fix(0),t3);
if(C_truep(t5)){
/* srfi-1.scm: 661  values */
C_values(4,0,t1,C_SCHEME_END_OF_LIST,t2);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1806,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_fixnum_difference(t3,C_fix(1));
/* srfi-1.scm: 662  drop */
t8=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t2,t7);}}

/* k1804 in split-at! in k931 */
static void C_ccall f_1806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(t1);
t3=(C_word)C_i_set_cdr(t1,C_SCHEME_END_OF_LIST);
/* srfi-1.scm: 665  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* split-at in k931 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1738,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[85]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1747,a[2]=t6,a[3]=lf[88],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1747(t8,t1,t2,t3);}

/* recur in split-at in k931 */
static void C_fcall f_1747(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1747,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_fix(0),t3);
if(C_truep(t4)){
/* srfi-1.scm: 654  values */
C_values(4,0,t1,C_SCHEME_END_OF_LIST,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1762,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=lf[86],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1776,a[2]=t2,a[3]=lf[87],tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 655  ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}}

/* a1775 in recur in split-at in k931 */
static void C_ccall f_1776(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1776,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(((C_word*)t0)[2]);
t5=(C_word)C_a_i_cons(&a,2,t4,t2);
/* srfi-1.scm: 656  values */
C_values(4,0,t1,t5,t3);}

/* a1761 in recur in split-at in k931 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1762,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-1.scm: 655  recur */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1747(t4,t1,t2,t3);}

/* drop-right! in k931 */
static void C_ccall f_1696(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1696,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1700,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 595  drop */
t5=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k1698 in drop-right! in k931 */
static void C_ccall f_1700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1700,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(C_word)C_i_cdr(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1715,a[2]=((C_word*)t0)[3],a[3]=lf[83],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1715(t3,((C_word*)t0)[3],t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* lp in k1698 in drop-right! in k931 */
static C_word C_fcall f_1715(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
C_stack_check;
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_cdr(t1);
t4=(C_word)C_i_cdr(t2);
t7=t3;
t8=t4;
t1=t7;
t2=t8;
goto loop;}
else{
t3=(C_word)C_i_set_cdr(t1,C_SCHEME_END_OF_LIST);
return(((C_word*)t0)[2]);}}

/* drop-right in k931 */
static void C_ccall f_1658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1658,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1666,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 586  drop */
t5=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k1664 in drop-right in k931 */
static void C_ccall f_1666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1666,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1668,a[2]=t3,a[3]=lf[80],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1668(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* recur in k1664 in drop-right in k931 */
static void C_fcall f_1668(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_1668,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1686,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_cdr(t3);
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

/* k1684 in recur in k1664 in drop-right in k931 */
static void C_ccall f_1686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1686,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* take-right in k931 */
static void C_ccall f_1628(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1628,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1636,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 579  drop */
t5=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k1634 in take-right in k931 */
static void C_ccall f_1636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1638,a[2]=lf[77],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1638(((C_word*)t0)[2],t1));}

/* lp in k1634 in take-right in k931 */
static C_word C_fcall f_1638(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_cdr(t1);
t4=(C_word)C_i_cdr(t2);
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}
else{
return(t1);}}

/* take! in k931 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1605,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[74]);
t5=(C_word)C_eqp(C_fix(0),t3);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1622,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_fixnum_difference(t3,C_fix(1));
/* srfi-1.scm: 570  drop */
t8=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t2,t7);}}

/* k1620 in take! in k931 */
static void C_ccall f_1622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_set_cdr(t1,C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* drop in k931 */
static void C_ccall f_1576(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1576,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[71]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1585,a[2]=lf[72],tmp=(C_word)a,a+=3,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_1585(t2,t3));}

/* iter in drop in k931 */
static C_word C_fcall f_1585(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
C_stack_check;
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
return(t1);}
else{
t4=(C_word)C_i_cdr(t1);
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* take in k931 */
static void C_ccall f_1539(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1539,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[68]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1548,a[2]=t6,a[3]=lf[69],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_1548(t8,t1,t2,t3);}

/* recur in take in k931 */
static void C_fcall f_1548(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_1548,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_fix(0),t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=(C_word)C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1566,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cdr(t2);
t8=(C_word)C_fixnum_difference(t3,C_fix(1));
/* srfi-1.scm: 558  recur */
t10=t6;
t11=t7;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* k1564 in recur in take in k931 */
static void C_ccall f_1566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1566,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* car+cdr in k931 */
static void C_ccall f_1522(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1522,3,t0,t1,t2);}
t3=(C_word)C_i_check_pair_2(t2,lf[66]);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
/* srfi-1.scm: 548  values */
C_values(4,0,t1,t4,t5);}

/* tenth in k931 */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1508,3,t0,t1,t2);}
t3=(C_word)C_i_cddddr(t2);
t4=(C_word)C_i_cddddr(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_cadr(t4));}

/* ninth in k931 */
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1494,3,t0,t1,t2);}
t3=(C_word)C_i_cddddr(t2);
t4=(C_word)C_i_cddddr(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_car(t4));}

/* eighth in k931 */
static void C_ccall f_1484(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1484,3,t0,t1,t2);}
t3=(C_word)C_i_cddddr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_cadddr(t3));}

/* seventh in k931 */
static void C_ccall f_1474(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1474,3,t0,t1,t2);}
t3=(C_word)C_i_cddddr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_caddr(t3));}

/* sixth in k931 */
static void C_ccall f_1464(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1464,3,t0,t1,t2);}
t3=(C_word)C_i_cddddr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_cadr(t3));}

/* fifth in k931 */
static void C_ccall f_1454(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1454,3,t0,t1,t2);}
t3=(C_word)C_i_cddddr(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_car(t3));}

/* zip in k931 */
static void C_ccall f_1444(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1444r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1444r(t0,t1,t2,t3);}}

static void C_ccall f_1444r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_apply(6,0,t1,*((C_word*)lf[43]+1),*((C_word*)lf[44]+1),t2,t3);}

/* length+ in k931 */
static void C_ccall f_1395(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1395,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1401,a[2]=lf[40],tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1401(t2,t2,C_fix(0)));}

/* lp in length+ in k931 */
static C_word C_fcall f_1401(C_word t1,C_word t2,C_word t3){
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
C_stack_check;
if(C_truep((C_word)C_i_pairp(t1))){
t4=(C_word)C_i_cdr(t1);
t5=(C_word)C_fixnum_plus(t3,C_fix(1));
if(C_truep((C_word)C_i_pairp(t4))){
t6=(C_word)C_i_cdr(t4);
t7=(C_word)C_i_cdr(t2);
t8=(C_word)C_fixnum_plus(t5,C_fix(1));
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

/* list= in k931 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1295r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1295r(t0,t1,t2,t3);}}

static void C_ccall f_1295r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(7);
t4=(C_word)C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_i_car(t3);
t6=(C_word)C_i_cdr(t3);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1315,a[2]=t2,a[3]=t8,a[4]=lf[37],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1315(t10,t1,t5,t6);}}

/* lp1 in list= in k931 */
static void C_fcall f_1315(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1315,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_i_car(t3);
t6=(C_word)C_i_cdr(t3);
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
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1342,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=lf[36],tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_1342(t11,t1,t2,t5);}}}

/* lp2 in lp1 in list= in k931 */
static void C_fcall f_1342(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1342,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_null_list_p(t2))){
if(C_truep((C_word)C_i_null_list_p(t3))){
/* srfi-1.scm: 469  lp1 */
t4=((C_word*)((C_word*)t0)[6])[1];
f_1315(t4,t1,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep((C_word)C_i_null_list_p(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1370,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_car(t3);
/* srfi-1.scm: 471  = */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t4,t5,t6);}}}

/* k1368 in lp2 in lp1 in list= in k931 */
static void C_ccall f_1370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-1.scm: 472  lp2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1342(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* null-list? in k931 */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1292,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_null_list_p(t2));}

/* not-pair? in k931 */
static void C_ccall f_1289(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1289,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not_pair_p(t2));}

/* circular-list? in k931 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1250,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1256,a[2]=lf[29],tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1256(t2,t2));}

/* lp in circular-list? in k931 */
static C_word C_fcall f_1256(C_word t1,C_word t2){
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
if(C_truep((C_word)C_i_pairp(t1))){
t3=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_i_cdr(t2);
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

/* dotted-list? in k931 */
static void C_ccall f_1193(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1193,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1199,a[2]=lf[26],tmp=(C_word)a,a+=3,tmp);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1199(t2,t2));}

/* lp in dotted-list? in k931 */
static C_word C_fcall f_1199(C_word t1,C_word t2){
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
C_stack_check;
if(C_truep((C_word)C_i_pairp(t1))){
t3=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_i_cdr(t2);
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

/* circular-list in k931 */
static void C_ccall f_1179(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1179r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1179r(t0,t1,t2,t3);}}

static void C_ccall f_1179r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1190,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-1.scm: 402  last-pair */
t6=*((C_word*)lf[21]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k1188 in circular-list in k931 */
static void C_ccall f_1190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_set_cdr(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}

/* iota in k931 */
static void C_ccall f_1093(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1093r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1093r(t0,t1,t2,t3);}}

static void C_ccall f_1093r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_number_2(t2,lf[16]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1100,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_lessp(t2,C_fix(0)))){
/* srfi-1.scm: 338  ##sys#error */
t6=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,lf[16],lf[18],*((C_word*)lf[16]+1),t2);}
else{
t6=t5;
f_1100(2,t6,C_SCHEME_UNDEFINED);}}

/* k1098 in iota in k931 */
static void C_ccall f_1100(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1100,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?C_fix(0):(C_word)C_i_car(t2));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t6=(C_word)C_i_cdr(((C_word*)t0)[4]);
t7=(C_word)C_i_nullp(t6);
t8=t5;
f_1106(t8,(C_truep(t7)?C_fix(1):(C_word)C_i_car(t6)));}
else{
t6=t5;
f_1106(t6,C_fix(1));}}

/* k1104 in k1098 in iota in k931 */
static void C_fcall f_1106(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1106,NULL,2,t0,t1);}
t2=(C_word)C_i_check_number_2(((C_word*)t0)[4],lf[16]);
t3=(C_word)C_i_check_number_2(t1,lf[16]);
t4=(C_word)C_a_i_minus(&a,2,((C_word*)t0)[3],C_fix(1));
t5=(C_word)C_a_i_times(&a,2,t4,t1);
t6=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[4],t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1120,a[2]=t8,a[3]=t1,a[4]=lf[17],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1120(t10,((C_word*)t0)[2],((C_word*)t0)[3],t6,C_SCHEME_END_OF_LIST);}

/* do38 in k1104 in k1098 in iota in k931 */
static void C_fcall f_1120(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_1120,NULL,5,t0,t1,t2,t3,t4);}
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

/* list-copy in k931 */
static void C_ccall f_1063(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1063,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1069,a[2]=t4,a[3]=lf[14],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1069(t6,t1,t2);}

/* recur in list-copy in k931 */
static void C_fcall f_1069(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1069,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1087,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cdr(t2);
/* srfi-1.scm: 330  recur */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1085 in recur in list-copy in k931 */
static void C_ccall f_1087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1087,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* cons* in k931 */
static void C_ccall f_1033(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1033r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1033r(t0,t1,t2,t3);}}

static void C_ccall f_1033r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1039,a[2]=t5,a[3]=lf[11],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_1039(t7,t1,t2,t3);}

/* recur in cons* in k931 */
static void C_fcall f_1039(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_1039,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1053,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(t3);
t6=(C_word)C_i_cdr(t3);
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

/* k1051 in recur in cons* in k931 */
static void C_ccall f_1053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1053,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* list-tabulate in k931 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_996,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t2,lf[7]);
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1009,a[2]=t3,a[3]=t7,a[4]=lf[8],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1009(t9,t1,t5,C_SCHEME_END_OF_LIST);}

/* do13 in list-tabulate in k931 */
static void C_fcall f_1009(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1009,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_fixnum_difference(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1031,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-1.scm: 311  proc */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}}

/* k1029 in do13 in list-tabulate in k931 */
static void C_ccall f_1031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1031,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_1009(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* make-list in k931 */
static void C_ccall f_941(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_941r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_941r(t0,t1,t2,t3);}}

static void C_ccall f_941r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t4=(C_word)C_i_check_exact_2(t2,lf[2]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_948,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t6=t5;
f_948(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_948(2,t7,(C_word)C_i_car(t3));}
else{
t7=(C_word)C_a_i_cons(&a,2,t2,t3);
/* srfi-1.scm: 294  ##sys#error */
t8=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t5,lf[2],lf[5],t7);}}}

/* k946 in make-list in k931 */
static void C_ccall f_948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_948,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_953,a[2]=t3,a[3]=t1,a[4]=lf[3],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_953(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* do5 in k946 in make-list in k931 */
static void C_fcall f_953(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_953,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_fixnum_difference(t2,C_fix(1));
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t3);
t7=t1;
t8=t4;
t9=t5;
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* xcons in k931 */
static void C_ccall f_935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_935,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t3,t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[419] = {
{"toplevelsrfi-1.scm",(void*)C_srfi_1_toplevel},
{"f_933srfi-1.scm",(void*)f_933},
{"f_5507srfi-1.scm",(void*)f_5507},
{"f_5514srfi-1.scm",(void*)f_5514},
{"f_5531srfi-1.scm",(void*)f_5531},
{"f_5541srfi-1.scm",(void*)f_5541},
{"f_5539srfi-1.scm",(void*)f_5539},
{"f_5467srfi-1.scm",(void*)f_5467},
{"f_5474srfi-1.scm",(void*)f_5474},
{"f_5491srfi-1.scm",(void*)f_5491},
{"f_5501srfi-1.scm",(void*)f_5501},
{"f_5499srfi-1.scm",(void*)f_5499},
{"f_5409srfi-1.scm",(void*)f_5409},
{"f_5415srfi-1.scm",(void*)f_5415},
{"f_5427srfi-1.scm",(void*)f_5427},
{"f_5451srfi-1.scm",(void*)f_5451},
{"f_5458srfi-1.scm",(void*)f_5458},
{"f_5421srfi-1.scm",(void*)f_5421},
{"f_5355srfi-1.scm",(void*)f_5355},
{"f_5361srfi-1.scm",(void*)f_5361},
{"f_5373srfi-1.scm",(void*)f_5373},
{"f_5397srfi-1.scm",(void*)f_5397},
{"f_5404srfi-1.scm",(void*)f_5404},
{"f_5367srfi-1.scm",(void*)f_5367},
{"f_5318srfi-1.scm",(void*)f_5318},
{"f_5322srfi-1.scm",(void*)f_5322},
{"f_5339srfi-1.scm",(void*)f_5339},
{"f_5345srfi-1.scm",(void*)f_5345},
{"f_5353srfi-1.scm",(void*)f_5353},
{"f_5281srfi-1.scm",(void*)f_5281},
{"f_5285srfi-1.scm",(void*)f_5285},
{"f_5302srfi-1.scm",(void*)f_5302},
{"f_5308srfi-1.scm",(void*)f_5308},
{"f_5316srfi-1.scm",(void*)f_5316},
{"f_5248srfi-1.scm",(void*)f_5248},
{"f_5252srfi-1.scm",(void*)f_5252},
{"f_5258srfi-1.scm",(void*)f_5258},
{"f_5269srfi-1.scm",(void*)f_5269},
{"f_5275srfi-1.scm",(void*)f_5275},
{"f_5215srfi-1.scm",(void*)f_5215},
{"f_5219srfi-1.scm",(void*)f_5219},
{"f_5225srfi-1.scm",(void*)f_5225},
{"f_5236srfi-1.scm",(void*)f_5236},
{"f_5242srfi-1.scm",(void*)f_5242},
{"f_5164srfi-1.scm",(void*)f_5164},
{"f_5170srfi-1.scm",(void*)f_5170},
{"f_5194srfi-1.scm",(void*)f_5194},
{"f_5209srfi-1.scm",(void*)f_5209},
{"f_5204srfi-1.scm",(void*)f_5204},
{"f_5116srfi-1.scm",(void*)f_5116},
{"f_5122srfi-1.scm",(void*)f_5122},
{"f_5146srfi-1.scm",(void*)f_5146},
{"f_5158srfi-1.scm",(void*)f_5158},
{"f_5153srfi-1.scm",(void*)f_5153},
{"f_5098srfi-1.scm",(void*)f_5098},
{"f_5104srfi-1.scm",(void*)f_5104},
{"f_5111srfi-1.scm",(void*)f_5111},
{"f_5034srfi-1.scm",(void*)f_5034},
{"f_5054srfi-1.scm",(void*)f_5054},
{"f_5085srfi-1.scm",(void*)f_5085},
{"f_5076srfi-1.scm",(void*)f_5076},
{"f_4976srfi-1.scm",(void*)f_4976},
{"f_4996srfi-1.scm",(void*)f_4996},
{"f_5018srfi-1.scm",(void*)f_5018},
{"f_4964srfi-1.scm",(void*)f_4964},
{"f_4970srfi-1.scm",(void*)f_4970},
{"f_4940srfi-1.scm",(void*)f_4940},
{"f_4946srfi-1.scm",(void*)f_4946},
{"f_4853srfi-1.scm",(void*)f_4853},
{"f_4906srfi-1.scm",(void*)f_4906},
{"f_4919srfi-1.scm",(void*)f_4919},
{"f_4869srfi-1.scm",(void*)f_4869},
{"f_4881srfi-1.scm",(void*)f_4881},
{"f_4894srfi-1.scm",(void*)f_4894},
{"f_4875srfi-1.scm",(void*)f_4875},
{"f_4736srfi-1.scm",(void*)f_4736},
{"f_4824srfi-1.scm",(void*)f_4824},
{"f_4840srfi-1.scm",(void*)f_4840},
{"f_4758srfi-1.scm",(void*)f_4758},
{"f_4770srfi-1.scm",(void*)f_4770},
{"f_4782srfi-1.scm",(void*)f_4782},
{"f_4795srfi-1.scm",(void*)f_4795},
{"f_4776srfi-1.scm",(void*)f_4776},
{"f_4748srfi-1.scm",(void*)f_4748},
{"f_4619srfi-1.scm",(void*)f_4619},
{"f_4703srfi-1.scm",(void*)f_4703},
{"f_4716srfi-1.scm",(void*)f_4716},
{"f_4641srfi-1.scm",(void*)f_4641},
{"f_4653srfi-1.scm",(void*)f_4653},
{"f_4665srfi-1.scm",(void*)f_4665},
{"f_4675srfi-1.scm",(void*)f_4675},
{"f_4659srfi-1.scm",(void*)f_4659},
{"f_4631srfi-1.scm",(void*)f_4631},
{"f_4603srfi-1.scm",(void*)f_4603},
{"f_4609srfi-1.scm",(void*)f_4609},
{"f_4617srfi-1.scm",(void*)f_4617},
{"f_4587srfi-1.scm",(void*)f_4587},
{"f_4593srfi-1.scm",(void*)f_4593},
{"f_4601srfi-1.scm",(void*)f_4601},
{"f_4523srfi-1.scm",(void*)f_4523},
{"f_4581srfi-1.scm",(void*)f_4581},
{"f_4533srfi-1.scm",(void*)f_4533},
{"f_4548srfi-1.scm",(void*)f_4548},
{"f_4564srfi-1.scm",(void*)f_4564},
{"f_4539srfi-1.scm",(void*)f_4539},
{"f_4470srfi-1.scm",(void*)f_4470},
{"f_4476srfi-1.scm",(void*)f_4476},
{"f_4495srfi-1.scm",(void*)f_4495},
{"f_4510srfi-1.scm",(void*)f_4510},
{"f_4500srfi-1.scm",(void*)f_4500},
{"f_4412srfi-1.scm",(void*)f_4412},
{"f_4464srfi-1.scm",(void*)f_4464},
{"f_4422srfi-1.scm",(void*)f_4422},
{"f_4431srfi-1.scm",(void*)f_4431},
{"f_4447srfi-1.scm",(void*)f_4447},
{"f_4425srfi-1.scm",(void*)f_4425},
{"f_4380srfi-1.scm",(void*)f_4380},
{"f_4386srfi-1.scm",(void*)f_4386},
{"f_4399srfi-1.scm",(void*)f_4399},
{"f_4345srfi-1.scm",(void*)f_4345},
{"f_4351srfi-1.scm",(void*)f_4351},
{"f_4367srfi-1.scm",(void*)f_4367},
{"f_4374srfi-1.scm",(void*)f_4374},
{"f_4309srfi-1.scm",(void*)f_4309},
{"f_4315srfi-1.scm",(void*)f_4315},
{"f_4328srfi-1.scm",(void*)f_4328},
{"f_4297srfi-1.scm",(void*)f_4297},
{"f_4301srfi-1.scm",(void*)f_4301},
{"f_4268srfi-1.scm",(void*)f_4268},
{"f_4277srfi-1.scm",(void*)f_4277},
{"f_4285srfi-1.scm",(void*)f_4285},
{"f_4239srfi-1.scm",(void*)f_4239},
{"f_4248srfi-1.scm",(void*)f_4248},
{"f_4256srfi-1.scm",(void*)f_4256},
{"f_4219srfi-1.scm",(void*)f_4219},
{"f_4225srfi-1.scm",(void*)f_4225},
{"f_4209srfi-1.scm",(void*)f_4209},
{"f_4184srfi-1.scm",(void*)f_4184},
{"f_4193srfi-1.scm",(void*)f_4193},
{"f_4138srfi-1.scm",(void*)f_4138},
{"f_4147srfi-1.scm",(void*)f_4147},
{"f_4176srfi-1.scm",(void*)f_4176},
{"f_4163srfi-1.scm",(void*)f_4163},
{"f_4092srfi-1.scm",(void*)f_4092},
{"f_4101srfi-1.scm",(void*)f_4101},
{"f_4130srfi-1.scm",(void*)f_4130},
{"f_4117srfi-1.scm",(void*)f_4117},
{"f_4071srfi-1.scm",(void*)f_4071},
{"f_4080srfi-1.scm",(void*)f_4080},
{"f_4046srfi-1.scm",(void*)f_4046},
{"f_4055srfi-1.scm",(void*)f_4055},
{"f_4063srfi-1.scm",(void*)f_4063},
{"f_4021srfi-1.scm",(void*)f_4021},
{"f_4030srfi-1.scm",(void*)f_4030},
{"f_4038srfi-1.scm",(void*)f_4038},
{"f_4005srfi-1.scm",(void*)f_4005},
{"f_4011srfi-1.scm",(void*)f_4011},
{"f_4019srfi-1.scm",(void*)f_4019},
{"f_3989srfi-1.scm",(void*)f_3989},
{"f_3995srfi-1.scm",(void*)f_3995},
{"f_4003srfi-1.scm",(void*)f_4003},
{"f_3777srfi-1.scm",(void*)f_3777},
{"f_3883srfi-1.scm",(void*)f_3883},
{"f_3942srfi-1.scm",(void*)f_3942},
{"f_3958srfi-1.scm",(void*)f_3958},
{"f_3961srfi-1.scm",(void*)f_3961},
{"f_3892srfi-1.scm",(void*)f_3892},
{"f_3908srfi-1.scm",(void*)f_3908},
{"f_3918srfi-1.scm",(void*)f_3918},
{"f_3834srfi-1.scm",(void*)f_3834},
{"f_3840srfi-1.scm",(void*)f_3840},
{"f_3853srfi-1.scm",(void*)f_3853},
{"f_3789srfi-1.scm",(void*)f_3789},
{"f_3795srfi-1.scm",(void*)f_3795},
{"f_3808srfi-1.scm",(void*)f_3808},
{"f_3709srfi-1.scm",(void*)f_3709},
{"f_3715srfi-1.scm",(void*)f_3715},
{"f_3742srfi-1.scm",(void*)f_3742},
{"f_3749srfi-1.scm",(void*)f_3749},
{"f_3736srfi-1.scm",(void*)f_3736},
{"f_3588srfi-1.scm",(void*)f_3588},
{"f_3594srfi-1.scm",(void*)f_3594},
{"f_3703srfi-1.scm",(void*)f_3703},
{"f_3695srfi-1.scm",(void*)f_3695},
{"f_3649srfi-1.scm",(void*)f_3649},
{"f_3655srfi-1.scm",(void*)f_3655},
{"f_3668srfi-1.scm",(void*)f_3668},
{"f_3616srfi-1.scm",(void*)f_3616},
{"f_3629srfi-1.scm",(void*)f_3629},
{"f_3546srfi-1.scm",(void*)f_3546},
{"f_3552srfi-1.scm",(void*)f_3552},
{"f_3571srfi-1.scm",(void*)f_3571},
{"f_3574srfi-1.scm",(void*)f_3574},
{"f_3469srfi-1.scm",(void*)f_3469},
{"f_3519srfi-1.scm",(void*)f_3519},
{"f_3532srfi-1.scm",(void*)f_3532},
{"f_3539srfi-1.scm",(void*)f_3539},
{"f_3485srfi-1.scm",(void*)f_3485},
{"f_3497srfi-1.scm",(void*)f_3497},
{"f_3507srfi-1.scm",(void*)f_3507},
{"f_3514srfi-1.scm",(void*)f_3514},
{"f_3491srfi-1.scm",(void*)f_3491},
{"f_3384srfi-1.scm",(void*)f_3384},
{"f_3440srfi-1.scm",(void*)f_3440},
{"f_3450srfi-1.scm",(void*)f_3450},
{"f_3453srfi-1.scm",(void*)f_3453},
{"f_3400srfi-1.scm",(void*)f_3400},
{"f_3412srfi-1.scm",(void*)f_3412},
{"f_3422srfi-1.scm",(void*)f_3422},
{"f_3432srfi-1.scm",(void*)f_3432},
{"f_3406srfi-1.scm",(void*)f_3406},
{"f_3312srfi-1.scm",(void*)f_3312},
{"f_3370srfi-1.scm",(void*)f_3370},
{"f_3378srfi-1.scm",(void*)f_3378},
{"f_3324srfi-1.scm",(void*)f_3324},
{"f_3342srfi-1.scm",(void*)f_3342},
{"f_3357srfi-1.scm",(void*)f_3357},
{"f_3336srfi-1.scm",(void*)f_3336},
{"f_2527srfi-1.scm",(void*)f_2527},
{"f_2545srfi-1.scm",(void*)f_2545},
{"f_2557srfi-1.scm",(void*)f_2557},
{"f_2569srfi-1.scm",(void*)f_2569},
{"f_2563srfi-1.scm",(void*)f_2563},
{"f_2551srfi-1.scm",(void*)f_2551},
{"f_2539srfi-1.scm",(void*)f_2539},
{"f_3316srfi-1.scm",(void*)f_3316},
{"f_3253srfi-1.scm",(void*)f_3253},
{"f_3290srfi-1.scm",(void*)f_3290},
{"f_3303srfi-1.scm",(void*)f_3303},
{"f_3269srfi-1.scm",(void*)f_3269},
{"f_3273srfi-1.scm",(void*)f_3273},
{"f_3282srfi-1.scm",(void*)f_3282},
{"f_3144srfi-1.scm",(void*)f_3144},
{"f_3226srfi-1.scm",(void*)f_3226},
{"f_3230srfi-1.scm",(void*)f_3230},
{"f_3243srfi-1.scm",(void*)f_3243},
{"f_3166srfi-1.scm",(void*)f_3166},
{"f_3178srfi-1.scm",(void*)f_3178},
{"f_3182srfi-1.scm",(void*)f_3182},
{"f_3193srfi-1.scm",(void*)f_3193},
{"f_3207srfi-1.scm",(void*)f_3207},
{"f_3187srfi-1.scm",(void*)f_3187},
{"f_3156srfi-1.scm",(void*)f_3156},
{"f_3138srfi-1.scm",(void*)f_3138},
{"f_3132srfi-1.scm",(void*)f_3132},
{"f_3088srfi-1.scm",(void*)f_3088},
{"f_3108srfi-1.scm",(void*)f_3108},
{"f_3122srfi-1.scm",(void*)f_3122},
{"f_3068srfi-1.scm",(void*)f_3068},
{"f_3003srfi-1.scm",(void*)f_3003},
{"f_3049srfi-1.scm",(void*)f_3049},
{"f_3066srfi-1.scm",(void*)f_3066},
{"f_3019srfi-1.scm",(void*)f_3019},
{"f_3023srfi-1.scm",(void*)f_3023},
{"f_3040srfi-1.scm",(void*)f_3040},
{"f_3036srfi-1.scm",(void*)f_3036},
{"f_2937srfi-1.scm",(void*)f_2937},
{"f_2983srfi-1.scm",(void*)f_2983},
{"f_2997srfi-1.scm",(void*)f_2997},
{"f_2953srfi-1.scm",(void*)f_2953},
{"f_2957srfi-1.scm",(void*)f_2957},
{"f_2978srfi-1.scm",(void*)f_2978},
{"f_2970srfi-1.scm",(void*)f_2970},
{"f_2872srfi-1.scm",(void*)f_2872},
{"f_2914srfi-1.scm",(void*)f_2914},
{"f_2931srfi-1.scm",(void*)f_2931},
{"f_2888srfi-1.scm",(void*)f_2888},
{"f_2892srfi-1.scm",(void*)f_2892},
{"f_2909srfi-1.scm",(void*)f_2909},
{"f_2330srfi-1.scm",(void*)f_2330},
{"f_2344srfi-1.scm",(void*)f_2344},
{"f_2348srfi-1.scm",(void*)f_2348},
{"f_2905srfi-1.scm",(void*)f_2905},
{"f_2801srfi-1.scm",(void*)f_2801},
{"f_2848srfi-1.scm",(void*)f_2848},
{"f_2866srfi-1.scm",(void*)f_2866},
{"f_2817srfi-1.scm",(void*)f_2817},
{"f_2829srfi-1.scm",(void*)f_2829},
{"f_2843srfi-1.scm",(void*)f_2843},
{"f_2823srfi-1.scm",(void*)f_2823},
{"f_2443srfi-1.scm",(void*)f_2443},
{"f_2449srfi-1.scm",(void*)f_2449},
{"f_2467srfi-1.scm",(void*)f_2467},
{"f_2488srfi-1.scm",(void*)f_2488},
{"f_2500srfi-1.scm",(void*)f_2500},
{"f_2494srfi-1.scm",(void*)f_2494},
{"f_2482srfi-1.scm",(void*)f_2482},
{"f_2461srfi-1.scm",(void*)f_2461},
{"f_2719srfi-1.scm",(void*)f_2719},
{"f_2777srfi-1.scm",(void*)f_2777},
{"f_2784srfi-1.scm",(void*)f_2784},
{"f_2791srfi-1.scm",(void*)f_2791},
{"f_2799srfi-1.scm",(void*)f_2799},
{"f_2795srfi-1.scm",(void*)f_2795},
{"f_2743srfi-1.scm",(void*)f_2743},
{"f_2750srfi-1.scm",(void*)f_2750},
{"f_2760srfi-1.scm",(void*)f_2760},
{"f_2768srfi-1.scm",(void*)f_2768},
{"f_2764srfi-1.scm",(void*)f_2764},
{"f_2679srfi-1.scm",(void*)f_2679},
{"f_2689srfi-1.scm",(void*)f_2689},
{"f_2696srfi-1.scm",(void*)f_2696},
{"f_2703srfi-1.scm",(void*)f_2703},
{"f_2711srfi-1.scm",(void*)f_2711},
{"f_2586srfi-1.scm",(void*)f_2586},
{"f_2649srfi-1.scm",(void*)f_2649},
{"f_2670srfi-1.scm",(void*)f_2670},
{"f_2598srfi-1.scm",(void*)f_2598},
{"f_2616srfi-1.scm",(void*)f_2616},
{"f_2637srfi-1.scm",(void*)f_2637},
{"f_2610srfi-1.scm",(void*)f_2610},
{"f_2357srfi-1.scm",(void*)f_2357},
{"f_2363srfi-1.scm",(void*)f_2363},
{"f_2369srfi-1.scm",(void*)f_2369},
{"f_2387srfi-1.scm",(void*)f_2387},
{"f_2408srfi-1.scm",(void*)f_2408},
{"f_2420srfi-1.scm",(void*)f_2420},
{"f_2414srfi-1.scm",(void*)f_2414},
{"f_2402srfi-1.scm",(void*)f_2402},
{"f_2381srfi-1.scm",(void*)f_2381},
{"f_2276srfi-1.scm",(void*)f_2276},
{"f_2282srfi-1.scm",(void*)f_2282},
{"f_2288srfi-1.scm",(void*)f_2288},
{"f_2318srfi-1.scm",(void*)f_2318},
{"f_2270srfi-1.scm",(void*)f_2270},
{"f_2264srfi-1.scm",(void*)f_2264},
{"f_2240srfi-1.scm",(void*)f_2240},
{"f_2246srfi-1.scm",(void*)f_2246},
{"f_2210srfi-1.scm",(void*)f_2210},
{"f_2216srfi-1.scm",(void*)f_2216},
{"f_2134srfi-1.scm",(void*)f_2134},
{"f_2140srfi-1.scm",(void*)f_2140},
{"f_2169srfi-1.scm",(void*)f_2169},
{"f_2171srfi-1.scm",(void*)f_2171},
{"f_2194srfi-1.scm",(void*)f_2194},
{"f_2050srfi-1.scm",(void*)f_2050},
{"f_2056srfi-1.scm",(void*)f_2056},
{"f_2084srfi-1.scm",(void*)f_2084},
{"f_2074srfi-1.scm",(void*)f_2074},
{"f_1978srfi-1.scm",(void*)f_1978},
{"f_1984srfi-1.scm",(void*)f_1984},
{"f_2012srfi-1.scm",(void*)f_2012},
{"f_2002srfi-1.scm",(void*)f_2002},
{"f_1914srfi-1.scm",(void*)f_1914},
{"f_1920srfi-1.scm",(void*)f_1920},
{"f_1948srfi-1.scm",(void*)f_1948},
{"f_1938srfi-1.scm",(void*)f_1938},
{"f_1858srfi-1.scm",(void*)f_1858},
{"f_1864srfi-1.scm",(void*)f_1864},
{"f_1892srfi-1.scm",(void*)f_1892},
{"f_1882srfi-1.scm",(void*)f_1882},
{"f_1852srfi-1.scm",(void*)f_1852},
{"f_1831srfi-1.scm",(void*)f_1831},
{"f_1837srfi-1.scm",(void*)f_1837},
{"f_1821srfi-1.scm",(void*)f_1821},
{"f_1829srfi-1.scm",(void*)f_1829},
{"f_1790srfi-1.scm",(void*)f_1790},
{"f_1806srfi-1.scm",(void*)f_1806},
{"f_1738srfi-1.scm",(void*)f_1738},
{"f_1747srfi-1.scm",(void*)f_1747},
{"f_1776srfi-1.scm",(void*)f_1776},
{"f_1762srfi-1.scm",(void*)f_1762},
{"f_1696srfi-1.scm",(void*)f_1696},
{"f_1700srfi-1.scm",(void*)f_1700},
{"f_1715srfi-1.scm",(void*)f_1715},
{"f_1658srfi-1.scm",(void*)f_1658},
{"f_1666srfi-1.scm",(void*)f_1666},
{"f_1668srfi-1.scm",(void*)f_1668},
{"f_1686srfi-1.scm",(void*)f_1686},
{"f_1628srfi-1.scm",(void*)f_1628},
{"f_1636srfi-1.scm",(void*)f_1636},
{"f_1638srfi-1.scm",(void*)f_1638},
{"f_1605srfi-1.scm",(void*)f_1605},
{"f_1622srfi-1.scm",(void*)f_1622},
{"f_1576srfi-1.scm",(void*)f_1576},
{"f_1585srfi-1.scm",(void*)f_1585},
{"f_1539srfi-1.scm",(void*)f_1539},
{"f_1548srfi-1.scm",(void*)f_1548},
{"f_1566srfi-1.scm",(void*)f_1566},
{"f_1522srfi-1.scm",(void*)f_1522},
{"f_1508srfi-1.scm",(void*)f_1508},
{"f_1494srfi-1.scm",(void*)f_1494},
{"f_1484srfi-1.scm",(void*)f_1484},
{"f_1474srfi-1.scm",(void*)f_1474},
{"f_1464srfi-1.scm",(void*)f_1464},
{"f_1454srfi-1.scm",(void*)f_1454},
{"f_1444srfi-1.scm",(void*)f_1444},
{"f_1395srfi-1.scm",(void*)f_1395},
{"f_1401srfi-1.scm",(void*)f_1401},
{"f_1295srfi-1.scm",(void*)f_1295},
{"f_1315srfi-1.scm",(void*)f_1315},
{"f_1342srfi-1.scm",(void*)f_1342},
{"f_1370srfi-1.scm",(void*)f_1370},
{"f_1292srfi-1.scm",(void*)f_1292},
{"f_1289srfi-1.scm",(void*)f_1289},
{"f_1250srfi-1.scm",(void*)f_1250},
{"f_1256srfi-1.scm",(void*)f_1256},
{"f_1193srfi-1.scm",(void*)f_1193},
{"f_1199srfi-1.scm",(void*)f_1199},
{"f_1179srfi-1.scm",(void*)f_1179},
{"f_1190srfi-1.scm",(void*)f_1190},
{"f_1093srfi-1.scm",(void*)f_1093},
{"f_1100srfi-1.scm",(void*)f_1100},
{"f_1106srfi-1.scm",(void*)f_1106},
{"f_1120srfi-1.scm",(void*)f_1120},
{"f_1063srfi-1.scm",(void*)f_1063},
{"f_1069srfi-1.scm",(void*)f_1069},
{"f_1087srfi-1.scm",(void*)f_1087},
{"f_1033srfi-1.scm",(void*)f_1033},
{"f_1039srfi-1.scm",(void*)f_1039},
{"f_1053srfi-1.scm",(void*)f_1053},
{"f_996srfi-1.scm",(void*)f_996},
{"f_1009srfi-1.scm",(void*)f_1009},
{"f_1031srfi-1.scm",(void*)f_1031},
{"f_941srfi-1.scm",(void*)f_941},
{"f_948srfi-1.scm",(void*)f_948},
{"f_953srfi-1.scm",(void*)f_953},
{"f_935srfi-1.scm",(void*)f_935},
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
