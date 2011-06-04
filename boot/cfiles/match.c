/* Generated from match.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:14
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: match.scm -output-file match.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: match
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[308];


C_noret_decl(C_match_toplevel)
C_externexport void C_ccall C_match_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10802)
static void C_ccall f_10802(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10883)
static void C_ccall f_10883(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10809)
static void C_ccall f_10809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10818)
static void C_ccall f_10818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10845)
static void C_ccall f_10845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_688)
static void C_ccall f_688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10736)
static void C_ccall f_10736(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10776)
static void C_ccall f_10776(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10783)
static void C_fcall f_10783(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10743)
static void C_ccall f_10743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10746)
static void C_ccall f_10746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_691)
static void C_ccall f_691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10674)
static void C_ccall f_10674(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10710)
static void C_ccall f_10710(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10717)
static void C_fcall f_10717(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10681)
static void C_ccall f_10681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10684)
static void C_ccall f_10684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_694)
static void C_ccall f_694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9124)
static void C_ccall f_9124(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10654)
static void C_ccall f_10654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10650)
static void C_ccall f_10650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10646)
static void C_ccall f_10646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10114)
static void C_fcall f_10114(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10529)
static void C_fcall f_10529(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10626)
static void C_ccall f_10626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10622)
static void C_ccall f_10622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10580)
static void C_fcall f_10580(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10603)
static void C_ccall f_10603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10599)
static void C_ccall f_10599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10542)
static void C_fcall f_10542(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10549)
static void C_ccall f_10549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10553)
static void C_ccall f_10553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10520)
static void C_ccall f_10520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10516)
static void C_ccall f_10516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10512)
static void C_ccall f_10512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10508)
static void C_ccall f_10508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10504)
static void C_ccall f_10504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10496)
static void C_ccall f_10496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10236)
static void C_fcall f_10236(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10367)
static void C_fcall f_10367(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10464)
static void C_ccall f_10464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10460)
static void C_ccall f_10460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10418)
static void C_fcall f_10418(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10441)
static void C_ccall f_10441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10437)
static void C_ccall f_10437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10380)
static void C_fcall f_10380(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10387)
static void C_ccall f_10387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10391)
static void C_ccall f_10391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10242)
static void C_fcall f_10242(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10278)
static void C_fcall f_10278(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10340)
static void C_ccall f_10340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10336)
static void C_ccall f_10336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10294)
static void C_fcall f_10294(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10317)
static void C_ccall f_10317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10313)
static void C_ccall f_10313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10249)
static void C_ccall f_10249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10253)
static void C_ccall f_10253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10257)
static void C_ccall f_10257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10269)
static void C_ccall f_10269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10126)
static void C_fcall f_10126(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10150)
static void C_fcall f_10150(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10212)
static void C_ccall f_10212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10208)
static void C_ccall f_10208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10166)
static void C_fcall f_10166(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10189)
static void C_ccall f_10189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10185)
static void C_ccall f_10185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10133)
static void C_ccall f_10133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10137)
static void C_ccall f_10137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10064)
static void C_ccall f_10064(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10087)
static void C_ccall f_10087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10071)
static void C_fcall f_10071(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9408)
static void C_ccall f_9408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10058)
static void C_ccall f_10058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10054)
static void C_ccall f_10054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10050)
static void C_ccall f_10050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9512)
static void C_fcall f_9512(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9927)
static void C_fcall f_9927(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10024)
static void C_ccall f_10024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10020)
static void C_ccall f_10020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9978)
static void C_fcall f_9978(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10001)
static void C_ccall f_10001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9997)
static void C_ccall f_9997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9940)
static void C_fcall f_9940(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9947)
static void C_ccall f_9947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9951)
static void C_ccall f_9951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9918)
static void C_ccall f_9918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9914)
static void C_ccall f_9914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9910)
static void C_ccall f_9910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9906)
static void C_ccall f_9906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9902)
static void C_ccall f_9902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9894)
static void C_ccall f_9894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9634)
static void C_fcall f_9634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9765)
static void C_fcall f_9765(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9862)
static void C_ccall f_9862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9858)
static void C_ccall f_9858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9816)
static void C_fcall f_9816(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9839)
static void C_ccall f_9839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9835)
static void C_ccall f_9835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9778)
static void C_fcall f_9778(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9785)
static void C_ccall f_9785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9789)
static void C_ccall f_9789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9640)
static void C_fcall f_9640(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9676)
static void C_fcall f_9676(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9738)
static void C_ccall f_9738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9734)
static void C_ccall f_9734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9692)
static void C_fcall f_9692(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9715)
static void C_ccall f_9715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9711)
static void C_ccall f_9711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9647)
static void C_ccall f_9647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9651)
static void C_ccall f_9651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9655)
static void C_ccall f_9655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9667)
static void C_ccall f_9667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9524)
static void C_fcall f_9524(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9548)
static void C_fcall f_9548(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9610)
static void C_ccall f_9610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9606)
static void C_ccall f_9606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9564)
static void C_fcall f_9564(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9587)
static void C_ccall f_9587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9583)
static void C_ccall f_9583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9531)
static void C_ccall f_9531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9535)
static void C_ccall f_9535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9414)
static void C_fcall f_9414(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9426)
static void C_fcall f_9426(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9488)
static void C_ccall f_9488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9484)
static void C_ccall f_9484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9442)
static void C_fcall f_9442(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9465)
static void C_ccall f_9465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9461)
static void C_ccall f_9461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9236)
static void C_fcall f_9236(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9245)
static void C_fcall f_9245(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9375)
static void C_ccall f_9375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9371)
static void C_ccall f_9371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9329)
static void C_fcall f_9329(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9352)
static void C_ccall f_9352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9348)
static void C_ccall f_9348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9258)
static void C_fcall f_9258(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9264)
static void C_ccall f_9264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9267)
static void C_ccall f_9267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9276)
static void C_ccall f_9276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9177)
static void C_fcall f_9177(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9181)
static void C_ccall f_9181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9184)
static void C_ccall f_9184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9168)
static void C_fcall f_9168(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9135)
static void C_fcall f_9135(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9163)
static void C_ccall f_9163(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9139)
static void C_ccall f_9139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9142)
static void C_ccall f_9142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9149)
static void C_ccall f_9149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9126)
static C_word C_fcall f_9126(C_word *a,C_word t0,C_word t1,C_word t2);
C_noret_decl(f_697)
static void C_ccall f_697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8936)
static void C_ccall f_8936(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9111)
static void C_ccall f_9111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9107)
static void C_ccall f_9107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9103)
static void C_ccall f_9103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9099)
static void C_ccall f_9099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8993)
static void C_fcall f_8993(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8996)
static void C_ccall f_8996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8999)
static void C_ccall f_8999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9002)
static void C_ccall f_9002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9011)
static void C_ccall f_9011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8964)
static void C_fcall f_8964(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8938)
static void C_fcall f_8938(C_word t0,C_word t1) C_noret;
C_noret_decl(f_700)
static void C_ccall f_700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7569)
static void C_ccall f_7569(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8920)
static void C_ccall f_8920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8916)
static void C_ccall f_8916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8912)
static void C_ccall f_8912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8380)
static void C_fcall f_8380(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8795)
static void C_fcall f_8795(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8892)
static void C_ccall f_8892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8888)
static void C_ccall f_8888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8846)
static void C_fcall f_8846(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8869)
static void C_ccall f_8869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8865)
static void C_ccall f_8865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8808)
static void C_fcall f_8808(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8815)
static void C_ccall f_8815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8819)
static void C_ccall f_8819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8786)
static void C_ccall f_8786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8782)
static void C_ccall f_8782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8778)
static void C_ccall f_8778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8774)
static void C_ccall f_8774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8770)
static void C_ccall f_8770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8762)
static void C_ccall f_8762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8502)
static void C_fcall f_8502(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8633)
static void C_fcall f_8633(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8730)
static void C_ccall f_8730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8726)
static void C_ccall f_8726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8684)
static void C_fcall f_8684(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8707)
static void C_ccall f_8707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8703)
static void C_ccall f_8703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8646)
static void C_fcall f_8646(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8653)
static void C_ccall f_8653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8657)
static void C_ccall f_8657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8508)
static void C_fcall f_8508(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8544)
static void C_fcall f_8544(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8606)
static void C_ccall f_8606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8602)
static void C_ccall f_8602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8560)
static void C_fcall f_8560(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8583)
static void C_ccall f_8583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8579)
static void C_ccall f_8579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8515)
static void C_ccall f_8515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8519)
static void C_ccall f_8519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8523)
static void C_ccall f_8523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8535)
static void C_ccall f_8535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8392)
static void C_fcall f_8392(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8416)
static void C_fcall f_8416(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8478)
static void C_ccall f_8478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8474)
static void C_ccall f_8474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8432)
static void C_fcall f_8432(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8455)
static void C_ccall f_8455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8451)
static void C_ccall f_8451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8399)
static void C_ccall f_8399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8403)
static void C_ccall f_8403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8330)
static void C_ccall f_8330(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8353)
static void C_ccall f_8353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8337)
static void C_fcall f_8337(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7674)
static void C_ccall f_7674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8324)
static void C_ccall f_8324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8320)
static void C_ccall f_8320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8316)
static void C_ccall f_8316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7778)
static void C_fcall f_7778(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8193)
static void C_fcall f_8193(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8290)
static void C_ccall f_8290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8286)
static void C_ccall f_8286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8244)
static void C_fcall f_8244(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8267)
static void C_ccall f_8267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8263)
static void C_ccall f_8263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8206)
static void C_fcall f_8206(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8213)
static void C_ccall f_8213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8217)
static void C_ccall f_8217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8184)
static void C_ccall f_8184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8180)
static void C_ccall f_8180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8176)
static void C_ccall f_8176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8172)
static void C_ccall f_8172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8168)
static void C_ccall f_8168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8160)
static void C_ccall f_8160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7900)
static void C_fcall f_7900(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8031)
static void C_fcall f_8031(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8128)
static void C_ccall f_8128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8124)
static void C_ccall f_8124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8082)
static void C_fcall f_8082(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8105)
static void C_ccall f_8105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8101)
static void C_ccall f_8101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8044)
static void C_fcall f_8044(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8051)
static void C_ccall f_8051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8055)
static void C_ccall f_8055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7906)
static void C_fcall f_7906(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7942)
static void C_fcall f_7942(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8004)
static void C_ccall f_8004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8000)
static void C_ccall f_8000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7958)
static void C_fcall f_7958(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7981)
static void C_ccall f_7981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7977)
static void C_ccall f_7977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7913)
static void C_ccall f_7913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7917)
static void C_ccall f_7917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7921)
static void C_ccall f_7921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7933)
static void C_ccall f_7933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7790)
static void C_fcall f_7790(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7814)
static void C_fcall f_7814(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7876)
static void C_ccall f_7876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7872)
static void C_ccall f_7872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7830)
static void C_fcall f_7830(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7853)
static void C_ccall f_7853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7849)
static void C_ccall f_7849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7797)
static void C_ccall f_7797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7801)
static void C_ccall f_7801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7680)
static void C_fcall f_7680(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7692)
static void C_fcall f_7692(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7754)
static void C_ccall f_7754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7750)
static void C_ccall f_7750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7708)
static void C_fcall f_7708(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7731)
static void C_ccall f_7731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7727)
static void C_ccall f_7727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7633)
static void C_fcall f_7633(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7608)
static void C_fcall f_7608(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7628)
static void C_ccall f_7628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7599)
static void C_fcall f_7599(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7574)
static C_word C_fcall f_7574(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4);
C_noret_decl(f_703)
static void C_ccall f_703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7466)
static void C_ccall f_7466(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7491)
static void C_ccall f_7491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7527)
static void C_fcall f_7527(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7497)
static void C_fcall f_7497(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7471)
static void C_fcall f_7471(C_word t0,C_word t1) C_noret;
C_noret_decl(f_706)
static void C_ccall f_706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7464)
static void C_ccall f_7464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7447)
static void C_ccall f_7447(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7447)
static void C_ccall f_7447r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7431)
static void C_ccall f_7431(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7431)
static void C_ccall f_7431r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7400)
static void C_fcall f_7400(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7418)
static void C_ccall f_7418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7377)
static C_word C_fcall f_7377(C_word t0);
C_noret_decl(f_1096)
static void C_ccall f_1096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1100)
static void C_ccall f_1100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1270)
static void C_ccall f_1270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1106)
static void C_ccall f_1106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1118)
static void C_ccall f_1118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1124)
static void C_ccall f_1124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1130)
static void C_ccall f_1130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1144)
static void C_ccall f_1144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1200)
static void C_ccall f_1200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1184)
static void C_ccall f_1184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1152)
static void C_ccall f_1152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_940)
static void C_ccall f_940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_944)
static void C_ccall f_944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_950)
static void C_ccall f_950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_968)
static void C_ccall f_968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1086)
static void C_ccall f_1086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1074)
static void C_ccall f_1074(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_974)
static void C_ccall f_974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_977)
static void C_ccall f_977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1036)
static void C_ccall f_1036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1032)
static void C_ccall f_1032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1016)
static void C_ccall f_1016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_728)
static void C_ccall f_728(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_732)
static void C_ccall f_732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_796)
static void C_ccall f_796(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_934)
static void C_ccall f_934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_800)
static void C_ccall f_800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_812)
static void C_ccall f_812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_922)
static void C_ccall f_922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_914)
static void C_ccall f_914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_815)
static void C_ccall f_815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_794)
static void C_ccall f_794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_744)
static void C_ccall f_744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_747)
static void C_ccall f_747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1366)
static void C_fcall f_1366(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1403)
static void C_ccall f_1403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1415)
static void C_ccall f_1415(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1390)
static void C_ccall f_1390(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1444)
static void C_fcall f_1444(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1474)
static void C_fcall f_1474(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2499)
static void C_fcall f_2499(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2458)
static void C_ccall f_2458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_ccall f_2465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2321)
static void C_fcall f_2321(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2360)
static void C_fcall f_2360(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2284)
static void C_fcall f_2284(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2239)
static void C_fcall f_2239(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2078)
static void C_fcall f_2078(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2003)
static void C_fcall f_2003(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1956)
static void C_fcall f_1956(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1892)
static void C_fcall f_1892(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1909)
static void C_ccall f_1909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1845)
static void C_fcall f_1845(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1855)
static void C_ccall f_1855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1798)
static void C_fcall f_1798(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1751)
static void C_fcall f_1751(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1691)
static void C_fcall f_1691(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1637)
static void C_fcall f_1637(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1654)
static void C_ccall f_1654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1600)
static void C_fcall f_1600(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1557)
static void C_fcall f_1557(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1509)
static void C_fcall f_1509(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1477)
static C_word C_fcall f_1477(C_word t0);
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2539)
static void C_fcall f_2539(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3333)
static void C_fcall f_3333(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3240)
static void C_fcall f_3240(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3258)
static void C_fcall f_3258(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3242)
static void C_fcall f_3242(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2543)
static void C_fcall f_2543(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2581)
static void C_fcall f_2581(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_fcall f_2590(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2682)
static void C_fcall f_2682(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2759)
static void C_fcall f_2759(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2782)
static void C_fcall f_2782(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2871)
static void C_fcall f_2871(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2984)
static void C_fcall f_2984(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3015)
static void C_fcall f_3015(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3045)
static void C_fcall f_3045(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_ccall f_3117(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3125)
static void C_ccall f_3125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3084)
static void C_ccall f_3084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2945)
static void C_ccall f_2945(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2972)
static void C_ccall f_2972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2815)
static void C_fcall f_2815(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2834)
static void C_ccall f_2834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2847)
static void C_ccall f_2847(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2691)
static void C_fcall f_2691(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2726)
static void C_ccall f_2726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_fcall f_2628(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3372)
static void C_fcall f_3372(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3396)
static void C_fcall f_3396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3435)
static void C_fcall f_3435(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3695)
static void C_fcall f_3695(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3444)
static void C_fcall f_3444(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3749)
static void C_fcall f_3749(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3484)
static void C_fcall f_3484(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3622)
static C_word C_fcall f_3622(C_word t0,C_word t1);
C_noret_decl(f_3600)
static C_word C_fcall f_3600(C_word t0,C_word t1);
C_noret_decl(f_3518)
static C_word C_fcall f_3518(C_word t0);
C_noret_decl(f_3819)
static void C_fcall f_3819(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3944)
static void C_ccall f_3944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3946)
static void C_fcall f_3946(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4057)
static void C_fcall f_4057(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4070)
static void C_fcall f_4070(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4086)
static void C_fcall f_4086(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4107)
static void C_fcall f_4107(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4149)
static void C_fcall f_4149(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4192)
static void C_fcall f_4192(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4205)
static void C_fcall f_4205(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4267)
static void C_fcall f_4267(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4292)
static void C_fcall f_4292(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4656)
static void C_ccall f_4656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4946)
static void C_ccall f_4946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4908)
static void C_fcall f_4908(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4935)
static void C_ccall f_4935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4689)
static void C_ccall f_4689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4698)
static void C_fcall f_4698(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4828)
static void C_ccall f_4828(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4800)
static void C_ccall f_4800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4751)
static void C_ccall f_4751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4778)
static void C_ccall f_4778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4696)
static void C_ccall f_4696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4650)
static void C_ccall f_4650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4326)
static void C_ccall f_4326(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4440)
static void C_fcall f_4440(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4459)
static void C_ccall f_4459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4504)
static void C_ccall f_4504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4433)
static void C_ccall f_4433(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4374)
static void C_fcall f_4374(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4356)
static void C_fcall f_4356(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4367)
static void C_ccall f_4367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4261)
static void C_ccall f_4261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4226)
static void C_fcall f_4226(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4158)
static void C_fcall f_4158(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4178)
static void C_ccall f_4178(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4116)
static void C_fcall f_4116(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3848)
static void C_ccall f_3848(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3917)
static void C_ccall f_3917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3839)
static void C_ccall f_3839(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1298)
static void C_fcall f_1298(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1356)
static void C_ccall f_1356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1348)
static void C_ccall f_1348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5092)
static void C_fcall f_5092(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5108)
static void C_ccall f_5108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5230)
static void C_fcall f_5230(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5117)
static void C_fcall f_5117(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5123)
static void C_fcall f_5123(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5274)
static void C_fcall f_5274(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5293)
static void C_ccall f_5293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5299)
static void C_fcall f_5299(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6098)
static void C_ccall f_6098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6094)
static void C_ccall f_6094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6090)
static void C_ccall f_6090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6086)
static void C_ccall f_6086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6066)
static void C_ccall f_6066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6062)
static void C_ccall f_6062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6058)
static void C_ccall f_6058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6050)
static void C_ccall f_6050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6046)
static void C_ccall f_6046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6038)
static void C_ccall f_6038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6034)
static void C_ccall f_6034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6030)
static void C_ccall f_6030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6022)
static void C_ccall f_6022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6018)
static void C_ccall f_6018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6010)
static void C_ccall f_6010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6006)
static void C_ccall f_6006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6002)
static void C_ccall f_6002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5998)
static void C_ccall f_5998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5994)
static void C_ccall f_5994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5990)
static void C_ccall f_5990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5986)
static void C_ccall f_5986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5982)
static void C_ccall f_5982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5978)
static void C_ccall f_5978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5974)
static void C_ccall f_5974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5970)
static void C_ccall f_5970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5966)
static void C_ccall f_5966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5962)
static void C_ccall f_5962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5958)
static void C_ccall f_5958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5942)
static void C_ccall f_5942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5938)
static void C_ccall f_5938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5934)
static void C_ccall f_5934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5930)
static void C_ccall f_5930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5922)
static void C_ccall f_5922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5918)
static void C_ccall f_5918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5914)
static void C_ccall f_5914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5910)
static void C_ccall f_5910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5898)
static void C_ccall f_5898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5894)
static void C_ccall f_5894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5886)
static void C_ccall f_5886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5870)
static void C_ccall f_5870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5850)
static void C_ccall f_5850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5842)
static void C_ccall f_5842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5838)
static void C_ccall f_5838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5357)
static void C_fcall f_5357(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5421)
static void C_ccall f_5421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5417)
static void C_ccall f_5417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5413)
static void C_ccall f_5413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5366)
static void C_ccall f_5366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5389)
static void C_ccall f_5389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6168)
static void C_fcall f_6168(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6172)
static void C_ccall f_6172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6175)
static void C_ccall f_6175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6180)
static void C_fcall f_6180(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6247)
static void C_fcall f_6247(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6220)
static void C_ccall f_6220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6299)
static void C_fcall f_6299(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6309)
static void C_fcall f_6309(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6324)
static void C_ccall f_6324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6516)
static void C_fcall f_6516(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6529)
static void C_fcall f_6529(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6450)
static void C_fcall f_6450(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6463)
static void C_fcall f_6463(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6332)
static void C_fcall f_6332(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6345)
static void C_fcall f_6345(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6376)
static void C_ccall f_6376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6357)
static void C_fcall f_6357(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6609)
static void C_fcall f_6609(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6649)
static void C_fcall f_6649(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6695)
static C_word C_fcall f_6695(C_word t0);
C_noret_decl(f_6705)
static void C_fcall f_6705(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6709)
static void C_fcall f_6709(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6738)
static void C_fcall f_6738(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6742)
static void C_fcall f_6742(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6772)
static void C_fcall f_6772(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7027)
static void C_ccall f_7027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6966)
static void C_fcall f_6966(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6992)
static void C_ccall f_6992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6774)
static void C_fcall f_6774(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7077)
static void C_fcall f_7077(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7246)
static void C_fcall f_7246(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7342)
static void C_fcall f_7342(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7356)
static void C_ccall f_7356(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7354)
static void C_ccall f_7354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7350)
static void C_ccall f_7350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_714)
static void C_ccall f_714(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_708)
static void C_ccall f_708(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;

C_noret_decl(trf_10783)
static void C_fcall trf_10783(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10783(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10783(t0,t1);}

C_noret_decl(trf_10717)
static void C_fcall trf_10717(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10717(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10717(t0,t1);}

C_noret_decl(trf_10114)
static void C_fcall trf_10114(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10114(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10114(t0,t1);}

C_noret_decl(trf_10529)
static void C_fcall trf_10529(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10529(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_10529(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10580)
static void C_fcall trf_10580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10580(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10580(t0,t1);}

C_noret_decl(trf_10542)
static void C_fcall trf_10542(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10542(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10542(t0,t1);}

C_noret_decl(trf_10236)
static void C_fcall trf_10236(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10236(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10236(t0,t1);}

C_noret_decl(trf_10367)
static void C_fcall trf_10367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10367(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_10367(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10418)
static void C_fcall trf_10418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10418(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10418(t0,t1);}

C_noret_decl(trf_10380)
static void C_fcall trf_10380(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10380(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10380(t0,t1);}

C_noret_decl(trf_10242)
static void C_fcall trf_10242(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10242(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10242(t0,t1);}

C_noret_decl(trf_10278)
static void C_fcall trf_10278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10278(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_10278(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10294)
static void C_fcall trf_10294(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10294(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10294(t0,t1);}

C_noret_decl(trf_10126)
static void C_fcall trf_10126(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10126(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10126(t0,t1);}

C_noret_decl(trf_10150)
static void C_fcall trf_10150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10150(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_10150(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10166)
static void C_fcall trf_10166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10166(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10166(t0,t1);}

C_noret_decl(trf_10071)
static void C_fcall trf_10071(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10071(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10071(t0,t1);}

C_noret_decl(trf_9512)
static void C_fcall trf_9512(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9512(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9512(t0,t1);}

C_noret_decl(trf_9927)
static void C_fcall trf_9927(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9927(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9927(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9978)
static void C_fcall trf_9978(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9978(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9978(t0,t1);}

C_noret_decl(trf_9940)
static void C_fcall trf_9940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9940(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9940(t0,t1);}

C_noret_decl(trf_9634)
static void C_fcall trf_9634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9634(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9634(t0,t1);}

C_noret_decl(trf_9765)
static void C_fcall trf_9765(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9765(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9765(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9816)
static void C_fcall trf_9816(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9816(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9816(t0,t1);}

C_noret_decl(trf_9778)
static void C_fcall trf_9778(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9778(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9778(t0,t1);}

C_noret_decl(trf_9640)
static void C_fcall trf_9640(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9640(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9640(t0,t1);}

C_noret_decl(trf_9676)
static void C_fcall trf_9676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9676(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9676(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9692)
static void C_fcall trf_9692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9692(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9692(t0,t1);}

C_noret_decl(trf_9524)
static void C_fcall trf_9524(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9524(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9524(t0,t1);}

C_noret_decl(trf_9548)
static void C_fcall trf_9548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9548(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9548(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9564)
static void C_fcall trf_9564(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9564(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9564(t0,t1);}

C_noret_decl(trf_9414)
static void C_fcall trf_9414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9414(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9414(t0,t1);}

C_noret_decl(trf_9426)
static void C_fcall trf_9426(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9426(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9426(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9442)
static void C_fcall trf_9442(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9442(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9442(t0,t1);}

C_noret_decl(trf_9236)
static void C_fcall trf_9236(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9236(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9236(t0,t1);}

C_noret_decl(trf_9245)
static void C_fcall trf_9245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9245(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9245(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9329)
static void C_fcall trf_9329(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9329(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9329(t0,t1);}

C_noret_decl(trf_9258)
static void C_fcall trf_9258(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9258(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9258(t0,t1);}

C_noret_decl(trf_9177)
static void C_fcall trf_9177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9177(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_9177(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_9168)
static void C_fcall trf_9168(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9168(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9168(t0,t1);}

C_noret_decl(trf_9135)
static void C_fcall trf_9135(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9135(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9135(t0,t1,t2,t3);}

C_noret_decl(trf_8993)
static void C_fcall trf_8993(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8993(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8993(t0,t1);}

C_noret_decl(trf_8964)
static void C_fcall trf_8964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8964(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8964(t0,t1);}

C_noret_decl(trf_8938)
static void C_fcall trf_8938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8938(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8938(t0,t1);}

C_noret_decl(trf_8380)
static void C_fcall trf_8380(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8380(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8380(t0,t1);}

C_noret_decl(trf_8795)
static void C_fcall trf_8795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8795(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8795(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8846)
static void C_fcall trf_8846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8846(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8846(t0,t1);}

C_noret_decl(trf_8808)
static void C_fcall trf_8808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8808(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8808(t0,t1);}

C_noret_decl(trf_8502)
static void C_fcall trf_8502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8502(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8502(t0,t1);}

C_noret_decl(trf_8633)
static void C_fcall trf_8633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8633(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8633(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8684)
static void C_fcall trf_8684(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8684(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8684(t0,t1);}

C_noret_decl(trf_8646)
static void C_fcall trf_8646(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8646(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8646(t0,t1);}

C_noret_decl(trf_8508)
static void C_fcall trf_8508(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8508(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8508(t0,t1);}

C_noret_decl(trf_8544)
static void C_fcall trf_8544(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8544(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8544(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8560)
static void C_fcall trf_8560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8560(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8560(t0,t1);}

C_noret_decl(trf_8392)
static void C_fcall trf_8392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8392(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8392(t0,t1);}

C_noret_decl(trf_8416)
static void C_fcall trf_8416(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8416(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8416(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8432)
static void C_fcall trf_8432(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8432(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8432(t0,t1);}

C_noret_decl(trf_8337)
static void C_fcall trf_8337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8337(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8337(t0,t1);}

C_noret_decl(trf_7778)
static void C_fcall trf_7778(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7778(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7778(t0,t1);}

C_noret_decl(trf_8193)
static void C_fcall trf_8193(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8193(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8193(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8244)
static void C_fcall trf_8244(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8244(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8244(t0,t1);}

C_noret_decl(trf_8206)
static void C_fcall trf_8206(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8206(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8206(t0,t1);}

C_noret_decl(trf_7900)
static void C_fcall trf_7900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7900(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7900(t0,t1);}

C_noret_decl(trf_8031)
static void C_fcall trf_8031(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8031(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8031(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8082)
static void C_fcall trf_8082(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8082(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8082(t0,t1);}

C_noret_decl(trf_8044)
static void C_fcall trf_8044(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8044(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8044(t0,t1);}

C_noret_decl(trf_7906)
static void C_fcall trf_7906(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7906(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7906(t0,t1);}

C_noret_decl(trf_7942)
static void C_fcall trf_7942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7942(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7942(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7958)
static void C_fcall trf_7958(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7958(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7958(t0,t1);}

C_noret_decl(trf_7790)
static void C_fcall trf_7790(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7790(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7790(t0,t1);}

C_noret_decl(trf_7814)
static void C_fcall trf_7814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7814(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7814(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7830)
static void C_fcall trf_7830(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7830(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7830(t0,t1);}

C_noret_decl(trf_7680)
static void C_fcall trf_7680(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7680(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7680(t0,t1);}

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

C_noret_decl(trf_7708)
static void C_fcall trf_7708(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7708(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7708(t0,t1);}

C_noret_decl(trf_7633)
static void C_fcall trf_7633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7633(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7633(t0,t1,t2,t3);}

C_noret_decl(trf_7608)
static void C_fcall trf_7608(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7608(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7608(t0,t1,t2,t3);}

C_noret_decl(trf_7599)
static void C_fcall trf_7599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7599(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7599(t0,t1);}

C_noret_decl(trf_7527)
static void C_fcall trf_7527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7527(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7527(t0,t1);}

C_noret_decl(trf_7497)
static void C_fcall trf_7497(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7497(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7497(t0,t1);}

C_noret_decl(trf_7471)
static void C_fcall trf_7471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7471(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7471(t0,t1);}

C_noret_decl(trf_7400)
static void C_fcall trf_7400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7400(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7400(t0,t1,t2);}

C_noret_decl(trf_1366)
static void C_fcall trf_1366(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1366(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1366(t0,t1);}

C_noret_decl(trf_1444)
static void C_fcall trf_1444(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1444(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1444(t0,t1,t2);}

C_noret_decl(trf_1474)
static void C_fcall trf_1474(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1474(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1474(t0,t1,t2);}

C_noret_decl(trf_2499)
static void C_fcall trf_2499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2499(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2499(t0,t1,t2);}

C_noret_decl(trf_2321)
static void C_fcall trf_2321(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2321(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2321(t0,t1);}

C_noret_decl(trf_2360)
static void C_fcall trf_2360(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2360(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2360(t0,t1);}

C_noret_decl(trf_2284)
static void C_fcall trf_2284(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2284(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2284(t0,t1);}

C_noret_decl(trf_2239)
static void C_fcall trf_2239(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2239(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2239(t0,t1,t2,t3);}

C_noret_decl(trf_2078)
static void C_fcall trf_2078(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2078(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2078(t0,t1);}

C_noret_decl(trf_2003)
static void C_fcall trf_2003(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2003(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2003(t0,t1);}

C_noret_decl(trf_1956)
static void C_fcall trf_1956(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1956(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1956(t0,t1);}

C_noret_decl(trf_1892)
static void C_fcall trf_1892(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1892(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1892(t0,t1);}

C_noret_decl(trf_1845)
static void C_fcall trf_1845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1845(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1845(t0,t1);}

C_noret_decl(trf_1798)
static void C_fcall trf_1798(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1798(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1798(t0,t1);}

C_noret_decl(trf_1751)
static void C_fcall trf_1751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1751(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1751(t0,t1);}

C_noret_decl(trf_1691)
static void C_fcall trf_1691(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1691(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1691(t0,t1);}

C_noret_decl(trf_1637)
static void C_fcall trf_1637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1637(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1637(t0,t1);}

C_noret_decl(trf_1600)
static void C_fcall trf_1600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1600(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1600(t0,t1);}

C_noret_decl(trf_1557)
static void C_fcall trf_1557(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1557(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1557(t0,t1);}

C_noret_decl(trf_1509)
static void C_fcall trf_1509(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1509(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1509(t0,t1,t2,t3);}

C_noret_decl(trf_2539)
static void C_fcall trf_2539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2539(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2539(t0,t1,t2);}

C_noret_decl(trf_3333)
static void C_fcall trf_3333(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3333(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3333(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3240)
static void C_fcall trf_3240(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3240(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3240(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3258)
static void C_fcall trf_3258(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3258(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3258(t0,t1);}

C_noret_decl(trf_3242)
static void C_fcall trf_3242(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3242(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3242(t0,t1);}

C_noret_decl(trf_2543)
static void C_fcall trf_2543(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2543(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2543(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2581)
static void C_fcall trf_2581(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2581(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2581(t0,t1);}

C_noret_decl(trf_2590)
static void C_fcall trf_2590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2590(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2590(t0,t1);}

C_noret_decl(trf_2682)
static void C_fcall trf_2682(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2682(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2682(t0,t1);}

C_noret_decl(trf_2759)
static void C_fcall trf_2759(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2759(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2759(t0,t1);}

C_noret_decl(trf_2782)
static void C_fcall trf_2782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2782(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2782(t0,t1);}

C_noret_decl(trf_2871)
static void C_fcall trf_2871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2871(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2871(t0,t1);}

C_noret_decl(trf_2984)
static void C_fcall trf_2984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2984(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2984(t0,t1);}

C_noret_decl(trf_3015)
static void C_fcall trf_3015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3015(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3015(t0,t1);}

C_noret_decl(trf_3045)
static void C_fcall trf_3045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3045(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3045(t0,t1);}

C_noret_decl(trf_2815)
static void C_fcall trf_2815(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2815(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2815(t0,t1,t2,t3);}

C_noret_decl(trf_2691)
static void C_fcall trf_2691(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2691(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2691(t0,t1);}

C_noret_decl(trf_2628)
static void C_fcall trf_2628(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2628(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2628(t0,t1);}

C_noret_decl(trf_3372)
static void C_fcall trf_3372(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3372(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3372(t0,t1,t2,t3);}

C_noret_decl(trf_3396)
static void C_fcall trf_3396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3396(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3396(t0,t1,t2);}

C_noret_decl(trf_3435)
static void C_fcall trf_3435(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3435(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3435(t0,t1);}

C_noret_decl(trf_3695)
static void C_fcall trf_3695(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3695(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3695(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3444)
static void C_fcall trf_3444(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3444(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3444(t0,t1,t2);}

C_noret_decl(trf_3749)
static void C_fcall trf_3749(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3749(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3749(t0,t1);}

C_noret_decl(trf_3484)
static void C_fcall trf_3484(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3484(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3484(t0,t1,t2);}

C_noret_decl(trf_3819)
static void C_fcall trf_3819(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3819(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_3819(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_3946)
static void C_fcall trf_3946(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3946(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3946(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4057)
static void C_fcall trf_4057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4057(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4057(t0,t1);}

C_noret_decl(trf_4070)
static void C_fcall trf_4070(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4070(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4070(t0,t1);}

C_noret_decl(trf_4086)
static void C_fcall trf_4086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4086(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4086(t0,t1);}

C_noret_decl(trf_4107)
static void C_fcall trf_4107(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4107(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4107(t0,t1);}

C_noret_decl(trf_4149)
static void C_fcall trf_4149(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4149(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4149(t0,t1);}

C_noret_decl(trf_4192)
static void C_fcall trf_4192(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4192(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4192(t0,t1);}

C_noret_decl(trf_4205)
static void C_fcall trf_4205(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4205(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4205(t0,t1);}

C_noret_decl(trf_4267)
static void C_fcall trf_4267(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4267(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4267(t0,t1);}

C_noret_decl(trf_4292)
static void C_fcall trf_4292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4292(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4292(t0,t1);}

C_noret_decl(trf_4908)
static void C_fcall trf_4908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4908(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4908(t0,t1,t2);}

C_noret_decl(trf_4698)
static void C_fcall trf_4698(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4698(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4698(t0,t1,t2);}

C_noret_decl(trf_4440)
static void C_fcall trf_4440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4440(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4440(t0,t1);}

C_noret_decl(trf_4374)
static void C_fcall trf_4374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4374(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4374(t0,t1);}

C_noret_decl(trf_4356)
static void C_fcall trf_4356(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4356(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4356(t0,t1);}

C_noret_decl(trf_4226)
static void C_fcall trf_4226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4226(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4226(t0,t1,t2);}

C_noret_decl(trf_4158)
static void C_fcall trf_4158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4158(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4158(t0,t1,t2,t3);}

C_noret_decl(trf_4116)
static void C_fcall trf_4116(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4116(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4116(t0,t1,t2,t3);}

C_noret_decl(trf_1298)
static void C_fcall trf_1298(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1298(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1298(t0,t1);}

C_noret_decl(trf_5092)
static void C_fcall trf_5092(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5092(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5092(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5230)
static void C_fcall trf_5230(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5230(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5230(t0,t1);}

C_noret_decl(trf_5117)
static void C_fcall trf_5117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5117(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5117(t0,t1);}

C_noret_decl(trf_5123)
static void C_fcall trf_5123(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5123(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5123(t0,t1);}

C_noret_decl(trf_5274)
static void C_fcall trf_5274(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5274(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5274(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5299)
static void C_fcall trf_5299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5299(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5299(t0,t1);}

C_noret_decl(trf_5357)
static void C_fcall trf_5357(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5357(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5357(t0,t1);}

C_noret_decl(trf_6168)
static void C_fcall trf_6168(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6168(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6168(t0,t1,t2,t3);}

C_noret_decl(trf_6180)
static void C_fcall trf_6180(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6180(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6180(t0,t1,t2);}

C_noret_decl(trf_6247)
static void C_fcall trf_6247(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6247(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6247(t0,t1);}

C_noret_decl(trf_6299)
static void C_fcall trf_6299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6299(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6299(t0,t1,t2,t3);}

C_noret_decl(trf_6309)
static void C_fcall trf_6309(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6309(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6309(t0,t1);}

C_noret_decl(trf_6516)
static void C_fcall trf_6516(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6516(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6516(t0,t1,t2);}

C_noret_decl(trf_6529)
static void C_fcall trf_6529(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6529(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6529(t0,t1);}

C_noret_decl(trf_6450)
static void C_fcall trf_6450(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6450(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6450(t0,t1,t2);}

C_noret_decl(trf_6463)
static void C_fcall trf_6463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6463(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6463(t0,t1);}

C_noret_decl(trf_6332)
static void C_fcall trf_6332(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6332(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6332(t0,t1,t2);}

C_noret_decl(trf_6345)
static void C_fcall trf_6345(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6345(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6345(t0,t1);}

C_noret_decl(trf_6357)
static void C_fcall trf_6357(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6357(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6357(t0,t1);}

C_noret_decl(trf_6609)
static void C_fcall trf_6609(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6609(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6609(t0,t1);}

C_noret_decl(trf_6649)
static void C_fcall trf_6649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6649(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6649(t0,t1);}

C_noret_decl(trf_6705)
static void C_fcall trf_6705(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6705(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6705(t0,t1,t2);}

C_noret_decl(trf_6709)
static void C_fcall trf_6709(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6709(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6709(t0,t1);}

C_noret_decl(trf_6738)
static void C_fcall trf_6738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6738(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6738(t0,t1,t2);}

C_noret_decl(trf_6742)
static void C_fcall trf_6742(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6742(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6742(t0,t1);}

C_noret_decl(trf_6772)
static void C_fcall trf_6772(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6772(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6772(t0,t1,t2,t3);}

C_noret_decl(trf_6966)
static void C_fcall trf_6966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6966(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6966(t0,t1);}

C_noret_decl(trf_6774)
static void C_fcall trf_6774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6774(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6774(t0,t1,t2);}

C_noret_decl(trf_7077)
static void C_fcall trf_7077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7077(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7077(t0,t1,t2,t3);}

C_noret_decl(trf_7246)
static void C_fcall trf_7246(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7246(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7246(t0,t1);}

C_noret_decl(trf_7342)
static void C_fcall trf_7342(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7342(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7342(t0,t1);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_match_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_match_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("match_toplevel"));
C_check_nursery_minimum(6);
if(!C_demand(6)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3339)){
C_save(t1);
C_rereclaim2(3339*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(6);
C_initialize_lf(lf,308);
lf[0]=C_h_intern(&lf[0],13,"\005matchversion");
lf[1]=C_static_string(C_heaptop,42,"Version 1.18, July 17, 1995 (Chicken port)");
lf[2]=C_h_intern(&lf[2],16,"\005matchsyntax-err");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],13,"\000syntax-error");
lf[5]=C_static_lambda_info(C_heaptop,34,"(##match#syntax-err obj163 msg164)");
lf[6]=C_h_intern(&lf[6],15,"\005matchset-error");
lf[7]=C_h_intern(&lf[7],15,"\003sysmatch-error");
lf[8]=C_static_lambda_info(C_heaptop,24,"(##match#set-error v165)");
lf[9]=C_h_intern(&lf[9],19,"\005matcherror-control");
lf[10]=C_h_intern(&lf[10],6,"\000error");
lf[11]=C_h_intern(&lf[11],23,"\005matchset-error-control");
lf[12]=C_static_lambda_info(C_heaptop,32,"(##match#set-error-control v166)");
lf[13]=C_h_intern(&lf[13],4,"null");
tmp=C_intern(C_heaptop,5,"pair\077");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"symbol\077");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"boolean\077");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"number\077");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"string\077");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"char\077");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"procedure\077");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"vector\077");
C_save(tmp);
lf[14]=C_h_list(8,C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(8);
lf[15]=C_h_intern(&lf[15],25,"\005matchdisjoint-predicates");
lf[16]=C_h_intern(&lf[16],14,"string->symbol");
lf[17]=C_h_intern(&lf[17],13,"string-append");
lf[18]=C_h_intern(&lf[18],14,"symbol->string");
lf[19]=C_static_lambda_info(C_heaptop,12,"(a7355 x634)");
lf[20]=C_h_intern(&lf[20],7,"\003sysmap");
lf[21]=C_static_lambda_info(C_heaptop,20,"(symbol-append l633)");
tmp=C_intern(C_heaptop,4,"caar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cadr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cdar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cddr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caaar");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"caar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caadr");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cadr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cadar");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cdar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caddr");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cddr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdaar");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"caar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdadr");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cadr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cddar");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cdar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdddr");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cddr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caaaar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caaar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caaadr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caadr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caadar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cadar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caaddr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caddr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cadaar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdaar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cadadr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdadr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caddar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cddar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cadddr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdddr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"car");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdaaar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caaar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdaadr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caadr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdadar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cadar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdaddr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caddr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cddaar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdaar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cddadr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdadr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdddar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cddar");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cddddr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdddr");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
lf[22]=C_h_list(28,C_pick(27),C_pick(26),C_pick(25),C_pick(24),C_pick(23),C_pick(22),C_pick(21),C_pick(20),C_pick(19),C_pick(18),C_pick(17),C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(28);
lf[23]=C_h_intern(&lf[23],10,"vector-ref");
lf[24]=C_h_intern(&lf[24],1,"x");
lf[25]=C_h_intern(&lf[25],6,"lambda");
lf[26]=C_h_intern(&lf[26],3,"let");
lf[27]=C_h_intern(&lf[27],5,"unbox");
lf[28]=C_h_intern(&lf[28],3,"car");
lf[29]=C_h_intern(&lf[29],3,"cdr");
lf[30]=C_h_intern(&lf[30],13,"\003sysblock-ref");
lf[31]=C_static_string(C_heaptop,21,"unnested get! pattern");
lf[32]=C_static_lambda_info(C_heaptop,18,"(getter e628 p629)");
lf[33]=C_h_intern(&lf[33],4,"set-");
lf[34]=C_h_intern(&lf[34],1,"!");
lf[35]=C_static_lambda_info(C_heaptop,16,"(mk-setter s624)");
lf[36]=C_h_intern(&lf[36],1,"y");
lf[37]=C_h_intern(&lf[37],11,"vector-set!");
lf[38]=C_h_intern(&lf[38],8,"set-box!");
lf[39]=C_h_intern(&lf[39],8,"set-car!");
lf[40]=C_h_intern(&lf[40],8,"set-cdr!");
lf[41]=C_h_intern(&lf[41],14,"\003sysblock-set!");
lf[42]=C_static_string(C_heaptop,21,"unnested set! pattern");
lf[43]=C_static_lambda_info(C_heaptop,18,"(setter e621 p622)");
tmp=C_intern(C_heaptop,3,"car");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"caar");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cdar");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,3,"cdr");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cadr");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cddr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,4,"caar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caaar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdaar");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cadr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caadr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdadr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cdar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cadar");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cddar");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,4,"cddr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caddr");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdddr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caaar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caaaar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdaaar");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caadr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caaadr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdaadr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cadar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caadar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdadar");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"caddr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caaddr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdaddr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdaar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cadaar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cddaar");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdadr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cadadr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cddadr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cddar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"caddar");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cdddar");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,5,"cdddr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cadddr");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"cddddr");
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
lf[44]=C_h_list(14,C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(14);
lf[45]=C_static_lambda_info(C_heaptop,12,"(add-d a619)");
lf[46]=C_static_lambda_info(C_heaptop,12,"(add-a a617)");
lf[47]=C_static_lambda_info(C_heaptop,11,"(disjoint\077)");
lf[48]=C_h_intern(&lf[48],6,"equal\077");
lf[49]=C_h_intern(&lf[49],7,"string\077");
lf[50]=C_h_intern(&lf[50],8,"boolean\077");
lf[51]=C_h_intern(&lf[51],5,"char\077");
lf[52]=C_h_intern(&lf[52],7,"number\077");
lf[53]=C_h_intern(&lf[53],7,"symbol\077");
lf[54]=C_h_intern(&lf[54],5,"quote");
lf[55]=C_static_lambda_info(C_heaptop,20,"(equal-test\077 tst614)");
lf[56]=C_h_intern(&lf[56],3,"not");
lf[57]=C_static_lambda_info(C_heaptop,10,"(mem l593)");
lf[58]=C_static_lambda_info(C_heaptop,10,"(mem l603)");
lf[59]=C_h_intern(&lf[59],5,"list\077");
tmp=C_intern(C_heaptop,5,"list\077");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"pair\077");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"null\077");
C_save(tmp);
lf[60]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
lf[61]=C_static_lambda_info(C_heaptop,10,"(mem l609)");
lf[62]=C_h_intern(&lf[62],5,"null\077");
lf[63]=C_h_intern(&lf[63],5,"pair\077");
lf[64]=C_static_lambda_info(C_heaptop,14,"(in e582 l583)");
lf[65]=C_h_intern(&lf[65],4,"cond");
lf[66]=C_h_intern(&lf[66],2,"if");
lf[67]=C_static_lambda_info(C_heaptop,14,"(loop code574)");
lf[68]=C_static_lambda_info(C_heaptop,25,"(guarantees code569 x570)");
lf[69]=C_h_intern(&lf[69],3,"and");
lf[70]=C_h_intern(&lf[70],30,"call-with-current-continuation");
lf[71]=C_h_intern(&lf[71],6,"caddar");
lf[72]=C_h_intern(&lf[72],6,"cddadr");
lf[73]=C_h_intern(&lf[73],6,"caadar");
lf[74]=C_h_intern(&lf[74],6,"cadadr");
lf[75]=C_h_intern(&lf[75],5,"cadar");
lf[76]=C_h_intern(&lf[76],6,"cdddar");
lf[77]=C_h_intern(&lf[77],5,"cddar");
lf[78]=C_h_intern(&lf[78],6,"cdadar");
lf[79]=C_h_intern(&lf[79],4,"cdar");
lf[80]=C_h_intern(&lf[80],5,"cdadr");
lf[81]=C_h_intern(&lf[81],5,"caadr");
lf[82]=C_h_intern(&lf[82],4,"caar");
lf[83]=C_h_intern(&lf[83],12,"\000unspecified");
lf[84]=C_h_intern(&lf[84],5,"\000fail");
lf[85]=C_static_lambda_info(C_heaptop,23,"(assm tst561 f562 s563)");
lf[86]=C_h_intern(&lf[86],6,"append");
lf[87]=C_static_lambda_info(C_heaptop,31,"(emit tst549 sf550 kf551 ks552)");
lf[88]=C_h_intern(&lf[88],3,"...");
lf[89]=C_h_intern(&lf[89],3,"___");
lf[90]=C_h_intern(&lf[90],9,"substring");
lf[91]=C_h_intern(&lf[91],6,"andmap");
lf[92]=C_h_intern(&lf[92],13,"char-numeric\077");
lf[93]=C_h_intern(&lf[93],12,"string->list");
lf[94]=C_static_lambda_info(C_heaptop,17,"(dot-dot-k\077 s252)");
lf[95]=C_static_lambda_info(C_heaptop,10,"(val x459)");
lf[96]=C_static_lambda_info(C_heaptop,12,"(fail sf461)");
lf[97]=C_static_lambda_info(C_heaptop,15,"(success sf463)");
lf[98]=C_h_intern(&lf[98],1,"_");
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
C_save(tmp);
lf[99]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[100]=C_static_lambda_info(C_heaptop,13,"(a4134 sf480)");
lf[101]=C_static_lambda_info(C_heaptop,17,"(loop p478 sf479)");
lf[102]=C_static_lambda_info(C_heaptop,13,"(a4177 sf486)");
lf[103]=C_static_lambda_info(C_heaptop,17,"(loop p484 sf485)");
lf[104]=C_static_lambda_info(C_heaptop,14,"(f_4228 sf495)");
lf[105]=C_static_lambda_info(C_heaptop,12,"(rloop n494)");
lf[106]=C_h_intern(&lf[106],1,"\077");
lf[107]=C_static_lambda_info(C_heaptop,13,"(a4429 sf505)");
lf[108]=C_static_lambda_info(C_heaptop,13,"(a4432 sf506)");
lf[109]=C_static_lambda_info(C_heaptop,12,"(a4491 x516)");
lf[110]=C_h_intern(&lf[110],3,"map");
lf[111]=C_h_intern(&lf[111],4,"cons");
lf[112]=C_h_intern(&lf[112],7,"reverse");
lf[113]=C_static_lambda_info(C_heaptop,12,"(a4509 x515)");
lf[114]=C_static_lambda_info(C_heaptop,17,"(a4541 b513 f514)");
lf[115]=C_static_lambda_info(C_heaptop,13,"(a4523 sf512)");
lf[116]=C_static_lambda_info(C_heaptop,10,"(ks sf502)");
lf[117]=C_static_lambda_info(C_heaptop,13,"(a4325 sf499)");
lf[118]=C_static_lambda_info(C_heaptop,13,"(a4637 sf521)");
lf[119]=C_static_lambda_info(C_heaptop,13,"(a4623 sf520)");
lf[120]=C_h_intern(&lf[120],7,"vector\077");
lf[121]=C_h_intern(&lf[121],13,"vector-length");
lf[122]=C_h_intern(&lf[122],2,">=");
lf[123]=C_h_intern(&lf[123],1,"-");
lf[124]=C_h_intern(&lf[124],1,">");
lf[125]=C_static_lambda_info(C_heaptop,12,"(a4779 x537)");
lf[126]=C_static_lambda_info(C_heaptop,17,"(a4827 b535 f536)");
lf[127]=C_static_lambda_info(C_heaptop,13,"(a4809 sf534)");
lf[128]=C_static_lambda_info(C_heaptop,14,"(f_4700 sf529)");
lf[129]=C_static_lambda_info(C_heaptop,12,"(vloop n528)");
lf[130]=C_static_lambda_info(C_heaptop,13,"(a4676 sf526)");
lf[131]=C_static_lambda_info(C_heaptop,14,"(f_4910 sf544)");
lf[132]=C_static_lambda_info(C_heaptop,12,"(vloop n543)");
lf[133]=C_static_lambda_info(C_heaptop,13,"(a4893 sf541)");
lf[134]=C_h_intern(&lf[134],9,"\003syserror");
lf[135]=C_static_string(C_heaptop,18,"THIS NEVER HAPPENS");
lf[136]=C_h_intern(&lf[136],7,"newline");
lf[137]=C_h_intern(&lf[137],7,"display");
lf[138]=C_static_string(C_heaptop,30,"FATAL ERROR IN PATTERN MATCHER");
lf[139]=C_h_intern(&lf[139],4,"get!");
lf[140]=C_h_intern(&lf[140],4,"set!");
lf[141]=C_h_intern(&lf[141],1,"$");
lf[142]=C_h_intern(&lf[142],2,"or");
lf[143]=C_h_intern(&lf[143],1,"=");
lf[144]=C_static_lambda_info(C_heaptop,34,"(next p470 e471 sf472 kf473 ks474)");
lf[145]=C_static_lambda_info(C_heaptop,54,"(gen x451 sf452 plist453 erract454 length>=455 eta456)");
lf[146]=C_static_lambda_info(C_heaptop,8,"(const\077)");
tmp=C_intern(C_heaptop,6,"lambda");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"match-lambda");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"match-lambda*");
C_save(tmp);
lf[147]=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
lf[148]=C_static_lambda_info(C_heaptop,8,"(isval\077)");
lf[149]=C_static_lambda_info(C_heaptop,8,"(small\077)");
lf[150]=C_static_lambda_info(C_heaptop,11,"(loop e416)");
lf[151]=C_static_lambda_info(C_heaptop,11,"(loop e410)");
lf[152]=C_static_lambda_info(C_heaptop,25,"(loop b438 new-b439 e440)");
lf[153]=C_static_lambda_info(C_heaptop,23,"(inline-let let-exp401)");
lf[154]=C_static_lambda_info(C_heaptop,13,"(a3407 x1392)");
lf[155]=C_static_lambda_info(C_heaptop,25,"(permutation p1390 p2391)");
lf[156]=C_static_lambda_info(C_heaptop,23,"(find-prefix b388 a389)");
lf[157]=C_static_string(C_heaptop,29,"duplicate variable in pattern");
lf[158]=C_h_intern(&lf[158],6,"gensym");
lf[159]=C_static_lambda_info(C_heaptop,18,"(a2725 p2341 a342)");
lf[160]=C_static_lambda_info(C_heaptop,17,"(a2767 p343 a344)");
lf[161]=C_static_lambda_info(C_heaptop,16,"(a2800 plist355)");
lf[162]=C_static_lambda_info(C_heaptop,16,"(a2846 cdr-p352)");
lf[163]=C_static_string(C_heaptop,33,"variables of or-pattern differ in");
lf[164]=C_static_lambda_info(C_heaptop,25,"(a2833 car-p350 car-a351)");
lf[165]=C_static_lambda_info(C_heaptop,19,"(or* plist348 k349)");
lf[166]=C_static_lambda_info(C_heaptop,29,"(a2790 first-p345 first-a346)");
lf[167]=C_static_string(C_heaptop,23,"no variables allowed in");
lf[168]=C_static_lambda_info(C_heaptop,19,"(a2900 p2356 a2357)");
lf[169]=C_static_lambda_info(C_heaptop,12,"(a2973 _362)");
lf[170]=C_static_lambda_info(C_heaptop,17,"(a2944 q359 b360)");
lf[171]=C_static_lambda_info(C_heaptop,18,"(a2992 p1363 a364)");
lf[172]=C_static_lambda_info(C_heaptop,21,"(a3093 cdr-p367 a368)");
lf[173]=C_static_lambda_info(C_heaptop,21,"(a3083 car-p365 a366)");
lf[174]=C_h_intern(&lf[174],12,"list->vector");
lf[175]=C_static_lambda_info(C_heaptop,18,"(a3116 pl369 a370)");
lf[176]=C_h_intern(&lf[176],12,"vector->list");
lf[177]=C_static_lambda_info(C_heaptop,22,"(bound p329 a330 k331)");
lf[178]=C_static_lambda_info(C_heaptop,6,"(g115)");
lf[179]=C_static_lambda_info(C_heaptop,21,"(a3286 cdr-p379 a380)");
lf[180]=C_static_lambda_info(C_heaptop,21,"(a3280 car-p377 a378)");
lf[181]=C_static_lambda_info(C_heaptop,27,"(boundv plist371 a372 k373)");
lf[182]=C_static_lambda_info(C_heaptop,21,"(a3361 cdr-p386 a387)");
lf[183]=C_static_lambda_info(C_heaptop,21,"(a3351 car-p384 a385)");
lf[184]=C_static_lambda_info(C_heaptop,27,"(bound* plist381 a382 k383)");
lf[185]=C_static_lambda_info(C_heaptop,17,"(a3424 p393 a394)");
lf[186]=C_static_lambda_info(C_heaptop,18,"(bound pattern322)");
tmp=C_intern(C_heaptop,10,"quasiquote");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"unquote");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"unquote-splicing");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"\077");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"$");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"=");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"and");
C_save(tmp);
tmp=C_intern(C_heaptop,2,"or");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"not");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"set!");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"get!");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"...");
C_save(tmp);
tmp=C_intern(C_heaptop,3,"___");
C_save(tmp);
lf[187]=C_h_list(15,C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(15);
lf[188]=C_static_lambda_info(C_heaptop,19,"(pattern-var\077 x251)");
lf[189]=C_static_lambda_info(C_heaptop,9,"(simple\077)");
lf[190]=C_static_lambda_info(C_heaptop,15,"(g88 x280 y281)");
lf[191]=C_h_intern(&lf[191],10,"quasiquote");
lf[192]=C_h_intern(&lf[192],7,"unquote");
lf[193]=C_h_intern(&lf[193],16,"unquote-splicing");
lf[194]=C_h_intern(&lf[194],6,"vector");
lf[195]=C_static_string(C_heaptop,23,"syntax error in pattern");
lf[196]=C_static_lambda_info(C_heaptop,15,"(ordinary p278)");
lf[197]=C_static_lambda_info(C_heaptop,16,"(g109 x304 y305)");
lf[198]=C_static_string(C_heaptop,23,"syntax error in pattern");
lf[199]=C_static_lambda_info(C_heaptop,12,"(quasi p302)");
lf[200]=C_static_string(C_heaptop,42,"invalid use of unquote-splicing in pattern");
lf[201]=C_static_lambda_info(C_heaptop,14,"(ordlist p317)");
lf[202]=C_static_lambda_info(C_heaptop,29,"(validate-pattern pattern264)");
lf[203]=C_h_intern(&lf[203],8,"\003syswarn");
lf[204]=C_static_string(C_heaptop,29,"Warning: unreachable pattern ");
lf[205]=C_h_intern(&lf[205],2,"in");
lf[206]=C_static_lambda_info(C_heaptop,12,"(a1449 x263)");
lf[207]=C_h_intern(&lf[207],12,"\003sysfor-each");
lf[208]=C_static_lambda_info(C_heaptop,36,"(unreachable plist261 match-expr262)");
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[209]=C_h_pair(C_restore,tmp);
lf[210]=C_static_lambda_info(C_heaptop,12,"(a1377 x256)");
lf[211]=C_static_lambda_info(C_heaptop,12,"(a1389 x257)");
lf[212]=C_h_intern(&lf[212],6,"\000match");
lf[213]=C_static_lambda_info(C_heaptop,12,"(a1414 x260)");
tmp=C_intern(C_heaptop,11,"unspecified");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"error");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"fail");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"match");
C_save(tmp);
lf[214]=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
lf[215]=C_static_string(C_heaptop,57,"invalid value for ##match#error-control, legal values are");
lf[216]=C_static_lambda_info(C_heaptop,27,"(error-maker match-expr255)");
lf[217]=C_h_intern(&lf[217],1,"n");
lf[218]=C_h_intern(&lf[218],1,"l");
lf[219]=C_h_intern(&lf[219],6,"length");
lf[220]=C_h_intern(&lf[220],2,"=>");
lf[221]=C_static_lambda_info(C_heaptop,11,"(a795 c200)");
lf[222]=C_static_lambda_info(C_heaptop,40,"(genmatch x193 clauses194 match-expr195)");
lf[223]=C_h_intern(&lf[223],6,"letrec");
lf[224]=C_h_intern(&lf[224],10,"\003sysappend");
lf[225]=C_static_lambda_info(C_heaptop,17,"(a1037 v229 g230)");
lf[226]=C_static_lambda_info(C_heaptop,12,"(a1043 v228)");
lf[227]=C_static_lambda_info(C_heaptop,12,"(a1073 _227)");
lf[228]=C_static_lambda_info(C_heaptop,47,"(genletrec pat212 exp213 body214 match-expr215)");
lf[229]=C_h_intern(&lf[229],5,"begin");
lf[230]=C_h_intern(&lf[230],8,"\003sysvoid");
lf[231]=C_static_lambda_info(C_heaptop,17,"(a1213 v248 g249)");
lf[232]=C_h_intern(&lf[232],6,"define");
lf[233]=C_static_lambda_info(C_heaptop,12,"(a1243 v247)");
lf[234]=C_static_lambda_info(C_heaptop,12,"(a1249 _246)");
lf[235]=C_static_lambda_info(C_heaptop,39,"(gendefine pat232 exp233 match-expr234)");
lf[236]=C_static_lambda_info(C_heaptop,5,"(rac)");
lf[237]=C_static_lambda_info(C_heaptop,10,"(rdc l636)");
lf[238]=C_h_intern(&lf[238],15,"\005matchexpanders");
lf[239]=C_h_intern(&lf[239],19,"match-error-control");
lf[240]=C_static_lambda_info(C_heaptop,30,"(match-error-control . arg663)");
lf[241]=C_h_intern(&lf[241],21,"match-error-procedure");
lf[242]=C_static_lambda_info(C_heaptop,33,"(match-error-procedure . proc664)");
lf[243]=C_h_intern(&lf[243],17,"register-feature!");
lf[244]=C_h_intern(&lf[244],5,"match");
lf[245]=C_h_intern(&lf[245],12,"match-define");
lf[246]=C_static_string(C_heaptop,15,"syntax error in");
lf[247]=C_static_lambda_info(C_heaptop,6,"(g209)");
lf[248]=C_static_lambda_info(C_heaptop,15,"(a7465 args158)");
lf[249]=C_h_intern(&lf[249],20,"\003sysregister-macro-2");
lf[250]=C_h_intern(&lf[250],12,"match-letrec");
lf[251]=C_static_lambda_info(C_heaptop,32,"(g199 e1102 p2103 e2104 body105)");
lf[252]=C_static_string(C_heaptop,15,"syntax error in");
lf[253]=C_static_lambda_info(C_heaptop,6,"(g195)");
lf[254]=C_static_lambda_info(C_heaptop,28,"(g194 pat106 exp107 body108)");
lf[255]=C_static_lambda_info(C_heaptop,28,"(g186 pat109 exp110 body111)");
lf[256]=C_static_lambda_info(C_heaptop,30,"(g189 g190114 g188115 g187116)");
lf[257]=C_h_intern(&lf[257],6,"cadaar");
lf[258]=C_h_intern(&lf[258],5,"caaar");
lf[259]=C_static_lambda_info(C_heaptop,30,"(g189 g190119 g188120 g187121)");
lf[260]=C_static_lambda_info(C_heaptop,30,"(g189 g190124 g188125 g187126)");
lf[261]=C_static_lambda_info(C_heaptop,30,"(g189 g190129 g188130 g187131)");
lf[262]=C_static_lambda_info(C_heaptop,30,"(g189 g190134 g188135 g187136)");
lf[263]=C_h_intern(&lf[263],6,"cddaar");
lf[264]=C_h_intern(&lf[264],5,"cdaar");
lf[265]=C_static_lambda_info(C_heaptop,15,"(a8329 g206112)");
lf[266]=C_static_lambda_info(C_heaptop,30,"(g189 g190139 g188140 g187141)");
lf[267]=C_static_lambda_info(C_heaptop,30,"(g189 g190144 g188145 g187146)");
lf[268]=C_static_lambda_info(C_heaptop,30,"(g189 g190149 g188150 g187151)");
lf[269]=C_static_lambda_info(C_heaptop,30,"(g189 g190154 g188155 g187156)");
lf[270]=C_static_lambda_info(C_heaptop,14,"(a7568 args95)");
lf[271]=C_h_intern(&lf[271],10,"match-let*");
lf[272]=C_static_string(C_heaptop,15,"syntax error in");
lf[273]=C_static_lambda_info(C_heaptop,6,"(g176)");
lf[274]=C_h_intern(&lf[274],4,"let*");
lf[275]=C_static_lambda_info(C_heaptop,14,"(a8935 args88)");
lf[276]=C_static_lambda_info(C_heaptop,19,"(g158 exp18 body19)");
lf[277]=C_h_intern(&lf[277],4,"list");
lf[278]=C_static_lambda_info(C_heaptop,11,"(a9162 x25)");
lf[279]=C_static_lambda_info(C_heaptop,25,"(g154 pat20 exp21 body22)");
lf[280]=C_h_intern(&lf[280],9,"match-let");
lf[281]=C_static_string(C_heaptop,15,"syntax error in");
lf[282]=C_static_lambda_info(C_heaptop,6,"(g146)");
lf[283]=C_static_lambda_info(C_heaptop,33,"(g145 p126 e127 p228 e229 body30)");
lf[284]=C_h_intern(&lf[284],13,"match-lambda*");
lf[285]=C_static_lambda_info(C_heaptop,27,"(g161 g16234 g16035 g15936)");
lf[286]=C_static_lambda_info(C_heaptop,27,"(g149 g15044 g14845 g14746)");
lf[287]=C_static_lambda_info(C_heaptop,27,"(g149 g15049 g14850 g14751)");
lf[288]=C_static_lambda_info(C_heaptop,27,"(g149 g15054 g14855 g14756)");
lf[289]=C_static_lambda_info(C_heaptop,27,"(g149 g15059 g14860 g14761)");
lf[290]=C_static_lambda_info(C_heaptop,27,"(g149 g15064 g14865 g14766)");
lf[291]=C_static_lambda_info(C_heaptop,15,"(a10063 g16742)");
lf[292]=C_static_lambda_info(C_heaptop,27,"(g149 g15069 g14870 g14771)");
lf[293]=C_static_lambda_info(C_heaptop,27,"(g149 g15074 g14875 g14776)");
lf[294]=C_static_lambda_info(C_heaptop,27,"(g149 g15079 g14880 g14781)");
lf[295]=C_static_lambda_info(C_heaptop,27,"(g149 g15084 g14885 g14786)");
lf[296]=C_static_lambda_info(C_heaptop,14,"(a9123 args11)");
lf[297]=C_static_string(C_heaptop,15,"syntax error in");
lf[298]=C_static_lambda_info(C_heaptop,14,"(a10709 g1349)");
lf[299]=C_static_lambda_info(C_heaptop,14,"(a10673 args8)");
lf[300]=C_h_intern(&lf[300],12,"match-lambda");
lf[301]=C_static_string(C_heaptop,15,"syntax error in");
lf[302]=C_static_lambda_info(C_heaptop,14,"(a10775 g1266)");
lf[303]=C_static_lambda_info(C_heaptop,14,"(a10735 args5)");
lf[304]=C_static_string(C_heaptop,15,"syntax error in");
lf[305]=C_static_lambda_info(C_heaptop,11,"(a10882 y1)");
lf[306]=C_static_lambda_info(C_heaptop,14,"(a10801 args0)");
lf[307]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,308,create_ptable());
t2=C_mutate((C_word*)lf[0]+1,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_688,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10802,a[2]=lf[306],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 137  ##sys#register-macro-2 */
t5=*((C_word*)lf[249]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,lf[244],t4);}

