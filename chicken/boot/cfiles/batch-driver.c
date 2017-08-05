/* Generated from batch-driver.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:18
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: batch-driver.scm -output-file batch-driver.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: driver
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[371];


C_noret_decl(C_driver_toplevel)
C_externexport void C_ccall C_driver_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_385)
static void C_ccall f_385(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_385)
static void C_ccall f_385r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_421)
static void C_ccall f_421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2348)
static void C_fcall f_2348(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2301)
static void C_ccall f_2301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_437)
static void C_ccall f_437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2291)
static void C_ccall f_2291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_440)
static void C_ccall f_440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_446)
static void C_fcall f_446(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_759)
static void C_fcall f_759(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_770)
static void C_fcall f_770(C_word t0,C_word t1) C_noret;
C_noret_decl(f_773)
static void C_ccall f_773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_776)
static void C_fcall f_776(C_word t0,C_word t1) C_noret;
C_noret_decl(f_782)
static void C_fcall f_782(C_word t0,C_word t1) C_noret;
C_noret_decl(f_785)
static void C_fcall f_785(C_word t0,C_word t1) C_noret;
C_noret_decl(f_788)
static void C_fcall f_788(C_word t0,C_word t1) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_802)
static void C_ccall f_802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_805)
static void C_fcall f_805(C_word t0,C_word t1) C_noret;
C_noret_decl(f_808)
static void C_fcall f_808(C_word t0,C_word t1) C_noret;
C_noret_decl(f_811)
static void C_ccall f_811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_814)
static void C_fcall f_814(C_word t0,C_word t1) C_noret;
C_noret_decl(f_817)
static void C_fcall f_817(C_word t0,C_word t1) C_noret;
C_noret_decl(f_820)
static void C_fcall f_820(C_word t0,C_word t1) C_noret;
C_noret_decl(f_823)
static void C_fcall f_823(C_word t0,C_word t1) C_noret;
C_noret_decl(f_826)
static void C_fcall f_826(C_word t0,C_word t1) C_noret;
C_noret_decl(f_829)
static void C_fcall f_829(C_word t0,C_word t1) C_noret;
C_noret_decl(f_832)
static void C_fcall f_832(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_838)
static void C_fcall f_838(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_841)
static void C_ccall f_841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_844)
static void C_ccall f_844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2074)
static void C_ccall f_2074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2078)
static void C_ccall f_2078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2081)
static void C_ccall f_2081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_847)
static void C_fcall f_847(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2071)
static void C_ccall f_2071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2067)
static void C_ccall f_2067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_853)
static void C_ccall f_853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_856)
static void C_ccall f_856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2051)
static void C_ccall f_2051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_860)
static void C_ccall f_860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_863)
static void C_fcall f_863(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2025)
static void C_ccall f_2025(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_879)
static void C_ccall f_879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_898)
static void C_ccall f_898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static void C_fcall f_901(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1984)
static void C_ccall f_1984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_904)
static void C_ccall f_904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1972)
static void C_ccall f_1972(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_908)
static void C_ccall f_908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_911)
static void C_fcall f_911(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_919)
static void C_ccall f_919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1935)
static void C_ccall f_1935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_923)
static void C_ccall f_923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_945)
static void C_fcall f_945(C_word t0,C_word t1) C_noret;
C_noret_decl(f_948)
static void C_ccall f_948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_972)
static void C_fcall f_972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1003)
static void C_ccall f_1003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1009)
static void C_ccall f_1009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1016)
static void C_ccall f_1016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1030)
static void C_ccall f_1030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1033)
static void C_ccall f_1033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1036)
static void C_ccall f_1036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1039)
static void C_ccall f_1039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1758)
static void C_fcall f_1758(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1802)
static void C_fcall f_1802(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1746)
static void C_ccall f_1746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1051)
static void C_fcall f_1051(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1721)
static void C_ccall f_1721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1060)
static void C_fcall f_1060(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1714)
static void C_ccall f_1714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static void C_ccall f_1063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1066)
static void C_ccall f_1066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1688)
static void C_ccall f_1688(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1565)
static void C_fcall f_1565(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1643)
static void C_ccall f_1643(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1569)
static void C_ccall f_1569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1573)
static void C_ccall f_1573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1576)
static void C_fcall f_1576(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1072)
static void C_ccall f_1072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1544)
static void C_ccall f_1544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1078)
static void C_ccall f_1078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1084)
static void C_ccall f_1084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1089)
static void C_ccall f_1089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1092)
static void C_ccall f_1092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1095)
static void C_ccall f_1095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1098)
static void C_ccall f_1098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1101)
static void C_ccall f_1101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1110)
static void C_ccall f_1110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1499)
static void C_ccall f_1499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1479)
static void C_ccall f_1479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1116)
static void C_fcall f_1116(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1438)
static void C_ccall f_1438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1456)
static void C_ccall f_1456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1119)
static void C_fcall f_1119(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1142)
static void C_fcall f_1142(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1405)
static void C_ccall f_1405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1408)
static void C_ccall f_1408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1152)
static void C_ccall f_1152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1159)
static void C_ccall f_1159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1260)
static void C_ccall f_1260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1382)
static void C_fcall f_1382(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1372)
static void C_ccall f_1372(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1362)
static void C_ccall f_1362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1326)
static void C_ccall f_1326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1168)
static void C_ccall f_1168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1186)
static void C_ccall f_1186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1189)
static void C_ccall f_1189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1208)
static void C_ccall f_1208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1225)
static void C_ccall f_1225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1234)
static void C_ccall f_1234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1237)
static void C_ccall f_1237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1176)
static void C_ccall f_1176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_752)
static void C_fcall f_752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_735)
static void C_fcall f_735(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_725)
static C_word C_fcall f_725(C_word t0);
C_noret_decl(f_695)
static void C_fcall f_695(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_701)
static void C_fcall f_701(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_715)
static void C_ccall f_715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_615)
static void C_fcall f_615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_684)
static void C_ccall f_684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_680)
static void C_ccall f_680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_664)
static void C_ccall f_664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_656)
static void C_ccall f_656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_566)
static void C_ccall f_566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_612)
static void C_ccall f_612(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_570)
static void C_ccall f_570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_576)
static void C_fcall f_576(C_word t0,C_word t1) C_noret;
C_noret_decl(f_591)
static void C_ccall f_591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_587)
static void C_ccall f_587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_573)
static void C_ccall f_573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_554)
static void C_fcall f_554(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_561)
static void C_ccall f_561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_539)
static void C_fcall f_539(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_546)
static void C_ccall f_546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_549)
static void C_ccall f_549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_517)
static void C_fcall f_517(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_524)
static void C_ccall f_524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_499)
static void C_fcall f_499(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_503)
static void C_ccall f_503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_512)
static void C_ccall f_512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_493)
static C_word C_fcall f_493();
C_noret_decl(f_388)
static void C_fcall f_388(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2348)
static void C_fcall trf_2348(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2348(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2348(t0,t1);}

C_noret_decl(trf_446)
static void C_fcall trf_446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_446(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_446(t0,t1);}

C_noret_decl(trf_759)
static void C_fcall trf_759(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_759(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_759(t0,t1);}

C_noret_decl(trf_770)
static void C_fcall trf_770(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_770(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_770(t0,t1);}

C_noret_decl(trf_776)
static void C_fcall trf_776(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_776(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_776(t0,t1);}

C_noret_decl(trf_782)
static void C_fcall trf_782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_782(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_782(t0,t1);}

C_noret_decl(trf_785)
static void C_fcall trf_785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_785(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_785(t0,t1);}

C_noret_decl(trf_788)
static void C_fcall trf_788(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_788(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_788(t0,t1);}

C_noret_decl(trf_805)
static void C_fcall trf_805(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_805(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_805(t0,t1);}

C_noret_decl(trf_808)
static void C_fcall trf_808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_808(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_808(t0,t1);}

C_noret_decl(trf_814)
static void C_fcall trf_814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_814(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_814(t0,t1);}

C_noret_decl(trf_817)
static void C_fcall trf_817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_817(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_817(t0,t1);}

C_noret_decl(trf_820)
static void C_fcall trf_820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_820(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_820(t0,t1);}

C_noret_decl(trf_823)
static void C_fcall trf_823(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_823(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_823(t0,t1);}

C_noret_decl(trf_826)
static void C_fcall trf_826(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_826(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_826(t0,t1);}

C_noret_decl(trf_829)
static void C_fcall trf_829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_829(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_829(t0,t1);}

C_noret_decl(trf_832)
static void C_fcall trf_832(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_832(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_832(t0,t1);}

C_noret_decl(trf_838)
static void C_fcall trf_838(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_838(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_838(t0,t1);}

C_noret_decl(trf_847)
static void C_fcall trf_847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_847(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_847(t0,t1);}

C_noret_decl(trf_863)
static void C_fcall trf_863(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_863(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_863(t0,t1);}

C_noret_decl(trf_901)
static void C_fcall trf_901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_901(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_901(t0,t1);}

C_noret_decl(trf_911)
static void C_fcall trf_911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_911(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_911(t0,t1);}

C_noret_decl(trf_945)
static void C_fcall trf_945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_945(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_945(t0,t1);}

C_noret_decl(trf_972)
static void C_fcall trf_972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_972(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_972(t0,t1);}

C_noret_decl(trf_1758)
static void C_fcall trf_1758(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1758(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1758(t0,t1,t2);}

C_noret_decl(trf_1802)
static void C_fcall trf_1802(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1802(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1802(t0,t1,t2);}

C_noret_decl(trf_1051)
static void C_fcall trf_1051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1051(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1051(t0,t1);}

C_noret_decl(trf_1060)
static void C_fcall trf_1060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1060(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1060(t0,t1);}

C_noret_decl(trf_1565)
static void C_fcall trf_1565(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1565(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1565(t0,t1);}

C_noret_decl(trf_1576)
static void C_fcall trf_1576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1576(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1576(t0,t1);}

C_noret_decl(trf_1116)
static void C_fcall trf_1116(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1116(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1116(t0,t1);}

C_noret_decl(trf_1119)
static void C_fcall trf_1119(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1119(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1119(t0,t1);}

C_noret_decl(trf_1142)
static void C_fcall trf_1142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1142(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1142(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1382)
static void C_fcall trf_1382(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1382(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1382(t0,t1);}

C_noret_decl(trf_752)
static void C_fcall trf_752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_752(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_752(t0,t1,t2);}

C_noret_decl(trf_735)
static void C_fcall trf_735(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_735(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_735(t0,t1,t2);}

C_noret_decl(trf_695)
static void C_fcall trf_695(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_695(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_695(t0,t1,t2);}

C_noret_decl(trf_701)
static void C_fcall trf_701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_701(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_701(t0,t1,t2);}

C_noret_decl(trf_615)
static void C_fcall trf_615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_615(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_615(t0,t1);}

C_noret_decl(trf_576)
static void C_fcall trf_576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_576(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_576(t0,t1);}

C_noret_decl(trf_554)
static void C_fcall trf_554(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_554(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_554(t0,t1,t2,t3,t4);}

C_noret_decl(trf_539)
static void C_fcall trf_539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_539(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_539(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_517)
static void C_fcall trf_517(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_517(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_517(t0,t1,t2,t3,t4);}

C_noret_decl(trf_499)
static void C_fcall trf_499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_499(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_499(t0,t1,t2,t3);}

C_noret_decl(trf_388)
static void C_fcall trf_388(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_388(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_388(t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_driver_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_driver_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("driver_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2633)){
C_save(t1);
C_rereclaim2(2633*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,371);
lf[1]=C_static_string(C_heaptop,7,"PROFILE");
lf[2]=C_h_intern(&lf[2],19,"compile-source-file");
lf[3]=C_h_intern(&lf[3],4,"quit");
lf[4]=C_static_string(C_heaptop,32,"missing argument to `-~A\047 option");
lf[5]=C_static_string(C_heaptop,31,"invalid argument to `~A\047 option");
lf[6]=C_static_lambda_info(C_heaptop,16,"(option-arg p10)");
lf[7]=C_h_intern(&lf[7],12,"explicit-use");
lf[8]=C_h_intern(&lf[8],26,"\010compilerexplicit-use-flag");
lf[9]=C_h_intern(&lf[9],12,"\004coredeclare");
lf[10]=C_h_intern(&lf[10],7,"verbose");
lf[11]=C_h_intern(&lf[11],11,"output-file");
lf[12]=C_h_intern(&lf[12],36,"\010compilerdefault-optimization-passes");
tmp=C_intern(C_heaptop,25,"\003sysimplicit-exit-handler");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[13]=C_h_pair(C_restore,tmp);
lf[14]=C_h_intern(&lf[14],7,"profile");
lf[15]=C_h_intern(&lf[15],12,"profile-name");
lf[16]=C_h_intern(&lf[16],9,"heap-size");
lf[17]=C_h_intern(&lf[17],17,"heap-initial-size");
lf[18]=C_h_intern(&lf[18],11,"heap-growth");
lf[19]=C_h_intern(&lf[19],14,"heap-shrinkage");
lf[20]=C_h_intern(&lf[20],13,"keyword-style");
lf[21]=C_h_intern(&lf[21],17,"compress-literals");
lf[22]=C_h_intern(&lf[22],4,"unit");
lf[23]=C_h_intern(&lf[23],12,"analyze-only");
lf[24]=C_h_intern(&lf[24],7,"dynamic");
lf[25]=C_h_intern(&lf[25],5,"quiet");
lf[26]=C_h_intern(&lf[26],7,"nursery");
lf[27]=C_h_intern(&lf[27],10,"stack-size");
lf[28]=C_h_intern(&lf[28],26,"\010compilerdebugging-chicken");
lf[29]=C_h_intern(&lf[29],6,"printf");
lf[30]=C_static_string(C_heaptop,6,"[~a]~%");
lf[31]=C_static_string(C_heaptop,12,"pass: ~a~%~!");
lf[32]=C_static_lambda_info(C_heaptop,31,"(print-header mode64 dbgmode65)");
lf[33]=C_h_intern(&lf[33],19,"\010compilerdump-nodes");
lf[34]=C_h_intern(&lf[34],12,"pretty-print");
lf[35]=C_h_intern(&lf[35],30,"\010compilerbuild-expression-tree");
lf[36]=C_static_lambda_info(C_heaptop,33,"(print-node mode68 dbgmode69 n70)");
lf[37]=C_h_intern(&lf[37],34,"\010compilerdisplay-analysis-database");
lf[38]=C_static_string(C_heaptop,16,"(iteration ~s)~%");
lf[39]=C_static_lambda_info(C_heaptop,39,"(print-db mode71 dbgmode72 db73 pass74)");
lf[40]=C_h_intern(&lf[40],12,"\003sysfor-each");
lf[41]=C_static_lambda_info(C_heaptop,29,"(print mode76 dbgmode77 xs78)");
lf[42]=C_h_intern(&lf[42],19,"\003syshash-table-set!");
lf[43]=C_h_intern(&lf[43],24,"\003sysline-number-database");
lf[44]=C_h_intern(&lf[44],10,"alist-cons");
lf[45]=C_h_intern(&lf[45],18,"\003syshash-table-ref");
lf[46]=C_h_intern(&lf[46],9,"list-info");
lf[47]=C_h_intern(&lf[47],26,"\003sysdefault-read-info-hook");
lf[48]=C_static_lambda_info(C_heaptop,19,"(f_612 a85 b86 c87)");
lf[49]=C_static_lambda_info(C_heaptop,31,"(infohook class79 data80 val81)");
lf[50]=C_static_string(C_heaptop,27,"invalid numeric argument ~S");
lf[51]=C_h_intern(&lf[51],9,"substring");
lf[52]=C_static_lambda_info(C_heaptop,15,"(arg-val str91)");
lf[53]=C_static_lambda_info(C_heaptop,14,"(loop opts104)");
lf[54]=C_static_lambda_info(C_heaptop,24,"(collect-options opt102)");
lf[55]=C_static_string(C_heaptop,33,"milliseconds needed for ~a: \011~s~%");
lf[56]=C_static_lambda_info(C_heaptop,18,"(end-time pass109)");
lf[57]=C_h_intern(&lf[57],8,"\003sysread");
lf[58]=C_static_lambda_info(C_heaptop,17,"(read-form in110)");
lf[59]=C_h_intern(&lf[59],1,"D");
lf[60]=C_h_intern(&lf[60],12,"emit-exports");
lf[61]=C_h_intern(&lf[61],13,"check-imports");
lf[62]=C_h_intern(&lf[62],25,"\010compileruse-import-table");
lf[63]=C_h_intern(&lf[63],26,"\010compilerdisabled-warnings");
lf[64]=C_h_intern(&lf[64],12,"inline-limit");
lf[65]=C_h_intern(&lf[65],21,"\010compilerverbose-mode");
lf[66]=C_h_intern(&lf[66],31,"\003sysread-error-with-line-number");
lf[67]=C_h_intern(&lf[67],21,"\003sysinclude-pathnames");
lf[68]=C_h_intern(&lf[68],19,"\000compiler-extension");
lf[69]=C_h_intern(&lf[69],12,"\003sysfeatures");
lf[70]=C_h_intern(&lf[70],10,"\000compiling");
lf[71]=C_h_intern(&lf[71],6,"\000match");
lf[72]=C_h_intern(&lf[72],25,"\010compilertarget-heap-size");
lf[73]=C_h_intern(&lf[73],33,"\010compilertarget-initial-heap-size");
lf[74]=C_h_intern(&lf[74],27,"\010compilertarget-heap-growth");
lf[75]=C_h_intern(&lf[75],30,"\010compilertarget-heap-shrinkage");
lf[76]=C_h_intern(&lf[76],26,"\010compilertarget-stack-size");
lf[77]=C_h_intern(&lf[77],8,"no-trace");
lf[78]=C_h_intern(&lf[78],24,"\010compileremit-trace-info");
lf[79]=C_h_intern(&lf[79],29,"disable-stack-overflow-checks");
lf[80]=C_h_intern(&lf[80],40,"\010compilerdisable-stack-overflow-checking");
lf[81]=C_h_intern(&lf[81],7,"version");
lf[82]=C_h_intern(&lf[82],7,"newline");
lf[83]=C_h_intern(&lf[83],22,"\010compilerprint-version");
lf[84]=C_h_intern(&lf[84],4,"help");
lf[85]=C_h_intern(&lf[85],20,"\010compilerprint-usage");
lf[86]=C_h_intern(&lf[86],7,"release");
lf[87]=C_h_intern(&lf[87],7,"display");
lf[88]=C_h_intern(&lf[88],15,"chicken-version");
lf[89]=C_h_intern(&lf[89],24,"\010compilersource-filename");
lf[90]=C_h_intern(&lf[90],28,"\010compilerprofile-lambda-list");
lf[91]=C_h_intern(&lf[91],31,"\010compilerline-number-database-2");
lf[92]=C_h_intern(&lf[92],4,"node");
lf[93]=C_h_intern(&lf[93],6,"lambda");
tmp=C_SCHEME_END_OF_LIST;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[94]=C_h_pair(C_restore,tmp);
lf[95]=C_h_intern(&lf[95],23,"\010compilerconstant-table");
lf[96]=C_h_intern(&lf[96],21,"\010compilerinline-table");
lf[97]=C_h_intern(&lf[97],23,"\010compilerfirst-analysis");
lf[98]=C_h_intern(&lf[98],41,"\010compilerperform-high-level-optimizations");
lf[99]=C_static_lambda_info(C_heaptop,7,"(a1175)");
lf[100]=C_h_intern(&lf[100],37,"\010compilerinline-substitutions-enabled");
lf[101]=C_h_intern(&lf[101],22,"optimize-leaf-routines");
lf[102]=C_static_string(C_heaptop,25,"leaf routine optimization");
lf[103]=C_h_intern(&lf[103],34,"\010compilertransform-direct-lambdas!");
lf[104]=C_static_string(C_heaptop,8,"analysis");
lf[105]=C_h_intern(&lf[105],27,"\010compileranalyze-expression");
lf[106]=C_h_intern(&lf[106],18,"\010compilerdebugging");
lf[107]=C_h_intern(&lf[107],1,"p");
lf[108]=C_static_string(C_heaptop,21,"rewritings enabled...");
lf[109]=C_static_string(C_heaptop,19,"optimized-iteration");
lf[110]=C_h_intern(&lf[110],1,"5");
lf[111]=C_static_string(C_heaptop,12,"optimization");
lf[112]=C_static_lambda_info(C_heaptop,33,"(a1181 node2219 progress-flag220)");
lf[113]=C_static_string(C_heaptop,17,"optimization pass");
lf[114]=C_h_intern(&lf[114],36,"\010compilerprepare-for-code-generation");
lf[115]=C_static_lambda_info(C_heaptop,7,"(a1291)");
lf[116]=C_static_string(C_heaptop,25,"compilation finished.~%~!");
lf[117]=C_h_intern(&lf[117],30,"\010compilercompiler-cleanup-hook");
lf[118]=C_h_intern(&lf[118],1,"t");
lf[119]=C_h_intern(&lf[119],17,"\003sysdisplay-times");
lf[120]=C_h_intern(&lf[120],14,"\003sysstop-timer");
lf[121]=C_static_string(C_heaptop,15,"code generation");
lf[122]=C_h_intern(&lf[122],17,"close-output-port");
lf[123]=C_h_intern(&lf[123],22,"\010compilergenerate-code");
lf[124]=C_static_string(C_heaptop,21,"generating `~A\047 ...~%");
lf[125]=C_h_intern(&lf[125],16,"open-output-file");
lf[126]=C_h_intern(&lf[126],19,"current-output-port");
lf[127]=C_static_string(C_heaptop,11,"preparation");
lf[128]=C_static_lambda_info(C_heaptop,38,"(a1297 node248 literals249 lambdas250)");
lf[129]=C_static_string(C_heaptop,17,"closure-converted");
lf[130]=C_h_intern(&lf[130],1,"9");
lf[131]=C_h_intern(&lf[131],4,"exit");
lf[132]=C_h_intern(&lf[132],12,"\010compilerget");
lf[133]=C_static_lambda_info(C_heaptop,24,"(f_1364 g237239 g238240)");
lf[134]=C_static_lambda_info(C_heaptop,17,"(a1361 k235 p236)");
lf[135]=C_h_intern(&lf[135],13,"\010compilerput!");
lf[136]=C_static_lambda_info(C_heaptop,24,"(f_1372 g244246 g245247)");
lf[137]=C_static_lambda_info(C_heaptop,22,"(a1369 k241 p242 x243)");
lf[138]=C_h_intern(&lf[138],23,"user-post-analysis-pass");
lf[139]=C_h_intern(&lf[139],25,"\010compilerexport-file-name");
lf[140]=C_h_intern(&lf[140],30,"\010compilerdump-exported-globals");
lf[141]=C_static_string(C_heaptop,37,"(don\047t despair - still compiling...)\012");
lf[142]=C_h_intern(&lf[142],20,"\003syswarnings-enabled");
lf[143]=C_static_string(C_heaptop,14,"final-analysis");
lf[144]=C_h_intern(&lf[144],1,"8");
lf[145]=C_static_string(C_heaptop,18,"closure conversion");
lf[146]=C_h_intern(&lf[146],35,"\010compilerperform-closure-conversion");
lf[147]=C_static_string(C_heaptop,9,"optimized");
lf[148]=C_h_intern(&lf[148],1,"7");
lf[149]=C_h_intern(&lf[149],1,"s");
lf[150]=C_h_intern(&lf[150],33,"\010compilerprint-program-statistics");
lf[151]=C_static_string(C_heaptop,8,"analysis");
lf[152]=C_h_intern(&lf[152],1,"4");
lf[153]=C_static_string(C_heaptop,8,"analysis");
lf[154]=C_h_intern(&lf[154],1,"u");
lf[155]=C_h_intern(&lf[155],31,"\010compilerdump-undefined-globals");
lf[156]=C_h_intern(&lf[156],29,"\010compilercheck-global-exports");
lf[157]=C_h_intern(&lf[157],29,"\010compilercheck-global-imports");
lf[158]=C_static_lambda_info(C_heaptop,32,"(loop i213 node2214 progress215)");
lf[159]=C_static_string(C_heaptop,3,"cps");
lf[160]=C_h_intern(&lf[160],1,"3");
lf[161]=C_static_string(C_heaptop,14,"cps conversion");
lf[162]=C_h_intern(&lf[162],31,"\010compilerperform-cps-conversion");
lf[163]=C_h_intern(&lf[163],6,"unsafe");
lf[164]=C_h_intern(&lf[164],34,"\010compilerscan-toplevel-assignments");
lf[165]=C_h_intern(&lf[165],26,"\010compilerdo-lambda-lifting");
lf[166]=C_static_string(C_heaptop,13,"lambda lifted");
lf[167]=C_h_intern(&lf[167],1,"L");
lf[168]=C_static_string(C_heaptop,14,"lambda lifting");
lf[169]=C_h_intern(&lf[169],32,"\010compilerperform-lambda-lifting!");
lf[170]=C_static_string(C_heaptop,12,"pre-analysis");
lf[171]=C_static_string(C_heaptop,8,"analysis");
lf[172]=C_h_intern(&lf[172],1,"0");
lf[173]=C_static_string(C_heaptop,19,"secondary user pass");
lf[174]=C_h_intern(&lf[174],1,"U");
lf[175]=C_static_string(C_heaptop,19,"secondary user pass");
lf[176]=C_static_string(C_heaptop,16,"pre-analysis (u)");
lf[177]=C_static_string(C_heaptop,12,"analysis (u)");
lf[178]=C_static_string(C_heaptop,24,"Secondary user pass...~%");
lf[179]=C_h_intern(&lf[179],17,"hash-table->alist");
lf[180]=C_h_intern(&lf[180],26,"\010compilerfile-requirements");
lf[181]=C_h_intern(&lf[181],1,"M");
lf[182]=C_static_string(C_heaptop,15,"; requirements:");
lf[183]=C_h_intern(&lf[183],11,"user-pass-2");
lf[184]=C_h_intern(&lf[184],25,"\010compilerbuild-node-graph");
lf[185]=C_h_intern(&lf[185],32,"\010compilercanonicalize-begin-body");
lf[186]=C_static_string(C_heaptop,9,"user pass");
lf[187]=C_h_intern(&lf[187],7,"\003sysmap");
lf[188]=C_static_string(C_heaptop,16,"User pass...~%~!");
lf[189]=C_h_intern(&lf[189],9,"user-pass");
lf[190]=C_h_intern(&lf[190],12,"check-syntax");
lf[191]=C_static_string(C_heaptop,13,"canonicalized");
lf[192]=C_h_intern(&lf[192],1,"2");
lf[193]=C_static_string(C_heaptop,16,"canonicalization");
lf[194]=C_h_intern(&lf[194],18,"\010compilerunit-name");
lf[195]=C_h_intern(&lf[195],25,"\010compilercompiler-warning");
lf[196]=C_h_intern(&lf[196],5,"usage");
lf[197]=C_static_string(C_heaptop,42,"library unit `~a\047 compiled in dynamic mode");
lf[198]=C_h_intern(&lf[198],26,"\010compilerblock-compilation");
lf[199]=C_static_string(C_heaptop,96,"compilation of library unit `~a\047 in block-mode - globals may not be accessible o"
"utside this unit");
lf[200]=C_h_intern(&lf[200],37,"\010compilerdisplay-line-number-database");
lf[201]=C_h_intern(&lf[201],1,"n");
lf[202]=C_static_string(C_heaptop,21,"line number database:");
lf[203]=C_h_intern(&lf[203],32,"\010compilerdisplay-real-name-table");
lf[204]=C_h_intern(&lf[204],1,"N");
lf[205]=C_static_string(C_heaptop,16,"real name table:");
lf[206]=C_h_intern(&lf[206],6,"append");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[207]=C_h_pair(C_restore,tmp);
lf[208]=C_h_intern(&lf[208],40,"\010compilercompressed-literals-initializer");
lf[209]=C_h_intern(&lf[209],9,"\004coreset!");
lf[210]=C_h_intern(&lf[210],5,"quote");
lf[211]=C_h_intern(&lf[211],20,"\003sysread-from-string");
lf[212]=C_h_intern(&lf[212],4,"set!");
lf[213]=C_h_intern(&lf[213],3,"let");
lf[214]=C_h_intern(&lf[214],6,"gensym");
lf[215]=C_static_lambda_info(C_heaptop,19,"(a1604 clf180 r181)");
lf[216]=C_h_intern(&lf[216],4,"fold");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[217]=C_h_pair(C_restore,tmp);
lf[218]=C_h_intern(&lf[218],28,"\010compilercompressed-literals");
lf[219]=C_h_intern(&lf[219],28,"\003sysset-profile-info-vector!");
lf[220]=C_h_intern(&lf[220],33,"\010compilerprofile-info-vector-name");
lf[221]=C_static_lambda_info(C_heaptop,13,"(a1642 pl178)");
lf[222]=C_h_intern(&lf[222],21,"\010compileremit-profile");
lf[223]=C_h_intern(&lf[223],25,"\003sysregister-profile-info");
lf[224]=C_h_intern(&lf[224],13,"\004corecallunit");
lf[225]=C_static_lambda_info(C_heaptop,12,"(a1687 n177)");
lf[226]=C_h_intern(&lf[226],19,"\010compilerused-units");
lf[227]=C_static_lambda_info(C_heaptop,13,"(a1693 ic176)");
lf[228]=C_h_intern(&lf[228],28,"\010compilerimmutable-constants");
lf[229]=C_h_intern(&lf[229],32,"\010compilercanonicalize-expression");
lf[230]=C_h_intern(&lf[230],28,"\003sysexplicit-library-modules");
lf[231]=C_h_intern(&lf[231],4,"uses");
lf[232]=C_h_intern(&lf[232],7,"declare");
lf[233]=C_static_string(C_heaptop,6,"source");
lf[234]=C_h_intern(&lf[234],1,"1");
lf[235]=C_static_string(C_heaptop,30,"User preprocessing pass...~%~!");
lf[236]=C_h_intern(&lf[236],22,"user-preprocessor-pass");
lf[237]=C_static_string(C_heaptop,21,"User read pass...~%~!");
lf[238]=C_h_intern(&lf[238],21,"\010compilerstring->expr");
lf[239]=C_h_intern(&lf[239],7,"reverse");
lf[240]=C_h_intern(&lf[240],33,"\010compilerclose-checked-input-file");
lf[241]=C_static_lambda_info(C_heaptop,12,"(do162 x164)");
lf[242]=C_h_intern(&lf[242],34,"\010compilercheck-and-open-input-file");
lf[243]=C_static_lambda_info(C_heaptop,16,"(do156 files158)");
lf[244]=C_h_intern(&lf[244],14,"user-read-pass");
lf[245]=C_h_intern(&lf[245],8,"epilogue");
lf[246]=C_h_intern(&lf[246],8,"prologue");
lf[247]=C_h_intern(&lf[247],8,"postlude");
lf[248]=C_h_intern(&lf[248],7,"prelude");
lf[249]=C_h_intern(&lf[249],11,"make-vector");
lf[250]=C_h_intern(&lf[250],34,"\010compilerline-number-database-size");
lf[251]=C_h_intern(&lf[251],1,"r");
lf[252]=C_static_string(C_heaptop,17,"target stack size");
lf[253]=C_static_string(C_heaptop,16,"target heap size");
lf[254]=C_static_string(C_heaptop,17,"debugging options");
lf[255]=C_static_string(C_heaptop,7,"options");
lf[256]=C_static_string(C_heaptop,20,"compiling `~a\047 ...~%");
lf[257]=C_static_string(C_heaptop,58,"\012\012Enter \042chicken -help\042 for information on how to use it.\012");
lf[258]=C_h_intern(&lf[258],5,"-help");
lf[259]=C_h_intern(&lf[259],1,"h");
lf[260]=C_h_intern(&lf[260],2,"-h");
lf[261]=C_h_intern(&lf[261],18,"accumulate-profile");
lf[262]=C_static_string(C_heaptop,12,"accumulated ");
lf[263]=C_static_string(C_heaptop,0,"");
lf[264]=C_static_string(C_heaptop,24,"Generating ~aprofile~%~!");
tmp=C_intern(C_heaptop,4,"set!");
C_save(tmp);
tmp=C_intern(C_heaptop,23,"\003sysprofile-append-mode");
C_save(tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[265]=C_h_pair(C_restore,tmp);
lf[266]=C_h_intern(&lf[266],39,"\010compilerdefault-profiling-declarations");
lf[267]=C_static_string(C_heaptop,10,"stacktrace");
lf[268]=C_static_string(C_heaptop,4,"none");
lf[269]=C_static_string(C_heaptop,22,"debugging info: ~A~%~!");
lf[270]=C_h_intern(&lf[270],21,"no-usual-integrations");
lf[271]=C_h_intern(&lf[271],17,"standard-bindings");
lf[272]=C_h_intern(&lf[272],34,"\010compilerdefault-standard-bindings");
lf[273]=C_h_intern(&lf[273],17,"extended-bindings");
lf[274]=C_h_intern(&lf[274],34,"\010compilerdefault-extended-bindings");
lf[275]=C_h_intern(&lf[275],1,"m");
lf[276]=C_h_intern(&lf[276],14,"set-gc-report!");
lf[277]=C_h_intern(&lf[277],42,"\010compilerdefault-default-target-stack-size");
lf[278]=C_h_intern(&lf[278],41,"\010compilerdefault-default-target-heap-size");
lf[279]=C_h_intern(&lf[279],15,"run-time-macros");
lf[280]=C_h_intern(&lf[280],25,"\003sysenable-runtime-macros");
lf[281]=C_h_intern(&lf[281],22,"\004corerequire-extension");
lf[282]=C_static_lambda_info(C_heaptop,12,"(a1971 r135)");
lf[283]=C_h_intern(&lf[283],15,"lset-difference");
lf[284]=C_h_intern(&lf[284],3,"eq\077");
lf[285]=C_h_intern(&lf[285],14,"string->symbol");
lf[286]=C_h_intern(&lf[286],17,"require-extension");
lf[287]=C_h_intern(&lf[287],9,"extension");
lf[288]=C_h_intern(&lf[288],16,"define-extension");
lf[289]=C_h_intern(&lf[289],13,"pathname-file");
lf[290]=C_static_string(C_heaptop,45,"no filename available for `-extension\047 option");
lf[291]=C_h_intern(&lf[291],28,"\010compilerpostponed-initforms");
lf[292]=C_h_intern(&lf[292],11,"\003sysprovide");
lf[293]=C_h_intern(&lf[293],5,"match");
lf[294]=C_h_intern(&lf[294],6,"delete");
lf[295]=C_h_intern(&lf[295],4,"load");
lf[296]=C_h_intern(&lf[296],28,"\003sysresolve-include-filename");
lf[297]=C_static_lambda_info(C_heaptop,12,"(a2024 f132)");
lf[298]=C_h_intern(&lf[298],12,"load-verbose");
lf[299]=C_static_string(C_heaptop,34,"Loading compiler extensions...~%~!");
lf[300]=C_h_intern(&lf[300],6,"extend");
lf[301]=C_h_intern(&lf[301],17,"register-feature!");
lf[302]=C_h_intern(&lf[302],7,"feature");
lf[303]=C_h_intern(&lf[303],20,"keep-shadowed-macros");
lf[304]=C_h_intern(&lf[304],33,"\010compilerundefine-shadowed-macros");
lf[305]=C_static_string(C_heaptop,40,"source- and output-filename are the same");
lf[306]=C_h_intern(&lf[306],23,"\010compilerchop-separator");
lf[307]=C_h_intern(&lf[307],12,"include-path");
lf[308]=C_h_intern(&lf[308],38,"\010compilerliteral-compression-threshold");
lf[309]=C_static_string(C_heaptop,51,"invalid argument to `-compress-literals\047 option: ~A");
lf[310]=C_static_string(C_heaptop,6,"prefix");
lf[311]=C_h_intern(&lf[311],7,"\000prefix");
lf[312]=C_static_string(C_heaptop,4,"none");
lf[313]=C_h_intern(&lf[313],5,"\000none");
lf[314]=C_static_string(C_heaptop,6,"suffix");
lf[315]=C_h_intern(&lf[315],7,"\000suffix");
lf[316]=C_static_string(C_heaptop,43,"invalid argument to `-keyword-style\047 option");
lf[317]=C_h_intern(&lf[317],16,"case-insensitive");
lf[318]=C_h_intern(&lf[318],14,"case-sensitive");
lf[319]=C_static_string(C_heaptop,48,"Identifiers and symbols are case insensitive~%~!");
lf[320]=C_h_intern(&lf[320],24,"\010compilerinline-max-size");
lf[321]=C_static_string(C_heaptop,48,"invalid argument to `-inline-limit\047 option: `~A\047");
lf[322]=C_h_intern(&lf[322],12,"track-scheme");
lf[323]=C_h_intern(&lf[323],23,"\010compileremit-line-info");
lf[324]=C_h_intern(&lf[324],6,"inline");
lf[325]=C_h_intern(&lf[325],30,"emit-external-prototypes-first");
lf[326]=C_h_intern(&lf[326],30,"\010compilerexternal-protos-first");
lf[327]=C_h_intern(&lf[327],5,"block");
lf[328]=C_h_intern(&lf[328],17,"fixnum-arithmetic");
lf[329]=C_h_intern(&lf[329],11,"number-type");
lf[330]=C_h_intern(&lf[330],6,"fixnum");
lf[331]=C_h_intern(&lf[331],18,"disable-interrupts");
lf[332]=C_h_intern(&lf[332],28,"\010compilerinsert-timer-checks");
lf[333]=C_h_intern(&lf[333],16,"unsafe-libraries");
lf[334]=C_h_intern(&lf[334],27,"\010compileremit-unsafe-marker");
lf[335]=C_h_intern(&lf[335],23,"\005matchset-error-control");
lf[336]=C_h_intern(&lf[336],5,"\000fail");
lf[337]=C_h_intern(&lf[337],11,"no-warnings");
lf[338]=C_static_string(C_heaptop,25,"Warnings are disabled~%~!");
lf[339]=C_h_intern(&lf[339],15,"disable-warning");
lf[340]=C_h_intern(&lf[340],28,"\010compilerlookup-exports-file");
lf[341]=C_h_intern(&lf[341],6,"import");
lf[342]=C_h_intern(&lf[342],14,"no-lambda-info");
lf[343]=C_h_intern(&lf[343],26,"\010compileremit-closure-info");
lf[344]=C_h_intern(&lf[344],3,"raw");
lf[345]=C_h_intern(&lf[345],1,"b");
lf[346]=C_h_intern(&lf[346],15,"\003sysstart-timer");
lf[347]=C_h_intern(&lf[347],11,"lambda-lift");
lf[348]=C_static_lambda_info(C_heaptop,12,"(a2243 c112)");
lf[349]=C_h_intern(&lf[349],12,"string->list");
lf[350]=C_static_lambda_info(C_heaptop,13,"(a2237 do111)");
lf[351]=C_h_intern(&lf[351],10,"append-map");
lf[352]=C_h_intern(&lf[352],5,"debug");
lf[353]=C_h_intern(&lf[353],29,"\010compilerstring->c-identifier");
lf[354]=C_h_intern(&lf[354],18,"\010compilerstringify");
lf[355]=C_static_string(C_heaptop,0,"");
lf[356]=C_h_intern(&lf[356],12,"string-split");
lf[357]=C_static_string(C_heaptop,1,";");
lf[358]=C_h_intern(&lf[358],6,"getenv");
lf[359]=C_static_string(C_heaptop,20,"CHICKEN_INCLUDE_PATH");
lf[360]=C_h_intern(&lf[360],14,"symbol->string");
lf[361]=C_h_intern(&lf[361],9,"to-stdout");
lf[362]=C_h_intern(&lf[362],13,"make-pathname");
lf[363]=C_static_string(C_heaptop,1,"c");
lf[364]=C_static_string(C_heaptop,3,"out");
lf[365]=C_static_lambda_info(C_heaptop,11,"(a2335 x37)");
lf[366]=C_h_intern(&lf[366],29,"\010compilerdefault-declarations");
lf[367]=C_h_intern(&lf[367],30,"\010compilerunits-used-by-default");
lf[368]=C_h_intern(&lf[368],28,"\010compilerinitialize-compiler");
lf[369]=C_static_lambda_info(C_heaptop,42,"(compile-source-file filename7 . options8)");
lf[370]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,371,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=C_mutate((C_word*)lf[2]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_385,a[2]=lf[369],tmp=(C_word)a,a+=3,tmp));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* compile-source-file */
static void C_ccall f_385(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_385r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_385r(t0,t1,t2,t3);}}