/* a10801 */
static void C_ccall f_10802(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10802,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10809,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_listp(t2))){
t4=(C_word)C_i_length(t2);
if(C_truep((C_word)C_i_less_or_equalp(C_fix(1),t4))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10883,a[2]=lf[305],tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_i_cdr(t2);
/* match.scm: 142  andmap */
t7=*((C_word*)lf[91]+1);
((C_proc4)C_retrieve_proc(t7))(4,t7,t3,t5,t6);}
else{
t5=t3;
f_10809(2,t5,C_SCHEME_FALSE);}}
else{
t4=t3;
f_10809(2,t4,C_SCHEME_FALSE);}}

/* a10882 in a10801 */
static void C_ccall f_10883(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10883,3,t0,t1,t2);}
if(C_truep((C_word)C_i_listp(t2))){
t3=(C_word)C_i_length(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_less_or_equalp(C_fix(2),t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k10807 in a10801 */
static void C_ccall f_10809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10809,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10818,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_symbolp(t2))){
t5=t4;
f_10818(2,t5,t2);}
else{
/* match.scm: 146  gensym */
t5=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}}
else{
t2=(C_word)C_a_i_cons(&a,2,lf[244],((C_word*)t0)[3]);
/* match.scm: 157  ##match#syntax-err */
t3=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t2,lf[304]);}}

/* k10816 in k10807 in a10801 */
static void C_ccall f_10818(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10818,2,t0,t1);}
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[5]))){
t2=(C_word)C_a_i_cons(&a,2,lf[244],((C_word*)t0)[4]);
t3=(C_word)C_i_car(*((C_word*)lf[238]+1));
t4=t3;
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[3],t1,((C_word*)t0)[2],t2);}
else{
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10845,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_a_i_cons(&a,2,lf[244],((C_word*)t0)[4]);
t6=(C_word)C_i_car(*((C_word*)lf[238]+1));
t7=t6;
((C_proc5)C_retrieve_proc(t7))(5,t7,t4,t1,((C_word*)t0)[2],t5);}}

/* k10843 in k10816 in k10807 in a10801 */
static void C_ccall f_10845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10845,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[26],((C_word*)t0)[2],t1));}

/* k686 */
static void C_ccall f_688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_688,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10736,a[2]=lf[303],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 158  ##sys#register-macro-2 */
t4=*((C_word*)lf[249]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[300],t3);}

/* a10735 in k686 */
static void C_ccall f_10736(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10736,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10743,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_listp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10776,a[2]=lf[302],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 161  andmap */
t5=*((C_word*)lf[91]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,t2);}
else{
t4=t3;
f_10743(2,t4,C_SCHEME_FALSE);}}

/* a10775 in a10735 in k686 */
static void C_ccall f_10776(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10776,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10783,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_cdr(t2);
t5=t3;
f_10783(t5,(C_word)C_i_listp(t4));}
else{
t4=t3;
f_10783(t4,C_SCHEME_FALSE);}}

/* k10781 in a10775 in a10735 in k686 */
static void C_fcall f_10783(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_pairp(t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10741 in a10735 in k686 */
static void C_ccall f_10743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10743,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 168  gensym */
t3=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=(C_word)C_a_i_cons(&a,2,lf[300],((C_word*)t0)[3]);
/* match.scm: 170  ##match#syntax-err */
t3=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t2,lf[301]);}}

/* k10744 in k10741 in a10735 in k686 */
static void C_ccall f_10746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10746,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=(C_word)C_a_i_cons(&a,2,lf[244],t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[25],t2,t4));}

/* k689 in k686 */
static void C_ccall f_691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10674,a[2]=lf[299],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 173  ##sys#register-macro-2 */
t4=*((C_word*)lf[249]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[284],t3);}

/* a10673 in k689 in k686 */
static void C_ccall f_10674(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10674,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10681,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_listp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10710,a[2]=lf[298],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 176  andmap */
t5=*((C_word*)lf[91]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,t2);}
else{
t4=t3;
f_10681(2,t4,C_SCHEME_FALSE);}}

/* a10709 in a10673 in k689 in k686 */
static void C_ccall f_10710(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10710,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10717,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_cdr(t2);
t5=t3;
f_10717(t5,(C_word)C_i_listp(t4));}
else{
t4=t3;
f_10717(t4,C_SCHEME_FALSE);}}

/* k10715 in a10709 in a10673 in k689 in k686 */
static void C_fcall f_10717(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_pairp(t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k10679 in a10673 in k689 in k686 */
static void C_ccall f_10681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10681,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 183  gensym */
t3=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=(C_word)C_a_i_cons(&a,2,lf[284],((C_word*)t0)[3]);
/* match.scm: 185  ##match#syntax-err */
t3=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t2,lf[297]);}}

/* k10682 in k10679 in a10673 in k689 in k686 */
static void C_ccall f_10684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10684,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=(C_word)C_a_i_cons(&a,2,lf[244],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[25],t1,t3));}

/* k692 in k689 in k686 */
static void C_ccall f_694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9124,a[2]=lf[296],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 188  ##sys#register-macro-2 */
t4=*((C_word*)lf[249]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[280],t3);}

/* a9123 in k692 in k689 in k686 */
static void C_ccall f_9124(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[42],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9124,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9126,a[2]=lf[276],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9135,a[2]=lf[279],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9168,a[2]=t2,a[3]=lf[282],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9177,a[2]=lf[283],tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_i_cadddr(*((C_word*)lf[238]+1));
if(C_truep((C_word)C_i_pairp(t2))){
t8=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_symbolp(t8))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9236,a[2]=t1,a[3]=t5,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t10=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t10))){
t11=(C_word)C_i_cadr(t2);
t12=t9;
f_9236(t12,(C_word)C_i_listp(t11));}
else{
t11=t9;
f_9236(t11,C_SCHEME_FALSE);}}
else{
t9=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_listp(t9))){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9408,a[2]=t4,a[3]=t6,a[4]=t3,a[5]=t5,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10064,a[2]=t7,a[3]=lf[291],tmp=(C_word)a,a+=4,tmp);
t12=(C_word)C_i_car(t2);
/* match.scm: 232  andmap */
t13=*((C_word*)lf[91]+1);
((C_proc4)C_retrieve_proc(t13))(4,t13,t10,t11,t12);}
else{
t10=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t10))){
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10114,a[2]=t4,a[3]=t6,a[4]=t5,a[5]=t3,a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10654,a[2]=t2,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 332  caar */
t13=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t13+1)))(3,t13,t12,t2);}
else{
/* match.scm: 410  g146 */
t11=t5;
f_9168(t11,t1);}}}}
else{
/* match.scm: 411  g146 */
t8=t5;
f_9168(t8,t1);}}

/* k10652 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10654,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 333  cdaar */
t3=*((C_word*)lf[264]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_10114(t2,C_SCHEME_FALSE);}}

/* k10648 in k10652 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10650,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10646,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 334  cddaar */
t3=*((C_word*)lf[263]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_10114(t2,C_SCHEME_FALSE);}}

/* k10644 in k10648 in k10652 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_10114(t2,(C_word)C_i_nullp(t1));}

/* k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10114(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10114,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 335  cdar */
t3=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10529,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=lf[295],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_10529(t6,((C_word*)t0)[6],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g149 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10529(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10529,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10542,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_listp(t6))){
t7=(C_word)C_i_cdr(((C_word*)t0)[5]);
t8=t5;
f_10542(t8,(C_word)C_i_pairp(t7));}
else{
t7=t5;
f_10542(t7,C_SCHEME_FALSE);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10580,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10626,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 404  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_10580(t7,C_SCHEME_FALSE);}}}

/* k10624 in g149 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10626,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10622,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 405  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_10580(t2,C_SCHEME_FALSE);}}

/* k10620 in k10624 in g149 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_10580(t2,(C_word)C_i_nullp(t1));}

/* k10578 in g149 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10580(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10580,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10603,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 407  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 409  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[3]);}}

/* k10601 in k10578 in g149 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10603,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10599,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 408  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k10597 in k10601 in k10578 in g149 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10599,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 406  g149 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_10529(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k10540 in g149 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10542(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10542,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10549,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 399  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* match.scm: 402  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[5]);}}

/* k10547 in k10540 in g149 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10553,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 400  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k10551 in k10547 in k10540 in g149 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 399  g154 */
f_9135(((C_word*)t0)[3],((C_word*)t0)[2],t1,t2);}

/* k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10520,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10126,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
if(C_truep((C_word)C_i_listp(t3))){
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
t5=t2;
f_10126(t5,(C_word)C_i_pairp(t4));}
else{
t4=t2;
f_10126(t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10516,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 352  cdar */
t4=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}}

/* k10514 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10516,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 353  cadar */
t3=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_10236(t2,C_SCHEME_FALSE);}}

/* k10510 in k10514 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10512,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 354  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_10236(t2,C_SCHEME_FALSE);}}

/* k10506 in k10510 in k10514 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10508,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 355  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_10236(t2,C_SCHEME_FALSE);}}

/* k10502 in k10506 in k10510 in k10514 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10504,2,t0,t1);}
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10496,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 356  cddar */
t4=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
f_10236(t3,C_SCHEME_FALSE);}}

/* k10494 in k10502 in k10506 in k10510 in k10514 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_10236(t2,(C_word)C_i_nullp(t1));}

/* k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10236(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10236,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10242,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_listp(t3))){
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=t2;
f_10242(t5,(C_word)C_i_pairp(t4));}
else{
t4=t2;
f_10242(t4,C_SCHEME_FALSE);}}
else{
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10367,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=lf[294],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_10367(t6,((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g149 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10367(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10367,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10380,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_listp(t6))){
t7=(C_word)C_i_cdr(((C_word*)t0)[5]);
t8=t5;
f_10380(t8,(C_word)C_i_pairp(t7));}
else{
t7=t5;
f_10380(t7,C_SCHEME_FALSE);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10418,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10464,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 389  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_10418(t7,C_SCHEME_FALSE);}}}

/* k10462 in g149 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10464,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10460,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 390  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_10418(t2,C_SCHEME_FALSE);}}

/* k10458 in k10462 in g149 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_10418(t2,(C_word)C_i_nullp(t1));}

/* k10416 in g149 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10418(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10418,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10441,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 392  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 394  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[3]);}}

/* k10439 in k10416 in g149 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10441,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10437,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 393  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k10435 in k10439 in k10416 in g149 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10437,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 391  g149 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_10367(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k10378 in g149 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10380(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10380,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10387,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 384  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* match.scm: 387  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[5]);}}

/* k10385 in k10378 in g149 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10391,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 385  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k10389 in k10385 in k10378 in g149 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 384  g154 */
f_9135(((C_word*)t0)[3],((C_word*)t0)[2],t1,t2);}

/* k10240 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10242(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10242,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10249,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 359  caaar */
t3=*((C_word*)lf[258]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10278,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[293],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_10278(t6,((C_word*)t0)[3],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g149 in k10240 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10278(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10278,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 368  g146 */
t5=((C_word*)t0)[3];
f_9168(t5,t1);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10294,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10340,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 370  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_10294(t7,C_SCHEME_FALSE);}}}

/* k10338 in g149 in k10240 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10340,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10336,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 371  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_10294(t2,C_SCHEME_FALSE);}}

/* k10334 in k10338 in g149 in k10240 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_10294(t2,(C_word)C_i_nullp(t1));}

/* k10292 in g149 in k10240 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10294(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10294,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10317,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 373  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 377  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[3]);}}

/* k10315 in k10292 in g149 in k10240 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10317,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10313,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 375  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k10311 in k10315 in k10292 in g149 in k10240 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10313,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 372  g149 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_10278(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k10247 in k10240 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10253,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 360  cadaar */
t3=*((C_word*)lf[257]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k10251 in k10247 in k10240 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10257,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 361  caadar */
t3=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k10255 in k10251 in k10247 in k10240 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10257,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10269,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 362  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k10267 in k10255 in k10251 in k10247 in k10240 in k10234 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* match.scm: 359  g145 */
f_9177(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* k10124 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10126(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10126,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10133,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 337  caaar */
t3=*((C_word*)lf[258]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10150,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[292],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_10150(t6,((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g149 in k10124 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10150(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10150,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 344  g146 */
t5=((C_word*)t0)[3];
f_9168(t5,t1);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10166,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10212,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 346  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_10166(t7,C_SCHEME_FALSE);}}}

/* k10210 in g149 in k10124 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10212,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10208,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 347  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_10166(t2,C_SCHEME_FALSE);}}

/* k10206 in k10210 in g149 in k10124 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_10166(t2,(C_word)C_i_nullp(t1));}

/* k10164 in g149 in k10124 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10166(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10166,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10189,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 349  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 351  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[3]);}}

/* k10187 in k10164 in g149 in k10124 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10189,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10185,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 350  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k10183 in k10187 in k10164 in g149 in k10124 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10185,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 348  g149 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_10150(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k10131 in k10124 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10137,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 338  cadaar */
t3=*((C_word*)lf[257]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k10135 in k10131 in k10124 in k10518 in k10112 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10137,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 337  g158 */
t3=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t3))(2,t3,f_9126(C_a_i(&a,12),((C_word*)t0)[2],t1,t2));}

/* a10063 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10064(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10064,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10071,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10087,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(t2);
/* match.scm: 235  g136 */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t4=t3;
f_10071(t4,C_SCHEME_FALSE);}}

/* k10085 in a10063 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_10071(t3,(C_word)C_i_pairp(t2));}
else{
t2=((C_word*)t0)[2];
f_10071(t2,C_SCHEME_FALSE);}}

/* k10069 in a10063 in a9123 in k692 in k689 in k686 */
static void C_fcall f_10071(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_nullp(t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9408,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9414,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_listp(t3))){
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=t2;
f_9414(t5,(C_word)C_i_pairp(t4));}
else{
t4=t2;
f_9414(t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10058,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 253  caar */
t5=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
t4=t2;
f_9512(t4,C_SCHEME_FALSE);}}}

/* k10056 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10058,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 254  cdaar */
t3=*((C_word*)lf[264]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_9512(t2,C_SCHEME_FALSE);}}

/* k10052 in k10056 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10054,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10050,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 255  cddaar */
t3=*((C_word*)lf[263]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_9512(t2,C_SCHEME_FALSE);}}

/* k10048 in k10052 in k10056 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_9512(t2,(C_word)C_i_nullp(t1));}

/* k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9512(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9512,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 256  cdar */
t3=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9927,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=lf[290],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_9927(t6,((C_word*)t0)[6],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g149 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9927(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9927,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9940,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_listp(t6))){
t7=(C_word)C_i_cdr(((C_word*)t0)[5]);
t8=t5;
f_9940(t8,(C_word)C_i_pairp(t7));}
else{
t7=t5;
f_9940(t7,C_SCHEME_FALSE);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9978,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10024,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 325  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_9978(t7,C_SCHEME_FALSE);}}}

/* k10022 in g149 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10024,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10020,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 326  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_9978(t2,C_SCHEME_FALSE);}}

/* k10018 in k10022 in g149 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_9978(t2,(C_word)C_i_nullp(t1));}

/* k9976 in g149 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9978(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9978,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10001,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 328  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 330  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[3]);}}

/* k9999 in k9976 in g149 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_10001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10001,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9997,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 329  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k9995 in k9999 in k9976 in g149 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9997,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 327  g149 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_9927(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9938 in g149 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9940(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9940,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9947,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 320  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* match.scm: 323  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[5]);}}

/* k9945 in k9938 in g149 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9951,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 321  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9949 in k9945 in k9938 in g149 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 320  g154 */
f_9135(((C_word*)t0)[3],((C_word*)t0)[2],t1,t2);}

/* k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9918,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9524,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
if(C_truep((C_word)C_i_listp(t3))){
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
t5=t2;
f_9524(t5,(C_word)C_i_pairp(t4));}
else{
t4=t2;
f_9524(t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9634,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9914,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 273  cdar */
t4=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}}

/* k9912 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9914,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 274  cadar */
t3=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_9634(t2,C_SCHEME_FALSE);}}

/* k9908 in k9912 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9910,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 275  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_9634(t2,C_SCHEME_FALSE);}}

/* k9904 in k9908 in k9912 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9906,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 276  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_9634(t2,C_SCHEME_FALSE);}}

/* k9900 in k9904 in k9908 in k9912 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9902,2,t0,t1);}
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9894,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 277  cddar */
t4=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
f_9634(t3,C_SCHEME_FALSE);}}

/* k9892 in k9900 in k9904 in k9908 in k9912 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_9634(t2,(C_word)C_i_nullp(t1));}

/* k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9634(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9634,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9640,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_listp(t3))){
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=t2;
f_9640(t5,(C_word)C_i_pairp(t4));}
else{
t4=t2;
f_9640(t4,C_SCHEME_FALSE);}}
else{
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9765,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=lf[289],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_9765(t6,((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g149 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9765(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9765,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9778,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_listp(t6))){
t7=(C_word)C_i_cdr(((C_word*)t0)[5]);
t8=t5;
f_9778(t8,(C_word)C_i_pairp(t7));}
else{
t7=t5;
f_9778(t7,C_SCHEME_FALSE);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9816,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9862,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 310  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_9816(t7,C_SCHEME_FALSE);}}}

/* k9860 in g149 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9862,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9858,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 311  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_9816(t2,C_SCHEME_FALSE);}}

/* k9856 in k9860 in g149 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_9816(t2,(C_word)C_i_nullp(t1));}

/* k9814 in g149 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9816(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9816,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9839,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 313  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 315  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[3]);}}

/* k9837 in k9814 in g149 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9839,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9835,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 314  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k9833 in k9837 in k9814 in g149 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9835,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 312  g149 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_9765(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9776 in g149 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9778(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9778,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9785,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 305  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* match.scm: 308  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[5]);}}

/* k9783 in k9776 in g149 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9785,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9789,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 306  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9787 in k9783 in k9776 in g149 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 305  g154 */
f_9135(((C_word*)t0)[3],((C_word*)t0)[2],t1,t2);}

/* k9638 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9640(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9640,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9647,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 280  caaar */
t3=*((C_word*)lf[258]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9676,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[288],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_9676(t6,((C_word*)t0)[3],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g149 in k9638 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9676(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9676,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 289  g146 */
t5=((C_word*)t0)[3];
f_9168(t5,t1);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9692,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9738,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 291  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_9692(t7,C_SCHEME_FALSE);}}}

/* k9736 in g149 in k9638 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9738,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9734,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 292  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_9692(t2,C_SCHEME_FALSE);}}

/* k9732 in k9736 in g149 in k9638 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_9692(t2,(C_word)C_i_nullp(t1));}

/* k9690 in g149 in k9638 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9692(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9692,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9715,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 294  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 298  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[3]);}}

/* k9713 in k9690 in g149 in k9638 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9715,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9711,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 296  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k9709 in k9713 in k9690 in g149 in k9638 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9711,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 293  g149 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_9676(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9645 in k9638 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9651,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 281  cadaar */
t3=*((C_word*)lf[257]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k9649 in k9645 in k9638 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9651,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9655,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 282  caadar */
t3=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k9653 in k9649 in k9645 in k9638 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9667,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 283  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k9665 in k9653 in k9649 in k9645 in k9638 in k9632 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* match.scm: 280  g145 */
f_9177(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* k9522 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9524(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9524,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9531,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 258  caaar */
t3=*((C_word*)lf[258]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9548,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[287],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_9548(t6,((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g149 in k9522 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9548(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9548,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 265  g146 */
t5=((C_word*)t0)[3];
f_9168(t5,t1);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9564,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9610,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 267  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_9564(t7,C_SCHEME_FALSE);}}}

/* k9608 in g149 in k9522 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9610,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9606,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 268  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_9564(t2,C_SCHEME_FALSE);}}

/* k9604 in k9608 in g149 in k9522 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_9564(t2,(C_word)C_i_nullp(t1));}

/* k9562 in g149 in k9522 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9564(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9564,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9587,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 270  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 272  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[3]);}}

/* k9585 in k9562 in g149 in k9522 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9587,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9583,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 271  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k9581 in k9585 in k9562 in g149 in k9522 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9583,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 269  g149 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_9548(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9529 in k9522 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9531,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9535,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 259  cadaar */
t3=*((C_word*)lf[257]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k9533 in k9529 in k9522 in k9916 in k9510 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9535,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 258  g158 */
t3=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t3))(2,t3,f_9126(C_a_i(&a,12),((C_word*)t0)[2],t1,t2));}

/* k9412 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9414(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9414,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[26],((C_word*)t0)[3]));}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9426,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[286],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_9426(t6,((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g149 in k9412 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9426(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9426,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 244  g146 */
t5=((C_word*)t0)[3];
f_9168(t5,t1);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9442,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9488,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 246  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_9442(t7,C_SCHEME_FALSE);}}}

/* k9486 in g149 in k9412 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9488,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9484,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 247  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_9442(t2,C_SCHEME_FALSE);}}

/* k9482 in k9486 in g149 in k9412 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_9442(t2,(C_word)C_i_nullp(t1));}

/* k9440 in g149 in k9412 in k9406 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9442(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9442,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9465,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 249  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 251  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[3]);}}

/* k9463 in k9440 in g149 in k9412 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9465,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9461,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 250  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k9459 in k9463 in k9440 in g149 in k9412 in k9406 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9461,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 248  g149 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_9426(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9234 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9236(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9236,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9245,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[285],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_9245(t6,((C_word*)t0)[2],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
/* match.scm: 230  g146 */
t2=((C_word*)t0)[3];
f_9168(t2,((C_word*)t0)[2]);}}

/* g161 in k9234 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9245(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9245,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9258,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_listp(t6))){
t7=(C_word)C_i_cddr(((C_word*)t0)[4]);
t8=t5;
f_9258(t8,(C_word)C_i_pairp(t7));}
else{
t7=t5;
f_9258(t7,C_SCHEME_FALSE);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9329,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9375,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 224  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_9329(t7,C_SCHEME_FALSE);}}}

/* k9373 in g161 in k9234 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9375,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9371,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 225  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_9329(t2,C_SCHEME_FALSE);}}

/* k9369 in k9373 in g161 in k9234 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_9329(t2,(C_word)C_i_nullp(t1));}

/* k9327 in g161 in k9234 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9329(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9329,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9352,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 227  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 229  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[3]);}}

/* k9350 in k9327 in g161 in k9234 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9352,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9348,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 228  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k9346 in k9350 in k9327 in g161 in k9234 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9348,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 226  g161 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_9245(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9256 in g161 in k9234 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9258(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9258,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9264,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 219  reverse */
t4=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
/* match.scm: 222  g146 */
t2=((C_word*)t0)[2];
f_9168(t2,((C_word*)t0)[5]);}}

/* k9262 in k9256 in g161 in k9234 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9267,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 220  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9265 in k9262 in k9256 in g161 in k9234 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9267,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9276,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_i_cadddr(*((C_word*)lf[238]+1));
/* match.scm: 211  andmap */
t5=*((C_word*)lf[91]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,((C_word*)t0)[3]);}

/* k9274 in k9265 in k9262 in k9256 in g161 in k9234 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9276,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[26],((C_word*)t0)[6]));}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,2,lf[284],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t7=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,3,lf[223],t5,t6));}}

/* g145 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9177(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9177,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9181,a[2]=t1,a[3]=t6,a[4]=t4,a[5]=t2,a[6]=t5,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* match.scm: 200  gensym */
t8=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t8))(2,t8,t7);}

/* k9179 in g145 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* match.scm: 200  gensym */
t3=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k9182 in k9179 in g145 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9184,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[6]);
t4=(C_word)C_a_i_list(&a,2,t2,t3);
t5=(C_word)C_a_i_list(&a,3,lf[111],((C_word*)t0)[8],t1);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t7=(C_word)C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=(C_word)C_a_i_list(&a,3,lf[244],t5,t7);
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_list(&a,3,lf[26],t4,t8));}

/* g146 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9168(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9168,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[280],((C_word*)t0)[2]);
/* match.scm: 198  ##match#syntax-err */
t3=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,lf[281]);}

/* g154 in a9123 in k692 in k689 in k686 */
static void C_fcall f_9135(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9135,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9139,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9163,a[2]=lf[278],tmp=(C_word)a,a+=3,tmp);
/* map */
t7=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t2);}

/* a9162 in g154 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9163(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9163,3,t0,t1,t2);}
/* match.scm: 193  gensym */
t3=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k9137 in g154 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9142,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* match.scm: 194  list->vector */
t3=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k9140 in k9137 in g154 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9149,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 195  map */
t3=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[277]+1),((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k9147 in k9140 in k9137 in g154 in a9123 in k692 in k689 in k686 */
static void C_ccall f_9149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9149,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[194],((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t4=(C_word)C_a_i_list(&a,3,lf[244],t2,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[26],t1,t4));}

/* g158 in a9123 in k692 in k689 in k686 */
static C_word C_fcall f_9126(C_word *a,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_stack_check;
t4=(C_word)C_a_i_cons(&a,2,t1,t3);
return((C_word)C_a_i_list(&a,3,lf[244],t2,t4));}

/* k695 in k692 in k689 in k686 */
static void C_ccall f_697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_697,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_700,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8936,a[2]=lf[275],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 412  ##sys#register-macro-2 */
t4=*((C_word*)lf[249]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[271],t3);}

/* a8935 in k695 in k692 in k689 in k686 */
static void C_ccall f_8936(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8936,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8938,a[2]=t2,a[3]=lf[273],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8964,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_listp(t6))){
t7=(C_word)C_i_cdr(t2);
t8=t5;
f_8964(t8,(C_word)C_i_pairp(t7));}
else{
t7=t5;
f_8964(t7,C_SCHEME_FALSE);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8993,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9111,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 422  caar */
t8=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_8993(t7,C_SCHEME_FALSE);}}}
else{
/* match.scm: 437  g176 */
t4=t3;
f_8938(t4,t1);}}

/* k9109 in a8935 in k695 in k692 in k689 in k686 */
static void C_ccall f_9111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9111,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 423  cdaar */
t3=*((C_word*)lf[264]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_8993(t2,C_SCHEME_FALSE);}}

/* k9105 in k9109 in a8935 in k695 in k692 in k689 in k686 */
static void C_ccall f_9107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9107,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 424  cddaar */
t3=*((C_word*)lf[263]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_8993(t2,C_SCHEME_FALSE);}}

/* k9101 in k9105 in k9109 in a8935 in k695 in k692 in k689 in k686 */
static void C_ccall f_9103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9103,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 425  cdar */
t3=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_8993(t2,C_SCHEME_FALSE);}}

/* k9097 in k9101 in k9105 in k9109 in a8935 in k695 in k692 in k689 in k686 */
static void C_ccall f_9099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep((C_word)C_i_listp(t1))){
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_listp(t2))){
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
f_8993(t4,(C_word)C_i_pairp(t3));}
else{
t3=((C_word*)t0)[2];
f_8993(t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
f_8993(t2,C_SCHEME_FALSE);}}

/* k8991 in a8935 in k695 in k692 in k689 in k686 */
static void C_fcall f_8993(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8993,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8996,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 432  caaar */
t3=*((C_word*)lf[258]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
/* match.scm: 436  g176 */
t2=((C_word*)t0)[2];
f_8938(t2,((C_word*)t0)[3]);}}

/* k8994 in k8991 in a8935 in k695 in k692 in k689 in k686 */
static void C_ccall f_8996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8999,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 433  cadaar */
t3=*((C_word*)lf[257]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k8997 in k8994 in k8991 in a8935 in k695 in k692 in k689 in k686 */
static void C_ccall f_8999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8999,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9002,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 434  cdar */
t3=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k9000 in k8997 in k8994 in k8991 in a8935 in k695 in k692 in k689 in k686 */
static void C_ccall f_9002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9002,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9011,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_cadddr(*((C_word*)lf[238]+1));
t5=t4;
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,((C_word*)t0)[4]);}

/* k9009 in k9000 in k8997 in k8994 in k8991 in a8935 in k695 in k692 in k689 in k686 */
static void C_ccall f_9011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9011,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t5=(C_word)C_a_i_cons(&a,2,lf[271],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[26],t3,t5));}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(C_word)C_a_i_cons(&a,2,lf[271],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[244],((C_word*)t0)[5],t4));}}

/* k8962 in a8935 in k695 in k692 in k689 in k686 */
static void C_fcall f_8964(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8964,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[274],((C_word*)t0)[4]));}
else{
/* match.scm: 420  g176 */
t2=((C_word*)t0)[2];
f_8938(t2,((C_word*)t0)[3]);}}

/* g176 in a8935 in k695 in k692 in k689 in k686 */
static void C_fcall f_8938(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8938,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[271],((C_word*)t0)[2]);
/* match.scm: 415  ##match#syntax-err */
t3=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,lf[272]);}

/* k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_700,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_703,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7569,a[2]=lf[270],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 438  ##sys#register-macro-2 */
t4=*((C_word*)lf[249]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[250],t3);}

/* a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7569(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[37],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7569,3,t0,t1,t2);}
t3=(C_word)C_i_cadddr(*((C_word*)lf[238]+1));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7574,a[2]=lf[251],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7599,a[2]=t2,a[3]=lf[253],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7608,a[2]=lf[254],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7633,a[2]=lf[255],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t8=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_listp(t8))){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7674,a[2]=t6,a[3]=t4,a[4]=t7,a[5]=t5,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8330,a[2]=t3,a[3]=lf[265],tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_i_car(t2);
/* match.scm: 459  andmap */
t12=*((C_word*)lf[91]+1);
((C_proc4)C_retrieve_proc(t12))(4,t12,t9,t10,t11);}
else{
t9=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t9))){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8380,a[2]=t6,a[3]=t4,a[4]=t5,a[5]=t1,a[6]=t7,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8920,a[2]=t2,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 553  caar */
t12=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t2);}
else{
/* match.scm: 625  g195 */
t10=t5;
f_7599(t10,t1);}}}
else{
/* match.scm: 626  g195 */
t8=t5;
f_7599(t8,t1);}}

/* k8918 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8920,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 554  cdaar */
t3=*((C_word*)lf[264]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8380(t2,C_SCHEME_FALSE);}}

/* k8914 in k8918 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8916,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8912,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 555  cddaar */
t3=*((C_word*)lf[263]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8380(t2,C_SCHEME_FALSE);}}

/* k8910 in k8914 in k8918 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8380(t2,(C_word)C_i_nullp(t1));}

/* k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8380(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8380,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 556  cdar */
t3=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8795,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=lf[269],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_8795(t6,((C_word*)t0)[5],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g189 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8795(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8795,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8808,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_listp(t6))){
t7=(C_word)C_i_cdr(((C_word*)t0)[5]);
t8=t5;
f_8808(t8,(C_word)C_i_pairp(t7));}
else{
t7=t5;
f_8808(t7,C_SCHEME_FALSE);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8846,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8892,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 619  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_8846(t7,C_SCHEME_FALSE);}}}

/* k8890 in g189 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8892,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8888,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 620  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8846(t2,C_SCHEME_FALSE);}}

/* k8886 in k8890 in g189 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8846(t2,(C_word)C_i_nullp(t1));}

/* k8844 in g189 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8846(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8846,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8869,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 622  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 624  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[3]);}}

/* k8867 in k8844 in g189 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8869,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8865,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 623  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k8863 in k8867 in k8844 in g189 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8865,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 621  g189 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_8795(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8806 in g189 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8808(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8808,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8815,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 614  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* match.scm: 617  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[5]);}}

/* k8813 in k8806 in g189 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8815,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8819,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 615  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k8817 in k8813 in k8806 in g189 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 614  g194 */
f_7608(((C_word*)t0)[3],((C_word*)t0)[2],t1,t2);}

/* k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8786,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8392,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
if(C_truep((C_word)C_i_listp(t3))){
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
t5=t2;
f_8392(t5,(C_word)C_i_pairp(t4));}
else{
t4=t2;
f_8392(t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8782,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 571  cdar */
t4=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}}

/* k8780 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8782,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 572  cadar */
t3=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8502(t2,C_SCHEME_FALSE);}}

/* k8776 in k8780 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8778,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8774,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 573  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8502(t2,C_SCHEME_FALSE);}}

/* k8772 in k8776 in k8780 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8774,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 574  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8502(t2,C_SCHEME_FALSE);}}

/* k8768 in k8772 in k8776 in k8780 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8770,2,t0,t1);}
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8762,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 575  cddar */
t4=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
f_8502(t3,C_SCHEME_FALSE);}}

/* k8760 in k8768 in k8772 in k8776 in k8780 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8502(t2,(C_word)C_i_nullp(t1));}

/* k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8502(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8502,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8508,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_listp(t3))){
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=t2;
f_8508(t5,(C_word)C_i_pairp(t4));}
else{
t4=t2;
f_8508(t4,C_SCHEME_FALSE);}}
else{
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8633,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=lf[268],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_8633(t6,((C_word*)t0)[5],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g189 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8633(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8633,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8646,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_listp(t6))){
t7=(C_word)C_i_cdr(((C_word*)t0)[5]);
t8=t5;
f_8646(t8,(C_word)C_i_pairp(t7));}
else{
t7=t5;
f_8646(t7,C_SCHEME_FALSE);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8684,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8730,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 605  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_8684(t7,C_SCHEME_FALSE);}}}

/* k8728 in g189 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8730,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8726,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 606  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8684(t2,C_SCHEME_FALSE);}}

/* k8724 in k8728 in g189 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8684(t2,(C_word)C_i_nullp(t1));}

/* k8682 in g189 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8684(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8684,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8707,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 608  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 610  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[3]);}}

/* k8705 in k8682 in g189 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8707,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8703,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 609  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k8701 in k8705 in k8682 in g189 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8703,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 607  g189 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_8633(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8644 in g189 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8646(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8646,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8653,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 600  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* match.scm: 603  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[5]);}}

/* k8651 in k8644 in g189 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8657,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 601  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k8655 in k8651 in k8644 in g189 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 600  g194 */
f_7608(((C_word*)t0)[3],((C_word*)t0)[2],t1,t2);}