static void C_ccall f_385r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_388,a[2]=lf[6],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_421,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm: 100  ##compiler#initialize-compiler */
t6=C_retrieve(lf[368]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k419 in compile-source-file */
static void C_ccall f_421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_421,2,t0,t1);}
t2=(C_word)C_i_memq(lf[7],((C_word*)t0)[5]);
t3=C_mutate((C_word*)lf[8]+1,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2336,a[2]=lf[365],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2344,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2348,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[8]))){
t8=t7;
f_2348(t8,C_SCHEME_END_OF_LIST);}
else{
t8=(C_word)C_a_i_cons(&a,2,lf[231],C_retrieve(lf[367]));
t9=t7;
f_2348(t9,(C_word)C_a_i_list(&a,1,t8));}}

/* k2346 in k419 in compile-source-file */
static void C_fcall f_2348(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 104  append */
t2=*((C_word*)lf[206]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_retrieve(lf[366]),t1);}

/* k2342 in k419 in compile-source-file */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2335 in k419 in compile-source-file */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2336,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[210],t2));}

/* k2332 in k419 in compile-source-file */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2334,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[9],t1);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(C_word)C_i_memq(lf[10],((C_word*)t0)[5]);
t7=(C_word)C_i_memq(lf[11],((C_word*)t0)[5]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_437,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2301,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 112  option-arg */
f_388(t9,t7);}
else{
if(C_truep((C_word)C_i_memq(lf[361],((C_word*)t0)[5]))){
t9=t8;
f_437(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2323,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm: 117  pathname-file */
t10=C_retrieve(lf[289]);
((C_proc3)C_retrieve_proc(t10))(3,t10,t9,((C_word*)t0)[2]);}
else{
t10=t9;
f_2323(2,t10,lf[364]);}}}}