/* k8506 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8508(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8508,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8515,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 577  caaar */
t3=*((C_word*)lf[258]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8544,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[267],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8544(t6,((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g189 in k8506 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8544(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8544,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 586  g195 */
t5=((C_word*)t0)[3];
f_7599(t5,t1);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8560,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8606,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 588  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_8560(t7,C_SCHEME_FALSE);}}}

/* k8604 in g189 in k8506 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8606,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8602,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 589  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8560(t2,C_SCHEME_FALSE);}}

/* k8600 in k8604 in g189 in k8506 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8560(t2,(C_word)C_i_nullp(t1));}

/* k8558 in g189 in k8506 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8560(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8560,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8583,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 591  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 593  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[3]);}}

/* k8581 in k8558 in g189 in k8506 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8583,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8579,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 592  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k8577 in k8581 in k8558 in g189 in k8506 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8579,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 590  g189 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_8544(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8513 in k8506 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8515,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8519,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 578  cadaar */
t3=*((C_word*)lf[257]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k8517 in k8513 in k8506 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8519,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8523,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 579  caadar */
t3=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k8521 in k8517 in k8513 in k8506 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8523,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8535,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 580  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k8533 in k8521 in k8517 in k8513 in k8506 in k8500 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8535,2,t0,t1);}
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* match.scm: 577  g199 */
t4=((C_word*)t0)[6];
((C_proc2)C_retrieve_proc(t4))(2,t4,f_7574(C_a_i(&a,27),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3));}

/* k8390 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8392(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8392,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8399,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 558  caaar */
t3=*((C_word*)lf[258]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8416,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[266],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8416(t6,((C_word*)t0)[3],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g189 in k8390 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8416(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8416,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 563  g195 */
t5=((C_word*)t0)[3];
f_7599(t5,t1);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8432,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8478,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 565  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_8432(t7,C_SCHEME_FALSE);}}}

/* k8476 in g189 in k8390 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8478,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8474,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 566  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8432(t2,C_SCHEME_FALSE);}}

/* k8472 in k8476 in g189 in k8390 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8432(t2,(C_word)C_i_nullp(t1));}

/* k8430 in g189 in k8390 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8432(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8432,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8455,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 568  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 570  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[3]);}}

/* k8453 in k8430 in g189 in k8390 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8455,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8451,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 569  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k8449 in k8453 in k8430 in g189 in k8390 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8451,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 567  g189 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_8416(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8397 in k8390 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8403,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 558  cadaar */
t3=*((C_word*)lf[257]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k8401 in k8397 in k8390 in k8784 in k8378 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 558  g186 */
f_7633(((C_word*)t0)[3],((C_word*)t0)[2],t1,t2);}

/* a8329 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8330(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8330,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8337,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8353,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(t2);
/* match.scm: 462  g200 */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t4=t3;
f_8337(t4,C_SCHEME_FALSE);}}

/* k8351 in a8329 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_8337(t3,(C_word)C_i_pairp(t2));}
else{
t2=((C_word*)t0)[2];
f_8337(t2,C_SCHEME_FALSE);}}

/* k8335 in a8329 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8337(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_nullp(t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7674,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7680,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_listp(t3))){
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=t2;
f_7680(t5,(C_word)C_i_pairp(t4));}
else{
t4=t2;
f_7680(t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8324,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 480  caar */
t5=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[6]);}
else{
t4=t2;
f_7778(t4,C_SCHEME_FALSE);}}}

/* k8322 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8324,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 481  cdaar */
t3=*((C_word*)lf[264]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7778(t2,C_SCHEME_FALSE);}}

/* k8318 in k8322 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8320,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8316,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 482  cddaar */
t3=*((C_word*)lf[263]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7778(t2,C_SCHEME_FALSE);}}

/* k8314 in k8318 in k8322 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_7778(t2,(C_word)C_i_nullp(t1));}

/* k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7778(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7778,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 483  cdar */
t3=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8193,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[7],a[6]=lf[262],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_8193(t6,((C_word*)t0)[5],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g189 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8193(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8193,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8206,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_listp(t6))){
t7=(C_word)C_i_cdr(((C_word*)t0)[5]);
t8=t5;
f_8206(t8,(C_word)C_i_pairp(t7));}
else{
t7=t5;
f_8206(t7,C_SCHEME_FALSE);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8244,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8290,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 546  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_8244(t7,C_SCHEME_FALSE);}}}

/* k8288 in g189 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8290,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8286,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 547  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8244(t2,C_SCHEME_FALSE);}}

/* k8284 in k8288 in g189 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8244(t2,(C_word)C_i_nullp(t1));}

/* k8242 in g189 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8244(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8244,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8267,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 549  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 551  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[3]);}}

/* k8265 in k8242 in g189 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8267,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8263,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 550  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k8261 in k8265 in k8242 in g189 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8263,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 548  g189 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_8193(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8204 in g189 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8206(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8206,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8213,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 541  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* match.scm: 544  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[5]);}}

/* k8211 in k8204 in g189 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8217,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 542  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k8215 in k8211 in k8204 in g189 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 541  g194 */
f_7608(((C_word*)t0)[3],((C_word*)t0)[2],t1,t2);}

/* k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8184,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7790,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
if(C_truep((C_word)C_i_listp(t3))){
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
t5=t2;
f_7790(t5,(C_word)C_i_pairp(t4));}
else{
t4=t2;
f_7790(t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7900,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8180,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 498  cdar */
t4=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}}

/* k8178 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8180,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 499  cadar */
t3=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7900(t2,C_SCHEME_FALSE);}}

/* k8174 in k8178 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8176,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 500  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7900(t2,C_SCHEME_FALSE);}}

/* k8170 in k8174 in k8178 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8172,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 501  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7900(t2,C_SCHEME_FALSE);}}

/* k8166 in k8170 in k8174 in k8178 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8168,2,t0,t1);}
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8160,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 502  cddar */
t4=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
f_7900(t3,C_SCHEME_FALSE);}}

/* k8158 in k8166 in k8170 in k8174 in k8178 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_7900(t2,(C_word)C_i_nullp(t1));}

/* k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7900(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7900,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7906,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_listp(t3))){
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=t2;
f_7906(t5,(C_word)C_i_pairp(t4));}
else{
t4=t2;
f_7906(t4,C_SCHEME_FALSE);}}
else{
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8031,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=lf[261],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_8031(t6,((C_word*)t0)[5],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g189 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8031(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8031,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8044,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_listp(t6))){
t7=(C_word)C_i_cdr(((C_word*)t0)[5]);
t8=t5;
f_8044(t8,(C_word)C_i_pairp(t7));}
else{
t7=t5;
f_8044(t7,C_SCHEME_FALSE);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8082,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8128,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 532  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_8082(t7,C_SCHEME_FALSE);}}}

/* k8126 in g189 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8128,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8124,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 533  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8082(t2,C_SCHEME_FALSE);}}

/* k8122 in k8126 in g189 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8082(t2,(C_word)C_i_nullp(t1));}

/* k8080 in g189 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8082(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8082,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8105,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 535  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 537  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[3]);}}

/* k8103 in k8080 in g189 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8105,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8101,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 536  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k8099 in k8103 in k8080 in g189 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8101,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 534  g189 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_8031(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8042 in g189 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_8044(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8044,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8051,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 527  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* match.scm: 530  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[5]);}}

/* k8049 in k8042 in g189 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8051,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8055,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 528  reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k8053 in k8049 in k8042 in g189 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 527  g194 */
f_7608(((C_word*)t0)[3],((C_word*)t0)[2],t1,t2);}

/* k7904 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7906(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7906,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7913,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 504  caaar */
t3=*((C_word*)lf[258]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7942,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[260],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7942(t6,((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g189 in k7904 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7942(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7942,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 513  g195 */
t5=((C_word*)t0)[3];
f_7599(t5,t1);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7958,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8004,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 515  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_7958(t7,C_SCHEME_FALSE);}}}

/* k8002 in g189 in k7904 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8004,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8000,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 516  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7958(t2,C_SCHEME_FALSE);}}

/* k7998 in k8002 in g189 in k7904 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_8000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_7958(t2,(C_word)C_i_nullp(t1));}

/* k7956 in g189 in k7904 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7958(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7958,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7981,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 518  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 520  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[3]);}}

/* k7979 in k7956 in g189 in k7904 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7981,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7977,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 519  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k7975 in k7979 in k7956 in g189 in k7904 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7977,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 517  g189 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_7942(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k7911 in k7904 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7917,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 505  cadaar */
t3=*((C_word*)lf[257]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k7915 in k7911 in k7904 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7917,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7921,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 506  caadar */
t3=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}

/* k7919 in k7915 in k7911 in k7904 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7921,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7933,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 507  cdadar */
t3=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}

/* k7931 in k7919 in k7915 in k7911 in k7904 in k7898 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7933,2,t0,t1);}
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* match.scm: 504  g199 */
t4=((C_word*)t0)[6];
((C_proc2)C_retrieve_proc(t4))(2,t4,f_7574(C_a_i(&a,27),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3));}

/* k7788 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7790(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7790,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7797,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 485  caaar */
t3=*((C_word*)lf[258]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7814,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[259],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7814(t6,((C_word*)t0)[3],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g189 in k7788 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7814(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7814,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 490  g195 */
t5=((C_word*)t0)[3];
f_7599(t5,t1);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7830,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7876,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 492  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_7830(t7,C_SCHEME_FALSE);}}}

/* k7874 in g189 in k7788 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7876,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7872,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 493  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7830(t2,C_SCHEME_FALSE);}}

/* k7870 in k7874 in g189 in k7788 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_7830(t2,(C_word)C_i_nullp(t1));}

/* k7828 in g189 in k7788 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7830(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7830,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7853,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 495  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 497  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[3]);}}

/* k7851 in k7828 in g189 in k7788 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7853,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7849,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 496  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k7847 in k7851 in k7828 in g189 in k7788 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7849,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 494  g189 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_7814(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k7795 in k7788 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7801,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 485  cadaar */
t3=*((C_word*)lf[257]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k7799 in k7795 in k7788 in k8182 in k7776 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 485  g186 */
f_7633(((C_word*)t0)[3],((C_word*)t0)[2],t1,t2);}

/* k7678 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7680(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7680,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[223],((C_word*)t0)[3]));}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7692,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[256],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_7692(t6,((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* g189 in k7678 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7692(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7692,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 471  g195 */
t5=((C_word*)t0)[3];
f_7599(t5,t1);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7708,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7754,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 473  cdar */
t8=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=t5;
f_7708(t7,C_SCHEME_FALSE);}}}

/* k7752 in g189 in k7678 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7754,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7750,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 474  cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_7708(t2,C_SCHEME_FALSE);}}

/* k7748 in k7752 in g189 in k7678 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_7708(t2,(C_word)C_i_nullp(t1));}

/* k7706 in g189 in k7678 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7708(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7708,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7731,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 476  cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[7]);}
else{
/* match.scm: 478  g195 */
t2=((C_word*)t0)[2];
f_7599(t2,((C_word*)t0)[3]);}}

/* k7729 in k7706 in g189 in k7678 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7731,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7727,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 477  caar */
t4=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k7725 in k7729 in k7706 in g189 in k7678 in k7672 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7727,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* match.scm: 475  g189 */
t3=((C_word*)((C_word*)t0)[5])[1];
f_7692(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* g186 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7633(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7633,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,2,t2,t3);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_cons(&a,2,t6,t4);
t8=(C_word)C_a_i_cons(&a,2,lf[250],t7);
t9=(C_word)C_i_cadr(*((C_word*)lf[238]+1));
t10=t9;
((C_proc6)C_retrieve_proc(t10))(6,t10,t1,t2,t3,t4,t8);}

/* g194 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7608(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7608,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7628,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* match.scm: 449  list->vector */
t6=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k7626 in g194 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7628,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[194],((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,lf[250],t5));}

/* g195 in a7568 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7599(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7599,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[250],((C_word*)t0)[2]);
/* match.scm: 444  ##match#syntax-err */
t3=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,lf[252]);}

/* g199 in a7568 in k698 in k695 in k692 in k689 in k686 */
static C_word C_fcall f_7574(C_word *a,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_stack_check;
t6=(C_word)C_a_i_cons(&a,2,t1,t3);
t7=(C_word)C_a_i_list(&a,3,lf[111],t2,t4);
t8=(C_word)C_a_i_list(&a,2,t6,t7);
t9=(C_word)C_a_i_list(&a,1,t8);
t10=(C_word)C_a_i_cons(&a,2,t9,t5);
return((C_word)C_a_i_cons(&a,2,lf[250],t10));}

/* k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7466,a[2]=lf[248],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 627  ##sys#register-macro-2 */
t4=*((C_word*)lf[249]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[245],t3);}

/* a7465 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7466(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7466,3,t0,t1,t2);}
t3=(C_word)C_i_cadddr(*((C_word*)lf[238]+1));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7471,a[2]=t2,a[3]=lf[247],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7491,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_car(t2);
/* match.scm: 635  g210 */
t7=t3;
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}
else{
/* match.scm: 648  g209 */
t5=t4;
f_7471(t5,t1);}}

/* k7489 in a7465 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7491(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7491,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cddr(((C_word*)t0)[4]);
t5=t2;
f_7497(t5,(C_word)C_i_nullp(t4));}
else{
t4=t2;
f_7497(t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cddr(((C_word*)t0)[4]);
t5=t2;
f_7527(t5,(C_word)C_i_nullp(t4));}
else{
t4=t2;
f_7527(t4,C_SCHEME_FALSE);}}}

/* k7525 in k7489 in a7465 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7527(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7527,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
t4=(C_word)C_a_i_cons(&a,2,lf[245],((C_word*)t0)[4]);
t5=(C_word)C_i_caddr(*((C_word*)lf[238]+1));
t6=t5;
((C_proc5)C_retrieve_proc(t6))(5,t6,((C_word*)t0)[3],t2,t3,t4);}
else{
/* match.scm: 647  g209 */
t2=((C_word*)t0)[2];
f_7471(t2,((C_word*)t0)[3]);}}

/* k7495 in k7489 in a7465 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7497(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7497,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,lf[232],((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[229],t2));}
else{
/* match.scm: 638  g209 */
t2=((C_word*)t0)[2];
f_7471(t2,((C_word*)t0)[3]);}}

/* g209 in a7465 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7471(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7471,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[245],((C_word*)t0)[2]);
/* match.scm: 631  ##match#syntax-err */
t3=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,lf[246]);}

/* k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_706(C_word c,C_word t0,C_word t1){
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
C_word ab[155],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_706,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_708,a[2]=lf[5],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[6]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_714,a[2]=lf[8],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[9]+1,lf[10]);
t5=C_mutate((C_word*)lf[11]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_719,a[2]=lf[12],tmp=(C_word)a,a+=3,tmp));
t6=(C_word)C_a_i_cons(&a,2,lf[13],lf[14]);
t7=C_mutate((C_word*)lf[15]+1,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7342,a[2]=lf[21],tmp=(C_word)a,a+=3,tmp);
t9=lf[22];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7077,a[2]=t9,a[3]=lf[32],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6772,a[2]=t9,a[3]=t8,a[4]=lf[43],tmp=(C_word)a,a+=5,tmp);
t12=lf[44];
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6738,a[2]=t12,a[3]=lf[45],tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6705,a[2]=t12,a[3]=lf[46],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6695,a[2]=lf[47],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6609,a[2]=lf[55],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6299,a[2]=t15,a[3]=t16,a[4]=lf[64],tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6168,a[2]=t14,a[3]=t13,a[4]=lf[68],tmp=(C_word)a,a+=5,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5274,a[2]=t18,a[3]=t20,a[4]=lf[85],tmp=(C_word)a,a+=5,tmp));
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5092,a[2]=t17,a[3]=t20,a[4]=lf[87],tmp=(C_word)a,a+=5,tmp);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1298,a[2]=lf[94],tmp=(C_word)a,a+=3,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3819,a[2]=t14,a[3]=t13,a[4]=t23,a[5]=t20,a[6]=t10,a[7]=t11,a[8]=t8,a[9]=t22,a[10]=t25,a[11]=lf[145],tmp=(C_word)a,a+=12,tmp));
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3435,a[2]=lf[153],tmp=(C_word)a,a+=3,tmp);
t28=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2539,a[2]=t23,a[3]=lf[186],tmp=(C_word)a,a+=4,tmp);
t29=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1272,a[2]=t23,a[3]=lf[188],tmp=(C_word)a,a+=4,tmp);
t30=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1474,a[2]=t23,a[3]=t29,a[4]=lf[202],tmp=(C_word)a,a+=5,tmp);
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1444,a[2]=lf[208],tmp=(C_word)a,a+=3,tmp);
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1366,a[2]=lf[216],tmp=(C_word)a,a+=3,tmp);
t33=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_728,a[2]=t32,a[3]=t30,a[4]=t28,a[5]=t25,a[6]=t31,a[7]=t27,a[8]=lf[222],tmp=(C_word)a,a+=9,tmp);
t34=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_940,a[2]=t32,a[3]=t30,a[4]=t28,a[5]=t25,a[6]=t31,a[7]=lf[228],tmp=(C_word)a,a+=8,tmp);
t35=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1096,a[2]=t32,a[3]=t30,a[4]=t28,a[5]=t25,a[6]=t31,a[7]=t27,a[8]=lf[235],tmp=(C_word)a,a+=9,tmp);
t36=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7377,a[2]=lf[236],tmp=(C_word)a,a+=3,tmp);
t37=C_SCHEME_UNDEFINED;
t38=(*a=C_VECTOR_TYPE|1,a[1]=t37,tmp=(C_word)a,a+=2,tmp);
t39=C_set_block_item(t38,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7400,a[2]=t38,a[3]=lf[237],tmp=(C_word)a,a+=4,tmp));
t40=(C_word)C_a_i_list(&a,4,t33,t34,t35,t29);
t41=C_mutate((C_word*)lf[238]+1,t40);
t42=C_mutate((C_word*)lf[239]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7431,a[2]=lf[240],tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[241]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7447,a[2]=lf[242],tmp=(C_word)a,a+=3,tmp));
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7464,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 2211 register-feature! */
t45=*((C_word*)lf[243]+1);
((C_proc3)C_retrieve_proc(t45))(3,t45,t44,lf[244]);}

/* k7462 in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* match-error-procedure in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7447(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_7447r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_7447r(t0,t1,t2);}}

static void C_ccall f_7447r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
if(C_truep((C_word)C_notvemptyp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
/* match.scm: 2208 ##match#set-error */
t4=*((C_word*)lf[6]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[7]+1));}}

/* match-error-control in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7431(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_7431r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_7431r(t0,t1,t2);}}

static void C_ccall f_7431r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
if(C_truep((C_word)C_notvemptyp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
/* match.scm: 2203 ##match#set-error-control */
t4=*((C_word*)lf[11]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,*((C_word*)lf[9]+1));}}

/* rdc in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7400(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7400,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7418,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
/* match.scm: 2198 rdc */
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}

/* k7416 in rdc in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7418,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* rac in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static C_word C_fcall f_7377(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
loop:
C_stack_check;
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
return((C_word)C_i_car(t1));}
else{
t3=(C_word)C_i_cdr(t1);
t5=t3;
t1=t5;
goto loop;}}

/* gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1096,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1100,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t4,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t3,a[11]=t1,tmp=(C_word)a,a+=12,tmp);
/* match.scm: 763  gensym */
t6=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1103,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t1,a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* match.scm: 764  error-maker */
f_1366(t2,((C_word*)t0)[7]);}

/* k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1106,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1270,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 765  validate-pattern */
t4=((C_word*)t0)[3];
f_1474(t4,t3,((C_word*)t0)[2]);}

/* k1268 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 765  bound */
t2=((C_word*)t0)[3];
f_2539(t2,((C_word*)t0)[2],t1);}

/* k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1106,2,t0,t1);}
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cadr(t1);
t4=(C_word)C_i_caddr(t1);
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t3,a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* match.scm: 769  gensym */
t6=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1118,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,5,((C_word*)t0)[12],t1,((C_word*)t0)[11],C_SCHEME_FALSE,C_SCHEME_FALSE);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t1,a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* match.scm: 771  gensym */
t5=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1124,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1127,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t1,a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[8]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1262,a[2]=((C_word*)t0)[12],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 777  gensym */
t5=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k1260 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 772  gen */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3819(t2,((C_word*)t0)[6],((C_word*)t0)[5],C_SCHEME_END_OF_LIST,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1127,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1250,a[2]=lf[234],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[5]);}

/* a1249 in k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1250,3,t0,t1,t2);}
/* match.scm: 778  gensym */
t3=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k1128 in k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1130,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1133,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=t1,a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],tmp=(C_word)a,a+=13,tmp);
/* match.scm: 779  unreachable */
f_1444(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1131 in k1128 in k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1140,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1244,a[2]=lf[233],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a1243 in k1131 in k1128 in k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1244(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1244,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[232],t2,C_SCHEME_FALSE));}

/* k1142 in k1131 in k1128 in k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1144(C_word c,C_word t0,C_word t1){
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
C_word ab[72],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1144,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1152,a[2]=t1,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_list(&a,1,lf[217]);
t4=(C_word)C_a_i_list(&a,1,lf[218]);
t5=(C_word)C_a_i_list(&a,2,lf[219],lf[218]);
t6=(C_word)C_a_i_list(&a,3,lf[122],t5,lf[217]);
t7=(C_word)C_a_i_list(&a,3,lf[25],t4,t6);
t8=(C_word)C_a_i_list(&a,3,lf[25],t3,t7);
t9=(C_word)C_a_i_list(&a,2,((C_word*)t0)[11],t8);
t10=(C_word)C_a_i_list(&a,2,((C_word*)t0)[10],((C_word*)t0)[9]);
t11=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1200,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t9,a[8]=t10,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1204,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1214,a[2]=lf[231],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 788  map */
t14=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t12,t13,((C_word*)t0)[2],((C_word*)t0)[8]);}

/* a1213 in k1142 in k1131 in k1128 in k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1214(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1214,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[140],t2,t3));}

/* k1202 in k1142 in k1131 in k1128 in k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1204,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,lf[230]);
t3=(C_word)C_a_i_list(&a,1,t2);
/* match.scm: 669  ##sys#append */
t4=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k1198 in k1142 in k1131 in k1128 in k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1200,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[25],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[9],t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1184,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[3]);
/* match.scm: 669  ##sys#append */
t7=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}

/* k1182 in k1198 in k1142 in k1131 in k1128 in k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1184,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_list(&a,3,lf[26],t4,((C_word*)t0)[4]);
/* match.scm: 781  inline-let */
f_3435(((C_word*)t0)[2],t5);}

/* k1150 in k1142 in k1131 in k1128 in k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1152,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* match.scm: 669  ##sys#append */
t3=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k1138 in k1131 in k1128 in k1125 in k1122 in k1116 in k1104 in k1101 in k1098 in gendefine in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1140,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[229],t1));}

/* genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_940(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_940,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_944,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t5,a[8]=((C_word*)t0)[6],a[9]=t4,a[10]=t3,a[11]=t1,tmp=(C_word)a,a+=12,tmp);
/* match.scm: 731  gensym */
t7=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}

/* k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_947,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
/* match.scm: 732  error-maker */
f_1366(t2,((C_word*)t0)[7]);}

/* k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_950,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1094,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 733  validate-pattern */
t4=((C_word*)t0)[3];
f_1474(t4,t3,((C_word*)t0)[2]);}

/* k1092 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 733  bound */
t2=((C_word*)t0)[3];
f_2539(t2,((C_word*)t0)[2],t1);}

/* k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_950,2,t0,t1);}
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cadr(t1);
t4=(C_word)C_i_caddr(t1);
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t3,a[12]=t2,tmp=(C_word)a,a+=13,tmp);
/* match.scm: 737  gensym */
t6=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_962,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,5,((C_word*)t0)[12],t1,((C_word*)t0)[11],C_SCHEME_FALSE,C_SCHEME_FALSE);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t1,a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* match.scm: 739  gensym */
t5=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_971,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t1,a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[9]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1086,a[2]=((C_word*)t0)[13],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 745  gensym */
t5=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k1084 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 740  gen */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3819(t2,((C_word*)t0)[6],((C_word*)t0)[5],C_SCHEME_END_OF_LIST,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k969 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1074,a[2]=lf[227],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[5]);}

/* a1073 in k969 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1074(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1074,3,t0,t1,t2);}
/* match.scm: 746  gensym */
t3=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k972 in k969 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_974,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_977,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=t1,a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],tmp=(C_word)a,a+=13,tmp);
/* match.scm: 747  unreachable */
f_1444(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k975 in k972 in k969 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_977(C_word c,C_word t0,C_word t1){
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
C_word ab[64],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_977,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,lf[217]);
t3=(C_word)C_a_i_list(&a,1,lf[218]);
t4=(C_word)C_a_i_list(&a,2,lf[219],lf[218]);
t5=(C_word)C_a_i_list(&a,3,lf[122],t4,lf[217]);
t6=(C_word)C_a_i_list(&a,3,lf[25],t3,t5);
t7=(C_word)C_a_i_list(&a,3,lf[25],t2,t6);
t8=(C_word)C_a_i_list(&a,2,((C_word*)t0)[12],t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_992,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t9,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1044,a[2]=lf[226],tmp=(C_word)a,a+=3,tmp);
/* map */
t12=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,t11,((C_word*)t0)[2]);}

/* a1043 in k975 in k972 in k969 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1044(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1044,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,t2,C_SCHEME_FALSE));}

/* k994 in k975 in k972 in k969 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_996,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[10],((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1032,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1036,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1038,a[2]=lf[225],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 754  map */
t6=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,((C_word*)t0)[2],((C_word*)t0)[8]);}

/* a1037 in k994 in k975 in k972 in k969 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1038(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1038,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[140],t2,t3));}

/* k1034 in k994 in k975 in k972 in k969 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 669  ##sys#append */
t2=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1030 in k994 in k975 in k972 in k969 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1032,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[25],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1016,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[3]);
/* match.scm: 669  ##sys#append */
t7=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}

/* k1014 in k1030 in k994 in k975 in k972 in k969 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1016,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* match.scm: 669  ##sys#append */
t4=*((C_word*)lf[224]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* k990 in k975 in k972 in k969 in k966 in k960 in k948 in k945 in k942 in genletrec in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_992,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[223],t2,((C_word*)t0)[2]));}

/* genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_728(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_728,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_732,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=t4,a[9]=((C_word*)t0)[6],a[10]=t1,a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* match.scm: 671  gensym */
t6=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_732,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_735,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
/* match.scm: 672  error-maker */
f_1366(t2,((C_word*)t0)[8]);}

/* k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_735,2,t0,t1);}
t2=(C_word)C_i_car(t1);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_741,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t4,a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_796,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=lf[221],tmp=(C_word)a,a+=6,tmp);
/* map */
t7=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,((C_word*)t0)[2]);}

/* a795 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_796(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_796,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_800,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_934,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(t2);
/* match.scm: 676  validate-pattern */
t6=((C_word*)t0)[2];
f_1474(t6,t4,t5);}

/* k932 in a795 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 675  bound */
t2=((C_word*)t0)[3];
f_2539(t2,((C_word*)t0)[2],t1);}

/* k798 in a795 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_800,2,t0,t1);}
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cadr(t1);
t4=(C_word)C_i_caddr(t1);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_812,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* match.scm: 681  gensym */
t6=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k810 in k798 in a795 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cadr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_922,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 686  caadr */
t6=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[6]);}
else{
t5=t2;
f_815(2,t5,C_SCHEME_FALSE);}}
else{
t4=t2;
f_815(2,t4,C_SCHEME_FALSE);}}

/* k920 in k810 in k798 in a795 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_922,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[220]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 690  cadadr */
t4=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_815(2,t3,C_SCHEME_FALSE);}}

/* k916 in k920 in k810 in k798 in a795 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_918,2,t0,t1);}
if(C_truep((C_word)C_i_symbolp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 692  cdadr */
t3=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_815(2,t2,C_SCHEME_FALSE);}}

/* k912 in k916 in k920 in k810 in k798 in a795 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_914,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 694  cddadr */
t3=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
f_815(2,t2,C_SCHEME_FALSE);}}

/* k908 in k912 in k916 in k920 in k810 in k798 in a795 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_i_nullp(t1))){
t2=(C_word)C_i_cddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t2))){
/* match.scm: 697  cadadr */
t3=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
f_815(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
f_815(2,t2,C_SCHEME_FALSE);}}

/* k813 in k810 in k798 in a795 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_815,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[8]):((C_word*)t0)[8]);
t3=(C_truep(t1)?(C_word)C_i_cddr(((C_word*)t0)[7]):(C_word)C_i_cdr(((C_word*)t0)[7]));
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
t5=(C_word)C_a_i_cons(&a,2,lf[25],t4);
t6=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t5);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_843,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* match.scm: 708  append */
t8=*((C_word*)lf[86]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}

/* k841 in k813 in k810 in k798 in a795 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_843,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=C_mutate(((C_word *)((C_word*)t0)[7])+1,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_832,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* match.scm: 714  gensym */
t5=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}
else{
t5=t4;
f_832(2,t5,C_SCHEME_FALSE);}}

/* k830 in k841 in k813 in k810 in k798 in a795 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_832,2,t0,t1);}
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,5,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE));}

/* k739 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_744,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_794,a[2]=((C_word*)t0)[10],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 722  gensym */
t5=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k792 in k739 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 717  gen */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3819(t2,((C_word*)t0)[6],((C_word*)t0)[5],C_SCHEME_END_OF_LIST,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k742 in k739 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_747,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 723  unreachable */
f_1444(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k745 in k742 in k739 in k733 in k730 in genmatch in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_747(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_747,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,lf[217]);
t3=(C_word)C_a_i_list(&a,1,lf[218]);
t4=(C_word)C_a_i_list(&a,2,lf[219],lf[218]);
t5=(C_word)C_a_i_list(&a,3,lf[122],t4,lf[217]);
t6=(C_word)C_a_i_list(&a,3,lf[25],t3,t5);
t7=(C_word)C_a_i_list(&a,3,lf[25],t2,t6);
t8=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t7);
t9=(C_word)C_a_i_cons(&a,2,t8,((C_word*)((C_word*)t0)[5])[1]);
t10=(C_word)C_a_i_list(&a,3,lf[26],t9,((C_word*)t0)[4]);
/* match.scm: 724  inline-let */
f_3435(((C_word*)t0)[2],t10);}

/* error-maker in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1366(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1366,NULL,2,t1,t2);}
t3=(C_word)C_eqp(*((C_word*)lf[9]+1),lf[83]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1378,a[2]=lf[210],tmp=(C_word)a,a+=3,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t4));}
else{
t4=*((C_word*)lf[9]+1);
if(C_truep((C_truep((C_word)C_eqp(t4,lf[10]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,lf[84]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1390,a[2]=lf[211],tmp=(C_word)a,a+=3,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5));}
else{
t5=(C_word)C_eqp(*((C_word*)lf[9]+1),lf[212]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1403,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 839  gensym */
t7=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}
else{
/* match.scm: 849  ##match#syntax-err */
t6=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t1,lf[214],lf[215]);}}}}

/* k1401 in error-maker in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1403,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1406,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 840  gensym */
t3=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1404 in k1401 in error-maker in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1406,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_list(&a,2,lf[54],((C_word*)t0)[4]);
t4=(C_word)C_a_i_list(&a,3,lf[7],t1,t3);
t5=(C_word)C_a_i_list(&a,3,lf[25],t2,t4);
t6=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t5);
t7=(C_word)C_a_i_list(&a,1,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1415,a[2]=((C_word*)t0)[3],a[3]=lf[213],tmp=(C_word)a,a+=4,tmp);
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_cons(&a,2,t7,t8));}

/* a1414 in k1404 in k1401 in error-maker in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1415(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1415,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t2));}

/* a1389 in error-maker in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1390(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1390,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[7],t2));}

/* a1377 in error-maker in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1378(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1378,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[209]);}

/* unreachable in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1444(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1444,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1450,a[2]=t3,a[3]=lf[206],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[207]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a1449 in unreachable in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1450,3,t0,t1,t2);}
t3=(C_word)C_i_cddddr(t2);
if(C_truep((C_word)C_i_car(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(C_word)C_i_car(t2);
/* match.scm: 856  ##sys#warn */
t5=*((C_word*)lf[203]+1);
((C_proc6)C_retrieve_proc(t5))(6,t5,t1,lf[204],t4,lf[205],((C_word*)t0)[2]);}}

/* validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1474(C_word t0,C_word t1,C_word t2){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1474,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1477,a[2]=lf[189],tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1507,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t7,a[6]=t3,a[7]=t5,a[8]=lf[196],tmp=(C_word)a,a+=9,tmp));
t11=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2237,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t9,a[5]=t5,a[6]=t3,a[7]=t7,a[8]=lf[199],tmp=(C_word)a,a+=9,tmp));
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2499,a[2]=t2,a[3]=t5,a[4]=t9,a[5]=lf[201],tmp=(C_word)a,a+=6,tmp));
/* match.scm: 1180 ordinary */
t13=((C_word*)t5)[1];
f_1507(3,t13,t1,t2);}

/* ordlist in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2499(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2499,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2519,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* match.scm: 1173 ordinary */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1507(3,t5,t3,t4);}
else{
/* match.scm: 1177 ##match#syntax-err */
t3=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],lf[200]);}}}

/* k2517 in ordlist in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2519,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2523,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* match.scm: 1175 ordlist */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2499(t4,t2,t3);}

/* k2521 in k2517 in ordlist in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2523,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[35],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2237,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2239,a[2]=((C_word*)t0)[7],a[3]=lf[197],tmp=(C_word)a,a+=4,tmp);
t4=f_1477(t2);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,2,lf[54],t5));}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_eqp(t5,lf[192]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2284,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t8))){
t9=(C_word)C_i_cddr(t2);
t10=t7;
f_2284(t10,(C_word)C_i_nullp(t9));}
else{
t9=t7;
f_2284(t9,C_SCHEME_FALSE);}}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2321,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t8=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_pairp(t8))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2438,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1109 caar */
t10=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
t9=t7;
f_2321(t9,C_SCHEME_FALSE);}}}
else{
if(C_truep((C_word)C_i_vectorp(t2))){
t5=t2;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* match.scm: 1151 vector->list */
t7=*((C_word*)lf[176]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
/* match.scm: 1167 ##match#syntax-err */
t5=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,((C_word*)t0)[2],lf[198]);}}}}}

/* k2453 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2458,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 1153 reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2456 in k2453 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2465,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2468,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_car(t1);
/* match.scm: 1157 dot-dot-k? */
f_1298(t3,t4);}

/* k2466 in k2456 in k2453 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2468,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2483,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* map */
t5=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)((C_word*)t0)[4])[1],t4);}
else{
/* map */
t2=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}}

/* k2481 in k2466 in k2456 in k2453 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2483,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
/* match.scm: 1159 reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k2463 in k2456 in k2453 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[194]+1),t1);}

/* k2436 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2438,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[193]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1112 cdar */
t4=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
f_2321(t3,C_SCHEME_FALSE);}}

/* k2432 in k2436 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2434,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1114 cddar */
t3=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2321(t2,C_SCHEME_FALSE);}}

/* k2428 in k2432 in k2436 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2321(t2,(C_word)C_i_nullp(t1));}

/* k2319 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2321(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2321,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2330,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1121 cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2336,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 1130 cadar */
t4=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[8]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2393,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cadr(((C_word*)t0)[8]);
/* match.scm: 1135 dot-dot-k? */
f_1298(t4,t5);}
else{
t4=t2;
f_2360(t4,C_SCHEME_FALSE);}}}

/* k2391 in k2319 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_2360(t3,(C_word)C_i_nullp(t2));}
else{
t2=((C_word*)t0)[2];
f_2360(t2,C_SCHEME_FALSE);}}

/* k2358 in k2319 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2360(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2360,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cadr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2373,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1141 quasi */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2237(3,t5,t4,t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 1146 g109 */
t4=((C_word*)t0)[2];
f_2239(t4,((C_word*)t0)[4],t2,t3);}}

/* k2371 in k2358 in k2319 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2373,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[2]));}

/* k2334 in k2319 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2336,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2346,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1126 ordlist */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2499(t4,t3,t1);}

/* k2344 in k2334 in k2319 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2346,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2350,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1128 quasi */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2237(3,t3,t2,((C_word*)t0)[2]);}

/* k2348 in k2344 in k2334 in k2319 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1125 append */
t2=*((C_word*)lf[86]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2328 in k2319 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1119 ordinary */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1507(3,t2,((C_word*)t0)[2],t1);}

/* k2282 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2284(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* match.scm: 1101 ordinary */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1507(3,t3,((C_word*)t0)[3],t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 1104 g109 */
t4=((C_word*)t0)[2];
f_2239(t4,((C_word*)t0)[3],t2,t3);}}

/* g109 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2239(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2239,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2247,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1082 quasi */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2237(3,t5,t4,t2);}

/* k2245 in g109 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2251,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1084 quasi */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2237(3,t3,t2,((C_word*)t0)[2]);}

/* k2249 in k2245 in g109 in quasi in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2251,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1507(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1507,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1509,a[2]=((C_word*)t0)[7],a[3]=lf[190],tmp=(C_word)a,a+=4,tmp);
t4=f_1477(t2);
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(C_word)C_eqp(t2,lf[98]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[98]);}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1539,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* match.scm: 878  pattern-var? */
t7=((C_word*)t0)[4];
f_1272(3,t7,t6,t2);}}}

/* k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1539(C_word c,C_word t0,C_word t1){
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
C_word ab[80],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1539,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
t3=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[9]))){
t2=(C_word)C_i_car(((C_word*)t0)[9]);
t3=(C_word)C_eqp(t2,lf[191]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1557,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_cdr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_i_cddr(((C_word*)t0)[9]);
t7=t4;
f_1557(t7,(C_word)C_i_nullp(t6));}
else{
t6=t4;
f_1557(t6,C_SCHEME_FALSE);}}
else{
t4=(C_word)C_i_car(((C_word*)t0)[9]);
t5=(C_word)C_eqp(t4,lf[54]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1600,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_cdr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_pairp(t7))){
t8=(C_word)C_i_cddr(((C_word*)t0)[9]);
t9=t6;
f_1600(t9,(C_word)C_i_nullp(t8));}
else{
t8=t6;
f_1600(t8,C_SCHEME_FALSE);}}
else{
t6=(C_word)C_i_car(((C_word*)t0)[9]);
t7=(C_word)C_eqp(t6,lf[106]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_i_cdr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_pairp(t9))){
t10=(C_word)C_i_cddr(((C_word*)t0)[9]);
t11=t8;
f_1637(t11,(C_word)C_i_listp(t10));}
else{
t10=t8;
f_1637(t10,C_SCHEME_FALSE);}}
else{
t8=(C_word)C_i_car(((C_word*)t0)[9]);
t9=(C_word)C_eqp(t8,lf[143]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1691,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t11=(C_word)C_i_cdr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_pairp(t11))){
t12=(C_word)C_i_cddr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_pairp(t12))){
t13=(C_word)C_i_cdddr(((C_word*)t0)[9]);
t14=t10;
f_1691(t14,(C_word)C_i_nullp(t13));}
else{
t13=t10;
f_1691(t13,C_SCHEME_FALSE);}}
else{
t12=t10;
f_1691(t12,C_SCHEME_FALSE);}}
else{
t10=(C_word)C_i_car(((C_word*)t0)[9]);
t11=(C_word)C_eqp(t10,lf[69]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1751,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t13=(C_word)C_i_cdr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_listp(t13))){
t14=(C_word)C_i_cdr(((C_word*)t0)[9]);
t15=t12;
f_1751(t15,(C_word)C_i_pairp(t14));}
else{
t14=t12;
f_1751(t14,C_SCHEME_FALSE);}}
else{
t12=(C_word)C_i_car(((C_word*)t0)[9]);
t13=(C_word)C_eqp(t12,lf[142]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1798,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t15=(C_word)C_i_cdr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_listp(t15))){
t16=(C_word)C_i_cdr(((C_word*)t0)[9]);
t17=t14;
f_1798(t17,(C_word)C_i_pairp(t16));}
else{
t16=t14;
f_1798(t16,C_SCHEME_FALSE);}}
else{
t14=(C_word)C_i_car(((C_word*)t0)[9]);
t15=(C_word)C_eqp(t14,lf[56]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1845,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t17=(C_word)C_i_cdr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_listp(t17))){
t18=(C_word)C_i_cdr(((C_word*)t0)[9]);
t19=t16;
f_1845(t19,(C_word)C_i_pairp(t18));}
else{
t18=t16;
f_1845(t18,C_SCHEME_FALSE);}}
else{
t16=(C_word)C_i_car(((C_word*)t0)[9]);
t17=(C_word)C_eqp(t16,lf[141]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1892,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t19=(C_word)C_i_cdr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_pairp(t19))){
t20=(C_word)C_i_cadr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_symbolp(t20))){
t21=(C_word)C_i_cddr(((C_word*)t0)[9]);
t22=t18;
f_1892(t22,(C_word)C_i_listp(t21));}
else{
t21=t18;
f_1892(t21,C_SCHEME_FALSE);}}
else{
t20=t18;
f_1892(t20,C_SCHEME_FALSE);}}
else{
t18=(C_word)C_i_car(((C_word*)t0)[9]);
t19=(C_word)C_eqp(t18,lf[140]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1956,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t21=(C_word)C_i_cdr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_pairp(t21))){
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1976,a[2]=t20,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t23=(C_word)C_i_cadr(((C_word*)t0)[9]);
/* match.scm: 1008 pattern-var? */
t24=((C_word*)t0)[4];
f_1272(3,t24,t22,t23);}
else{
t22=t20;
f_1956(t22,C_SCHEME_FALSE);}}
else{
t20=(C_word)C_i_car(((C_word*)t0)[9]);
t21=(C_word)C_eqp(t20,lf[139]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2003,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t23=(C_word)C_i_cdr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_pairp(t23))){
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2023,a[2]=t22,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t25=(C_word)C_i_cadr(((C_word*)t0)[9]);
/* match.scm: 1022 pattern-var? */
t26=((C_word*)t0)[4];
f_1272(3,t26,t24,t25);}
else{
t24=t22;
f_2003(t24,C_SCHEME_FALSE);}}
else{
t22=(C_word)C_i_car(((C_word*)t0)[9]);
t23=(C_word)C_eqp(t22,lf[192]);
if(C_truep(t23)){
t24=(C_word)C_i_car(((C_word*)t0)[9]);
t25=(C_word)C_i_cdr(((C_word*)t0)[9]);
/* match.scm: 1034 g88 */
t26=((C_word*)t0)[6];
f_1509(t26,((C_word*)t0)[8],t24,t25);}
else{
t24=(C_word)C_i_car(((C_word*)t0)[9]);
t25=(C_word)C_eqp(t24,lf[193]);
if(C_truep(t25)){
t26=(C_word)C_i_car(((C_word*)t0)[9]);
t27=(C_word)C_i_cdr(((C_word*)t0)[9]);
/* match.scm: 1039 g88 */
t28=((C_word*)t0)[6];
f_1509(t28,((C_word*)t0)[8],t26,t27);}
else{
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2078,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t27=(C_word)C_i_cdr(((C_word*)t0)[9]);
if(C_truep((C_word)C_i_pairp(t27))){
t28=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2111,a[2]=t26,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t29=(C_word)C_i_cadr(((C_word*)t0)[9]);
/* match.scm: 1043 dot-dot-k? */
f_1298(t28,t29);}
else{
t28=t26;
f_2078(t28,C_SCHEME_FALSE);}}}}}}}}}}}}}}
else{
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[9]))){
t2=((C_word*)t0)[9];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1059 vector->list */
t4=*((C_word*)lf[176]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
/* match.scm: 1077 ##match#syntax-err */
t2=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[8],((C_word*)t0)[2],lf[195]);}}}}

/* k2181 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2186,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 1061 reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2184 in k2181 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2196,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t1))){
t4=t3;
f_2196(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_car(t1);
/* match.scm: 1067 dot-dot-k? */
f_1298(t3,t4);}}

/* k2194 in k2184 in k2181 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2196,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2211,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* map */
t5=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)((C_word*)t0)[3])[1],t4);}
else{
/* map */
t2=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}}

/* k2209 in k2194 in k2184 in k2181 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2211,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
/* match.scm: 1069 reverse */
t3=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k2191 in k2184 in k2181 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[194]+1),t1);}

/* k2109 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_2078(t3,(C_word)C_i_nullp(t2));}
else{
t2=((C_word*)t0)[2];
f_2078(t2,C_SCHEME_FALSE);}}

/* k2076 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2078(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2078,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cadr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2091,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1049 ordinary */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1507(3,t5,t4,t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 1054 g88 */
t4=((C_word*)t0)[2];
f_1509(t4,((C_word*)t0)[4],t2,t3);}}

/* k2089 in k2076 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2091,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[2]));}

/* k2021 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_2003(t3,(C_word)C_i_nullp(t2));}
else{
t2=((C_word*)t0)[2];
f_2003(t2,C_SCHEME_FALSE);}}

/* k2001 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2003(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* match.scm: 1029 g88 */
t4=((C_word*)t0)[2];
f_1509(t4,((C_word*)t0)[3],t2,t3);}}

/* k1974 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_1956(t3,(C_word)C_i_nullp(t2));}
else{
t2=((C_word*)t0)[2];
f_1956(t2,C_SCHEME_FALSE);}}

/* k1954 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1956(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* match.scm: 1015 g88 */
t4=((C_word*)t0)[2];
f_1509(t4,((C_word*)t0)[3],t2,t3);}}

/* k1890 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1892(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1892,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_cddr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1909,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* map */
t5=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)((C_word*)t0)[3])[1],t3);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 1001 g88 */
t4=((C_word*)t0)[2];
f_1509(t4,((C_word*)t0)[4],t2,t3);}}

/* k1907 in k1890 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1909,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[141],t2));}

/* k1843 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1845(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1845,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1855,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[3])[1],t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 983  g88 */
t4=((C_word*)t0)[2];
f_1509(t4,((C_word*)t0)[4],t2,t3);}}

/* k1853 in k1843 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1855,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[56],t1));}

/* k1796 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1798(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1798,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1808,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[3])[1],t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 970  g88 */
t4=((C_word*)t0)[2];
f_1509(t4,((C_word*)t0)[4],t2,t3);}}

/* k1806 in k1796 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1808,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[142],t1));}

/* k1749 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1751(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1751,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1761,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[3])[1],t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 957  g88 */
t4=((C_word*)t0)[2];
f_1509(t4,((C_word*)t0)[4],t2,t3);}}

/* k1759 in k1749 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1761,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[69],t1));}

/* k1689 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1691(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1691,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1704,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 939  ordinary */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1507(3,t5,t4,t3);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 944  g88 */
t4=((C_word*)t0)[2];
f_1509(t4,((C_word*)t0)[4],t2,t3);}}

/* k1702 in k1689 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1704,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[143],((C_word*)t0)[2],t1));}

/* k1635 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1637(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1637,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_i_cddr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1654,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* map */
t5=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)((C_word*)t0)[3])[1],t3);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 924  g88 */
t4=((C_word*)t0)[2];
f_1509(t4,((C_word*)t0)[4],t2,t3);}}

/* k1652 in k1635 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1654,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[106],t2));}

/* k1598 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1600(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* match.scm: 908  g88 */
t4=((C_word*)t0)[2];
f_1509(t4,((C_word*)t0)[3],t2,t3);}}

/* k1555 in k1537 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1557(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* match.scm: 893  quasi */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2237(3,t3,((C_word*)t0)[3],t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* match.scm: 896  g88 */
t4=((C_word*)t0)[2];
f_1509(t4,((C_word*)t0)[3],t2,t3);}}

/* g88 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1509(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1509,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1517,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* match.scm: 868  ordinary */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1507(3,t5,t4,t2);}

/* k1515 in g88 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1521,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 870  ordinary */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1507(3,t3,t2,((C_word*)t0)[2]);}

/* k1519 in k1515 in g88 in ordinary in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1521,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* simple? in validate-pattern in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static C_word C_fcall f_1477(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_check;
t2=(C_word)C_i_stringp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=(C_word)C_booleanp(t1);
if(C_truep(t3)){
return(t3);}
else{
t4=(C_word)C_charp(t1);
if(C_truep(t4)){
return(t4);}
else{
t5=(C_word)C_i_numberp(t1);
return((C_truep(t5)?t5:(C_word)C_i_nullp(t1)));}}}}

/* pattern-var? in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1272,3,t0,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1296,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 799  dot-dot-k? */
f_1298(t3,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1294 in pattern-var? in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_memq(((C_word*)t0)[2],lf[187]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not(t2));}}

/* bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2539(C_word t0,C_word t1,C_word t2){
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
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2539,NULL,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3396,a[2]=lf[155],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3372,a[2]=t7,a[3]=lf[156],tmp=(C_word)a,a+=4,tmp));
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[2],a[3]=t12,a[4]=t7,a[5]=t5,a[6]=t14,a[7]=t10,a[8]=t4,a[9]=t2,a[10]=lf[177],tmp=(C_word)a,a+=11,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3240,a[2]=((C_word*)t0)[2],a[3]=t12,a[4]=t10,a[5]=lf[181],tmp=(C_word)a,a+=6,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3333,a[2]=t10,a[3]=t14,a[4]=lf[184],tmp=(C_word)a,a+=5,tmp));
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3425,a[2]=t4,a[3]=lf[185],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1405 bound */
t19=((C_word*)t10)[1];
f_2543(t19,t1,t2,C_SCHEME_END_OF_LIST,t18);}

/* a3424 in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3425,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1408 reverse */
t5=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k3431 in a3424 in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3433,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]));}

/* bound* in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3333(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3333,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 1380 k */
t5=t4;
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}
else{
t5=(C_word)C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3352,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,a[5]=lf[183],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 1381 bound */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2543(t7,t1,t5,t3,t6);}}

/* a3351 in bound* in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3352,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cdr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[182],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1385 bound* */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3333(t6,t1,t4,t3,t5);}

/* a3361 in a3351 in bound* in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3362,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
/* match.scm: 1389 k */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t4,t3);}

/* boundv in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3240(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3240,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3242,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=lf[178],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3258,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t7=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t7))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3304,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_i_cadr(t2);
/* match.scm: 1353 dot-dot-k? */
f_1298(t8,t9);}
else{
t8=t6;
f_3258(t8,C_SCHEME_FALSE);}}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 1376 g115 */
t6=t5;
f_3242(t6,t1);}
else{
/* match.scm: 1377 ##sys#match-error */
t6=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t2);}}}

/* k3302 in boundv in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_3258(t3,(C_word)C_i_nullp(t2));}
else{
t2=((C_word*)t0)[2];
f_3258(t2,C_SCHEME_FALSE);}}

/* k3256 in boundv in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3258(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3258,NULL,2,t0,t1);}
if(C_truep(t1)){
/* match.scm: 1357 bound */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2543(t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[6]))){
/* match.scm: 1359 g115 */
t2=((C_word*)t0)[3];
f_3242(t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3281,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=lf[180],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 1361 bound */
t5=((C_word*)((C_word*)t0)[8])[1];
f_2543(t5,((C_word*)t0)[7],t2,((C_word*)t0)[5],t4);}}}

/* a3280 in k3256 in boundv in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3281,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3287,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=lf[179],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1365 boundv */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3240(t5,t1,((C_word*)t0)[2],t3,t4);}

/* a3286 in a3280 in k3256 in boundv in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3287,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
/* match.scm: 1370 k */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t4,t3);}

/* g115 in boundv in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3242(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3242,NULL,2,t0,t1);}
/* match.scm: 1350 k */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2543(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2543,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(lf[98],t2);
if(C_truep(t5)){
/* match.scm: 1185 k */
t6=t4;
((C_proc4)C_retrieve_proc(t6))(4,t6,t1,t2,t3);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2562,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_memq(t2,t3))){
/* match.scm: 1187 ##match#syntax-err */
t7=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[9],lf[157]);}
else{
t7=t6;
f_2562(2,t7,C_SCHEME_UNDEFINED);}}
else{
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2581,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=t2,a[12]=t1,a[13]=t4,tmp=(C_word)a,a+=14,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t7=(C_word)C_i_car(t2);
t8=t6;
f_2581(t8,(C_word)C_eqp(lf[54],t7));}
else{
t7=t6;
f_2581(t7,C_SCHEME_FALSE);}}}}

/* k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2581(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2581,NULL,2,t0,t1);}
if(C_truep(t1)){
/* match.scm: 1192 k */
t2=((C_word*)t0)[13];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10]);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[11]))){
t3=(C_word)C_i_car(((C_word*)t0)[11]);
t4=t2;
f_2590(t4,(C_word)C_eqp(lf[106],t3));}
else{
t3=t2;
f_2590(t3,C_SCHEME_FALSE);}}}

/* k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2590(C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2590,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[13]);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_cadr(((C_word*)t0)[13]);
t4=(C_word)C_i_symbolp(t3);
t5=(C_word)C_i_not(t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2628,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_2628(t7,t5);}
else{
t7=(C_word)C_i_cadr(((C_word*)t0)[13]);
t8=t6;
f_2628(t8,(C_word)C_i_memq(t7,((C_word*)t0)[9]));}}
else{
t3=(C_word)C_i_cadr(((C_word*)t0)[13]);
t4=(C_word)C_a_i_list(&a,2,lf[106],t3);
t5=(C_word)C_i_cddr(((C_word*)t0)[13]);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,lf[69],t6);
/* match.scm: 1195 bound */
t8=((C_word*)((C_word*)t0)[8])[1];
f_2543(t8,((C_word*)t0)[10],t7,((C_word*)t0)[9],((C_word*)t0)[11]);}}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2682,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[13]))){
t3=(C_word)C_i_car(((C_word*)t0)[13]);
t4=t2;
f_2682(t4,(C_word)C_eqp(lf[143],t3));}
else{
t3=t2;
f_2682(t3,C_SCHEME_FALSE);}}}

/* k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2682(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2682,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[13]);
t3=(C_word)C_i_symbolp(t2);
t4=(C_word)C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2691,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_2691(t6,t4);}
else{
t6=(C_word)C_i_cadr(((C_word*)t0)[13]);
t7=t5;
f_2691(t7,(C_word)C_i_memq(t6,((C_word*)t0)[9]));}}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[13]))){
t3=(C_word)C_i_car(((C_word*)t0)[13]);
t4=t2;
f_2759(t4,(C_word)C_eqp(lf[69],t3));}
else{
t3=t2;
f_2759(t3,C_SCHEME_FALSE);}}}

/* k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2759(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2759,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2768,a[2]=((C_word*)t0)[11],a[3]=lf[160],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1234 bound* */
t4=((C_word*)((C_word*)t0)[10])[1];
f_3333(t4,((C_word*)t0)[9],t2,((C_word*)t0)[8],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[12]))){
t3=(C_word)C_i_car(((C_word*)t0)[12]);
t4=t2;
f_2782(t4,(C_word)C_eqp(lf[142],t3));}
else{
t3=t2;
f_2782(t3,C_SCHEME_FALSE);}}}

/* k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2782(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2782,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2791,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=lf[166],tmp=(C_word)a,a+=9,tmp);
/* match.scm: 1241 bound */
t4=((C_word*)((C_word*)t0)[8])[1];
f_2543(t4,((C_word*)t0)[6],t2,((C_word*)t0)[7],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[12]))){
t3=(C_word)C_i_car(((C_word*)t0)[12]);
t4=t2;
f_2871(t4,(C_word)C_eqp(lf[56],t3));}
else{
t3=t2;
f_2871(t3,C_SCHEME_FALSE);}}}

/* k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2871(C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2871,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[11]);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_cadr(((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=lf[168],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 1275 bound */
t5=((C_word*)((C_word*)t0)[7])[1];
f_2543(t5,((C_word*)t0)[6],t3,((C_word*)t0)[9],t4);}
else{
t3=(C_word)C_i_cdr(((C_word*)t0)[11]);
t4=(C_word)C_a_i_cons(&a,2,lf[142],t3);
t5=(C_word)C_a_i_list(&a,2,lf[56],t4);
/* match.scm: 1271 bound */
t6=((C_word*)((C_word*)t0)[7])[1];
f_2543(t6,((C_word*)t0)[6],t5,((C_word*)t0)[9],((C_word*)t0)[10]);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2936,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[11]))){
t3=(C_word)C_i_cdr(((C_word*)t0)[11]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cadr(((C_word*)t0)[11]);
/* match.scm: 1290 dot-dot-k? */
f_1298(t2,t4);}
else{
t4=t2;
f_2936(2,t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_2936(2,t3,C_SCHEME_FALSE);}}}

/* k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2936,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2945,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=lf[170],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 1290 bound */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2543(t4,((C_word*)t0)[4],t2,((C_word*)t0)[6],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[9]))){
t3=(C_word)C_i_car(((C_word*)t0)[9]);
t4=t2;
f_2984(t4,(C_word)C_eqp(lf[141],t3));}
else{
t3=t2;
f_2984(t3,C_SCHEME_FALSE);}}}

/* k2982 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2984(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2984,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2993,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=lf[171],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1306 bound* */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3333(t4,((C_word*)t0)[5],t2,((C_word*)t0)[4],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[8]))){
t3=(C_word)C_i_car(((C_word*)t0)[8]);
t4=t2;
f_3015(t4,(C_word)C_eqp(lf[140],t3));}
else{
t3=t2;
f_3015(t3,C_SCHEME_FALSE);}}}

/* k3013 in k2982 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3015(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3015,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
if(C_truep((C_word)C_i_memq(t2,((C_word*)t0)[6]))){
/* match.scm: 1317 k */
t3=((C_word*)t0)[5];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t3=(C_word)C_i_cadr(((C_word*)t0)[7]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[6]);
/* match.scm: 1319 k */
t5=((C_word*)t0)[5];
((C_proc4)C_retrieve_proc(t5))(4,t5,((C_word*)t0)[4],((C_word*)t0)[7],t4);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[7]))){
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=t2;
f_3045(t4,(C_word)C_eqp(lf[139],t3));}
else{
t3=t2;
f_3045(t3,C_SCHEME_FALSE);}}}

/* k3043 in k3013 in k2982 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3045(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3045,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
if(C_truep((C_word)C_i_memq(t2,((C_word*)t0)[6]))){
/* match.scm: 1325 k */
t3=((C_word*)t0)[5];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t3=(C_word)C_i_cadr(((C_word*)t0)[7]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[6]);
/* match.scm: 1327 k */
t5=((C_word*)t0)[5];
((C_proc4)C_retrieve_proc(t5))(4,t5,((C_word*)t0)[4],((C_word*)t0)[7],t4);}}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[7]))){
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3084,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=lf[173],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 1330 bound */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2543(t4,((C_word*)t0)[4],t2,((C_word*)t0)[6],t3);}
else{
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[7]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 1342 vector->list */
t3=*((C_word*)lf[176]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[7]);}
else{
/* match.scm: 1348 k */
t2=((C_word*)t0)[5];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[6]);}}}}

/* k3113 in k3043 in k3013 in k2982 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3117,a[2]=((C_word*)t0)[5],a[3]=lf[175],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1341 boundv */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3240(t3,((C_word*)t0)[3],t1,((C_word*)t0)[2],t2);}

/* a3116 in k3113 in k3043 in k3013 in k2982 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3117(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3117,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3125,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1345 list->vector */
t5=*((C_word*)lf[174]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3123 in a3116 in k3113 in k3043 in k3013 in k2982 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1345 k */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a3083 in k3043 in k3013 in k2982 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3084,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cdr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3094,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[172],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1334 bound */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2543(t6,t1,t4,t3,t5);}

/* a3093 in a3083 in k3043 in k3013 in k2982 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3094(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3094,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
/* match.scm: 1338 k */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t4,t3);}

/* a2992 in k2982 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2993(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2993,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cadr(((C_word*)t0)[3]);
t5=(C_word)C_a_i_cons(&a,2,t4,t2);
t6=(C_word)C_a_i_cons(&a,2,lf[141],t5);
/* match.scm: 1311 k */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t1,t6,t3);}

/* a2944 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2945(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2945,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2949,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 1295 find-prefix */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3372(t5,t4,t3,((C_word*)t0)[2]);}

/* k2947 in a2944 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2949,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 1300 gensym */
t4=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k2962 in k2947 in a2944 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* match.scm: 1301 gensym */
t3=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k2966 in k2962 in k2947 in a2944 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2974,a[2]=lf[169],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[6]);}

/* a2973 in k2966 in k2962 in k2947 in a2944 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2974(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2974,3,t0,t1,t2);}
/* match.scm: 1303 gensym */
t3=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k2970 in k2966 in k2962 in k2947 in a2944 in k2934 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2972,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,6,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1);
/* match.scm: 1298 k */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a2900 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2901,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2905,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2922,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1280 permutation */
f_3396(t5,((C_word*)t0)[4],t3);}

/* k2920 in a2900 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_2905(2,t2,C_SCHEME_UNDEFINED);}
else{
/* match.scm: 1283 ##match#syntax-err */
t2=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[167]);}}

/* k2903 in a2900 in k2869 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2905,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[56],((C_word*)t0)[5]);
/* match.scm: 1286 k */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a2790 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2791,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cddr(((C_word*)t0)[7]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2801,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=lf[161],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t7,a[8]=lf[165],tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_2815(t9,t1,t4,t5);}

/* or* in a2790 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2815(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2815,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 1253 k */
t4=t3;
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t2);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2834,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t3,a[7]=t2,a[8]=lf[164],tmp=(C_word)a,a+=9,tmp);
/* match.scm: 1254 bound */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2543(t6,t1,t4,((C_word*)t0)[2],t5);}}

/* a2833 in or* in a2790 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2834,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2838,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2865,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1259 permutation */
f_3396(t5,t3,((C_word*)t0)[2]);}

/* k2863 in a2833 in or* in a2790 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_2838(2,t2,C_SCHEME_UNDEFINED);}
else{
/* match.scm: 1262 ##match#syntax-err */
t2=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[163]);}}

/* k2836 in a2833 in or* in a2790 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2838,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2847,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[162],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1265 or* */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2815(t4,((C_word*)t0)[2],t2,t3);}

/* a2846 in k2836 in a2833 in or* in a2790 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2847(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2847,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
/* match.scm: 1267 k */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2800 in a2790 in k2780 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2801(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2801,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[142],t3);
/* match.scm: 1248 k */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t4,((C_word*)t0)[2]);}

/* a2767 in k2757 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2768(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2768,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,lf[69],t2);
/* match.scm: 1239 k */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t4,t3);}

/* k2689 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2691(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2691,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2694,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 1215 gensym */
t3=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=(C_word)C_i_caddr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=lf[159],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1225 bound */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2543(t4,((C_word*)t0)[4],t2,((C_word*)t0)[3],t3);}}

/* a2725 in k2689 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2726,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cadr(((C_word*)t0)[3]);
t5=(C_word)C_a_i_list(&a,3,lf[143],t4,t2);
/* match.scm: 1231 k */
t6=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t6))(4,t6,t1,t5,t3);}

/* k2692 in k2689 in k2680 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2694(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2694,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t4);
t6=(C_word)C_i_caddr(((C_word*)t0)[7]);
t7=(C_word)C_a_i_list(&a,3,lf[143],t1,t6);
/* match.scm: 1219 bound */
t8=((C_word*)((C_word*)t0)[5])[1];
f_2543(t8,((C_word*)t0)[4],t7,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2626 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_2628(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2628,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 1203 gensym */
t3=*((C_word*)lf[158]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
/* match.scm: 1209 k */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* k2629 in k2626 in k2588 in k2579 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2631,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[5])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[5])+1,t4);
t6=(C_word)C_a_i_list(&a,2,lf[106],t1);
/* match.scm: 1207 k */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,((C_word*)t0)[3],t6,((C_word*)t0)[2]);}

/* k2560 in bound in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_2562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2562,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
/* match.scm: 1190 k */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],((C_word*)t0)[5],t2);}

/* find-prefix in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3372(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3372,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=(C_word)C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3390,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cdr(t2);
/* match.scm: 1395 find-prefix */
t9=t6;
t10=t7;
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* k3388 in find-prefix in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3390,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* permutation in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3396(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3396,NULL,3,t1,t2,t3);}
t4=(C_word)C_i_length(t2);
t5=(C_word)C_i_length(t3);
if(C_truep((C_word)C_i_nequalp(t4,t5))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3408,a[2]=t3,a[3]=lf[154],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1401 andmap */
t7=*((C_word*)lf[91]+1);
((C_proc4)C_retrieve_proc(t7))(4,t7,t1,t6,t2);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* a3407 in permutation in bound in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3408(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3408,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_memq(t2,((C_word*)t0)[2]));}

/* inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3435(C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3435,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3518,a[2]=lf[146],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3600,a[2]=t3,a[3]=lf[148],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3622,a[2]=t3,a[3]=lf[149],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cadr(t2);
t7=(C_word)C_i_caddr(t2);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3695,a[2]=t5,a[3]=t9,a[4]=t4,a[5]=lf[152],tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3695(t11,t1,t6,C_SCHEME_END_OF_LIST,t7);}

/* loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3695(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
a=C_alloc(15);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3695,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_i_nullp(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3715,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1460 reverse */
t6=*((C_word*)lf[112]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_cadr(t5);
t7=f_3600(((C_word*)t0)[4],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3724,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* match.scm: 1461 caar */
t9=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_i_car(t2);
t10=(C_word)C_a_i_cons(&a,2,t9,t3);
/* match.scm: 1479 loop */
t14=t1;
t15=t8;
t16=t10;
t17=t4;
t1=t14;
t2=t15;
t3=t16;
t4=t17;
goto loop;}}}

/* k3722 in loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3724(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3724,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3727,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=t1;
t4=((C_word*)t0)[3];
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3444,a[2]=t3,a[3]=t6,a[4]=lf[151],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3444(t8,t2,t4);}

/* loop in k3722 in loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3444(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3444,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3458,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* match.scm: 1413 loop */
t7=t3;
t8=t4;
t1=t7;
t2=t8;
goto loop;}
else{
t3=(C_word)C_eqp(((C_word*)t0)[2],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_fix(1):C_fix(0)));}}

/* k3456 in loop in k3722 in loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3462,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* match.scm: 1414 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3444(t4,t2,t3);}

/* k3460 in k3456 in loop in k3722 in loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3462,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_plus(&a,2,((C_word*)t0)[2],t1));}

/* k3725 in k3722 in loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3727,2,t0,t1);}
if(C_truep((C_word)C_i_nequalp(C_fix(0),t1))){
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
/* match.scm: 1464 loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3695(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_nequalp(C_fix(1),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3749,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_3749(t4,t2);}
else{
t4=(C_word)C_i_car(((C_word*)t0)[8]);
t5=(C_word)C_i_cadr(t4);
/* match.scm: 1468 small? */
t6=t3;
f_3749(t6,f_3622(((C_word*)t0)[2],t5));}}}

/* k3747 in k3725 in k3722 in loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3749(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3749,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3760,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[7]);
t5=(C_word)C_i_cadr(t4);
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[2];
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3484,a[2]=t5,a[3]=t7,a[4]=t9,a[5]=lf[150],tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3484(t11,t3,t6);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
/* match.scm: 1475 loop */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3695(t5,((C_word*)t0)[5],t2,t4,((C_word*)t0)[3]);}}

/* loop in k3747 in k3725 in k3722 in loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3484(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3484,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3498,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* match.scm: 1420 loop */
t7=t3;
t8=t4;
t1=t7;
t2=t8;
goto loop;}
else{
t3=(C_word)C_eqp(((C_word*)t0)[3],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?((C_word*)t0)[2]:t2));}}