/* k2321 in k2332 in k419 in compile-source-file */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 117  make-pathname */
t2=C_retrieve(lf[362]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[363]);}

/* k2299 in k2332 in k419 in compile-source-file */
static void C_ccall f_2301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_symbolp(t1))){
/* batch-driver.scm: 114  symbol->string */
t2=*((C_word*)lf[360]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
f_437(2,t2,t1);}}

/* k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_440,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2291,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2295,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 118  getenv */
t5=C_retrieve(lf[358]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[359]);}

/* k2293 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?t1:lf[355]);
/* batch-driver.scm: 118  string-split */
t3=C_retrieve(lf[356]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t2,lf[357]);}

/* k2289 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve(lf[306]),t1);}

/* k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_440(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_440,2,t0,t1);}
t2=C_retrieve(lf[12]);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=lf[13];
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(C_word)C_i_memq(lf[14],((C_word*)t0)[8]);
t12=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_446,a[2]=t1,a[3]=t8,a[4]=t10,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t4,a[10]=t6,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t11)){
t13=t12;
f_446(t13,t11);}
else{
t13=(C_word)C_i_memq(lf[261],((C_word*)t0)[8]);
t14=t12;
f_446(t14,(C_truep(t13)?t13:(C_word)C_i_memq(lf[15],((C_word*)t0)[8])));}}

/* k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_446(C_word t0,C_word t1){
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
C_word ab[97],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_446,NULL,2,t0,t1);}
t2=(C_word)C_i_memq(lf[15],((C_word*)t0)[13]);
t3=(C_truep(t2)?(C_word)C_i_cadr(t2):C_SCHEME_FALSE);
t4=(C_truep(t3)?t3:lf[1]);
t5=(C_word)C_i_memq(lf[16],((C_word*)t0)[13]);
t6=(C_word)C_i_memq(lf[17],((C_word*)t0)[13]);
t7=(C_word)C_i_memq(lf[18],((C_word*)t0)[13]);
t8=(C_word)C_i_memq(lf[19],((C_word*)t0)[13]);
t9=(C_word)C_i_memq(lf[20],((C_word*)t0)[13]);
t10=(C_word)C_i_memq(lf[21],((C_word*)t0)[13]);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(C_word)C_i_memq(lf[22],((C_word*)t0)[13]);
t14=(C_word)C_i_memq(lf[23],((C_word*)t0)[13]);
t15=(C_word)C_i_memq(lf[24],((C_word*)t0)[13]);
t16=C_SCHEME_FALSE;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=(C_word)C_i_memq(lf[25],((C_word*)t0)[13]);
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=(C_word)C_i_memq(lf[26],((C_word*)t0)[13]);
t22=(C_truep(t21)?t21:(C_word)C_i_memq(lf[27],((C_word*)t0)[13]));
t23=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_493,tmp=(C_word)a,a+=2,tmp);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_499,a[2]=((C_word*)t0)[12],a[3]=lf[32],tmp=(C_word)a,a+=4,tmp);
t25=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_517,a[2]=t24,a[3]=t17,a[4]=lf[36],tmp=(C_word)a,a+=5,tmp);
t26=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_539,a[2]=t24,a[3]=lf[39],tmp=(C_word)a,a+=4,tmp);
t27=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_554,a[2]=t24,a[3]=lf[41],tmp=(C_word)a,a+=4,tmp);
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_566,a[2]=lf[49],tmp=(C_word)a,a+=3,tmp);
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_615,a[2]=lf[52],tmp=(C_word)a,a+=3,tmp);
t30=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_695,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[11],a[4]=lf[54],tmp=(C_word)a,a+=5,tmp);
t31=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_725,a[2]=((C_word*)t0)[9],a[3]=t23,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t32=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_735,a[2]=((C_word*)t0)[9],a[3]=t23,a[4]=((C_word*)t0)[10],a[5]=lf[56],tmp=(C_word)a,a+=6,tmp);
t33=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_752,a[2]=t28,a[3]=lf[58],tmp=(C_word)a,a+=4,tmp);
t34=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_759,a[2]=((C_word*)t0)[10],a[3]=t9,a[4]=t10,a[5]=((C_word*)t0)[2],a[6]=t5,a[7]=t6,a[8]=t7,a[9]=t8,a[10]=((C_word*)t0)[11],a[11]=t29,a[12]=t22,a[13]=t1,a[14]=t30,a[15]=t33,a[16]=((C_word*)t0)[3],a[17]=t4,a[18]=((C_word*)t0)[4],a[19]=t27,a[20]=t26,a[21]=t14,a[22]=t18,a[23]=t15,a[24]=((C_word*)t0)[5],a[25]=t25,a[26]=t32,a[27]=t31,a[28]=t20,a[29]=t23,a[30]=((C_word*)t0)[6],a[31]=((C_word*)t0)[7],a[32]=((C_word*)t0)[8],a[33]=t12,a[34]=((C_word*)t0)[12],a[35]=((C_word*)t0)[13],a[36]=t17,tmp=(C_word)a,a+=37,tmp);
if(C_truep(t13)){
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2264,a[2]=t34,tmp=(C_word)a,a+=3,tmp);
t36=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2268,a[2]=t35,tmp=(C_word)a,a+=3,tmp);
t37=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2272,a[2]=t36,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 203  option-arg */
f_388(t37,t13);}
else{
t35=t34;
f_759(t35,C_SCHEME_UNDEFINED);}}