/* k3496 in loop in k3747 in k3725 in k3722 in loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3502,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* match.scm: 1421 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3484(t4,t2,t3);}

/* k3500 in k3496 in loop in k3747 in k3725 in k3722 in loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3502,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3758 in k3747 in k3725 in k3722 in loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1469 loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3695(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3713 in loop in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3715,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[26],t1,((C_word*)t0)[2]));}

/* small? in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static C_word C_fcall f_3622(C_word t0,C_word t1){
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
C_stack_check;
t2=f_3518(t1);
if(C_truep(t2)){
return(t2);}
else{
if(C_truep((C_word)C_i_pairp(t1))){
t3=(C_word)C_i_car(t1);
t4=(C_word)C_eqp(t3,lf[25]);
if(C_truep(t4)){
t5=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_i_cddr(t1);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(C_word)C_i_caddr(t1);
t8=f_3518(t7);
if(C_truep(t8)){
t9=(C_word)C_i_cdddr(t1);
return((C_word)C_i_nullp(t9));}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}}

/* isval? in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static C_word C_fcall f_3600(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t2=f_3518(t1);
if(C_truep(t2)){
return(t2);}
else{
if(C_truep((C_word)C_i_pairp(t1))){
t3=(C_word)C_i_car(t1);
return((C_word)C_i_memq(t3,lf[147]));}
else{
return(C_SCHEME_FALSE);}}}

/* const? in inline-let in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static C_word C_fcall f_3518(C_word t1){
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
C_stack_check;
t2=(C_word)C_i_symbolp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=(C_word)C_booleanp(t1);
if(C_truep(t3)){
return(t3);}
else{
t4=(C_word)C_i_stringp(t1);
if(C_truep(t4)){
return(t4);}
else{
t5=(C_word)C_charp(t1);
if(C_truep(t5)){
return(t5);}
else{
t6=(C_word)C_i_numberp(t1);
if(C_truep(t6)){
return(t6);}
else{
t7=(C_word)C_i_nullp(t1);
if(C_truep(t7)){
return(t7);}
else{
if(C_truep((C_word)C_i_pairp(t1))){
t8=(C_word)C_i_car(t1);
t9=(C_word)C_eqp(t8,lf[54]);
if(C_truep(t9)){
t10=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_pairp(t10))){
t11=(C_word)C_i_cadr(t1);
if(C_truep((C_word)C_i_symbolp(t11))){
t12=(C_word)C_i_cddr(t1);
return((C_word)C_i_nullp(t12));}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}}}}}}}

/* gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3819(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3819,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
if(C_truep((C_word)C_i_nullp(t4))){
/* match.scm: 1482 erract */
t8=t5;
((C_proc3)C_retrieve_proc(t8))(3,t8,t1,t2);}
else{
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3830,a[2]=t9,a[3]=lf[95],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3839,a[2]=t7,a[3]=t6,a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[10],a[7]=t4,a[8]=lf[96],tmp=(C_word)a,a+=9,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3848,a[2]=t10,a[3]=t11,a[4]=t4,a[5]=lf[97],tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_3944,a[2]=t12,a[3]=t11,a[4]=t3,a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=t6,a[11]=t10,a[12]=t7,a[13]=((C_word*)t0)[5],a[14]=((C_word*)t0)[6],a[15]=((C_word*)t0)[7],a[16]=((C_word*)t0)[8],a[17]=((C_word*)t0)[9],a[18]=t9,tmp=(C_word)a,a+=19,tmp);
/* match.scm: 1509 caar */
t14=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,t4);}}

/* k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3944,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3946,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[16],a[12]=t3,a[13]=((C_word*)t0)[17],a[14]=((C_word*)t0)[18],a[15]=lf[144],tmp=(C_word)a,a+=16,tmp));
t5=((C_word*)t3)[1];
f_3946(t5,((C_word*)t0)[6],t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_3946(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[75],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3946,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_eqp(lf[98],t2);
if(C_truep(t7)){
/* match.scm: 1515 ks */
t8=t6;
((C_proc3)C_retrieve_proc(t8))(3,t8,t1,t4);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
t8=(C_word)C_a_i_cons(&a,2,t2,t3);
t9=(C_word)C_a_i_cons(&a,2,t8,((C_word*)((C_word*)t0)[14])[1]);
t10=C_mutate(((C_word *)((C_word*)t0)[14])+1,t9);
/* match.scm: 1517 ks */
t11=t6;
((C_proc3)C_retrieve_proc(t11))(3,t11,t1,t4);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
t8=(C_word)C_a_i_list(&a,2,lf[62],t3);
/* match.scm: 1518 emit */
t9=((C_word*)t0)[13];
f_5092(t9,t1,t8,t4,t5,t6);}
else{
if(C_truep((C_word)C_i_equalp(t2,lf[99]))){
t8=(C_word)C_a_i_list(&a,2,lf[62],t3);
/* match.scm: 1519 emit */
t9=((C_word*)t0)[13];
f_5092(t9,t1,t8,t4,t5,t6);}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t8=(C_word)C_a_i_list(&a,3,lf[48],t3,t2);
/* match.scm: 1520 emit */
t9=((C_word*)t0)[13];
f_5092(t9,t1,t8,t4,t5,t6);}
else{
if(C_truep((C_word)C_booleanp(t2))){
t8=(C_word)C_a_i_list(&a,3,lf[48],t3,t2);
/* match.scm: 1521 emit */
t9=((C_word*)t0)[13];
f_5092(t9,t1,t8,t4,t5,t6);}
else{
if(C_truep((C_word)C_charp(t2))){
t8=(C_word)C_a_i_list(&a,3,lf[48],t3,t2);
/* match.scm: 1522 emit */
t9=((C_word*)t0)[13];
f_5092(t9,t1,t8,t4,t5,t6);}
else{
if(C_truep((C_word)C_i_numberp(t2))){
t8=(C_word)C_a_i_list(&a,3,lf[48],t3,t2);
/* match.scm: 1523 emit */
t9=((C_word*)t0)[13];
f_5092(t9,t1,t8,t4,t5,t6);}
else{
t8=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_4057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[12],a[14]=t6,a[15]=t5,a[16]=t4,a[17]=t1,a[18]=((C_word*)t0)[13],a[19]=t2,a[20]=t3,tmp=(C_word)a,a+=21,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t9=(C_word)C_i_car(t2);
t10=t8;
f_4057(t10,(C_word)C_eqp(lf[54],t9));}
else{
t9=t8;
f_4057(t9,C_SCHEME_FALSE);}}}}}}}}}}

/* k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4057(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4057,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_list(&a,3,lf[48],((C_word*)t0)[20],((C_word*)t0)[19]);
/* match.scm: 1524 emit */
t3=((C_word*)t0)[18];
f_5092(t3,((C_word*)t0)[17],t2,((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[14]);}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_4070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[19]))){
t3=(C_word)C_i_car(((C_word*)t0)[19]);
t4=t2;
f_4070(t4,(C_word)C_eqp(lf[106],t3));}
else{
t3=t2;
f_4070(t3,C_SCHEME_FALSE);}}}

/* k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4070(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4070,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[20]);
t3=(C_word)C_a_i_list(&a,2,t2,((C_word*)t0)[19]);
/* match.scm: 1532 emit */
t4=((C_word*)t0)[18];
f_5092(t4,((C_word*)t0)[17],t3,((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[14]);}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_4086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[18],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[13],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[20]))){
t3=(C_word)C_i_car(((C_word*)t0)[20]);
t4=t2;
f_4086(t4,(C_word)C_eqp(lf[143],t3));}
else{
t3=t2;
f_4086(t3,C_SCHEME_FALSE);}}}

/* k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4086(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4086,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[20]);
t3=(C_word)C_i_cadr(((C_word*)t0)[20]);
t4=(C_word)C_a_i_list(&a,2,t3,((C_word*)t0)[19]);
/* match.scm: 1536 next */
t5=((C_word*)((C_word*)t0)[18])[1];
f_3946(t5,((C_word*)t0)[17],t2,t4,((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[14]);}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_4107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[14],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[20]))){
t3=(C_word)C_i_car(((C_word*)t0)[20]);
t4=t2;
f_4107(t4,(C_word)C_eqp(lf[69],t3));}
else{
t3=t2;
f_4107(t3,C_SCHEME_FALSE);}}}

/* k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4107(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4107,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[20]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4116,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[18],a[5]=t4,a[6]=((C_word*)t0)[19],a[7]=lf[101],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4116(t6,((C_word*)t0)[15],t2,((C_word*)t0)[14]);}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_4149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[19],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[13],tmp=(C_word)a,a+=21,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[20]))){
t3=(C_word)C_i_car(((C_word*)t0)[20]);
t4=t2;
f_4149(t4,(C_word)C_eqp(lf[142],t3));}
else{
t3=t2;
f_4149(t3,C_SCHEME_FALSE);}}}

/* k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4149(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4149,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)((C_word*)t0)[20])[1];
t3=(C_word)C_i_cdr(((C_word*)t0)[19]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4158,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[16],a[4]=((C_word*)t0)[17],a[5]=t5,a[6]=t2,a[7]=((C_word*)t0)[20],a[8]=((C_word*)t0)[18],a[9]=lf[103],tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_4158(t7,((C_word*)t0)[14],t3,((C_word*)t0)[13]);}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_4192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[20],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[18],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[13],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[14],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[19]))){
t3=(C_word)C_i_car(((C_word*)t0)[19]);
t4=t2;
f_4192(t4,(C_word)C_eqp(lf[56],t3));}
else{
t3=t2;
f_4192(t3,C_SCHEME_FALSE);}}}

/* k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4192(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4192,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[20]);
/* match.scm: 1570 next */
t3=((C_word*)((C_word*)t0)[19])[1];
f_3946(t3,((C_word*)t0)[18],t2,((C_word*)t0)[17],((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[14]);}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_4205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[19],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[13],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[20],tmp=(C_word)a,a+=21,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[20]))){
t3=(C_word)C_i_car(((C_word*)t0)[20]);
t4=t2;
f_4205(t4,(C_word)C_eqp(lf[141],t3));}
else{
t3=t2;
f_4205(t3,C_SCHEME_FALSE);}}}

/* k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4205(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4205,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[20]);
t3=(C_word)C_i_cdr(((C_word*)t0)[20]);
t4=(C_word)C_i_length(t3);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4261,a[2]=((C_word*)t0)[13],a[3]=t3,a[4]=((C_word*)t0)[14],a[5]=t4,a[6]=((C_word*)t0)[15],a[7]=((C_word*)t0)[16],a[8]=((C_word*)t0)[17],a[9]=((C_word*)t0)[18],a[10]=((C_word*)t0)[19],tmp=(C_word)a,a+=11,tmp);
/* match.scm: 1579 symbol-append */
f_7342(t5,(C_word)C_a_i_list(&a,2,t2,lf[106]));}
else{
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_4267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[18],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[19],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[14],a[18]=((C_word*)t0)[11],a[19]=((C_word*)t0)[20],tmp=(C_word)a,a+=20,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[20]))){
t3=(C_word)C_i_car(((C_word*)t0)[20]);
t4=t2;
f_4267(t4,(C_word)C_eqp(lf[140],t3));}
else{
t3=t2;
f_4267(t3,C_SCHEME_FALSE);}}}

/* k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4267(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4267,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[19]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4286,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[16],a[4]=((C_word*)t0)[17],a[5]=((C_word*)t0)[18],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* match.scm: 1602 setter */
t4=((C_word*)t0)[14];
f_6772(t4,t3,((C_word*)t0)[13],((C_word*)t0)[19]);}
else{
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_4292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],tmp=(C_word)a,a+=19,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[19]))){
t3=(C_word)C_i_car(((C_word*)t0)[19]);
t4=t2;
f_4292(t4,(C_word)C_eqp(lf[139],t3));}
else{
t3=t2;
f_4292(t3,C_SCHEME_FALSE);}}}

/* k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4292(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4292,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[18]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4311,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[16],a[5]=((C_word*)t0)[17],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* match.scm: 1609 getter */
t4=((C_word*)t0)[13];
f_7077(t4,t3,((C_word*)t0)[12],((C_word*)t0)[18]);}
else{
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[17],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[11],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[12],tmp=(C_word)a,a+=18,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[18]))){
t3=(C_word)C_i_cdr(((C_word*)t0)[18]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cadr(((C_word*)t0)[18]);
/* match.scm: 1616 dot-dot-k? */
f_1298(t2,t4);}
else{
t4=t2;
f_4317(2,t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_4317(2,t3,C_SCHEME_FALSE);}}}

/* k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4317(C_word c,C_word t0,C_word t1){
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
C_word ab[55],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4317,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_list(&a,2,lf[59],((C_word*)t0)[17]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4326,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[17],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=lf[117],tmp=(C_word)a,a+=15,tmp);
/* match.scm: 1616 emit */
t4=((C_word*)t0)[8];
f_5092(t4,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[13],t3);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[16]))){
t2=(C_word)C_a_i_list(&a,2,lf[63],((C_word*)t0)[17]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4624,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[16],a[9]=lf[119],tmp=(C_word)a,a+=10,tmp);
/* match.scm: 1717 emit */
t4=((C_word*)t0)[8];
f_5092(t4,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[13],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4656,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[17],a[13]=((C_word*)t0)[16],tmp=(C_word)a,a+=14,tmp);
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[16]))){
t3=(C_word)C_i_vector_length(((C_word*)t0)[16]);
if(C_truep((C_word)C_i_greater_or_equalp(t3,C_fix(6)))){
t4=(C_word)C_i_vector_length(((C_word*)t0)[16]);
t5=(C_word)C_a_i_minus(&a,2,t4,C_fix(5));
t6=(C_word)C_i_vector_ref(((C_word*)t0)[16],t5);
/* match.scm: 1733 dot-dot-k? */
f_1298(t2,t6);}
else{
t4=t2;
f_4656(2,t4,C_SCHEME_FALSE);}}
else{
t3=t2;
f_4656(2,t3,C_SCHEME_FALSE);}}}}

/* k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4656(C_word c,C_word t0,C_word t1){
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
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4656,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_vector_length(((C_word*)t0)[13]);
t3=(C_word)C_a_i_minus(&a,2,t2,C_fix(6));
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4662,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t3,tmp=(C_word)a,a+=14,tmp);
t5=(C_word)C_a_i_plus(&a,2,t3,C_fix(1));
t6=(C_word)C_i_vector_ref(((C_word*)t0)[13],t5);
/* match.scm: 1739 dot-dot-k? */
f_1298(t4,t6);}
else{
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[13]))){
t2=(C_word)C_i_vector_length(((C_word*)t0)[13]);
t3=(C_word)C_a_i_list(&a,2,lf[120],((C_word*)t0)[12]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4894,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[12],a[9]=lf[133],tmp=(C_word)a,a+=10,tmp);
/* match.scm: 1827 emit */
t5=((C_word*)t0)[5];
f_5092(t5,((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[6],t4);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4946,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1852 display */
t3=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[138]);}}}

/* k4944 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4949,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1854 newline */
t3=*((C_word*)lf[136]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4947 in k4944 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1855 ##sys#error */
t2=*((C_word*)lf[134]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_SCHEME_FALSE,lf[135]);}

/* a4893 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4894(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[34],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4894,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,2,lf[121],((C_word*)t0)[8]);
t4=(C_word)C_a_i_list(&a,3,lf[48],t3,((C_word*)t0)[7]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4906,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t4,a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4908,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[7],a[9]=lf[132],tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_4908(t9,t5,C_fix(0));}

/* vloop in a4893 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4908(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4908,NULL,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=lf[131],tmp=(C_word)a,a+=11,tmp));}

/* f_4910 in vloop in a4893 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4910(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4910,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nequalp(((C_word*)t0)[9],((C_word*)t0)[8]))){
/* match.scm: 1840 ks */
t3=((C_word*)t0)[7];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
t3=(C_word)C_i_vector_ref(((C_word*)t0)[6],((C_word*)t0)[9]);
t4=(C_word)C_a_i_list(&a,3,lf[23],((C_word*)t0)[5],((C_word*)t0)[9]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4935,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_a_i_plus(&a,2,C_fix(1),((C_word*)t0)[9]);
/* match.scm: 1849 vloop */
t7=((C_word*)((C_word*)t0)[2])[1];
f_4908(t7,t5,t6);}}

/* k4933 */
static void C_ccall f_4935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1841 next */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3946(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4904 in a4893 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1831 emit */
t2=((C_word*)t0)[6];
f_5092(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4660 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4662,2,t0,t1);}
t2=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[13],t1);
t3=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[13],C_fix(2));
t4=(C_word)C_i_vector_ref(((C_word*)t0)[12],t3);
t5=(C_word)C_a_i_list(&a,2,lf[120],((C_word*)t0)[11]);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4677,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t4,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[10],a[11]=t2,a[12]=((C_word*)t0)[11],a[13]=lf[130],tmp=(C_word)a,a+=14,tmp);
/* match.scm: 1750 emit */
t7=((C_word*)t0)[4];
f_5092(t7,((C_word*)t0)[3],t5,((C_word*)t0)[2],((C_word*)t0)[5],t6);}

/* a4676 in k4660 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4677(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[31],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4677,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,2,lf[121],((C_word*)t0)[12]);
t4=(C_word)C_a_i_list(&a,3,lf[122],t3,((C_word*)t0)[11]);
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=t2,a[13]=t4,a[14]=t1,a[15]=((C_word*)t0)[10],tmp=(C_word)a,a+=16,tmp);
/* match.scm: 1758 kf */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k4687 in a4676 in k4660 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4689,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4693,a[2]=t1,a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4696,a[2]=((C_word*)t0)[12],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4698,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=lf[129],tmp=(C_word)a,a+=14,tmp));
t7=((C_word*)t5)[1];
f_4698(t7,t3,C_fix(0));}

/* vloop in k4687 in a4676 in k4660 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4698(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4698,NULL,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t2,a[14]=lf[128],tmp=(C_word)a,a+=15,tmp));}

/* f_4700 in vloop in k4687 in a4676 in k4660 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4700(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[62],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4700,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nequalp(((C_word*)t0)[13],((C_word*)t0)[12]))){
t3=(C_word)C_i_vector_ref(((C_word*)t0)[11],((C_word*)t0)[12]);
t4=(C_word)C_eqp(t3,lf[98]);
if(C_truep(t4)){
/* match.scm: 1777 ks */
t5=((C_word*)t0)[10];
((C_proc3)C_retrieve_proc(t5))(3,t5,t1,t2);}
else{
t5=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[12],C_fix(3));
t6=(C_word)C_i_vector_ref(((C_word*)t0)[11],t5);
t7=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[12],C_fix(4));
t8=(C_word)C_i_vector_ref(((C_word*)t0)[11],t7);
t9=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[12],C_fix(5));
t10=(C_word)C_i_vector_ref(((C_word*)t0)[11],t9);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4747,a[2]=((C_word*)t0)[6],a[3]=t10,a[4]=t2,a[5]=((C_word*)t0)[10],a[6]=t6,a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=t8,a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
t12=(C_word)C_i_vector_ref(((C_word*)t0)[11],((C_word*)t0)[12]);
t13=(C_word)C_a_i_list(&a,3,lf[23],((C_word*)t0)[8],t8);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4810,a[2]=t10,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],a[5]=t6,a[6]=t8,a[7]=lf[127],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 1790 next */
t15=((C_word*)((C_word*)t0)[4])[1];
f_3946(t15,t11,t12,t13,t2,((C_word*)t0)[3],t14);}}
else{
t3=(C_word)C_i_vector_ref(((C_word*)t0)[11],((C_word*)t0)[13]);
t4=(C_word)C_a_i_list(&a,3,lf[23],((C_word*)t0)[8],((C_word*)t0)[13]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4722,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_a_i_plus(&a,2,C_fix(1),((C_word*)t0)[13]);
/* match.scm: 1771 vloop */
t7=((C_word*)((C_word*)t0)[2])[1];
f_4698(t7,t5,t6);}}

/* k4720 */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1763 next */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3946(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a4809 */
static void C_ccall f_4810(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4810,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,3,lf[123],((C_word*)t0)[6],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4826,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4828,a[2]=((C_word*)t0)[4],a[3]=lf[126],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1802 map */
t6=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4827 in a4809 */
static void C_ccall f_4828(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4828,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4836,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1804 val */
t5=((C_word*)t0)[2];
f_3830(3,t5,t4,t2);}

/* k4834 in a4827 in a4809 */
static void C_ccall f_4836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4836,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[111],t1,((C_word*)t0)[2]));}

/* k4824 in a4809 */
static void C_ccall f_4826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4826,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k4745 */
static void C_ccall f_4747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4751,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4800,a[2]=((C_word*)t0)[11],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1810 map */
t4=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,*((C_word*)lf[111]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4798 in k4745 */
static void C_ccall f_4800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1809 append */
t2=*((C_word*)lf[86]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k4749 in k4745 */
static void C_ccall f_4751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4751,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[11])+1,t1);
t3=(C_word)C_a_i_list(&a,2,lf[121],((C_word*)t0)[10]);
t4=(C_word)C_a_i_list(&a,3,lf[123],t3,C_fix(1));
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[9],t4);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4778,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[8],a[9]=t5,tmp=(C_word)a,a+=10,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4780,a[2]=lf[125],tmp=(C_word)a,a+=3,tmp);
/* map */
t8=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,((C_word*)t0)[2]);}

/* a4779 in k4749 in k4745 */
static void C_ccall f_4780(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4780,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,2,lf[54],C_SCHEME_END_OF_LIST);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,t2,t3));}

/* k4776 in k4749 in k4745 */
static void C_ccall f_4778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4778,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t1);
t3=(C_word)C_a_i_list(&a,3,lf[124],((C_word*)t0)[8],((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4770,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* match.scm: 1823 ks */
t5=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}

/* k4768 in k4776 in k4749 in k4745 */
static void C_ccall f_4770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4770,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[66],((C_word*)t0)[6],t1,((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,4,lf[26],((C_word*)t0)[3],((C_word*)t0)[2],t2));}

/* k4694 in k4687 in a4676 in k4660 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4691 in k4687 in a4676 in k4660 in k4654 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1755 assm */
t2=((C_word*)((C_word*)t0)[5])[1];
f_5274(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a4623 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4624(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4624,3,t0,t1,t2);}
t3=(C_word)C_i_car(((C_word*)t0)[8]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4636,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
/* match.scm: 1722 add-a */
t5=((C_word*)t0)[2];
f_6705(t5,t4,((C_word*)t0)[3]);}

/* k4634 in a4623 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4638,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=lf[118],tmp=(C_word)a,a+=9,tmp);
/* match.scm: 1721 next */
t3=((C_word*)((C_word*)t0)[9])[1];
f_3946(t3,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2],((C_word*)t0)[8],t2);}

/* a4637 in k4634 in a4623 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4638,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4650,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 1727 add-d */
t5=((C_word*)t0)[3];
f_6738(t5,t4,((C_word*)t0)[2]);}

/* k4648 in a4637 in k4634 in a4623 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1726 next */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3946(t2,((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4326(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4326,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4330,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[13]);
/* match.scm: 1620 dot-dot-k? */
f_1298(t3,t4);}

/* k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4331,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=lf[116],tmp=(C_word)a,a+=12,tmp);
switch(t1){
case C_fix(0):
/* match.scm: 1705 ks */
t3=t2;
f_4331(3,t3,((C_word*)t0)[5],((C_word*)t0)[4]);
case C_fix(1):
t3=(C_word)C_a_i_list(&a,2,lf[63],((C_word*)t0)[12]);
/* match.scm: 1706 emit */
t4=((C_word*)t0)[3];
f_5092(t4,((C_word*)t0)[5],t3,((C_word*)t0)[4],((C_word*)t0)[10],t2);
default:
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t4=(C_word)C_a_i_list(&a,2,t3,((C_word*)t0)[12]);
/* match.scm: 1711 emit */
t5=((C_word*)t0)[3];
f_5092(t5,((C_word*)t0)[5],t4,((C_word*)t0)[4],((C_word*)t0)[10],t2);}}

/* ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4331(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[30],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4331,3,t0,t1,t2);}
t3=(C_word)C_i_list_ref(((C_word*)t0)[10],C_fix(2));
t4=(C_word)C_i_car(((C_word*)t0)[10]);
t5=(C_word)C_eqp(t4,lf[98]);
if(C_truep(t5)){
/* match.scm: 1628 ks */
t6=((C_word*)t0)[9];
((C_proc3)C_retrieve_proc(t6))(3,t6,t1,t2);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4353,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t7=(C_word)C_i_car(((C_word*)t0)[10]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4430,a[2]=lf[107],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4433,a[2]=lf[108],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1630 next */
t10=((C_word*)((C_word*)t0)[4])[1];
f_3946(t10,t6,t7,((C_word*)t0)[5],t2,t8,t9);}
else{
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4440,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t7=(C_word)C_i_car(((C_word*)t0)[10]);
if(C_truep((C_word)C_i_symbolp(t7))){
t8=(C_word)C_i_car(((C_word*)t0)[10]);
t9=(C_word)C_a_i_list(&a,1,t8);
t10=t6;
f_4440(t10,(C_word)C_i_equalp(t9,t3));}
else{
t8=t6;
f_4440(t8,C_SCHEME_FALSE);}}}}

/* k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4440(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4440,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[11]);
/* match.scm: 1659 next */
t3=((C_word*)((C_word*)t0)[10])[1];
f_3946(t3,((C_word*)t0)[9],t2,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_list_ref(((C_word*)t0)[11],C_fix(3));
t3=(C_word)C_i_list_ref(((C_word*)t0)[11],C_fix(4));
t4=(C_word)C_i_list_ref(((C_word*)t0)[11],C_fix(5));
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4459,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[4],tmp=(C_word)a,a+=11,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[11]);
t7=(C_word)C_a_i_list(&a,2,lf[28],t3);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4524,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t3,a[7]=lf[115],tmp=(C_word)a,a+=8,tmp);
/* match.scm: 1673 next */
t9=((C_word*)((C_word*)t0)[10])[1];
f_3946(t9,t5,t6,t7,((C_word*)t0)[7],((C_word*)t0)[6],t8);}}

/* a4523 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4524(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4524,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,2,lf[29],((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4540,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4542,a[2]=((C_word*)t0)[4],a[3]=lf[114],tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1680 map */
t6=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4541 in a4523 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4542(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4542,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4550,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* match.scm: 1682 val */
t5=((C_word*)t0)[2];
f_3830(3,t5,t4,t2);}

/* k4548 in a4541 in a4523 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4550,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[111],t1,((C_word*)t0)[2]));}

/* k4538 in a4523 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4540,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k4457 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4463,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4504,a[2]=((C_word*)t0)[10],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4508,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4510,a[2]=lf[113],tmp=(C_word)a,a+=3,tmp);
/* map */
t6=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[3]);}

/* a4509 in k4457 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4510(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4510,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[112],t2));}

/* k4506 in k4457 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1688 map */
t2=*((C_word*)lf[110]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],*((C_word*)lf[111]+1),((C_word*)t0)[2],t1);}

/* k4502 in k4457 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1687 append */
t2=*((C_word*)lf[86]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k4461 in k4457 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4463,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[10])+1,t1);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[9],((C_word*)t0)[8]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[9],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4492,a[2]=lf[109],tmp=(C_word)a,a+=3,tmp);
/* map */
t6=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}

/* a4491 in k4461 in k4457 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4492(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4492,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,2,lf[54],C_SCHEME_END_OF_LIST);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,t2,t3));}

/* k4488 in k4461 in k4457 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4490,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(C_word)C_a_i_list(&a,2,lf[62],((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4482,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* match.scm: 1702 ks */
t5=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}

/* k4480 in k4488 in k4461 in k4457 in k4438 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4482,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[66],((C_word*)t0)[6],t1,((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,4,lf[26],((C_word*)t0)[3],((C_word*)t0)[2],t2));}

/* a4432 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4433(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4433,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* a4429 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4430(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4430,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* k4351 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4356,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4374,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t1))){
t4=(C_word)C_i_car(t1);
if(C_truep((C_word)C_i_symbolp(t4))){
t5=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_i_cadr(t1);
t7=(C_word)C_eqp(((C_word*)t0)[2],t6);
if(C_truep(t7)){
t8=(C_word)C_i_cddr(t1);
t9=t3;
f_4374(t9,(C_word)C_i_nullp(t8));}
else{
t8=t3;
f_4374(t8,C_SCHEME_FALSE);}}
else{
t6=t3;
f_4374(t6,C_SCHEME_FALSE);}}
else{
t5=t3;
f_4374(t5,C_SCHEME_FALSE);}}
else{
t4=t3;
f_4374(t4,C_SCHEME_FALSE);}}

/* k4372 in k4351 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4374(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4374,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_4356(t2,(C_word)C_i_car(((C_word*)t0)[3]));}
else{
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=((C_word*)t0)[4];
f_4356(t3,(C_word)C_a_i_list(&a,3,lf[25],t2,((C_word*)t0)[3]));}}

/* k4354 in k4351 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4356(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4356,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[91],t1,((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4367,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 1653 kf */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[3]);}

/* k4365 in k4354 in k4351 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4371,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 1654 ks */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k4369 in k4365 in k4354 in k4351 in ks in k4328 in a4325 in k4315 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1650 assm */
t2=((C_word*)((C_word*)t0)[5])[1];
f_5274(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4309 in k4290 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4311,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
/* match.scm: 1613 ks */
t5=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t5))(3,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4284 in k4265 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4286,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[5])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
/* match.scm: 1606 ks */
t5=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t5))(3,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4259 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4261,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4224,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4226,a[2]=t5,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=lf[105],tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_4226(t7,t3,C_fix(1));}

/* rloop in k4259 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4226(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4226,NULL,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=lf[104],tmp=(C_word)a,a+=11,tmp));}

/* f_4228 in rloop in k4259 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4228(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4228,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nequalp(((C_word*)t0)[9],((C_word*)t0)[8]))){
/* match.scm: 1590 ks */
t3=((C_word*)t0)[7];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
t3=(C_word)C_i_list_ref(((C_word*)t0)[6],((C_word*)t0)[9]);
t4=(C_word)C_a_i_list(&a,3,lf[30],((C_word*)t0)[5],((C_word*)t0)[9]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4253,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_a_i_plus(&a,2,C_fix(1),((C_word*)t0)[9]);
/* match.scm: 1597 rloop */
t7=((C_word*)((C_word*)t0)[2])[1];
f_4226(t7,t5,t6);}}

/* k4251 */
static void C_ccall f_4253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1591 next */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3946(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4222 in k4259 in k4203 in k4190 in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1583 emit */
t2=((C_word*)t0)[6];
f_5092(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4158(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4158,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 1560 kf */
t4=((C_word*)t0)[8];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t5=(C_word)C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4178,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=lf[102],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1563 next */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3946(t7,t1,t5,((C_word*)t0)[3],t3,t6,((C_word*)t0)[2]);}}

/* a4177 in loop in k4147 in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4178(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4178,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* match.scm: 1567 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4158(t4,t1,t3,t2);}

/* loop in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_4116(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4116,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* match.scm: 1547 ks */
t4=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4135,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=lf[100],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1548 next */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3946(t6,t1,t4,((C_word*)t0)[3],t3,((C_word*)t0)[2],t5);}}

/* a4134 in loop in k4105 in k4084 in k4068 in k4055 in next in k3942 in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_4135(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4135,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* match.scm: 1553 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4116(t4,t1,t3,t2);}

/* success in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3848(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3848,3,t0,t1,t2);}
t3=(C_word)C_i_car(((C_word*)t0)[4]);
t4=(C_word)C_i_cddddr(t3);
t5=(C_word)C_i_set_car(t4,C_SCHEME_TRUE);
t6=(C_word)C_i_car(((C_word*)t0)[4]);
t7=(C_word)C_i_cadr(t6);
t8=(C_word)C_i_car(((C_word*)t0)[4]);
t9=(C_word)C_i_caddr(t8);
t10=(C_word)C_i_car(((C_word*)t0)[4]);
t11=(C_word)C_i_cadddr(t10);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3910,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t7,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
/* map */
t13=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t12,((C_word*)t0)[2],t9);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3917,a[2]=t7,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* map */
t13=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t12,((C_word*)t0)[2],t9);}}

/* k3915 in success in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3917,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k3908 in success in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3910,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3902,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* match.scm: 1506 fail */
t6=((C_word*)t0)[3];
f_3839(3,t6,t5,((C_word*)t0)[2]);}

/* k3900 in k3908 in success in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[48],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3902,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_list(&a,3,lf[25],C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_a_i_list(&a,3,lf[26],t5,((C_word*)t0)[4]);
t7=(C_word)C_a_i_list(&a,3,lf[25],((C_word*)t0)[3],t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_list(&a,2,lf[70],t7));}

/* fail in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3839(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3839,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* match.scm: 1486 gen */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3819(t4,t1,((C_word*)t0)[5],t2,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* val in gen in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_3830(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3830,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_cdr(t3));}