/* k2270 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 203  ##compiler#stringify */
t2=C_retrieve(lf[354]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2266 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 203  ##compiler#string->c-identifier */
t2=C_retrieve(lf[353]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2262 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[194]+1,t1);
t3=((C_word*)t0)[2];
f_759(t3,t2);}

/* k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_759(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_759,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2238,a[2]=lf[350],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2260,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 209  collect-options */
t5=((C_word*)t0)[14];
f_695(t5,t4,lf[352]);}

/* k2258 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 205  append-map */
t2=C_retrieve(lf[351]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2237 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2238,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2244,a[2]=lf[348],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2256,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 208  string->list */
t5=*((C_word*)lf[349]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k2254 in a2237 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2243 in a2237 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2244,3,t0,t1,t2);}
t3=(C_word)C_a_i_string(&a,1,t2);
/* batch-driver.scm: 207  string->symbol */
t4=*((C_word*)lf[285]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_763,2,t0,t1);}
t2=C_mutate((C_word*)lf[28]+1,t1);
t3=(C_word)C_i_memq(lf[59],C_retrieve(lf[28]));
t4=C_mutate(((C_word *)((C_word*)t0)[36])+1,t3);
t5=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_770,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[347],((C_word*)t0)[35]))){
t6=C_set_block_item(lf[165],0,C_SCHEME_TRUE);
t7=t5;
f_770(t7,t6);}
else{
t6=t5;
f_770(t6,C_SCHEME_UNDEFINED);}}

/* k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_770(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_770,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[118],C_retrieve(lf[28])))){
/* batch-driver.scm: 212  ##sys#start-timer */
t3=*((C_word*)lf[346]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_773(2,t3,C_SCHEME_UNDEFINED);}}

/* k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_776,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[345],C_retrieve(lf[28])))){
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t4=t2;
f_776(t4,t3);}
else{
t3=t2;
f_776(t3,C_SCHEME_UNDEFINED);}}

/* k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_776(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_776,NULL,2,t0,t1);}
t2=(C_word)C_i_memq(lf[60],((C_word*)t0)[34]);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_782,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t2)){
t4=(C_word)C_i_cadr(t2);
t5=C_mutate((C_word*)lf[139]+1,t4);
t6=t3;
f_782(t6,t5);}
else{
t4=t3;
f_782(t4,C_SCHEME_FALSE);}}

/* k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_782(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_782,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[344],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[8],0,C_SCHEME_TRUE);
t4=C_set_block_item(((C_word*)t0)[17],0,C_SCHEME_END_OF_LIST);
t5=C_set_block_item(((C_word*)t0)[31],0,C_SCHEME_END_OF_LIST);
t6=t2;
f_785(t6,t5);}
else{
t3=t2;
f_785(t3,C_SCHEME_UNDEFINED);}}

/* k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_785(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_785,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[342],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[343],0,C_SCHEME_FALSE);
t4=t2;
f_788(t4,t3);}
else{
t3=t2;
f_788(t3,C_SCHEME_UNDEFINED);}}

/* k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_788(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_788,NULL,2,t0,t1);}
t2=(C_word)C_i_memq(lf[61],((C_word*)t0)[34]);
t3=C_mutate((C_word*)lf[62]+1,t2);
t4=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
/* batch-driver.scm: 223  collect-options */
t5=((C_word*)t0)[13];
f_695(t5,t4,lf[341]);}

/* k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_pairp(t1))){
t3=C_set_block_item(lf[62],0,C_SCHEME_TRUE);
/* for-each */
t4=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,C_retrieve(lf[340]),t1);}
else{
t3=t2;
f_798(2,t3,C_SCHEME_UNDEFINED);}}

/* k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_798,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2201,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 227  collect-options */
t4=((C_word*)t0)[13];
f_695(t4,t3,lf[339]);}

/* k2199 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[285]+1),t1);}

/* k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_802,2,t0,t1);}
t2=C_mutate((C_word*)lf[63]+1,t1);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[337],((C_word*)t0)[34]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2193,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[33])){
/* batch-driver.scm: 229  printf */
t5=C_retrieve(lf[29]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[338]);}
else{
t5=t4;
f_2193(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_805(t4,C_SCHEME_UNDEFINED);}}

/* k2191 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[142],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_805(t3,t2);}

/* k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_805(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_805,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[101],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[101],0,C_SCHEME_TRUE);
t4=t2;
f_808(t4,t3);}
else{
t3=t2;
f_808(t3,C_SCHEME_UNDEFINED);}}

/* k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_808(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_808,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[163],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[163],0,C_SCHEME_TRUE);
/* batch-driver.scm: 234  ##match#set-error-control */
t4=C_retrieve(lf[335]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,lf[336]);}
else{
t3=t2;
f_811(2,t3,C_SCHEME_UNDEFINED);}}

/* k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_811,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_814,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t3=(C_truep(((C_word*)t0)[22])?(C_word)C_i_memq(lf[333],((C_word*)t0)[34]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_set_block_item(lf[334],0,C_SCHEME_TRUE);
t5=t2;
f_814(t5,t4);}
else{
t4=t2;
f_814(t4,C_SCHEME_UNDEFINED);}}

/* k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_814(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_814,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_817,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[331],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[332],0,C_SCHEME_FALSE);
t4=t2;
f_817(t4,t3);}
else{
t3=t2;
f_817(t3,C_SCHEME_UNDEFINED);}}

/* k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_817(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_817,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[328],((C_word*)t0)[34]))){
t3=C_mutate((C_word*)lf[329]+1,lf[330]);
t4=t2;
f_820(t4,t3);}
else{
t3=t2;
f_820(t3,C_SCHEME_UNDEFINED);}}

/* k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_820(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_820,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[327],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[198],0,C_SCHEME_TRUE);
t4=t2;
f_823(t4,t3);}
else{
t3=t2;
f_823(t3,C_SCHEME_UNDEFINED);}}

/* k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_823(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_823,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[325],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[326],0,C_SCHEME_TRUE);
t4=t2;
f_826(t4,t3);}
else{
t3=t2;
f_826(t3,C_SCHEME_UNDEFINED);}}

/* k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_826(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_826,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[324],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[320],0,C_fix(10));
t4=t2;
f_829(t4,t3);}
else{
t3=t2;
f_829(t3,C_SCHEME_UNDEFINED);}}

/* k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_829(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_829,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[322],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[323],0,C_SCHEME_TRUE);
t4=t2;
f_832(t4,t3);}
else{
t3=t2;
f_832(t3,C_SCHEME_UNDEFINED);}}

/* k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_832(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_832,NULL,2,t0,t1);}
t2=(C_word)C_i_memq(lf[64],((C_word*)t0)[34]);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[34],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],a[34]=((C_word*)t0)[33],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2136,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 245  option-arg */
f_388(t4,t2);}
else{
t4=t3;
f_838(t4,C_SCHEME_FALSE);}}

/* k2134 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2139,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 246  string->number */
C_string_to_number(3,0,t2,t1);}

/* k2137 in k2134 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2142,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_2142(2,t3,t1);}
else{
/* batch-driver.scm: 247  quit */
t3=C_retrieve(lf[3]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[321],((C_word*)t0)[2]);}}

/* k2140 in k2137 in k2134 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[320]+1,t1);
t3=((C_word*)t0)[2];
f_838(t3,t2);}

/* k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_838(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_838,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[317],((C_word*)t0)[31]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2123,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[34])){
/* batch-driver.scm: 249  printf */
t4=C_retrieve(lf[29]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[319]);}
else{
t4=t3;
f_2123(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_841(2,t3,C_SCHEME_UNDEFINED);}}

/* k2121 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 250  register-feature! */
t3=C_retrieve(lf[301]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[317]);}

/* k2124 in k2121 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 251  case-sensitive */
t2=C_retrieve(lf[318]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_844,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],tmp=(C_word)a,a+=34,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2087,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 253  option-arg */
f_388(t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_844(2,t3,C_SCHEME_UNDEFINED);}}

/* k2085 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_string_equal_p(lf[310],t1))){
/* batch-driver.scm: 254  keyword-style */
t2=C_retrieve(lf[20]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[311]);}
else{
if(C_truep((C_word)C_i_string_equal_p(lf[312],t1))){
/* batch-driver.scm: 255  keyword-style */
t2=C_retrieve(lf[20]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[313]);}
else{
if(C_truep((C_word)C_i_string_equal_p(lf[314],t1))){
/* batch-driver.scm: 256  keyword-style */
t2=C_retrieve(lf[20]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[315]);}
else{
/* batch-driver.scm: 257  quit */
t2=C_retrieve(lf[3]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[316]);}}}}

/* k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_847,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],tmp=(C_word)a,a+=33,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2074,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 259  option-arg */
f_388(t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_847(t3,C_SCHEME_UNDEFINED);}}

/* k2072 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2074,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2078,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 261  string->number */
C_string_to_number(3,0,t2,t1);}

/* k2076 in k2072 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2081,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_2081(2,t3,t1);}
else{
/* batch-driver.scm: 262  quit */
t3=C_retrieve(lf[3]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[309],((C_word*)t0)[2]);}}

/* k2079 in k2076 in k2072 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[308]+1,t1);
t3=((C_word*)t0)[2];
f_847(t3,t2);}

/* k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_847(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_847,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[65]+1,((C_word*)t0)[32]);
t3=C_set_block_item(lf[66],0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_853,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[32],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2067,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2071,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 266  collect-options */
t7=((C_word*)t0)[11];
f_695(t7,t6,lf[307]);}

/* k2069 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve(lf[306]),t1);}

/* k2065 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 266  append */
t2=*((C_word*)lf[206]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,C_retrieve(lf[67]),((C_word*)t0)[2]);}

/* k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_853,2,t0,t1);}
t2=C_mutate((C_word*)lf[67]+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t4=(C_truep(((C_word*)t0)[20])?(C_truep(((C_word*)t0)[27])?(C_word)C_i_string_equal_p(((C_word*)t0)[20],((C_word*)t0)[27]):C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(t4)){
/* batch-driver.scm: 270  quit */
t5=C_retrieve(lf[3]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,lf[305]);}
else{
t5=t3;
f_856(2,t5,C_SCHEME_UNDEFINED);}}

/* k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2051,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 271  collect-options */
t4=((C_word*)t0)[10];
f_695(t4,t3,lf[231]);}

/* k2049 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[285]+1),t1);}

/* k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_860,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[31])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[31],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],tmp=(C_word)a,a+=32,tmp);
if(C_truep((C_word)C_i_memq(lf[303],((C_word*)t0)[29]))){
t4=C_set_block_item(lf[304],0,C_SCHEME_FALSE);
t5=t3;
f_863(t5,t4);}
else{
t4=t3;
f_863(t4,C_SCHEME_UNDEFINED);}}

/* k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_863(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_863,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2043,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 276  collect-options */
t4=((C_word*)t0)[10];
f_695(t4,t3,lf[302]);}

/* k2041 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve(lf[301]),t1);}

/* k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_866,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[68],C_retrieve(lf[69]));
t3=C_mutate((C_word*)lf[69]+1,t2);
t4=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm: 280  collect-options */
t5=((C_word*)t0)[10];
f_695(t5,t4,lf[300]);}

/* k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_876,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],tmp=(C_word)a,a+=33,tmp);
if(C_truep(((C_word*)t0)[22])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2036,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 282  printf */
t4=C_retrieve(lf[29]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[299]);}
else{
t3=t2;
f_876(2,t3,C_SCHEME_UNDEFINED);}}

/* k2034 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 283  load-verbose */
t2=C_retrieve(lf[298]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_876,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_879,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],tmp=(C_word)a,a+=32,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2025,a[2]=lf[297],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a2024 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2025(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2025,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2033,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 284  ##sys#resolve-include-filename */
t4=C_retrieve(lf[296]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,t2,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k2031 in a2024 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 284  load */
t2=C_retrieve(lf[295]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm: 285  delete */
t3=C_retrieve(lf[294]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[68],C_retrieve(lf[69]),*((C_word*)lf[284]+1));}

/* k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_883,2,t0,t1);}
t2=C_mutate((C_word*)lf[69]+1,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[70],C_retrieve(lf[69]));
t4=C_mutate((C_word*)lf[69]+1,t3);
t5=(C_word)C_a_i_cons(&a,2,lf[71],C_retrieve(lf[69]));
t6=C_mutate((C_word*)lf[69]+1,t5);
t7=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm: 289  ##sys#provide */
t8=C_retrieve(lf[292]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,lf[293]);}

/* k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_894,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm: 292  append */
t3=*((C_word*)lf[206]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)((C_word*)t0)[31])[1],C_retrieve(lf[291]));}