/* dot-dot-k? in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_1298(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1298,NULL,2,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
t3=t2;
if(C_truep((C_truep((C_word)C_eqp(t3,lf[88]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,lf[89]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1314,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 820  symbol->string */
t5=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1312 in dot-dot-k? in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1314,2,t0,t1);}
t2=(C_word)C_i_string_length(t1);
if(C_truep((C_word)C_i_less_or_equalp(C_fix(3),t2))){
t3=(C_word)C_i_string_ref(t1,C_fix(0));
if(C_truep((C_truep((C_word)C_eqp(t3,C_make_character(46)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(95)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=(C_word)C_i_string_ref(t1,C_fix(1));
if(C_truep((C_truep((C_word)C_eqp(t4,C_make_character(46)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(95)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1341,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1352,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1356,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 828  substring */
t8=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,t1,C_fix(2),t2);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1354 in k1312 in dot-dot-k? in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 827  string->list */
t2=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1350 in k1312 in dot-dot-k? in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 825  andmap */
t2=*((C_word*)lf[91]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],*((C_word*)lf[92]+1),t1);}

/* k1339 in k1312 in dot-dot-k? in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1341,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1348,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* match.scm: 830  substring */
t3=*((C_word*)lf[90]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],C_fix(2),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1346 in k1339 in k1312 in dot-dot-k? in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_1348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 829  string->number */
C_string_to_number(3,0,((C_word*)t0)[2],t1);}

/* emit in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_5092(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5092,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t4,a[6]=t3,a[7]=t1,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
/* match.scm: 1858 in */
t7=((C_word*)t0)[2];
f_6299(t7,t6,t2,t3);}

/* k5097 in emit in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5099,2,t0,t1);}
if(C_truep(t1)){
/* match.scm: 1858 ks */
t2=((C_word*)t0)[8];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5108,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_a_i_list(&a,2,lf[56],((C_word*)t0)[4]);
/* match.scm: 1859 in */
t4=((C_word*)t0)[2];
f_6299(t4,t2,t3,((C_word*)t0)[6]);}}

/* k5106 in k5097 in emit in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5108(C_word c,C_word t0,C_word t1){
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
C_word ab[58],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5108,2,t0,t1);}
if(C_truep(t1)){
/* match.scm: 1859 kf */
t2=((C_word*)t0)[7];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5117,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
t5=(C_word)C_eqp(t4,lf[48]);
if(C_truep(t5)){
t6=(C_word)C_i_caddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_stringp(t6))){
t7=(C_word)C_a_i_list(&a,2,lf[49],t2);
t8=t3;
f_5117(t8,(C_word)C_a_i_list(&a,1,t7));}
else{
if(C_truep((C_word)C_booleanp(t6))){
t7=(C_word)C_a_i_list(&a,2,lf[50],t2);
t8=t3;
f_5117(t8,(C_word)C_a_i_list(&a,1,t7));}
else{
if(C_truep((C_word)C_charp(t6))){
t7=(C_word)C_a_i_list(&a,2,lf[51],t2);
t8=t3;
f_5117(t8,(C_word)C_a_i_list(&a,1,t7));}
else{
if(C_truep((C_word)C_i_numberp(t6))){
t7=(C_word)C_a_i_list(&a,2,lf[52],t2);
t8=t3;
f_5117(t8,(C_word)C_a_i_list(&a,1,t7));}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5230,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t6))){
t8=(C_word)C_i_car(t6);
t9=t7;
f_5230(t9,(C_word)C_eqp(lf[54],t8));}
else{
t8=t7;
f_5230(t8,C_SCHEME_FALSE);}}}}}}
else{
t6=(C_word)C_i_car(((C_word*)t0)[4]);
t7=(C_word)C_eqp(t6,lf[62]);
if(C_truep(t7)){
t8=(C_word)C_a_i_list(&a,2,lf[59],t2);
t9=t3;
f_5117(t9,(C_word)C_a_i_list(&a,1,t8));}
else{
t8=t3;
f_5117(t8,C_SCHEME_END_OF_LIST);}}}}

/* k5228 in k5106 in k5097 in emit in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_5230(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5230,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_list(&a,2,lf[53],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_5117(t3,(C_word)C_a_i_list(&a,1,t2));}
else{
t2=((C_word*)t0)[2];
f_5117(t2,C_SCHEME_END_OF_LIST);}}

/* k5115 in k5106 in k5097 in emit in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_5117(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5117,NULL,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5123,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_eqp(t2,lf[59]);
if(C_truep(t4)){
t5=(C_word)C_a_i_list(&a,2,lf[62],((C_word*)t0)[2]);
t6=(C_word)C_a_i_list(&a,2,lf[56],t5);
t7=t3;
f_5123(t7,(C_word)C_a_i_list(&a,1,t6));}
else{
t5=t3;
f_5123(t5,C_SCHEME_END_OF_LIST);}}

/* k5121 in k5115 in k5106 in k5097 in emit in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_5123(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5123,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5126,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5152,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1889 append */
t4=*((C_word*)lf[86]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k5150 in k5121 in k5115 in k5106 in k5097 in emit in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5152,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* match.scm: 1889 ks */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* k5124 in k5121 in k5115 in k5106 in k5097 in emit in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5129,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_a_i_list(&a,2,lf[56],((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5144,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1891 append */
t5=*((C_word*)lf[86]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5142 in k5124 in k5121 in k5115 in k5106 in k5097 in emit in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5144,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* match.scm: 1890 kf */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* k5127 in k5124 in k5121 in k5115 in k5106 in k5097 in emit in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1892 assm */
t2=((C_word*)((C_word*)t0)[5])[1];
f_5274(t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_5274(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5274,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_equalp(t4,t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_eqp(t4,C_SCHEME_TRUE);
t6=(C_truep(t5)?(C_word)C_eqp(t3,C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5293,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t8=(C_word)C_i_car(t2);
t9=(C_word)C_eqp(t8,lf[63]);
if(C_truep(t9)){
t10=*((C_word*)lf[9]+1);
if(C_truep((C_truep((C_word)C_eqp(t10,lf[83]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t10,lf[84]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t11=(C_word)C_i_car(t3);
if(C_truep((C_truep((C_word)C_eqp(t11,lf[65]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t11,lf[7]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t12=(C_word)C_i_cadr(t2);
/* match.scm: 1900 guarantees */
t13=((C_word*)t0)[2];
f_6168(t13,t7,t4,t12);}
else{
t12=t7;
f_5293(2,t12,C_SCHEME_FALSE);}}
else{
t11=t7;
f_5293(2,t11,C_SCHEME_FALSE);}}
else{
t10=t7;
f_5293(2,t10,C_SCHEME_FALSE);}}}}

/* k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5293,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5299,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[5]))){
t3=(C_word)C_i_car(((C_word*)t0)[5]);
t4=(C_word)C_eqp(t3,lf[66]);
if(C_truep(t4)){
t5=(C_word)C_i_cadddr(((C_word*)t0)[5]);
t6=t2;
f_5299(t6,(C_word)C_i_equalp(t5,((C_word*)t0)[3]));}
else{
t5=t2;
f_5299(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_5299(t3,C_SCHEME_FALSE);}}}

/* k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_5299(C_word t0,C_word t1){
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
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5299,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_i_car(t2);
t4=(C_word)C_eqp(t3,lf[69]);
if(C_truep(t4)){
t5=(C_word)C_i_cadr(((C_word*)t0)[6]);
t6=(C_word)C_i_cdr(t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=(C_word)C_a_i_cons(&a,2,lf[69],t7);
t9=(C_word)C_i_caddr(((C_word*)t0)[6]);
t10=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_list(&a,4,lf[66],t8,t9,((C_word*)t0)[3]));}
else{
t5=(C_word)C_i_cadr(((C_word*)t0)[6]);
t6=(C_word)C_a_i_list(&a,3,lf[69],((C_word*)t0)[5],t5);
t7=(C_word)C_i_caddr(((C_word*)t0)[6]);
t8=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_list(&a,4,lf[66],t6,t7,((C_word*)t0)[3]));}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5357,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[6]))){
t3=(C_word)C_i_car(((C_word*)t0)[6]);
t4=(C_word)C_eqp(t3,lf[70]);
if(C_truep(t4)){
t5=(C_word)C_i_cdr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_i_cadr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6098,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1917 caadr */
t8=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[6]);}
else{
t7=t2;
f_5357(t7,C_SCHEME_FALSE);}}
else{
t6=t2;
f_5357(t6,C_SCHEME_FALSE);}}
else{
t5=t2;
f_5357(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_5357(t3,C_SCHEME_FALSE);}}}

/* k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6098,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[25]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1918 cdadr */
t4=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_5357(t3,C_SCHEME_FALSE);}}

/* k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6094,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1919 cadadr */
t3=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6090,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1920 cadadr */
t3=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6086,2,t0,t1);}
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1921 cddadr */
t4=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_5357(t3,C_SCHEME_FALSE);}}

/* k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6078,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6074,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1922 cddadr */
t3=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6074,2,t0,t1);}
t2=(C_word)C_i_car(t1);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6066,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1923 cddadr */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_5357(t3,C_SCHEME_FALSE);}}

/* k6064 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1923 caar */
t2=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6062,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[26]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6058,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1924 cddadr */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_5357(t3,C_SCHEME_FALSE);}}

/* k6056 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1924 cdar */
t2=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6054,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6050,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1925 cddadr */
t4=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k6048 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1925 cadar */
t2=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6046,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6042,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1926 cddadr */
t4=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k6040 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1926 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6038,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6034,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1927 cddadr */
t4=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k6032 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1927 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6030,2,t0,t1);}
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6022,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1928 cddadr */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_5357(t3,C_SCHEME_FALSE);}}

/* k6020 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1928 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6018,2,t0,t1);}
t2=(C_word)C_i_cadr(t1);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6006,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6010,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1929 cddadr */
t6=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_5357(t3,C_SCHEME_FALSE);}}

/* k6008 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1929 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6004 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1929 caadr */
t2=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6002,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[25]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5994,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5998,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1930 cddadr */
t6=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_5357(t3,C_SCHEME_FALSE);}}

/* k5996 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1930 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5992 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1930 cdadr */
t2=*((C_word*)lf[80]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5990,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5982,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5986,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1931 cddadr */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k5984 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1931 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5980 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1931 cadadr */
t2=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5978,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5970,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5974,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1932 cddadr */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k5972 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1932 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5968 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1932 cddadr */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5966,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5958,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5962,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1933 cddadr */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k5960 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1933 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5956 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1933 cddadr */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5954,2,t0,t1);}
t2=(C_word)C_i_car(t1);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5938,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5942,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5946,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1934 cddadr */
t7=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_5357(t3,C_SCHEME_FALSE);}}

/* k5944 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1934 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5940 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1934 cddadr */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5936 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1934 cdar */
t2=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5934,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5922,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5926,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5930,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1935 cddadr */
t6=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k5928 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1935 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5924 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1935 cddadr */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5920 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1935 cddar */
t2=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5918,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5910,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5914,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1936 cddadr */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k5912 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1936 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5908 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1936 cddadr */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5906,2,t0,t1);}
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5898,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1937 cddadr */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_5357(t3,C_SCHEME_FALSE);}}

/* k5896 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1937 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5894,2,t0,t1);}
t2=(C_word)C_i_cddr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5886,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1938 cddadr */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
f_5357(t3,C_SCHEME_FALSE);}}

/* k5884 in k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1938 cdadar */
t2=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5880 in k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5882,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5878,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1939 cddadr */
t4=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k5876 in k5880 in k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1939 cddar */
t2=*((C_word*)lf[77]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5872 in k5880 in k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5874,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5870,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1940 cddadr */
t4=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k5868 in k5872 in k5880 in k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1940 cdddar */
t2=*((C_word*)lf[76]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5864 in k5872 in k5880 in k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5866,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1941 cddadr */
t3=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];
f_5357(t2,C_SCHEME_FALSE);}}

/* k5860 in k5864 in k5872 in k5880 in k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5862(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5862,2,t0,t1);}
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_cddr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5842,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5846,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5850,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1943 cddadr */
t8=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[3];
f_5357(t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[3];
f_5357(t3,C_SCHEME_FALSE);}}

/* k5848 in k5860 in k5864 in k5872 in k5880 in k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1943 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5844 in k5860 in k5864 in k5872 in k5880 in k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1943 cddadr */
t2=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5840 in k5860 in k5864 in k5872 in k5880 in k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1943 cadar */
t2=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5836 in k5860 in k5864 in k5872 in k5880 in k5892 in k5904 in k5916 in k5932 in k5952 in k5964 in k5976 in k5988 in k6000 in k6016 in k6028 in k6036 in k6044 in k6052 in k6060 in k6072 in k6076 in k6084 in k6088 in k6092 in k6096 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_5357(t2,(C_word)C_i_equalp(((C_word*)t0)[2],t1));}

/* k5355 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_5357(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5357,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* match.scm: 1943 cadadr */
t3=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[66],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[6]));}}

/* k5419 in k5355 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5421,2,t0,t1);}
t2=(C_word)C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5413,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5417,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1946 cddadr */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k5415 in k5419 in k5355 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1945 caadar */
t2=*((C_word*)lf[73]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5411 in k5419 in k5355 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5413,2,t0,t1);}
t2=(C_word)C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5366,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5409,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* match.scm: 1949 cddadr */
t5=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k5407 in k5411 in k5419 in k5355 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 1948 caddar */
t2=*((C_word*)lf[71]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5364 in k5411 in k5419 in k5355 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5366,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
t4=(C_word)C_a_i_list(&a,3,lf[25],C_SCHEME_END_OF_LIST,t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t4);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5389,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
/* match.scm: 1955 assm */
t9=((C_word*)((C_word*)t0)[3])[1];
f_5274(t9,t7,((C_word*)t0)[2],t8,t1);}

/* k5387 in k5364 in k5411 in k5419 in k5355 in k5297 in k5291 in assm in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_5389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5389,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[26],((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_list(&a,3,lf[25],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,lf[70],t3));}

/* guarantees in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6168(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6168,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6172,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* match.scm: 1986 add-a */
t5=((C_word*)t0)[2];
f_6705(t5,t4,t3);}

/* k6170 in guarantees in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6175,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* match.scm: 1986 add-d */
t3=((C_word*)t0)[3];
f_6738(t3,t2,((C_word*)t0)[2]);}

/* k6173 in k6170 in guarantees in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6175,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6180,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=lf[67],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_6180(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k6173 in k6170 in guarantees in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6180(C_word t0,C_word t1,C_word t2){
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
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6180,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_car(t2);
if(C_truep((C_truep((C_word)C_eqp(t3,lf[65]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,lf[7]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_equalp(t2,((C_word*)t0)[4]);
t5=(C_truep(t4)?t4:(C_word)C_i_equalp(t2,((C_word*)t0)[3]));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_TRUE);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(t6,lf[66]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6211,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_i_cadr(t2);
/* match.scm: 1992 loop */
t17=t8;
t18=t9;
t1=t17;
t2=t18;
goto loop;}
else{
t8=(C_word)C_i_car(t2);
t9=(C_word)C_eqp(t8,lf[25]);
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6247,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=(C_word)C_i_car(t2);
t12=(C_word)C_eqp(t11,lf[26]);
if(C_truep(t12)){
t13=(C_word)C_i_cadr(t2);
t14=t10;
f_6247(t14,(C_word)C_i_symbolp(t13));}
else{
t13=t10;
f_6247(t13,C_SCHEME_FALSE);}}}}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k6245 in loop in k6173 in k6170 in guarantees in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6247(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6247,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* match.scm: 2000 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6180(t4,t2,t3);}}

/* k6248 in k6245 in loop in k6173 in k6170 in guarantees in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* match.scm: 2001 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6180(t3,((C_word*)t0)[4],t2);}}

/* k6209 in loop in k6173 in k6170 in guarantees in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6211,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6220,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[3]);
/* match.scm: 1993 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6180(t4,t2,t3);}}

/* k6218 in k6209 in loop in k6173 in k6170 in guarantees in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadddr(((C_word*)t0)[4]);
/* match.scm: 1995 loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6180(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* in in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6299(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6299,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_member(t2,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6309,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(t6,lf[59]);
if(C_truep(t7)){
t8=(C_word)C_i_cadr(t2);
t9=(C_word)C_a_i_list(&a,2,lf[62],t8);
t10=(C_word)C_i_member(t9,t3);
if(C_truep(t10)){
t11=t5;
f_6309(t11,t10);}
else{
t11=(C_word)C_i_cadr(t2);
t12=(C_word)C_a_i_list(&a,2,lf[63],t11);
t13=t5;
f_6309(t13,(C_word)C_i_member(t12,t3));}}
else{
t8=t5;
f_6309(t8,C_SCHEME_FALSE);}}}

/* k6307 in in in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6309(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6309,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_eqp(t2,lf[56]);
if(C_truep(t3)){
t4=(C_word)C_i_cadr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* match.scm: 2009 equal-test? */
f_6609(t5,t4);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}

/* k6322 in k6307 in in in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6324(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6324,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6332,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=lf[57],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_6332(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=f_6695(((C_word*)t0)[6]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6450,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=t4,a[5]=lf[58],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6450(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=(C_word)C_i_car(((C_word*)t0)[6]);
t4=(C_word)C_eqp(t3,lf[59]);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6516,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=t6,a[5]=lf[61],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_6516(t8,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}}}

/* mem in k6322 in k6307 in in in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6516(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6516,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6529,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cadr(t3);
t6=(C_word)C_i_cadr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_equalp(t5,t6))){
t7=f_6695(t3);
if(C_truep(t7)){
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_memq(t8,lf[60]);
t10=t4;
f_6529(t10,(C_word)C_i_not(t9));}
else{
t8=t4;
f_6529(t8,C_SCHEME_FALSE);}}
else{
t7=t4;
f_6529(t7,C_SCHEME_FALSE);}}}

/* k6527 in mem in k6322 in k6307 in in in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6529(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* match.scm: 2062 mem */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6516(t3,((C_word*)t0)[4],t2);}}

/* mem in k6322 in k6307 in in in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6450(C_word t0,C_word t1,C_word t2){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6450,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6463,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cadr(t3);
t6=(C_word)C_i_cadr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_equalp(t5,t6))){
t7=f_6695(t3);
if(C_truep(t7)){
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_car(((C_word*)t0)[3]);
t10=(C_word)C_i_equalp(t8,t9);
t11=t4;
f_6463(t11,(C_word)C_i_not(t10));}
else{
t8=t4;
f_6463(t8,C_SCHEME_FALSE);}}
else{
t7=t4;
f_6463(t7,C_SCHEME_FALSE);}}}

/* k6461 in mem in k6322 in k6307 in in in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6463(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* match.scm: 2048 mem */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6450(t3,((C_word*)t0)[4],t2);}}

/* mem in k6322 in k6307 in in in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6332(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_6332,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6345,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_i_cadr(t3);
t6=(C_word)C_i_cadr(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_equalp(t5,t6))){
t7=f_6695(t3);
if(C_truep(t7)){
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_equalp(((C_word*)t0)[5],t8);
t10=t4;
f_6345(t10,(C_word)C_i_not(t9));}
else{
t8=t4;
f_6345(t8,C_SCHEME_FALSE);}}
else{
t7=t4;
f_6345(t7,C_SCHEME_FALSE);}}}

/* k6343 in mem in k6322 in k6307 in in in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6345,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_list(&a,2,lf[56],t3);
t5=(C_word)C_i_equalp(((C_word*)t0)[5],t4);
if(C_truep(t5)){
t6=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6357,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_cadr(((C_word*)t0)[5]);
t8=(C_word)C_i_cadr(((C_word*)t0)[7]);
if(C_truep((C_word)C_i_equalp(t7,t8))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6376,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* match.scm: 2029 equal-test? */
f_6609(t9,((C_word*)t0)[5]);}
else{
t9=t6;
f_6357(t9,C_SCHEME_FALSE);}}}}

/* k6374 in k6343 in mem in k6322 in k6307 in in in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[4]);
t3=(C_word)C_i_caddr(((C_word*)t0)[3]);
t4=(C_word)C_i_equalp(t2,t3);
t5=((C_word*)t0)[2];
f_6357(t5,(C_word)C_i_not(t4));}
else{
t2=((C_word*)t0)[2];
f_6357(t2,C_SCHEME_FALSE);}}

/* k6355 in k6343 in mem in k6322 in k6307 in in in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6357(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* match.scm: 2035 mem */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6332(t3,((C_word*)t0)[4],t2);}}

/* equal-test? in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6609(C_word t1,C_word t2){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6609,NULL,2,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_eqp(t3,lf[48]);
if(C_truep(t4)){
t5=(C_word)C_i_caddr(t2);
if(C_truep((C_word)C_i_stringp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[49]);}
else{
if(C_truep((C_word)C_booleanp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[50]);}
else{
if(C_truep((C_word)C_charp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[51]);}
else{
if(C_truep((C_word)C_i_numberp(t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[52]);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6649,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t5))){
t7=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_pairp(t7))){
t8=(C_word)C_i_cddr(t5);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_car(t5);
t10=(C_word)C_eqp(lf[54],t9);
if(C_truep(t10)){
t11=(C_word)C_i_cadr(t5);
t12=t6;
f_6649(t12,(C_word)C_i_symbolp(t11));}
else{
t11=t6;
f_6649(t11,C_SCHEME_FALSE);}}
else{
t9=t6;
f_6649(t9,C_SCHEME_FALSE);}}
else{
t8=t6;
f_6649(t8,C_SCHEME_FALSE);}}
else{
t7=t6;
f_6649(t7,C_SCHEME_FALSE);}}}}}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k6647 in equal-test? in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6649(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?lf[53]:C_SCHEME_FALSE));}

/* disjoint? in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static C_word C_fcall f_6695(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_car(t1);
return((C_word)C_i_memq(t2,*((C_word*)lf[15]+1)));}

/* add-a in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6705(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6705,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6709,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=t3;
f_6709(t5,(C_word)C_i_assq(t4,((C_word*)t0)[2]));}
else{
t4=t3;
f_6709(t4,C_SCHEME_FALSE);}}

/* k6707 in add-a in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6709(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6709,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,lf[28],((C_word*)t0)[3]));}}

/* add-d in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6738(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6738,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6742,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=t3;
f_6742(t5,(C_word)C_i_assq(t4,((C_word*)t0)[2]));}
else{
t4=t3;
f_6742(t4,C_SCHEME_FALSE);}}

/* k6740 in add-d in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6742(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6742,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cddr(t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,lf[29],((C_word*)t0)[3]));}}

/* setter in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6772(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[233],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6772,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6774,a[2]=((C_word*)t0)[3],a[3]=lf[35],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_eqp(t5,lf[23]);
if(C_truep(t6)){
t7=(C_word)C_i_cadr(t2);
t8=(C_word)C_a_i_list(&a,2,lf[24],t7);
t9=(C_word)C_a_i_list(&a,1,t8);
t10=(C_word)C_a_i_list(&a,1,lf[36]);
t11=(C_word)C_i_caddr(t2);
t12=(C_word)C_a_i_list(&a,4,lf[37],lf[24],t11,lf[36]);
t13=(C_word)C_a_i_list(&a,3,lf[25],t10,t12);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)C_a_i_list(&a,3,lf[26],t9,t13));}
else{
t7=(C_word)C_i_car(t2);
t8=(C_word)C_eqp(t7,lf[27]);
if(C_truep(t8)){
t9=(C_word)C_i_cadr(t2);
t10=(C_word)C_a_i_list(&a,2,lf[24],t9);
t11=(C_word)C_a_i_list(&a,1,t10);
t12=(C_word)C_a_i_list(&a,1,lf[36]);
t13=(C_word)C_a_i_list(&a,3,lf[38],lf[24],lf[36]);
t14=(C_word)C_a_i_list(&a,3,lf[25],t12,t13);
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_a_i_list(&a,3,lf[26],t11,t14));}
else{
t9=(C_word)C_i_car(t2);
t10=(C_word)C_eqp(t9,lf[28]);
if(C_truep(t10)){
t11=(C_word)C_i_cadr(t2);
t12=(C_word)C_a_i_list(&a,2,lf[24],t11);
t13=(C_word)C_a_i_list(&a,1,t12);
t14=(C_word)C_a_i_list(&a,1,lf[36]);
t15=(C_word)C_a_i_list(&a,3,lf[39],lf[24],lf[36]);
t16=(C_word)C_a_i_list(&a,3,lf[25],t14,t15);
t17=t1;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,(C_word)C_a_i_list(&a,3,lf[26],t13,t16));}
else{
t11=(C_word)C_i_car(t2);
t12=(C_word)C_eqp(t11,lf[29]);
if(C_truep(t12)){
t13=(C_word)C_i_cadr(t2);
t14=(C_word)C_a_i_list(&a,2,lf[24],t13);
t15=(C_word)C_a_i_list(&a,1,t14);
t16=(C_word)C_a_i_list(&a,1,lf[36]);
t17=(C_word)C_a_i_list(&a,3,lf[40],lf[24],lf[36]);
t18=(C_word)C_a_i_list(&a,3,lf[25],t16,t17);
t19=t1;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,(C_word)C_a_i_list(&a,3,lf[26],t15,t18));}
else{
t13=(C_word)C_i_car(t2);
t14=(C_word)C_eqp(t13,lf[30]);
if(C_truep(t14)){
t15=(C_word)C_i_cadr(t2);
t16=(C_word)C_a_i_list(&a,2,lf[24],t15);
t17=(C_word)C_a_i_list(&a,1,t16);
t18=(C_word)C_a_i_list(&a,1,lf[36]);
t19=(C_word)C_i_caddr(t2);
t20=(C_word)C_a_i_list(&a,4,lf[41],lf[24],t19,lf[36]);
t21=(C_word)C_a_i_list(&a,3,lf[25],t18,t20);
t22=t1;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,(C_word)C_a_i_list(&a,3,lf[26],t17,t21));}
else{
t15=(C_word)C_i_car(t2);
t16=(C_word)C_i_assq(t15,((C_word*)t0)[2]);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6966,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t16)){
t18=(C_word)C_i_cadr(t16);
t19=(C_word)C_i_cadr(t2);
t20=(C_word)C_a_i_list(&a,2,t18,t19);
t21=(C_word)C_a_i_list(&a,2,lf[24],t20);
t22=(C_word)C_a_i_list(&a,1,t21);
t23=(C_word)C_a_i_list(&a,1,lf[36]);
t24=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7027,a[2]=t22,a[3]=t17,a[4]=t23,tmp=(C_word)a,a+=5,tmp);
t25=(C_word)C_i_cddr(t16);
/* match.scm: 2130 mk-setter */
t26=t4;
f_6774(t26,t24,t25);}
else{
t18=t17;
f_6966(t18,C_SCHEME_FALSE);}}}}}}}
else{
/* match.scm: 2104 ##match#syntax-err */
t5=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,lf[42]);}}

/* k7025 in setter in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7027,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,t1,lf[24],lf[36]);
t3=(C_word)C_a_i_list(&a,3,lf[25],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
f_6966(t4,(C_word)C_a_i_list(&a,3,lf[26],((C_word*)t0)[2],t3));}

/* k6964 in setter in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6966(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6966,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,2,lf[24],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(C_word)C_a_i_list(&a,1,lf[36]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6992,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_car(((C_word*)t0)[3]);
/* match.scm: 2132 mk-setter */
t8=((C_word*)t0)[2];
f_6774(t8,t6,t7);}}

/* k6990 in k6964 in setter in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_6992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6992,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,t1,lf[24],lf[36]);
t3=(C_word)C_a_i_list(&a,3,lf[25],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[26],((C_word*)t0)[2],t3));}

/* mk-setter in setter in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_6774(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6774,NULL,3,t0,t1,t2);}
/* match.scm: 2102 symbol-append */
f_7342(t1,(C_word)C_a_i_list(&a,3,lf[33],t2,lf[34]));}

/* getter in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7077(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[214],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7077,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(t4,lf[23]);
if(C_truep(t5)){
t6=(C_word)C_i_cadr(t2);
t7=(C_word)C_a_i_list(&a,2,lf[24],t6);
t8=(C_word)C_a_i_list(&a,1,t7);
t9=(C_word)C_i_caddr(t2);
t10=(C_word)C_a_i_list(&a,3,lf[23],lf[24],t9);
t11=(C_word)C_a_i_list(&a,3,lf[25],C_SCHEME_END_OF_LIST,t10);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_list(&a,3,lf[26],t8,t11));}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(t6,lf[27]);
if(C_truep(t7)){
t8=(C_word)C_i_cadr(t2);
t9=(C_word)C_a_i_list(&a,2,lf[24],t8);
t10=(C_word)C_a_i_list(&a,1,t9);
t11=(C_word)C_a_i_list(&a,2,lf[27],lf[24]);
t12=(C_word)C_a_i_list(&a,3,lf[25],C_SCHEME_END_OF_LIST,t11);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_word)C_a_i_list(&a,3,lf[26],t10,t12));}
else{
t8=(C_word)C_i_car(t2);
t9=(C_word)C_eqp(t8,lf[28]);
if(C_truep(t9)){
t10=(C_word)C_i_cadr(t2);
t11=(C_word)C_a_i_list(&a,2,lf[24],t10);
t12=(C_word)C_a_i_list(&a,1,t11);
t13=(C_word)C_a_i_list(&a,2,lf[28],lf[24]);
t14=(C_word)C_a_i_list(&a,3,lf[25],C_SCHEME_END_OF_LIST,t13);
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_a_i_list(&a,3,lf[26],t12,t14));}
else{
t10=(C_word)C_i_car(t2);
t11=(C_word)C_eqp(t10,lf[29]);
if(C_truep(t11)){
t12=(C_word)C_i_cadr(t2);
t13=(C_word)C_a_i_list(&a,2,lf[24],t12);
t14=(C_word)C_a_i_list(&a,1,t13);
t15=(C_word)C_a_i_list(&a,2,lf[29],lf[24]);
t16=(C_word)C_a_i_list(&a,3,lf[25],C_SCHEME_END_OF_LIST,t15);
t17=t1;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,(C_word)C_a_i_list(&a,3,lf[26],t14,t16));}
else{
t12=(C_word)C_i_car(t2);
t13=(C_word)C_eqp(t12,lf[30]);
if(C_truep(t13)){
t14=(C_word)C_i_cadr(t2);
t15=(C_word)C_a_i_list(&a,2,lf[24],t14);
t16=(C_word)C_a_i_list(&a,1,t15);
t17=(C_word)C_i_caddr(t2);
t18=(C_word)C_a_i_list(&a,3,lf[30],lf[24],t17);
t19=(C_word)C_a_i_list(&a,3,lf[25],C_SCHEME_END_OF_LIST,t18);
t20=t1;
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,(C_word)C_a_i_list(&a,3,lf[26],t16,t19));}
else{
t14=(C_word)C_i_car(t2);
t15=(C_word)C_i_assq(t14,((C_word*)t0)[2]);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7246,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t15)){
t17=(C_word)C_i_cadr(t15);
t18=(C_word)C_i_cadr(t2);
t19=(C_word)C_a_i_list(&a,2,t17,t18);
t20=(C_word)C_a_i_list(&a,2,lf[24],t19);
t21=(C_word)C_a_i_list(&a,1,t20);
t22=(C_word)C_i_cddr(t15);
t23=(C_word)C_a_i_list(&a,2,t22,lf[24]);
t24=(C_word)C_a_i_list(&a,3,lf[25],C_SCHEME_END_OF_LIST,t23);
t25=t16;
f_7246(t25,(C_word)C_a_i_list(&a,3,lf[26],t21,t24));}
else{
t17=t16;
f_7246(t17,C_SCHEME_FALSE);}}}}}}}
else{
/* match.scm: 2135 ##match#syntax-err */
t4=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t3,lf[31]);}}

/* k7244 in getter in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7246(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7246,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_i_cadr(((C_word*)t0)[2]);
t3=(C_word)C_a_i_list(&a,2,lf[24],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(C_word)C_i_car(((C_word*)t0)[2]);
t6=(C_word)C_a_i_list(&a,2,t5,lf[24]);
t7=(C_word)C_a_i_list(&a,3,lf[25],C_SCHEME_END_OF_LIST,t6);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_list(&a,3,lf[26],t4,t7));}}

/* symbol-append in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_fcall f_7342(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7342,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7350,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7354,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7356,a[2]=lf[19],tmp=(C_word)a,a+=3,tmp);
/* map */
t6=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* a7355 in symbol-append in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7356(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7356,3,t0,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
/* match.scm: 2192 symbol->string */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_i_numberp(t2))){
/* match.scm: 2193 number->string */
C_number_to_string(3,0,t1,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}}

/* k7352 in symbol-append in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[17]+1),t1);}

/* k7348 in symbol-append in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_7350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* match.scm: 2187 string->symbol */
t2=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* ##match#set-error-control in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_719(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_719,3,t0,t1,t2);}
t3=C_mutate((C_word*)lf[9]+1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* ##match#set-error in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_714(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_714,3,t0,t1,t2);}
t3=C_mutate((C_word*)lf[7]+1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* ##match#syntax-err in k704 in k701 in k698 in k695 in k692 in k689 in k686 */
static void C_ccall f_708(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_708,4,t0,t1,t2,t3);}
/* match.scm: 654  ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,lf[4],t3,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[695] = {
{"toplevelmatch.scm",(void*)C_match_toplevel},
{"f_10802match.scm",(void*)f_10802},
{"f_10883match.scm",(void*)f_10883},
{"f_10809match.scm",(void*)f_10809},
{"f_10818match.scm",(void*)f_10818},
{"f_10845match.scm",(void*)f_10845},
{"f_688match.scm",(void*)f_688},
{"f_10736match.scm",(void*)f_10736},
{"f_10776match.scm",(void*)f_10776},
{"f_10783match.scm",(void*)f_10783},
{"f_10743match.scm",(void*)f_10743},
{"f_10746match.scm",(void*)f_10746},
{"f_691match.scm",(void*)f_691},
{"f_10674match.scm",(void*)f_10674},
{"f_10710match.scm",(void*)f_10710},
{"f_10717match.scm",(void*)f_10717},
{"f_10681match.scm",(void*)f_10681},
{"f_10684match.scm",(void*)f_10684},
{"f_694match.scm",(void*)f_694},
{"f_9124match.scm",(void*)f_9124},
{"f_10654match.scm",(void*)f_10654},
{"f_10650match.scm",(void*)f_10650},
{"f_10646match.scm",(void*)f_10646},
{"f_10114match.scm",(void*)f_10114},
{"f_10529match.scm",(void*)f_10529},
{"f_10626match.scm",(void*)f_10626},
{"f_10622match.scm",(void*)f_10622},
{"f_10580match.scm",(void*)f_10580},
{"f_10603match.scm",(void*)f_10603},
{"f_10599match.scm",(void*)f_10599},
{"f_10542match.scm",(void*)f_10542},
{"f_10549match.scm",(void*)f_10549},
{"f_10553match.scm",(void*)f_10553},
{"f_10520match.scm",(void*)f_10520},
{"f_10516match.scm",(void*)f_10516},
{"f_10512match.scm",(void*)f_10512},
{"f_10508match.scm",(void*)f_10508},
{"f_10504match.scm",(void*)f_10504},
{"f_10496match.scm",(void*)f_10496},
{"f_10236match.scm",(void*)f_10236},
{"f_10367match.scm",(void*)f_10367},
{"f_10464match.scm",(void*)f_10464},
{"f_10460match.scm",(void*)f_10460},
{"f_10418match.scm",(void*)f_10418},
{"f_10441match.scm",(void*)f_10441},
{"f_10437match.scm",(void*)f_10437},
{"f_10380match.scm",(void*)f_10380},
{"f_10387match.scm",(void*)f_10387},
{"f_10391match.scm",(void*)f_10391},
{"f_10242match.scm",(void*)f_10242},
{"f_10278match.scm",(void*)f_10278},
{"f_10340match.scm",(void*)f_10340},
{"f_10336match.scm",(void*)f_10336},
{"f_10294match.scm",(void*)f_10294},
{"f_10317match.scm",(void*)f_10317},
{"f_10313match.scm",(void*)f_10313},
{"f_10249match.scm",(void*)f_10249},
{"f_10253match.scm",(void*)f_10253},
{"f_10257match.scm",(void*)f_10257},
{"f_10269match.scm",(void*)f_10269},
{"f_10126match.scm",(void*)f_10126},
{"f_10150match.scm",(void*)f_10150},
{"f_10212match.scm",(void*)f_10212},
{"f_10208match.scm",(void*)f_10208},
{"f_10166match.scm",(void*)f_10166},
{"f_10189match.scm",(void*)f_10189},
{"f_10185match.scm",(void*)f_10185},
{"f_10133match.scm",(void*)f_10133},
{"f_10137match.scm",(void*)f_10137},
{"f_10064match.scm",(void*)f_10064},
{"f_10087match.scm",(void*)f_10087},
{"f_10071match.scm",(void*)f_10071},
{"f_9408match.scm",(void*)f_9408},
{"f_10058match.scm",(void*)f_10058},
{"f_10054match.scm",(void*)f_10054},
{"f_10050match.scm",(void*)f_10050},
{"f_9512match.scm",(void*)f_9512},
{"f_9927match.scm",(void*)f_9927},
{"f_10024match.scm",(void*)f_10024},
{"f_10020match.scm",(void*)f_10020},
{"f_9978match.scm",(void*)f_9978},
{"f_10001match.scm",(void*)f_10001},
{"f_9997match.scm",(void*)f_9997},
{"f_9940match.scm",(void*)f_9940},
{"f_9947match.scm",(void*)f_9947},
{"f_9951match.scm",(void*)f_9951},
{"f_9918match.scm",(void*)f_9918},
{"f_9914match.scm",(void*)f_9914},
{"f_9910match.scm",(void*)f_9910},
{"f_9906match.scm",(void*)f_9906},
{"f_9902match.scm",(void*)f_9902},
{"f_9894match.scm",(void*)f_9894},
{"f_9634match.scm",(void*)f_9634},
{"f_9765match.scm",(void*)f_9765},
{"f_9862match.scm",(void*)f_9862},
{"f_9858match.scm",(void*)f_9858},
{"f_9816match.scm",(void*)f_9816},
{"f_9839match.scm",(void*)f_9839},
{"f_9835match.scm",(void*)f_9835},
{"f_9778match.scm",(void*)f_9778},
{"f_9785match.scm",(void*)f_9785},
{"f_9789match.scm",(void*)f_9789},
{"f_9640match.scm",(void*)f_9640},
{"f_9676match.scm",(void*)f_9676},
{"f_9738match.scm",(void*)f_9738},
{"f_9734match.scm",(void*)f_9734},
{"f_9692match.scm",(void*)f_9692},
{"f_9715match.scm",(void*)f_9715},
{"f_9711match.scm",(void*)f_9711},
{"f_9647match.scm",(void*)f_9647},
{"f_9651match.scm",(void*)f_9651},
{"f_9655match.scm",(void*)f_9655},
{"f_9667match.scm",(void*)f_9667},
{"f_9524match.scm",(void*)f_9524},
{"f_9548match.scm",(void*)f_9548},
{"f_9610match.scm",(void*)f_9610},
{"f_9606match.scm",(void*)f_9606},
{"f_9564match.scm",(void*)f_9564},
{"f_9587match.scm",(void*)f_9587},
{"f_9583match.scm",(void*)f_9583},
{"f_9531match.scm",(void*)f_9531},
{"f_9535match.scm",(void*)f_9535},
{"f_9414match.scm",(void*)f_9414},
{"f_9426match.scm",(void*)f_9426},
{"f_9488match.scm",(void*)f_9488},
{"f_9484match.scm",(void*)f_9484},
{"f_9442match.scm",(void*)f_9442},
{"f_9465match.scm",(void*)f_9465},
{"f_9461match.scm",(void*)f_9461},
{"f_9236match.scm",(void*)f_9236},
{"f_9245match.scm",(void*)f_9245},
{"f_9375match.scm",(void*)f_9375},
{"f_9371match.scm",(void*)f_9371},
{"f_9329match.scm",(void*)f_9329},
{"f_9352match.scm",(void*)f_9352},
{"f_9348match.scm",(void*)f_9348},
{"f_9258match.scm",(void*)f_9258},
{"f_9264match.scm",(void*)f_9264},
{"f_9267match.scm",(void*)f_9267},
{"f_9276match.scm",(void*)f_9276},
{"f_9177match.scm",(void*)f_9177},
{"f_9181match.scm",(void*)f_9181},
{"f_9184match.scm",(void*)f_9184},
{"f_9168match.scm",(void*)f_9168},
{"f_9135match.scm",(void*)f_9135},
{"f_9163match.scm",(void*)f_9163},
{"f_9139match.scm",(void*)f_9139},
{"f_9142match.scm",(void*)f_9142},
{"f_9149match.scm",(void*)f_9149},
{"f_9126match.scm",(void*)f_9126},
{"f_697match.scm",(void*)f_697},
{"f_8936match.scm",(void*)f_8936},
{"f_9111match.scm",(void*)f_9111},
{"f_9107match.scm",(void*)f_9107},
{"f_9103match.scm",(void*)f_9103},
{"f_9099match.scm",(void*)f_9099},
{"f_8993match.scm",(void*)f_8993},
{"f_8996match.scm",(void*)f_8996},
{"f_8999match.scm",(void*)f_8999},
{"f_9002match.scm",(void*)f_9002},
{"f_9011match.scm",(void*)f_9011},
{"f_8964match.scm",(void*)f_8964},
{"f_8938match.scm",(void*)f_8938},
{"f_700match.scm",(void*)f_700},
{"f_7569match.scm",(void*)f_7569},
{"f_8920match.scm",(void*)f_8920},
{"f_8916match.scm",(void*)f_8916},
{"f_8912match.scm",(void*)f_8912},
{"f_8380match.scm",(void*)f_8380},
{"f_8795match.scm",(void*)f_8795},
{"f_8892match.scm",(void*)f_8892},
{"f_8888match.scm",(void*)f_8888},
{"f_8846match.scm",(void*)f_8846},
{"f_8869match.scm",(void*)f_8869},
{"f_8865match.scm",(void*)f_8865},
{"f_8808match.scm",(void*)f_8808},
{"f_8815match.scm",(void*)f_8815},
{"f_8819match.scm",(void*)f_8819},
{"f_8786match.scm",(void*)f_8786},
{"f_8782match.scm",(void*)f_8782},
{"f_8778match.scm",(void*)f_8778},
{"f_8774match.scm",(void*)f_8774},
{"f_8770match.scm",(void*)f_8770},
{"f_8762match.scm",(void*)f_8762},
{"f_8502match.scm",(void*)f_8502},
{"f_8633match.scm",(void*)f_8633},
{"f_8730match.scm",(void*)f_8730},
{"f_8726match.scm",(void*)f_8726},
{"f_8684match.scm",(void*)f_8684},
{"f_8707match.scm",(void*)f_8707},
{"f_8703match.scm",(void*)f_8703},
{"f_8646match.scm",(void*)f_8646},
{"f_8653match.scm",(void*)f_8653},
{"f_8657match.scm",(void*)f_8657},
{"f_8508match.scm",(void*)f_8508},
{"f_8544match.scm",(void*)f_8544},
{"f_8606match.scm",(void*)f_8606},
{"f_8602match.scm",(void*)f_8602},
{"f_8560match.scm",(void*)f_8560},
{"f_8583match.scm",(void*)f_8583},
{"f_8579match.scm",(void*)f_8579},
{"f_8515match.scm",(void*)f_8515},
{"f_8519match.scm",(void*)f_8519},
{"f_8523match.scm",(void*)f_8523},
{"f_8535match.scm",(void*)f_8535},
{"f_8392match.scm",(void*)f_8392},
{"f_8416match.scm",(void*)f_8416},
{"f_8478match.scm",(void*)f_8478},
{"f_8474match.scm",(void*)f_8474},
{"f_8432match.scm",(void*)f_8432},
{"f_8455match.scm",(void*)f_8455},
{"f_8451match.scm",(void*)f_8451},
{"f_8399match.scm",(void*)f_8399},
{"f_8403match.scm",(void*)f_8403},
{"f_8330match.scm",(void*)f_8330},
{"f_8353match.scm",(void*)f_8353},
{"f_8337match.scm",(void*)f_8337},
{"f_7674match.scm",(void*)f_7674},
{"f_8324match.scm",(void*)f_8324},
{"f_8320match.scm",(void*)f_8320},
{"f_8316match.scm",(void*)f_8316},
{"f_7778match.scm",(void*)f_7778},
{"f_8193match.scm",(void*)f_8193},
{"f_8290match.scm",(void*)f_8290},
{"f_8286match.scm",(void*)f_8286},
{"f_8244match.scm",(void*)f_8244},
{"f_8267match.scm",(void*)f_8267},
{"f_8263match.scm",(void*)f_8263},
{"f_8206match.scm",(void*)f_8206},
{"f_8213match.scm",(void*)f_8213},
{"f_8217match.scm",(void*)f_8217},
{"f_8184match.scm",(void*)f_8184},
{"f_8180match.scm",(void*)f_8180},
{"f_8176match.scm",(void*)f_8176},
{"f_8172match.scm",(void*)f_8172},
{"f_8168match.scm",(void*)f_8168},
{"f_8160match.scm",(void*)f_8160},
{"f_7900match.scm",(void*)f_7900},
{"f_8031match.scm",(void*)f_8031},
{"f_8128match.scm",(void*)f_8128},
{"f_8124match.scm",(void*)f_8124},
{"f_8082match.scm",(void*)f_8082},
{"f_8105match.scm",(void*)f_8105},
{"f_8101match.scm",(void*)f_8101},
{"f_8044match.scm",(void*)f_8044},
{"f_8051match.scm",(void*)f_8051},
{"f_8055match.scm",(void*)f_8055},
{"f_7906match.scm",(void*)f_7906},
{"f_7942match.scm",(void*)f_7942},
{"f_8004match.scm",(void*)f_8004},
{"f_8000match.scm",(void*)f_8000},
{"f_7958match.scm",(void*)f_7958},
{"f_7981match.scm",(void*)f_7981},
{"f_7977match.scm",(void*)f_7977},
{"f_7913match.scm",(void*)f_7913},
{"f_7917match.scm",(void*)f_7917},
{"f_7921match.scm",(void*)f_7921},
{"f_7933match.scm",(void*)f_7933},
{"f_7790match.scm",(void*)f_7790},
{"f_7814match.scm",(void*)f_7814},
{"f_7876match.scm",(void*)f_7876},
{"f_7872match.scm",(void*)f_7872},
{"f_7830match.scm",(void*)f_7830},
{"f_7853match.scm",(void*)f_7853},
{"f_7849match.scm",(void*)f_7849},
{"f_7797match.scm",(void*)f_7797},
{"f_7801match.scm",(void*)f_7801},
{"f_7680match.scm",(void*)f_7680},
{"f_7692match.scm",(void*)f_7692},
{"f_7754match.scm",(void*)f_7754},
{"f_7750match.scm",(void*)f_7750},
{"f_7708match.scm",(void*)f_7708},
{"f_7731match.scm",(void*)f_7731},
{"f_7727match.scm",(void*)f_7727},
{"f_7633match.scm",(void*)f_7633},
{"f_7608match.scm",(void*)f_7608},
{"f_7628match.scm",(void*)f_7628},
{"f_7599match.scm",(void*)f_7599},
{"f_7574match.scm",(void*)f_7574},
{"f_703match.scm",(void*)f_703},
{"f_7466match.scm",(void*)f_7466},
{"f_7491match.scm",(void*)f_7491},
{"f_7527match.scm",(void*)f_7527},
{"f_7497match.scm",(void*)f_7497},
{"f_7471match.scm",(void*)f_7471},
{"f_706match.scm",(void*)f_706},
{"f_7464match.scm",(void*)f_7464},
{"f_7447match.scm",(void*)f_7447},
{"f_7431match.scm",(void*)f_7431},
{"f_7400match.scm",(void*)f_7400},
{"f_7418match.scm",(void*)f_7418},
{"f_7377match.scm",(void*)f_7377},
{"f_1096match.scm",(void*)f_1096},
{"f_1100match.scm",(void*)f_1100},
{"f_1103match.scm",(void*)f_1103},
{"f_1270match.scm",(void*)f_1270},
{"f_1106match.scm",(void*)f_1106},
{"f_1118match.scm",(void*)f_1118},
{"f_1124match.scm",(void*)f_1124},
{"f_1262match.scm",(void*)f_1262},
{"f_1127match.scm",(void*)f_1127},
{"f_1250match.scm",(void*)f_1250},
{"f_1130match.scm",(void*)f_1130},
{"f_1133match.scm",(void*)f_1133},
{"f_1244match.scm",(void*)f_1244},
{"f_1144match.scm",(void*)f_1144},
{"f_1214match.scm",(void*)f_1214},
{"f_1204match.scm",(void*)f_1204},
{"f_1200match.scm",(void*)f_1200},
{"f_1184match.scm",(void*)f_1184},
{"f_1152match.scm",(void*)f_1152},
{"f_1140match.scm",(void*)f_1140},
{"f_940match.scm",(void*)f_940},
{"f_944match.scm",(void*)f_944},
{"f_947match.scm",(void*)f_947},
{"f_1094match.scm",(void*)f_1094},
{"f_950match.scm",(void*)f_950},
{"f_962match.scm",(void*)f_962},
{"f_968match.scm",(void*)f_968},
{"f_1086match.scm",(void*)f_1086},
{"f_971match.scm",(void*)f_971},
{"f_1074match.scm",(void*)f_1074},
{"f_974match.scm",(void*)f_974},
{"f_977match.scm",(void*)f_977},
{"f_1044match.scm",(void*)f_1044},
{"f_996match.scm",(void*)f_996},
{"f_1038match.scm",(void*)f_1038},
{"f_1036match.scm",(void*)f_1036},
{"f_1032match.scm",(void*)f_1032},
{"f_1016match.scm",(void*)f_1016},
{"f_992match.scm",(void*)f_992},
{"f_728match.scm",(void*)f_728},
{"f_732match.scm",(void*)f_732},
{"f_735match.scm",(void*)f_735},
{"f_796match.scm",(void*)f_796},
{"f_934match.scm",(void*)f_934},
{"f_800match.scm",(void*)f_800},
{"f_812match.scm",(void*)f_812},
{"f_922match.scm",(void*)f_922},
{"f_918match.scm",(void*)f_918},
{"f_914match.scm",(void*)f_914},
{"f_910match.scm",(void*)f_910},
{"f_815match.scm",(void*)f_815},
{"f_843match.scm",(void*)f_843},
{"f_832match.scm",(void*)f_832},
{"f_741match.scm",(void*)f_741},
{"f_794match.scm",(void*)f_794},
{"f_744match.scm",(void*)f_744},
{"f_747match.scm",(void*)f_747},
{"f_1366match.scm",(void*)f_1366},
{"f_1403match.scm",(void*)f_1403},
{"f_1406match.scm",(void*)f_1406},
{"f_1415match.scm",(void*)f_1415},
{"f_1390match.scm",(void*)f_1390},
{"f_1378match.scm",(void*)f_1378},
{"f_1444match.scm",(void*)f_1444},
{"f_1450match.scm",(void*)f_1450},
{"f_1474match.scm",(void*)f_1474},
{"f_2499match.scm",(void*)f_2499},
{"f_2519match.scm",(void*)f_2519},
{"f_2523match.scm",(void*)f_2523},
{"f_2237match.scm",(void*)f_2237},
{"f_2455match.scm",(void*)f_2455},
{"f_2458match.scm",(void*)f_2458},
{"f_2468match.scm",(void*)f_2468},
{"f_2483match.scm",(void*)f_2483},
{"f_2465match.scm",(void*)f_2465},
{"f_2438match.scm",(void*)f_2438},
{"f_2434match.scm",(void*)f_2434},
{"f_2430match.scm",(void*)f_2430},
{"f_2321match.scm",(void*)f_2321},
{"f_2393match.scm",(void*)f_2393},
{"f_2360match.scm",(void*)f_2360},
{"f_2373match.scm",(void*)f_2373},
{"f_2336match.scm",(void*)f_2336},
{"f_2346match.scm",(void*)f_2346},
{"f_2350match.scm",(void*)f_2350},
{"f_2330match.scm",(void*)f_2330},
{"f_2284match.scm",(void*)f_2284},
{"f_2239match.scm",(void*)f_2239},
{"f_2247match.scm",(void*)f_2247},
{"f_2251match.scm",(void*)f_2251},
{"f_1507match.scm",(void*)f_1507},
{"f_1539match.scm",(void*)f_1539},
{"f_2183match.scm",(void*)f_2183},
{"f_2186match.scm",(void*)f_2186},
{"f_2196match.scm",(void*)f_2196},
{"f_2211match.scm",(void*)f_2211},
{"f_2193match.scm",(void*)f_2193},
{"f_2111match.scm",(void*)f_2111},
{"f_2078match.scm",(void*)f_2078},
{"f_2091match.scm",(void*)f_2091},
{"f_2023match.scm",(void*)f_2023},
{"f_2003match.scm",(void*)f_2003},
{"f_1976match.scm",(void*)f_1976},
{"f_1956match.scm",(void*)f_1956},
{"f_1892match.scm",(void*)f_1892},
{"f_1909match.scm",(void*)f_1909},
{"f_1845match.scm",(void*)f_1845},
{"f_1855match.scm",(void*)f_1855},
{"f_1798match.scm",(void*)f_1798},
{"f_1808match.scm",(void*)f_1808},
{"f_1751match.scm",(void*)f_1751},
{"f_1761match.scm",(void*)f_1761},
{"f_1691match.scm",(void*)f_1691},
{"f_1704match.scm",(void*)f_1704},
{"f_1637match.scm",(void*)f_1637},
{"f_1654match.scm",(void*)f_1654},
{"f_1600match.scm",(void*)f_1600},
{"f_1557match.scm",(void*)f_1557},
{"f_1509match.scm",(void*)f_1509},
{"f_1517match.scm",(void*)f_1517},
{"f_1521match.scm",(void*)f_1521},
{"f_1477match.scm",(void*)f_1477},
{"f_1272match.scm",(void*)f_1272},
{"f_1296match.scm",(void*)f_1296},
{"f_2539match.scm",(void*)f_2539},
{"f_3425match.scm",(void*)f_3425},
{"f_3433match.scm",(void*)f_3433},
{"f_3333match.scm",(void*)f_3333},
{"f_3352match.scm",(void*)f_3352},
{"f_3362match.scm",(void*)f_3362},
{"f_3240match.scm",(void*)f_3240},
{"f_3304match.scm",(void*)f_3304},
{"f_3258match.scm",(void*)f_3258},
{"f_3281match.scm",(void*)f_3281},
{"f_3287match.scm",(void*)f_3287},
{"f_3242match.scm",(void*)f_3242},
{"f_2543match.scm",(void*)f_2543},
{"f_2581match.scm",(void*)f_2581},
{"f_2590match.scm",(void*)f_2590},
{"f_2682match.scm",(void*)f_2682},
{"f_2759match.scm",(void*)f_2759},
{"f_2782match.scm",(void*)f_2782},
{"f_2871match.scm",(void*)f_2871},
{"f_2936match.scm",(void*)f_2936},
{"f_2984match.scm",(void*)f_2984},
{"f_3015match.scm",(void*)f_3015},
{"f_3045match.scm",(void*)f_3045},
{"f_3115match.scm",(void*)f_3115},
{"f_3117match.scm",(void*)f_3117},
{"f_3125match.scm",(void*)f_3125},
{"f_3084match.scm",(void*)f_3084},
{"f_3094match.scm",(void*)f_3094},
{"f_2993match.scm",(void*)f_2993},
{"f_2945match.scm",(void*)f_2945},
{"f_2949match.scm",(void*)f_2949},
{"f_2964match.scm",(void*)f_2964},
{"f_2968match.scm",(void*)f_2968},
{"f_2974match.scm",(void*)f_2974},
{"f_2972match.scm",(void*)f_2972},
{"f_2901match.scm",(void*)f_2901},
{"f_2922match.scm",(void*)f_2922},
{"f_2905match.scm",(void*)f_2905},
{"f_2791match.scm",(void*)f_2791},
{"f_2815match.scm",(void*)f_2815},
{"f_2834match.scm",(void*)f_2834},
{"f_2865match.scm",(void*)f_2865},
{"f_2838match.scm",(void*)f_2838},
{"f_2847match.scm",(void*)f_2847},
{"f_2801match.scm",(void*)f_2801},
{"f_2768match.scm",(void*)f_2768},
{"f_2691match.scm",(void*)f_2691},
{"f_2726match.scm",(void*)f_2726},
{"f_2694match.scm",(void*)f_2694},
{"f_2628match.scm",(void*)f_2628},
{"f_2631match.scm",(void*)f_2631},
{"f_2562match.scm",(void*)f_2562},
{"f_3372match.scm",(void*)f_3372},
{"f_3390match.scm",(void*)f_3390},
{"f_3396match.scm",(void*)f_3396},
{"f_3408match.scm",(void*)f_3408},
{"f_3435match.scm",(void*)f_3435},
{"f_3695match.scm",(void*)f_3695},
{"f_3724match.scm",(void*)f_3724},
{"f_3444match.scm",(void*)f_3444},
{"f_3458match.scm",(void*)f_3458},
{"f_3462match.scm",(void*)f_3462},
{"f_3727match.scm",(void*)f_3727},
{"f_3749match.scm",(void*)f_3749},
{"f_3484match.scm",(void*)f_3484},
{"f_3498match.scm",(void*)f_3498},
{"f_3502match.scm",(void*)f_3502},
{"f_3760match.scm",(void*)f_3760},
{"f_3715match.scm",(void*)f_3715},
{"f_3622match.scm",(void*)f_3622},
{"f_3600match.scm",(void*)f_3600},
{"f_3518match.scm",(void*)f_3518},
{"f_3819match.scm",(void*)f_3819},
{"f_3944match.scm",(void*)f_3944},
{"f_3946match.scm",(void*)f_3946},
{"f_4057match.scm",(void*)f_4057},
{"f_4070match.scm",(void*)f_4070},
{"f_4086match.scm",(void*)f_4086},
{"f_4107match.scm",(void*)f_4107},
{"f_4149match.scm",(void*)f_4149},
{"f_4192match.scm",(void*)f_4192},
{"f_4205match.scm",(void*)f_4205},
{"f_4267match.scm",(void*)f_4267},
{"f_4292match.scm",(void*)f_4292},
{"f_4317match.scm",(void*)f_4317},
{"f_4656match.scm",(void*)f_4656},
{"f_4946match.scm",(void*)f_4946},
{"f_4949match.scm",(void*)f_4949},
{"f_4894match.scm",(void*)f_4894},
{"f_4908match.scm",(void*)f_4908},
{"f_4910match.scm",(void*)f_4910},
{"f_4935match.scm",(void*)f_4935},
{"f_4906match.scm",(void*)f_4906},
{"f_4662match.scm",(void*)f_4662},
{"f_4677match.scm",(void*)f_4677},
{"f_4689match.scm",(void*)f_4689},
{"f_4698match.scm",(void*)f_4698},
{"f_4700match.scm",(void*)f_4700},
{"f_4722match.scm",(void*)f_4722},
{"f_4810match.scm",(void*)f_4810},
{"f_4828match.scm",(void*)f_4828},
{"f_4836match.scm",(void*)f_4836},
{"f_4826match.scm",(void*)f_4826},
{"f_4747match.scm",(void*)f_4747},
{"f_4800match.scm",(void*)f_4800},
{"f_4751match.scm",(void*)f_4751},
{"f_4780match.scm",(void*)f_4780},
{"f_4778match.scm",(void*)f_4778},
{"f_4770match.scm",(void*)f_4770},
{"f_4696match.scm",(void*)f_4696},
{"f_4693match.scm",(void*)f_4693},
{"f_4624match.scm",(void*)f_4624},
{"f_4636match.scm",(void*)f_4636},
{"f_4638match.scm",(void*)f_4638},
{"f_4650match.scm",(void*)f_4650},
{"f_4326match.scm",(void*)f_4326},
{"f_4330match.scm",(void*)f_4330},
{"f_4331match.scm",(void*)f_4331},
{"f_4440match.scm",(void*)f_4440},
{"f_4524match.scm",(void*)f_4524},
{"f_4542match.scm",(void*)f_4542},
{"f_4550match.scm",(void*)f_4550},
{"f_4540match.scm",(void*)f_4540},
{"f_4459match.scm",(void*)f_4459},
{"f_4510match.scm",(void*)f_4510},
{"f_4508match.scm",(void*)f_4508},
{"f_4504match.scm",(void*)f_4504},
{"f_4463match.scm",(void*)f_4463},
{"f_4492match.scm",(void*)f_4492},
{"f_4490match.scm",(void*)f_4490},
{"f_4482match.scm",(void*)f_4482},
{"f_4433match.scm",(void*)f_4433},
{"f_4430match.scm",(void*)f_4430},
{"f_4353match.scm",(void*)f_4353},
{"f_4374match.scm",(void*)f_4374},
{"f_4356match.scm",(void*)f_4356},
{"f_4367match.scm",(void*)f_4367},
{"f_4371match.scm",(void*)f_4371},
{"f_4311match.scm",(void*)f_4311},
{"f_4286match.scm",(void*)f_4286},
{"f_4261match.scm",(void*)f_4261},
{"f_4226match.scm",(void*)f_4226},
{"f_4228match.scm",(void*)f_4228},
{"f_4253match.scm",(void*)f_4253},
{"f_4224match.scm",(void*)f_4224},
{"f_4158match.scm",(void*)f_4158},
{"f_4178match.scm",(void*)f_4178},
{"f_4116match.scm",(void*)f_4116},
{"f_4135match.scm",(void*)f_4135},
{"f_3848match.scm",(void*)f_3848},
{"f_3917match.scm",(void*)f_3917},
{"f_3910match.scm",(void*)f_3910},
{"f_3902match.scm",(void*)f_3902},
{"f_3839match.scm",(void*)f_3839},
{"f_3830match.scm",(void*)f_3830},
{"f_1298match.scm",(void*)f_1298},
{"f_1314match.scm",(void*)f_1314},
{"f_1356match.scm",(void*)f_1356},
{"f_1352match.scm",(void*)f_1352},
{"f_1341match.scm",(void*)f_1341},
{"f_1348match.scm",(void*)f_1348},
{"f_5092match.scm",(void*)f_5092},
{"f_5099match.scm",(void*)f_5099},
{"f_5108match.scm",(void*)f_5108},
{"f_5230match.scm",(void*)f_5230},
{"f_5117match.scm",(void*)f_5117},
{"f_5123match.scm",(void*)f_5123},
{"f_5152match.scm",(void*)f_5152},
{"f_5126match.scm",(void*)f_5126},
{"f_5144match.scm",(void*)f_5144},
{"f_5129match.scm",(void*)f_5129},
{"f_5274match.scm",(void*)f_5274},
{"f_5293match.scm",(void*)f_5293},
{"f_5299match.scm",(void*)f_5299},
{"f_6098match.scm",(void*)f_6098},
{"f_6094match.scm",(void*)f_6094},
{"f_6090match.scm",(void*)f_6090},
{"f_6086match.scm",(void*)f_6086},
{"f_6078match.scm",(void*)f_6078},
{"f_6074match.scm",(void*)f_6074},
{"f_6066match.scm",(void*)f_6066},
{"f_6062match.scm",(void*)f_6062},
{"f_6058match.scm",(void*)f_6058},
{"f_6054match.scm",(void*)f_6054},
{"f_6050match.scm",(void*)f_6050},
{"f_6046match.scm",(void*)f_6046},
{"f_6042match.scm",(void*)f_6042},
{"f_6038match.scm",(void*)f_6038},
{"f_6034match.scm",(void*)f_6034},
{"f_6030match.scm",(void*)f_6030},
{"f_6022match.scm",(void*)f_6022},
{"f_6018match.scm",(void*)f_6018},
{"f_6010match.scm",(void*)f_6010},
{"f_6006match.scm",(void*)f_6006},
{"f_6002match.scm",(void*)f_6002},
{"f_5998match.scm",(void*)f_5998},
{"f_5994match.scm",(void*)f_5994},
{"f_5990match.scm",(void*)f_5990},
{"f_5986match.scm",(void*)f_5986},
{"f_5982match.scm",(void*)f_5982},
{"f_5978match.scm",(void*)f_5978},
{"f_5974match.scm",(void*)f_5974},
{"f_5970match.scm",(void*)f_5970},
{"f_5966match.scm",(void*)f_5966},
{"f_5962match.scm",(void*)f_5962},
{"f_5958match.scm",(void*)f_5958},
{"f_5954match.scm",(void*)f_5954},
{"f_5946match.scm",(void*)f_5946},
{"f_5942match.scm",(void*)f_5942},
{"f_5938match.scm",(void*)f_5938},
{"f_5934match.scm",(void*)f_5934},
{"f_5930match.scm",(void*)f_5930},
{"f_5926match.scm",(void*)f_5926},
{"f_5922match.scm",(void*)f_5922},
{"f_5918match.scm",(void*)f_5918},
{"f_5914match.scm",(void*)f_5914},
{"f_5910match.scm",(void*)f_5910},
{"f_5906match.scm",(void*)f_5906},
{"f_5898match.scm",(void*)f_5898},
{"f_5894match.scm",(void*)f_5894},
{"f_5886match.scm",(void*)f_5886},
{"f_5882match.scm",(void*)f_5882},
{"f_5878match.scm",(void*)f_5878},
{"f_5874match.scm",(void*)f_5874},
{"f_5870match.scm",(void*)f_5870},
{"f_5866match.scm",(void*)f_5866},
{"f_5862match.scm",(void*)f_5862},
{"f_5850match.scm",(void*)f_5850},
{"f_5846match.scm",(void*)f_5846},
{"f_5842match.scm",(void*)f_5842},
{"f_5838match.scm",(void*)f_5838},
{"f_5357match.scm",(void*)f_5357},
{"f_5421match.scm",(void*)f_5421},
{"f_5417match.scm",(void*)f_5417},
{"f_5413match.scm",(void*)f_5413},
{"f_5409match.scm",(void*)f_5409},
{"f_5366match.scm",(void*)f_5366},
{"f_5389match.scm",(void*)f_5389},
{"f_6168match.scm",(void*)f_6168},
{"f_6172match.scm",(void*)f_6172},
{"f_6175match.scm",(void*)f_6175},
{"f_6180match.scm",(void*)f_6180},
{"f_6247match.scm",(void*)f_6247},
{"f_6250match.scm",(void*)f_6250},
{"f_6211match.scm",(void*)f_6211},
{"f_6220match.scm",(void*)f_6220},
{"f_6299match.scm",(void*)f_6299},
{"f_6309match.scm",(void*)f_6309},
{"f_6324match.scm",(void*)f_6324},
{"f_6516match.scm",(void*)f_6516},
{"f_6529match.scm",(void*)f_6529},
{"f_6450match.scm",(void*)f_6450},
{"f_6463match.scm",(void*)f_6463},
{"f_6332match.scm",(void*)f_6332},
{"f_6345match.scm",(void*)f_6345},
{"f_6376match.scm",(void*)f_6376},
{"f_6357match.scm",(void*)f_6357},
{"f_6609match.scm",(void*)f_6609},
{"f_6649match.scm",(void*)f_6649},
{"f_6695match.scm",(void*)f_6695},
{"f_6705match.scm",(void*)f_6705},
{"f_6709match.scm",(void*)f_6709},
{"f_6738match.scm",(void*)f_6738},
{"f_6742match.scm",(void*)f_6742},
{"f_6772match.scm",(void*)f_6772},
{"f_7027match.scm",(void*)f_7027},
{"f_6966match.scm",(void*)f_6966},
{"f_6992match.scm",(void*)f_6992},
{"f_6774match.scm",(void*)f_6774},
{"f_7077match.scm",(void*)f_7077},
{"f_7246match.scm",(void*)f_7246},
{"f_7342match.scm",(void*)f_7342},
{"f_7356match.scm",(void*)f_7356},
{"f_7354match.scm",(void*)f_7354},
{"f_7350match.scm",(void*)f_7350},
{"f_719match.scm",(void*)f_719},
{"f_714match.scm",(void*)f_714},
{"f_708match.scm",(void*)f_708},
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