/* k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_898,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[31])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
if(C_truep((C_word)C_i_memq(lf[287],((C_word*)t0)[30]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1995,a[2]=t3,a[3]=((C_word*)t0)[31],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2007,a[2]=((C_word*)t0)[31],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2011,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[21])){
/* batch-driver.scm: 301  pathname-file */
t7=C_retrieve(lf[289]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[21]);}
else{
if(C_truep(((C_word*)t0)[28])){
/* batch-driver.scm: 302  pathname-file */
t7=C_retrieve(lf[289]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[28]);}
else{
/* batch-driver.scm: 303  quit */
t7=C_retrieve(lf[3]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,lf[290]);}}}
else{
t4=t3;
f_901(t4,C_SCHEME_UNDEFINED);}}

/* k2009 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 300  string->symbol */
t2=*((C_word*)lf[285]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2005 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_2007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2007,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[288],t1);
t3=(C_word)C_a_i_list(&a,1,t2);
/* batch-driver.scm: 297  append */
t4=*((C_word*)lf[206]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t3);}

/* k1993 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_901(t3,t2);}

/* k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_901(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_901,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1984,a[2]=((C_word*)t0)[12],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1988,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 306  collect-options */
t5=((C_word*)t0)[10];
f_695(t5,t4,lf[286]);}

/* k1986 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[285]+1),t1);}

/* k1982 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 306  lset-difference */
t2=C_retrieve(lf[283]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[284]+1),t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1970,a[2]=((C_word*)t0)[31],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1972,a[2]=lf[282],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t1);}

/* a1971 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1972(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1972,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,2,lf[210],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,lf[281],t3));}

/* k1968 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 308  append */
t2=*((C_word*)lf[206]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_908,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[31])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[31],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],tmp=(C_word)a,a+=32,tmp);
if(C_truep((C_word)C_i_memq(lf[279],((C_word*)t0)[30]))){
t4=C_set_block_item(lf[280],0,C_SCHEME_TRUE);
t5=t3;
f_911(t5,t4);}
else{
t4=t3;
f_911(t4,C_SCHEME_UNDEFINED);}}

/* k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_911(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_911,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_915,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],tmp=(C_word)a,a+=31,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1949,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 314  option-arg */
f_388(t3,((C_word*)t0)[2]);}
else{
t3=C_retrieve(lf[278]);
if(C_truep(t3)){
t4=(C_word)C_eqp(t3,C_fix(0));
t5=t2;
f_915(2,t5,(C_truep(t4)?C_SCHEME_FALSE:t3));}
else{
t4=t2;
f_915(2,t4,C_SCHEME_FALSE);}}}

/* k1947 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 314  arg-val */
f_615(((C_word*)t0)[2],t1);}

/* k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_915,2,t0,t1);}
t2=C_mutate((C_word*)lf[72]+1,t1);
t3=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_919,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],tmp=(C_word)a,a+=30,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1942,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 318  option-arg */
f_388(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_919(2,t4,C_SCHEME_FALSE);}}

/* k1940 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 318  arg-val */
f_615(((C_word*)t0)[2],t1);}

/* k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_919,2,t0,t1);}
t2=C_mutate((C_word*)lf[73]+1,t1);
t3=(*a=C_CLOSURE_TYPE|28,a[1]=(C_word)f_923,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],tmp=(C_word)a,a+=29,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1935,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 319  option-arg */
f_388(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_923(2,t4,C_SCHEME_FALSE);}}

/* k1933 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 319  arg-val */
f_615(((C_word*)t0)[2],t1);}

/* k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_923,2,t0,t1);}
t2=C_mutate((C_word*)lf[74]+1,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_927,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],tmp=(C_word)a,a+=28,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1928,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 320  option-arg */
f_388(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_927(2,t4,C_SCHEME_FALSE);}}

/* k1926 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 320  arg-val */
f_615(((C_word*)t0)[2],t1);}

/* k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_927,2,t0,t1);}
t2=C_mutate((C_word*)lf[75]+1,t1);
t3=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_931,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],tmp=(C_word)a,a+=25,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1908,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 323  option-arg */
f_388(t4,((C_word*)t0)[4]);}
else{
t4=C_retrieve(lf[277]);
if(C_truep(t4)){
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t3;
f_931(2,t6,(C_truep(t5)?C_SCHEME_FALSE:t4));}
else{
t5=t3;
f_931(2,t5,C_SCHEME_FALSE);}}}

/* k1906 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 323  arg-val */
f_615(((C_word*)t0)[2],t1);}

/* k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_931,2,t0,t1);}
t2=C_mutate((C_word*)lf[76]+1,t1);
t3=(C_word)C_i_memq(lf[77],((C_word*)t0)[24]);
t4=(C_word)C_i_not(t3);
t5=C_mutate((C_word*)lf[78]+1,t4);
t6=(C_word)C_i_memq(lf[79],((C_word*)t0)[24]);
t7=C_mutate((C_word*)lf[80]+1,t6);
t8=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep((C_word)C_i_memq(lf[275],C_retrieve(lf[28])))){
/* batch-driver.scm: 329  set-gc-report! */
t9=C_retrieve(lf[276]);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,C_SCHEME_TRUE);}
else{
t9=t8;
f_942(2,t9,C_SCHEME_UNDEFINED);}}

/* k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep((C_word)C_i_memq(lf[270],((C_word*)t0)[24]))){
t3=t2;
f_945(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_mutate((C_word*)lf[271]+1,C_retrieve(lf[272]));
t4=C_mutate((C_word*)lf[273]+1,C_retrieve(lf[274]));
t5=t2;
f_945(t5,t4);}}

/* k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_945(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_945,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep(((C_word*)t0)[16])){
t3=(C_truep(C_retrieve(lf[78]))?lf[267]:lf[268]);
/* batch-driver.scm: 334  printf */
t4=C_retrieve(lf[29]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[269],t3);}
else{
t3=t2;
f_948(2,t3,C_SCHEME_UNDEFINED);}}

/* k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_951,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_car(((C_word*)t0)[2]);
t4=(C_word)C_eqp(lf[261],t3);
t5=C_set_block_item(lf[222],0,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1861,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[16],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t7=(C_truep(t4)?lf[265]:C_SCHEME_END_OF_LIST);
/* batch-driver.scm: 342  append */
t8=*((C_word*)lf[206]+1);
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,((C_word*)((C_word*)t0)[7])[1],C_retrieve(lf[266]),t7);}
else{
t3=t2;
f_951(2,t3,C_SCHEME_UNDEFINED);}}

/* k1859 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
if(C_truep(((C_word*)t0)[4])){
t3=(C_truep(((C_word*)t0)[3])?lf[262]:lf[263]);
/* batch-driver.scm: 349  printf */
t4=C_retrieve(lf[29]);
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[2],lf[264],t3,C_retrieve(lf[222]));}
else{
t3=((C_word*)t0)[2];
f_951(2,t3,C_SCHEME_UNDEFINED);}}

/* k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_951,2,t0,t1);}
if(C_truep((C_word)C_i_memq(lf[81],((C_word*)t0)[23]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_960,a[2]=((C_word*)t0)[22],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 352  ##compiler#print-version */
t3=C_retrieve(lf[83]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_SCHEME_TRUE);}
else{
t2=(C_word)C_i_memq(lf[84],((C_word*)t0)[23]);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(t2)){
t4=t3;
f_972(t4,t2);}
else{
t4=(C_word)C_i_memq(lf[258],((C_word*)t0)[23]);
if(C_truep(t4)){
t5=t3;
f_972(t5,t4);}
else{
t5=(C_word)C_i_memq(lf[259],((C_word*)t0)[23]);
t6=t3;
f_972(t6,(C_truep(t5)?t5:(C_word)C_i_memq(lf[260],((C_word*)t0)[23])));}}}}

/* k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_972,NULL,2,t0,t1);}
if(C_truep(t1)){
/* batch-driver.scm: 355  ##compiler#print-usage */
t2=C_retrieve(lf[85]);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[23]);}
else{
if(C_truep((C_word)C_i_memq(lf[86],((C_word*)t0)[22]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_984,a[2]=((C_word*)t0)[23],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_991,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 357  chicken-version */
t4=C_retrieve(lf[88]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}
else{
t2=((C_word*)t0)[21];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_1009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[22],a[11]=((C_word*)t0)[23],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],a[23]=((C_word*)t0)[21],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)t0)[12])){
t4=t3;
f_1009(2,t4,C_SCHEME_UNDEFINED);}
else{
/* batch-driver.scm: 367  printf */
t4=C_retrieve(lf[29]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[256],((C_word*)t0)[21]);}}
else{
if(C_truep(((C_word*)t0)[12])){
t3=((C_word*)t0)[23];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1003,a[2]=((C_word*)t0)[23],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 361  ##compiler#print-version */
t4=C_retrieve(lf[83]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_TRUE);}}}}}

/* k1001 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 362  display */
t2=*((C_word*)lf[87]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[257]);}

/* k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1009,2,t0,t1);}
t2=C_mutate((C_word*)lf[89]+1,((C_word*)t0)[23]);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_1013,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[23],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 369  ##compiler#debugging */
t4=C_retrieve(lf[106]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[251],lf[255],((C_word*)t0)[10]);}

/* k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1013,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_1016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 370  ##compiler#debugging */
t3=C_retrieve(lf[106]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[251],lf[254],C_retrieve(lf[28]));}

/* k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1016,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_1019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 371  ##compiler#debugging */
t3=C_retrieve(lf[106]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[251],lf[253],C_retrieve(lf[72]));}

/* k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1019,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_1022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 372  ##compiler#debugging */
t3=C_retrieve(lf[106]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[251],lf[252],C_retrieve(lf[76]));}

/* k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1022,2,t0,t1);}
t2=f_493();
t3=C_mutate(((C_word *)((C_word*)t0)[22])+1,t2);
t4=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_1030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[22],a[14]=((C_word*)t0)[23],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],a[23]=((C_word*)t0)[21],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 376  make-vector */
t5=*((C_word*)lf[249]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,C_retrieve(lf[250]),C_SCHEME_END_OF_LIST);}

/* k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1030,2,t0,t1);}
t2=C_mutate((C_word*)lf[43]+1,t1);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_1033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 377  collect-options */
t4=((C_word*)t0)[2];
f_695(t4,t3,lf[248]);}

/* k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_1036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],tmp=(C_word)a,a+=25,tmp);
/* batch-driver.scm: 378  collect-options */
t3=((C_word*)t0)[2];
f_695(t3,t2,lf[247]);}

/* k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_1039,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1827,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[19],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 380  collect-options */
t4=((C_word*)t0)[2];
f_695(t4,t3,lf[246]);}

/* k1825 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1827,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1835,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 382  collect-options */
t4=((C_word*)t0)[2];
f_695(t4,t3,lf[245]);}

/* k1833 in k1825 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 379  append */
t2=*((C_word*)lf[206]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_1042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],tmp=(C_word)a,a+=26,tmp);
/* batch-driver.scm: 384  user-read-pass */
t3=C_retrieve(lf[244]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_1045,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[16],a[13]=((C_word*)t0)[17],a[14]=((C_word*)t0)[18],a[15]=((C_word*)t0)[19],a[16]=((C_word*)t0)[20],a[17]=((C_word*)t0)[21],a[18]=((C_word*)t0)[22],a[19]=((C_word*)t0)[23],a[20]=((C_word*)t0)[24],a[21]=((C_word*)t0)[25],tmp=(C_word)a,a+=22,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1746,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[22])){
/* batch-driver.scm: 386  printf */
t4=C_retrieve(lf[29]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[237]);}
else{
t4=t3;
f_1746(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1758,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=lf[243],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1758(t6,t2,((C_word*)t0)[4]);}}

/* do156 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_1758(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1758,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1769,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1773,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* map */
t5=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_retrieve(lf[238]),((C_word*)t0)[4]);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 396  ##compiler#check-and-open-input-file */
t5=C_retrieve(lf[242]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}}

/* k1785 in do156 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm: 397  read-form */
t3=((C_word*)t0)[2];
f_752(t3,t2,t1);}

/* k1788 in k1785 in do156 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1793,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1802,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=lf[241],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1802(t6,t2,t1);}

/* do162 in k1788 in k1785 in do156 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_1802(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1802,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_eofp(t2))){
/* batch-driver.scm: 400  ##compiler#close-checked-input-file */
t3=C_retrieve(lf[240]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1823,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 398  read-form */
t6=((C_word*)t0)[2];
f_752(t6,t5,((C_word*)t0)[6]);}}

/* k1821 in do162 in k1788 in k1785 in do156 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
f_1802(t2,((C_word*)t0)[2],t1);}

/* k1791 in k1788 in k1785 in do156 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_1758(t3,((C_word*)t0)[2],t2);}

/* k1771 in do156 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1777,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 393  reverse */
t3=*((C_word*)lf[239]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k1775 in k1771 in do156 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1781,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* map */
t3=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve(lf[238]),((C_word*)t0)[2]);}

/* k1779 in k1775 in k1771 in do156 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 392  append */
t2=*((C_word*)lf[206]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1767 in do156 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1744 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1750,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 387  proc */
t3=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1748 in k1744 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_1045(2,t3,t2);}

/* k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_1048,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm: 404  user-preprocessor-pass */
t3=C_retrieve(lf[236]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1048,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_1051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1736,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[18])){
/* batch-driver.scm: 406  printf */
t4=C_retrieve(lf[29]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[235]);}
else{
t4=t3;
f_1736(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_1051(t3,C_SCHEME_UNDEFINED);}}

/* k1734 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1740,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* map */
t3=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}

/* k1738 in k1734 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_1051(t3,t2);}

/* k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_1051(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1051,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_1054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
/* batch-driver.scm: 409  print */
t3=((C_word*)t0)[7];
f_554(t3,t2,lf[233],lf[234],((C_word*)((C_word*)t0)[3])[1]);}

/* k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1054,2,t0,t1);}
t2=f_725(((C_word*)t0)[21]);
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_1060,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],tmp=(C_word)a,a+=21,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t4=t3;
f_1060(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1721,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 412  append */
t5=*((C_word*)lf[206]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,C_retrieve(lf[230]),((C_word*)((C_word*)t0)[2])[1]);}}

/* k1719 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1721,2,t0,t1);}
t2=C_mutate((C_word*)lf[230]+1,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[231],((C_word*)((C_word*)t0)[4])[1]);
t4=(C_word)C_a_i_list(&a,2,lf[232],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)((C_word*)t0)[3])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=((C_word*)t0)[2];
f_1060(t7,t6);}

/* k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_1060(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1060,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_1063,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],tmp=(C_word)a,a+=19,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1714,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 414  append */
t4=*((C_word*)lf[206]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k1712 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve(lf[229]),t1);}

/* k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_1066,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
/* batch-driver.scm: 415  gensym */
t3=C_retrieve(lf[214]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1066,2,t0,t1);}
t2=(C_word)C_i_length(C_retrieve(lf[90]));
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1072,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],tmp=(C_word)a,a+=17,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1557,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1694,a[2]=lf[227],tmp=(C_word)a,a+=3,tmp);
/* map */
t6=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,C_retrieve(lf[228]));}

/* a1693 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1694(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1694,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_i_car(t2);
t5=(C_word)C_a_i_list(&a,2,lf[210],t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[212],t3,t5));}

/* k1555 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1688,a[2]=lf[225],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_retrieve(lf[226]));}

/* a1687 in k1555 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1688(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1688,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[224],t2));}

/* k1559 in k1555 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1561,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1565,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_retrieve(lf[222]))){
t3=(C_word)C_a_i_list(&a,2,lf[210],((C_word*)t0)[3]);
t4=(C_truep(C_retrieve(lf[194]))?C_SCHEME_FALSE:((C_word*)t0)[2]);
t5=(C_word)C_a_i_list(&a,2,lf[210],t4);
t6=(C_word)C_a_i_list(&a,3,lf[223],t3,t5);
t7=(C_word)C_a_i_list(&a,3,lf[212],C_retrieve(lf[220]),t6);
t8=t2;
f_1565(t8,(C_word)C_a_i_list(&a,1,t7));}
else{
t3=t2;
f_1565(t3,C_SCHEME_END_OF_LIST);}}

/* k1563 in k1559 in k1555 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_1565(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1565,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1569,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1643,a[2]=lf[221],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_retrieve(lf[90]));}

/* a1642 in k1563 in k1559 in k1555 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1643(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[24],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1643,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_a_i_list(&a,2,lf[210],t3);
t5=(C_word)C_i_cdr(t2);
t6=(C_word)C_a_i_list(&a,2,lf[210],t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,4,lf[219],C_retrieve(lf[220]),t4,t6));}

/* k1567 in k1563 in k1559 in k1555 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1573,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1605,a[2]=lf[215],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 432  fold */
t4=C_retrieve(lf[216]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,lf[217],C_retrieve(lf[218]));}

/* a1604 in k1567 in k1563 in k1559 in k1555 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1605,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1621,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 433  gensym */
t5=C_retrieve(lf[214]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k1619 in a1604 in k1567 in k1563 in k1559 in k1555 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1621,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=(C_word)C_a_i_list(&a,2,lf[210],t3);
t5=(C_word)C_a_i_list(&a,2,lf[211],t4);
t6=(C_word)C_a_i_list(&a,3,lf[212],t2,t5);
t7=(C_word)C_a_i_list(&a,2,t1,t6);
t8=(C_word)C_a_i_list(&a,1,t7);
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_list(&a,3,lf[213],t8,((C_word*)t0)[2]));}

/* k1571 in k1567 in k1563 in k1559 in k1555 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_retrieve(lf[208]))){
t3=(C_word)C_a_i_list(&a,3,lf[93],C_SCHEME_END_OF_LIST,t1);
t4=(C_word)C_a_i_list(&a,3,lf[209],C_retrieve(lf[208]),t3);
t5=t2;
f_1576(t5,(C_word)C_a_i_list(&a,1,t4));}
else{
t3=t2;
f_1576(t3,(C_word)C_a_i_list(&a,1,t1));}}

/* k1574 in k1571 in k1567 in k1563 in k1559 in k1555 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_1576(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_retrieve(lf[194]);
t3=(C_truep(t2)?C_SCHEME_FALSE:(C_word)C_i_not(((C_word*)t0)[9]));
t4=(C_truep(t3)?((C_word*)((C_word*)t0)[8])[1]:C_SCHEME_END_OF_LIST);
/* batch-driver.scm: 417  append */
t5=*((C_word*)lf[206]+1);
((C_proc10)C_retrieve_proc(t5))(10,t5,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2],t4,lf[207]);}

/* k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1072,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_1075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1550,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 449  ##compiler#debugging */
t6=C_retrieve(lf[106]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,lf[204],lf[205]);}

/* k1548 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm: 450  ##compiler#display-real-name-table */
t2=C_retrieve(lf[203]);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_1075(2,t2,C_SCHEME_UNDEFINED);}}

/* k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_1078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1544,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 451  ##compiler#debugging */
t4=C_retrieve(lf[106]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[201],lf[202]);}

/* k1542 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm: 452  ##compiler#display-line-number-database */
t2=C_retrieve(lf[200]);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_1078(2,t2,C_SCHEME_UNDEFINED);}}

/* k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_1081,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=(C_truep(C_retrieve(lf[198]))?C_retrieve(lf[194]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* batch-driver.scm: 455  ##compiler#compiler-warning */
t4=C_retrieve(lf[195]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,lf[196],lf[199],C_retrieve(lf[194]));}
else{
t4=t2;
f_1081(2,t4,C_SCHEME_UNDEFINED);}}

/* k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1081,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_1084,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=(C_truep(C_retrieve(lf[194]))?((C_word*)t0)[11]:C_SCHEME_FALSE);
if(C_truep(t3)){
/* batch-driver.scm: 461  ##compiler#compiler-warning */
t4=C_retrieve(lf[195]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,lf[196],lf[197],C_retrieve(lf[194]));}
else{
t4=t2;
f_1084(2,t4,C_SCHEME_UNDEFINED);}}

/* k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1084,2,t0,t1);}
t2=C_mutate((C_word*)lf[43]+1,C_retrieve(lf[91]));
t3=C_set_block_item(lf[91],0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_1089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm: 466  end-time */
t5=((C_word*)t0)[16];
f_735(t5,t4,lf[193]);}

/* k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1092,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm: 467  print */
t3=((C_word*)t0)[2];
f_554(t3,t2,lf[191],lf[192],((C_word*)((C_word*)t0)[4])[1]);}

/* k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1092,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1095,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],tmp=(C_word)a,a+=16,tmp);
if(C_truep((C_word)C_i_memq(lf[190],((C_word*)t0)[2]))){
/* batch-driver.scm: 469  exit */
t3=C_retrieve(lf[131]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t3=t2;
f_1095(2,t3,C_SCHEME_UNDEFINED);}}

/* k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm: 471  user-pass */
t3=C_retrieve(lf[189]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1510,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[15],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[12])){
/* batch-driver.scm: 473  printf */
t4=C_retrieve(lf[29]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[188]);}
else{
t4=t3;
f_1510(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_1101(2,t3,C_SCHEME_UNDEFINED);}}

/* k1508 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1510,2,t0,t1);}
t2=f_725(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1517,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* map */
t4=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}

/* k1515 in k1508 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* batch-driver.scm: 476  end-time */
t3=((C_word*)t0)[3];
f_735(t3,((C_word*)t0)[2],lf[186]);}

/* k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1503,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1507,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 481  ##compiler#canonicalize-begin-body */
t4=C_retrieve(lf[185]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k1505 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 480  ##compiler#build-node-graph */
t2=C_retrieve(lf[184]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1503,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_record(&a,4,lf[92],lf[93],lf[94],t2);
t4=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1110,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm: 482  user-pass-2 */
t5=C_retrieve(lf[183]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1113,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1492,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 483  ##compiler#debugging */
t4=C_retrieve(lf[106]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[181],lf[182]);}

/* k1490 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1492,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1499,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 484  hash-table->alist */
t3=C_retrieve(lf[179]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_retrieve(lf[180]));}
else{
t2=((C_word*)t0)[2];
f_1113(2,t2,C_SCHEME_UNDEFINED);}}

/* k1497 in k1490 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 484  pretty-print */
t2=C_retrieve(lf[34]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1116,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1460,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[14],a[7]=t2,a[8]=((C_word*)t0)[16],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[13])){
/* batch-driver.scm: 486  printf */
t4=C_retrieve(lf[29]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[178]);}
else{
t4=t3;
f_1460(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_1116(t3,C_SCHEME_UNDEFINED);}}

/* k1458 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1460,2,t0,t1);}
t2=f_725(((C_word*)t0)[8]);
t3=C_set_block_item(lf[97],0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm: 489  ##compiler#analyze-expression */
t5=C_retrieve(lf[105]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[5]);}

/* k1465 in k1458 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1470,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 490  print-db */
t3=((C_word*)t0)[2];
f_539(t3,t2,lf[177],lf[172],t1,C_fix(0));}

/* k1468 in k1465 in k1458 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 491  end-time */
t3=((C_word*)t0)[3];
f_735(t3,t2,lf[176]);}

/* k1471 in k1468 in k1465 in k1458 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1473,2,t0,t1);}
t2=f_725(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1479,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm: 493  proc */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}

/* k1477 in k1471 in k1468 in k1465 in k1458 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1482,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 494  end-time */
t3=((C_word*)t0)[2];
f_735(t3,t2,lf[175]);}

/* k1480 in k1477 in k1471 in k1468 in k1465 in k1458 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1485,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 495  print-node */
t3=((C_word*)t0)[3];
f_517(t3,t2,lf[173],lf[174],((C_word*)t0)[2]);}

/* k1483 in k1480 in k1477 in k1471 in k1468 in k1465 in k1458 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[97],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_1116(t3,t2);}

/* k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_1116(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1116,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep(C_retrieve(lf[165]))){
t3=f_725(((C_word*)t0)[15]);
t4=C_set_block_item(lf[97],0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1438,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[13],a[6]=t2,a[7]=((C_word*)t0)[15],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 501  ##compiler#analyze-expression */
t6=C_retrieve(lf[105]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}
else{
t3=t2;
f_1119(t3,C_SCHEME_UNDEFINED);}}

/* k1436 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1438,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1441,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 502  print-db */
t3=((C_word*)t0)[2];
f_539(t3,t2,lf[171],lf[172],t1,C_fix(0));}

/* k1439 in k1436 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 503  end-time */
t3=((C_word*)t0)[3];
f_735(t3,t2,lf[170]);}

/* k1442 in k1439 in k1436 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1444,2,t0,t1);}
t2=f_725(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1450,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm: 505  ##compiler#perform-lambda-lifting! */
t4=C_retrieve(lf[169]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k1448 in k1442 in k1439 in k1436 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1453,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 506  end-time */
t3=((C_word*)t0)[2];
f_735(t3,t2,lf[168]);}

/* k1451 in k1448 in k1442 in k1439 in k1436 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1456,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 507  print-node */
t3=((C_word*)t0)[3];
f_517(t3,t2,lf[166],lf[167],((C_word*)t0)[2]);}

/* k1454 in k1451 in k1448 in k1442 in k1439 in k1436 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[97],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_1119(t3,t2);}

/* k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_1119(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1119,NULL,2,t0,t1);}
t2=C_set_block_item(lf[43],0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[95],0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[96],0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep(C_retrieve(lf[163]))){
t6=t5;
f_1125(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(C_word)C_slot(((C_word*)t0)[2],C_fix(3));
t7=(C_word)C_i_car(t6);
/* batch-driver.scm: 514  ##compiler#scan-toplevel-assignments */
t8=C_retrieve(lf[164]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t5,t7);}}

/* k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1125,2,t0,t1);}
t2=f_725(((C_word*)t0)[15]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1131,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm: 517  ##compiler#perform-cps-conversion */
t4=C_retrieve(lf[162]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1134,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm: 518  end-time */
t3=((C_word*)t0)[13];
f_735(t3,t2,lf[161]);}

/* k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm: 519  print-node */
t3=((C_word*)t0)[13];
f_517(t3,t2,lf[159],lf[160],((C_word*)t0)[2]);}

/* k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1137,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1142,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=t3,a[14]=((C_word*)t0)[15],a[15]=lf[158],tmp=(C_word)a,a+=16,tmp));
t5=((C_word*)t3)[1];
f_1142(t5,((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2],C_SCHEME_TRUE);}

/* loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_1142(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1142,NULL,5,t0,t1,t2,t3,t4);}
t5=f_725(((C_word*)t0)[14]);
t6=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_1149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=t2,a[16]=t3,a[17]=((C_word*)t0)[14],a[18]=t4,tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm: 525  ##compiler#analyze-expression */
t7=C_retrieve(lf[105]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t3);}

/* k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_1152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
if(C_truep(C_retrieve(lf[97]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1405,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[62]))){
/* batch-driver.scm: 527  ##compiler#check-global-imports */
t4=C_retrieve(lf[157]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}
else{
t4=t3;
f_1405(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_1152(2,t3,C_SCHEME_UNDEFINED);}}

/* k1403 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1405,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 528  ##compiler#check-global-exports */
t3=C_retrieve(lf[156]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1406 in k1403 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_memq(lf[154],C_retrieve(lf[28])))){
/* batch-driver.scm: 530  ##compiler#dump-undefined-globals */
t2=C_retrieve(lf[155]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_1152(2,t2,C_SCHEME_UNDEFINED);}}

/* k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1152,2,t0,t1);}
t2=C_set_block_item(lf[97],0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_1156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
/* batch-driver.scm: 532  end-time */
t4=((C_word*)t0)[13];
f_735(t4,t3,lf[153]);}

/* k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_1159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
/* batch-driver.scm: 533  print-db */
t3=((C_word*)t0)[2];
f_539(t3,t2,lf[151],lf[152],((C_word*)t0)[16],((C_word*)t0)[15]);}

/* k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_1162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
if(C_truep((C_word)C_i_memq(lf[149],C_retrieve(lf[28])))){
/* batch-driver.scm: 535  ##compiler#print-program-statistics */
t3=C_retrieve(lf[150]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[16]);}
else{
t3=t2;
f_1162(2,t3,C_SCHEME_UNDEFINED);}}

/* k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1162,2,t0,t1);}
if(C_truep(((C_word*)t0)[19])){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1168,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],a[6]=((C_word*)t0)[15],a[7]=((C_word*)t0)[16],a[8]=((C_word*)t0)[17],a[9]=((C_word*)t0)[18],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm: 538  ##compiler#debugging */
t3=C_retrieve(lf[106]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[107],lf[113],((C_word*)t0)[15]);}
else{
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_1254,a[2]=((C_word*)t0)[17],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[10],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[18],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm: 561  print-node */
t3=((C_word*)t0)[12];
f_517(t3,t2,lf[147],lf[148],((C_word*)t0)[17]);}}

/* k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1254,2,t0,t1);}
t2=f_725(((C_word*)t0)[17]);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1260,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm: 564  ##compiler#perform-closure-conversion */
t4=C_retrieve(lf[146]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],((C_word*)t0)[16]);}

/* k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1260,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm: 565  end-time */
t3=((C_word*)t0)[13];
f_735(t3,t2,lf[145]);}

/* k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1266,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm: 566  print-db */
t3=((C_word*)t0)[3];
f_539(t3,t2,lf[143],lf[144],((C_word*)t0)[15],((C_word*)t0)[2]);}

/* k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1266,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1269,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1382,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[142]))){
t4=f_493();
t5=(C_word)C_fixnum_difference(t4,((C_word*)((C_word*)t0)[2])[1]);
t6=t3;
f_1382(t6,(C_word)C_fixnum_greaterp(t5,C_fix(60000)));}
else{
t4=t3;
f_1382(t4,C_SCHEME_FALSE);}}

/* k1380 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_1382(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm: 568  display */
t2=*((C_word*)lf[87]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[141]);}
else{
t2=((C_word*)t0)[2];
f_1269(2,t2,C_SCHEME_UNDEFINED);}}

/* k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1269,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_retrieve(lf[139]))){
/* batch-driver.scm: 570  ##compiler#dump-exported-globals */
t3=C_retrieve(lf[140]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[11],C_retrieve(lf[139]));}
else{
t3=t2;
f_1272(2,t3,C_SCHEME_UNDEFINED);}}

/* k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm: 571  user-post-analysis-pass */
t3=C_retrieve(lf[138]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1275,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1362,a[2]=((C_word*)t0)[11],a[3]=lf[134],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1370,a[2]=((C_word*)t0)[11],a[3]=lf[137],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 573  upap */
t5=t1;
((C_proc5)C_retrieve_proc(t5))(5,t5,t2,((C_word*)t0)[11],t3,t4);}
else{
t3=t2;
f_1278(2,t3,C_SCHEME_UNDEFINED);}}

/* a1369 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1370(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1370,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1372,a[2]=((C_word*)t0)[2],a[3]=lf[136],tmp=(C_word)a,a+=4,tmp));}

/* f_1372 in a1369 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1372(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1372,4,t0,t1,t2,t3);}
/* ##compiler#put! */
t4=C_retrieve(lf[135]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* a1361 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1362,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1364,a[2]=((C_word*)t0)[2],a[3]=lf[133],tmp=(C_word)a,a+=4,tmp));}

/* f_1364 in a1361 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1364(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1364,4,t0,t1,t2,t3);}
/* ##compiler#get */
t4=C_retrieve(lf[132]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1278,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1281,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm: 576  exit */
t3=C_retrieve(lf[131]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix(0));}
else{
t3=t2;
f_1281(2,t3,C_SCHEME_UNDEFINED);}}

/* k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1284,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* batch-driver.scm: 577  print-node */
t3=((C_word*)t0)[2];
f_517(t3,t2,lf[129],lf[130],((C_word*)t0)[11]);}

/* k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1284,2,t0,t1);}
t2=f_725(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1292,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=lf[115],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1298,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[11],a[10]=lf[128],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm: 580  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a1297 in k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1298(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1298,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t1,a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm: 581  end-time */
t6=((C_word*)t0)[7];
f_735(t6,t5,lf[127]);}

/* k1300 in a1297 in k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1302,2,t0,t1);}
t2=f_725(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[8])){
/* batch-driver.scm: 584  open-output-file */
t4=*((C_word*)lf[125]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[8]);}
else{
/* batch-driver.scm: 584  current-output-port */
t4=*((C_word*)lf[126]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}}

/* k1306 in k1300 in a1297 in k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1311,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_1311(2,t3,C_SCHEME_UNDEFINED);}
else{
/* batch-driver.scm: 586  printf */
t3=C_retrieve(lf[29]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[124],((C_word*)t0)[8]);}}

/* k1309 in k1306 in k1300 in a1297 in k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1314,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm: 587  ##compiler#generate-code */
t3=C_retrieve(lf[123]);
((C_proc8)C_retrieve_proc(t3))(8,t3,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1312 in k1309 in k1306 in k1300 in a1297 in k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1317,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* batch-driver.scm: 588  close-output-port */
t3=*((C_word*)lf[122]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_1317(2,t3,C_SCHEME_UNDEFINED);}}

/* k1315 in k1312 in k1309 in k1306 in k1300 in a1297 in k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1320,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 589  end-time */
t3=((C_word*)t0)[2];
f_735(t3,t2,lf[121]);}

/* k1318 in k1315 in k1312 in k1309 in k1306 in k1300 in a1297 in k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_memq(lf[118],C_retrieve(lf[28])))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1342,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 590  ##sys#stop-timer */
t4=*((C_word*)lf[120]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_1323(2,t3,C_SCHEME_UNDEFINED);}}

/* k1340 in k1318 in k1315 in k1312 in k1309 in k1306 in k1300 in a1297 in k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 590  ##sys#display-times */
t2=C_retrieve(lf[119]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1321 in k1318 in k1315 in k1312 in k1309 in k1306 in k1300 in a1297 in k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1326,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 591  ##compiler#compiler-cleanup-hook */
t3=C_retrieve(lf[117]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1306 in k1300 in a1297 in k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[3])){
/* batch-driver.scm: 593  printf */
t2=C_retrieve(lf[29]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[116]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* a1291 in k1282 in k1279 in k1276 in k1273 in k1270 in k1267 in k1264 in k1261 in k1258 in k1252 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1292,2,t0,t1);}
/* batch-driver.scm: 580  ##compiler#prepare-for-code-generation */
t2=C_retrieve(lf[114]);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1166 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1168,2,t0,t1);}
t2=f_725(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1176,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=lf[99],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1182,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=lf[112],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 541  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a1181 in k1166 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1182,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm: 542  end-time */
t5=((C_word*)t0)[3];
f_735(t5,t4,lf[111]);}

/* k1184 in a1181 in k1166 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1186,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1189,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm: 543  print-node */
t3=((C_word*)t0)[2];
f_517(t3,t2,lf[109],lf[110],((C_word*)t0)[5]);}

/* k1187 in k1184 in a1181 in k1166 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1189,2,t0,t1);}
if(C_truep(((C_word*)t0)[8])){
t2=(C_word)C_fixnum_increase(((C_word*)t0)[7]);
/* batch-driver.scm: 545  loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_1142(t3,((C_word*)t0)[5],t2,((C_word*)t0)[4],C_SCHEME_TRUE);}
else{
t2=C_retrieve(lf[100]);
if(C_truep(t2)){
if(C_truep(C_retrieve(lf[101]))){
t3=f_725(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 552  ##compiler#analyze-expression */
t5=C_retrieve(lf[105]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[4]);}
else{
t3=(C_word)C_fixnum_increase(((C_word*)t0)[7]);
/* batch-driver.scm: 558  loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_1142(t4,((C_word*)t0)[5],t3,((C_word*)t0)[4],C_SCHEME_FALSE);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1208,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm: 547  ##compiler#debugging */
t4=C_retrieve(lf[106]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[107],lf[108]);}}}

/* k1206 in k1187 in k1184 in a1181 in k1166 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_block_item(lf[100],0,C_SCHEME_TRUE);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
/* batch-driver.scm: 549  loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1142(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k1223 in k1187 in k1184 in a1181 in k1166 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1225,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1228,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm: 553  end-time */
t3=((C_word*)t0)[2];
f_735(t3,t2,lf[104]);}

/* k1226 in k1223 in k1187 in k1184 in a1181 in k1166 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1228,2,t0,t1);}
t2=f_725(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1234,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm: 555  ##compiler#transform-direct-lambdas! */
t4=C_retrieve(lf[103]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k1232 in k1226 in k1223 in k1187 in k1184 in a1181 in k1166 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1237,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm: 556  end-time */
t3=((C_word*)t0)[2];
f_735(t3,t2,lf[102]);}

/* k1235 in k1232 in k1226 in k1223 in k1187 in k1184 in a1181 in k1166 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[6]);
/* batch-driver.scm: 557  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1142(t3,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a1175 in k1166 in k1160 in k1157 in k1154 in k1150 in k1147 in loop in k1135 in k1132 in k1129 in k1123 in k1117 in k1114 in k1111 in k1108 in k1501 in k1099 in k1096 in k1093 in k1090 in k1087 in k1082 in k1079 in k1076 in k1073 in k1070 in k1064 in k1061 in k1058 in k1052 in k1049 in k1046 in k1043 in k1040 in k1037 in k1034 in k1031 in k1028 in k1020 in k1017 in k1014 in k1011 in k1007 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_1176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1176,2,t0,t1);}
/* batch-driver.scm: 541  ##compiler#perform-high-level-optimizations */
t2=C_retrieve(lf[98]);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k989 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 357  display */
t2=*((C_word*)lf[87]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k982 in k970 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 358  newline */
t2=*((C_word*)lf[82]+1);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k958 in k949 in k946 in k943 in k940 in k929 in k925 in k921 in k917 in k913 in k909 in k906 in k902 in k899 in k896 in k892 in k881 in k877 in k874 in k871 in k864 in k861 in k858 in k854 in k851 in k845 in k842 in k839 in k836 in k830 in k827 in k824 in k821 in k818 in k815 in k812 in k809 in k806 in k803 in k800 in k796 in k793 in k786 in k783 in k780 in k774 in k771 in k768 in k761 in k757 in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 353  newline */
t2=*((C_word*)lf[82]+1);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* read-form in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_752,NULL,3,t0,t1,t2);}
/* batch-driver.scm: 200  ##sys#read */
t3=C_retrieve(lf[57]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* end-time in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_735(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_735,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t3=f_493();
t4=(C_word)C_fixnum_difference(t3,((C_word*)((C_word*)t0)[2])[1]);
/* batch-driver.scm: 197  printf */
t5=C_retrieve(lf[29]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t1,lf[55],t2,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* begin-time in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static C_word C_fcall f_725(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_stack_check;
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t1=f_493();
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
return(t2);}
else{
return(C_SCHEME_UNDEFINED);}}

/* collect-options in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_695(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_695,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_701,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,a[5]=lf[53],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_701(t6,t1,((C_word*)t0)[2]);}

/* loop in collect-options in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_701(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_701,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_memq(((C_word*)t0)[4],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_715,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 189  option-arg */
f_388(t4,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* k713 in loop in collect-options in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_719,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cddr(((C_word*)t0)[3]);
/* batch-driver.scm: 189  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_701(t4,t2,t3);}

/* k717 in k713 in loop in collect-options in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_719,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* arg-val in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_615(C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_615,NULL,2,t1,t2);}
t3=(C_word)C_i_string_length(t2);
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_625,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(2)))){
/* batch-driver.scm: 180  string->number */
C_string_to_number(3,0,t5,t2);}
else{
t6=(C_word)C_i_string_ref(t2,t4);
t7=(C_word)C_eqp(t6,C_make_character(109));
t8=(C_truep(t7)?t7:(C_word)C_eqp(t6,C_make_character(77)));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_656,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_664,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 182  substring */
t11=*((C_word*)lf[51]+1);
((C_proc5)C_retrieve_proc(t11))(5,t11,t10,t2,C_fix(0),t4);}
else{
t9=(C_word)C_eqp(t6,C_make_character(107));
t10=(C_truep(t9)?t9:(C_word)C_eqp(t6,C_make_character(75)));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_680,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_684,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 183  substring */
t13=*((C_word*)lf[51]+1);
((C_proc5)C_retrieve_proc(t13))(5,t13,t12,t2,C_fix(0),t4);}
else{
/* batch-driver.scm: 184  string->number */
C_string_to_number(3,0,t5,t2);}}}}

/* k682 in arg-val in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 183  string->number */
C_string_to_number(3,0,((C_word*)t0)[2],t1);}

/* k678 in arg-val in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_625(2,t2,(C_word)C_fixnum_times(t1,C_fix(1024)));}

/* k662 in arg-val in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 182  string->number */
C_string_to_number(3,0,((C_word*)t0)[2],t1);}

/* k654 in arg-val in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_625(2,t2,(C_word)C_fixnum_times(t1,C_fix(1048576)));}

/* k623 in arg-val in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* batch-driver.scm: 185  quit */
t2=C_retrieve(lf[3]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[50],((C_word*)t0)[2]);}}

/* infohook in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_566,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_570,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_retrieve(lf[47]);
t7=(C_truep(t6)?t6:(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_612,a[2]=lf[48],tmp=(C_word)a,a+=3,tmp));
t8=t7;
((C_proc5)C_retrieve_proc(t8))(5,t8,t5,t2,t3,t4);}

/* f_612 in infohook in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_612(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_612,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* k568 in infohook in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_573,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_576,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(lf[46],((C_word*)t0)[2]);
if(C_truep(t4)){
t5=(C_word)C_i_car(t1);
t6=t3;
f_576(t6,(C_word)C_i_symbolp(t5));}
else{
t5=t3;
f_576(t5,C_SCHEME_FALSE);}}

/* k574 in k568 in infohook in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_576(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_576,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_587,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_591,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[4]);
/* batch-driver.scm: 172  ##sys#hash-table-ref */
t6=C_retrieve(lf[45]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,C_retrieve(lf[43]),t5);}
else{
t2=((C_word*)t0)[3];
f_573(2,t2,C_SCHEME_UNDEFINED);}}

/* k589 in k574 in k568 in infohook in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
/* batch-driver.scm: 171  alist-cons */
t3=C_retrieve(lf[44]);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k585 in k574 in k568 in infohook in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 168  ##sys#hash-table-set! */
t2=C_retrieve(lf[42]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],C_retrieve(lf[43]),((C_word*)t0)[2],t1);}

/* k571 in k568 in infohook in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* print in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_554(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_554,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_561,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 162  print-header */
t6=((C_word*)t0)[2];
f_499(t6,t5,t2,t3);}

/* k559 in print in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* for-each */
t2=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_retrieve(lf[34]),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* print-db in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_539(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_539,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_546,a[2]=t5,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 157  print-header */
t7=((C_word*)t0)[2];
f_499(t7,t6,t2,t3);}

/* k544 in print-db in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_546,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_549,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 158  printf */
t3=C_retrieve(lf[29]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[38],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k547 in k544 in print-db in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 159  ##compiler#display-analysis-database */
t2=C_retrieve(lf[37]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* print-node in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_517(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_517,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_524,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 151  print-header */
t6=((C_word*)t0)[2];
f_499(t6,t5,t2,t3);}

/* k522 in print-node in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_524,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* batch-driver.scm: 153  ##compiler#dump-nodes */
t2=C_retrieve(lf[33]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_537,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 154  ##compiler#build-expression-tree */
t3=C_retrieve(lf[35]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k535 in k522 in print-node in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 154  pretty-print */
t2=C_retrieve(lf[34]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* print-header in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_fcall f_499(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_499,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_503,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm: 144  printf */
t5=C_retrieve(lf[29]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,lf[31],t2);}
else{
t5=t4;
f_503(2,t5,C_SCHEME_UNDEFINED);}}

/* k501 in print-header in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_503,2,t0,t1);}
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],C_retrieve(lf[28])))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_512,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 147  printf */
t3=C_retrieve(lf[29]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[30],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k510 in k501 in print-header in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static void C_ccall f_512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* cputime in k444 in k438 in k435 in k2332 in k419 in compile-source-file */
static C_word C_fcall f_493(){
C_word tmp;
C_word t1;
C_stack_check;
return((C_word)C_fudge(C_fix(6)));}

/* option-arg in compile-source-file */
static void C_fcall f_388(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_388,NULL,2,t1,t2);}
t3=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_car(t2);
/* batch-driver.scm: 95   quit */
t5=C_retrieve(lf[3]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,lf[4],t4);}
else{
t4=(C_word)C_i_cadr(t2);
if(C_truep((C_word)C_i_symbolp(t4))){
/* batch-driver.scm: 98   quit */
t5=C_retrieve(lf[3]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,lf[5],t4);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[269] = {
{"toplevelbatch-driver.scm",(void*)C_driver_toplevel},
{"f_385batch-driver.scm",(void*)f_385},
{"f_421batch-driver.scm",(void*)f_421},
{"f_2348batch-driver.scm",(void*)f_2348},
{"f_2344batch-driver.scm",(void*)f_2344},
{"f_2336batch-driver.scm",(void*)f_2336},
{"f_2334batch-driver.scm",(void*)f_2334},
{"f_2323batch-driver.scm",(void*)f_2323},
{"f_2301batch-driver.scm",(void*)f_2301},
{"f_437batch-driver.scm",(void*)f_437},
{"f_2295batch-driver.scm",(void*)f_2295},
{"f_2291batch-driver.scm",(void*)f_2291},
{"f_440batch-driver.scm",(void*)f_440},
{"f_446batch-driver.scm",(void*)f_446},
{"f_2272batch-driver.scm",(void*)f_2272},
{"f_2268batch-driver.scm",(void*)f_2268},
{"f_2264batch-driver.scm",(void*)f_2264},
{"f_759batch-driver.scm",(void*)f_759},
{"f_2260batch-driver.scm",(void*)f_2260},
{"f_2238batch-driver.scm",(void*)f_2238},
{"f_2256batch-driver.scm",(void*)f_2256},
{"f_2244batch-driver.scm",(void*)f_2244},
{"f_763batch-driver.scm",(void*)f_763},
{"f_770batch-driver.scm",(void*)f_770},
{"f_773batch-driver.scm",(void*)f_773},
{"f_776batch-driver.scm",(void*)f_776},
{"f_782batch-driver.scm",(void*)f_782},
{"f_785batch-driver.scm",(void*)f_785},
{"f_788batch-driver.scm",(void*)f_788},
{"f_795batch-driver.scm",(void*)f_795},
{"f_798batch-driver.scm",(void*)f_798},
{"f_2201batch-driver.scm",(void*)f_2201},
{"f_802batch-driver.scm",(void*)f_802},
{"f_2193batch-driver.scm",(void*)f_2193},
{"f_805batch-driver.scm",(void*)f_805},
{"f_808batch-driver.scm",(void*)f_808},
{"f_811batch-driver.scm",(void*)f_811},
{"f_814batch-driver.scm",(void*)f_814},
{"f_817batch-driver.scm",(void*)f_817},
{"f_820batch-driver.scm",(void*)f_820},
{"f_823batch-driver.scm",(void*)f_823},
{"f_826batch-driver.scm",(void*)f_826},
{"f_829batch-driver.scm",(void*)f_829},
{"f_832batch-driver.scm",(void*)f_832},
{"f_2136batch-driver.scm",(void*)f_2136},
{"f_2139batch-driver.scm",(void*)f_2139},
{"f_2142batch-driver.scm",(void*)f_2142},
{"f_838batch-driver.scm",(void*)f_838},
{"f_2123batch-driver.scm",(void*)f_2123},
{"f_2126batch-driver.scm",(void*)f_2126},
{"f_841batch-driver.scm",(void*)f_841},
{"f_2087batch-driver.scm",(void*)f_2087},
{"f_844batch-driver.scm",(void*)f_844},
{"f_2074batch-driver.scm",(void*)f_2074},
{"f_2078batch-driver.scm",(void*)f_2078},
{"f_2081batch-driver.scm",(void*)f_2081},
{"f_847batch-driver.scm",(void*)f_847},
{"f_2071batch-driver.scm",(void*)f_2071},
{"f_2067batch-driver.scm",(void*)f_2067},
{"f_853batch-driver.scm",(void*)f_853},
{"f_856batch-driver.scm",(void*)f_856},
{"f_2051batch-driver.scm",(void*)f_2051},
{"f_860batch-driver.scm",(void*)f_860},
{"f_863batch-driver.scm",(void*)f_863},
{"f_2043batch-driver.scm",(void*)f_2043},
{"f_866batch-driver.scm",(void*)f_866},
{"f_873batch-driver.scm",(void*)f_873},
{"f_2036batch-driver.scm",(void*)f_2036},
{"f_876batch-driver.scm",(void*)f_876},
{"f_2025batch-driver.scm",(void*)f_2025},
{"f_2033batch-driver.scm",(void*)f_2033},
{"f_879batch-driver.scm",(void*)f_879},
{"f_883batch-driver.scm",(void*)f_883},
{"f_894batch-driver.scm",(void*)f_894},
{"f_898batch-driver.scm",(void*)f_898},
{"f_2011batch-driver.scm",(void*)f_2011},
{"f_2007batch-driver.scm",(void*)f_2007},
{"f_1995batch-driver.scm",(void*)f_1995},
{"f_901batch-driver.scm",(void*)f_901},
{"f_1988batch-driver.scm",(void*)f_1988},
{"f_1984batch-driver.scm",(void*)f_1984},
{"f_904batch-driver.scm",(void*)f_904},
{"f_1972batch-driver.scm",(void*)f_1972},
{"f_1970batch-driver.scm",(void*)f_1970},
{"f_908batch-driver.scm",(void*)f_908},
{"f_911batch-driver.scm",(void*)f_911},
{"f_1949batch-driver.scm",(void*)f_1949},
{"f_915batch-driver.scm",(void*)f_915},
{"f_1942batch-driver.scm",(void*)f_1942},
{"f_919batch-driver.scm",(void*)f_919},
{"f_1935batch-driver.scm",(void*)f_1935},
{"f_923batch-driver.scm",(void*)f_923},
{"f_1928batch-driver.scm",(void*)f_1928},
{"f_927batch-driver.scm",(void*)f_927},
{"f_1908batch-driver.scm",(void*)f_1908},
{"f_931batch-driver.scm",(void*)f_931},
{"f_942batch-driver.scm",(void*)f_942},
{"f_945batch-driver.scm",(void*)f_945},
{"f_948batch-driver.scm",(void*)f_948},
{"f_1861batch-driver.scm",(void*)f_1861},
{"f_951batch-driver.scm",(void*)f_951},
{"f_972batch-driver.scm",(void*)f_972},
{"f_1003batch-driver.scm",(void*)f_1003},
{"f_1009batch-driver.scm",(void*)f_1009},
{"f_1013batch-driver.scm",(void*)f_1013},
{"f_1016batch-driver.scm",(void*)f_1016},
{"f_1019batch-driver.scm",(void*)f_1019},
{"f_1022batch-driver.scm",(void*)f_1022},
{"f_1030batch-driver.scm",(void*)f_1030},
{"f_1033batch-driver.scm",(void*)f_1033},
{"f_1036batch-driver.scm",(void*)f_1036},
{"f_1827batch-driver.scm",(void*)f_1827},
{"f_1835batch-driver.scm",(void*)f_1835},
{"f_1039batch-driver.scm",(void*)f_1039},
{"f_1042batch-driver.scm",(void*)f_1042},
{"f_1758batch-driver.scm",(void*)f_1758},
{"f_1787batch-driver.scm",(void*)f_1787},
{"f_1790batch-driver.scm",(void*)f_1790},
{"f_1802batch-driver.scm",(void*)f_1802},
{"f_1823batch-driver.scm",(void*)f_1823},
{"f_1793batch-driver.scm",(void*)f_1793},
{"f_1773batch-driver.scm",(void*)f_1773},
{"f_1777batch-driver.scm",(void*)f_1777},
{"f_1781batch-driver.scm",(void*)f_1781},
{"f_1769batch-driver.scm",(void*)f_1769},
{"f_1746batch-driver.scm",(void*)f_1746},
{"f_1750batch-driver.scm",(void*)f_1750},
{"f_1045batch-driver.scm",(void*)f_1045},
{"f_1048batch-driver.scm",(void*)f_1048},
{"f_1736batch-driver.scm",(void*)f_1736},
{"f_1740batch-driver.scm",(void*)f_1740},
{"f_1051batch-driver.scm",(void*)f_1051},
{"f_1054batch-driver.scm",(void*)f_1054},
{"f_1721batch-driver.scm",(void*)f_1721},
{"f_1060batch-driver.scm",(void*)f_1060},
{"f_1714batch-driver.scm",(void*)f_1714},
{"f_1063batch-driver.scm",(void*)f_1063},
{"f_1066batch-driver.scm",(void*)f_1066},
{"f_1694batch-driver.scm",(void*)f_1694},
{"f_1557batch-driver.scm",(void*)f_1557},
{"f_1688batch-driver.scm",(void*)f_1688},
{"f_1561batch-driver.scm",(void*)f_1561},
{"f_1565batch-driver.scm",(void*)f_1565},
{"f_1643batch-driver.scm",(void*)f_1643},
{"f_1569batch-driver.scm",(void*)f_1569},
{"f_1605batch-driver.scm",(void*)f_1605},
{"f_1621batch-driver.scm",(void*)f_1621},
{"f_1573batch-driver.scm",(void*)f_1573},
{"f_1576batch-driver.scm",(void*)f_1576},
{"f_1072batch-driver.scm",(void*)f_1072},
{"f_1550batch-driver.scm",(void*)f_1550},
{"f_1075batch-driver.scm",(void*)f_1075},
{"f_1544batch-driver.scm",(void*)f_1544},
{"f_1078batch-driver.scm",(void*)f_1078},
{"f_1081batch-driver.scm",(void*)f_1081},
{"f_1084batch-driver.scm",(void*)f_1084},
{"f_1089batch-driver.scm",(void*)f_1089},
{"f_1092batch-driver.scm",(void*)f_1092},
{"f_1095batch-driver.scm",(void*)f_1095},
{"f_1098batch-driver.scm",(void*)f_1098},
{"f_1510batch-driver.scm",(void*)f_1510},
{"f_1517batch-driver.scm",(void*)f_1517},
{"f_1101batch-driver.scm",(void*)f_1101},
{"f_1507batch-driver.scm",(void*)f_1507},
{"f_1503batch-driver.scm",(void*)f_1503},
{"f_1110batch-driver.scm",(void*)f_1110},
{"f_1492batch-driver.scm",(void*)f_1492},
{"f_1499batch-driver.scm",(void*)f_1499},
{"f_1113batch-driver.scm",(void*)f_1113},
{"f_1460batch-driver.scm",(void*)f_1460},
{"f_1467batch-driver.scm",(void*)f_1467},
{"f_1470batch-driver.scm",(void*)f_1470},
{"f_1473batch-driver.scm",(void*)f_1473},
{"f_1479batch-driver.scm",(void*)f_1479},
{"f_1482batch-driver.scm",(void*)f_1482},
{"f_1485batch-driver.scm",(void*)f_1485},
{"f_1116batch-driver.scm",(void*)f_1116},
{"f_1438batch-driver.scm",(void*)f_1438},
{"f_1441batch-driver.scm",(void*)f_1441},
{"f_1444batch-driver.scm",(void*)f_1444},
{"f_1450batch-driver.scm",(void*)f_1450},
{"f_1453batch-driver.scm",(void*)f_1453},
{"f_1456batch-driver.scm",(void*)f_1456},
{"f_1119batch-driver.scm",(void*)f_1119},
{"f_1125batch-driver.scm",(void*)f_1125},
{"f_1131batch-driver.scm",(void*)f_1131},
{"f_1134batch-driver.scm",(void*)f_1134},
{"f_1137batch-driver.scm",(void*)f_1137},
{"f_1142batch-driver.scm",(void*)f_1142},
{"f_1149batch-driver.scm",(void*)f_1149},
{"f_1405batch-driver.scm",(void*)f_1405},
{"f_1408batch-driver.scm",(void*)f_1408},
{"f_1152batch-driver.scm",(void*)f_1152},
{"f_1156batch-driver.scm",(void*)f_1156},
{"f_1159batch-driver.scm",(void*)f_1159},
{"f_1162batch-driver.scm",(void*)f_1162},
{"f_1254batch-driver.scm",(void*)f_1254},
{"f_1260batch-driver.scm",(void*)f_1260},
{"f_1263batch-driver.scm",(void*)f_1263},
{"f_1266batch-driver.scm",(void*)f_1266},
{"f_1382batch-driver.scm",(void*)f_1382},
{"f_1269batch-driver.scm",(void*)f_1269},
{"f_1272batch-driver.scm",(void*)f_1272},
{"f_1275batch-driver.scm",(void*)f_1275},
{"f_1370batch-driver.scm",(void*)f_1370},
{"f_1372batch-driver.scm",(void*)f_1372},
{"f_1362batch-driver.scm",(void*)f_1362},
{"f_1364batch-driver.scm",(void*)f_1364},
{"f_1278batch-driver.scm",(void*)f_1278},
{"f_1281batch-driver.scm",(void*)f_1281},
{"f_1284batch-driver.scm",(void*)f_1284},
{"f_1298batch-driver.scm",(void*)f_1298},
{"f_1302batch-driver.scm",(void*)f_1302},
{"f_1308batch-driver.scm",(void*)f_1308},
{"f_1311batch-driver.scm",(void*)f_1311},
{"f_1314batch-driver.scm",(void*)f_1314},
{"f_1317batch-driver.scm",(void*)f_1317},
{"f_1320batch-driver.scm",(void*)f_1320},
{"f_1342batch-driver.scm",(void*)f_1342},
{"f_1323batch-driver.scm",(void*)f_1323},
{"f_1326batch-driver.scm",(void*)f_1326},
{"f_1292batch-driver.scm",(void*)f_1292},
{"f_1168batch-driver.scm",(void*)f_1168},
{"f_1182batch-driver.scm",(void*)f_1182},
{"f_1186batch-driver.scm",(void*)f_1186},
{"f_1189batch-driver.scm",(void*)f_1189},
{"f_1208batch-driver.scm",(void*)f_1208},
{"f_1225batch-driver.scm",(void*)f_1225},
{"f_1228batch-driver.scm",(void*)f_1228},
{"f_1234batch-driver.scm",(void*)f_1234},
{"f_1237batch-driver.scm",(void*)f_1237},
{"f_1176batch-driver.scm",(void*)f_1176},
{"f_991batch-driver.scm",(void*)f_991},
{"f_984batch-driver.scm",(void*)f_984},
{"f_960batch-driver.scm",(void*)f_960},
{"f_752batch-driver.scm",(void*)f_752},
{"f_735batch-driver.scm",(void*)f_735},
{"f_725batch-driver.scm",(void*)f_725},
{"f_695batch-driver.scm",(void*)f_695},
{"f_701batch-driver.scm",(void*)f_701},
{"f_715batch-driver.scm",(void*)f_715},
{"f_719batch-driver.scm",(void*)f_719},
{"f_615batch-driver.scm",(void*)f_615},
{"f_684batch-driver.scm",(void*)f_684},
{"f_680batch-driver.scm",(void*)f_680},
{"f_664batch-driver.scm",(void*)f_664},
{"f_656batch-driver.scm",(void*)f_656},
{"f_625batch-driver.scm",(void*)f_625},
{"f_566batch-driver.scm",(void*)f_566},
{"f_612batch-driver.scm",(void*)f_612},
{"f_570batch-driver.scm",(void*)f_570},
{"f_576batch-driver.scm",(void*)f_576},
{"f_591batch-driver.scm",(void*)f_591},
{"f_587batch-driver.scm",(void*)f_587},
{"f_573batch-driver.scm",(void*)f_573},
{"f_554batch-driver.scm",(void*)f_554},
{"f_561batch-driver.scm",(void*)f_561},
{"f_539batch-driver.scm",(void*)f_539},
{"f_546batch-driver.scm",(void*)f_546},
{"f_549batch-driver.scm",(void*)f_549},
{"f_517batch-driver.scm",(void*)f_517},
{"f_524batch-driver.scm",(void*)f_524},
{"f_537batch-driver.scm",(void*)f_537},
{"f_499batch-driver.scm",(void*)f_499},
{"f_503batch-driver.scm",(void*)f_503},
{"f_512batch-driver.scm",(void*)f_512},
{"f_493batch-driver.scm",(void*)f_493},
{"f_388batch-driver.scm",(void*)f_388},
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
