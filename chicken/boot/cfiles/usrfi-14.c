/* Generated from srfi-14.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:14
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: srfi-14.scm -output-file usrfi-14.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
   unit: srfi_14
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[109];


C_noret_decl(C_srfi_14_toplevel)
C_externexport void C_ccall C_srfi_14_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_623)
static void C_ccall f_623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_739)
static void C_ccall f_739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_743)
static void C_ccall f_743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2659)
static void C_ccall f_2659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2669)
static void C_ccall f_2669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2681)
static void C_ccall f_2681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2685)
static void C_ccall f_2685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2586)
static void C_ccall f_2586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2472)
static void C_fcall f_2472(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2463)
static void C_ccall f_2463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2362)
static void C_ccall f_2362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2291)
static void C_ccall f_2291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2224)
static void C_ccall f_2224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2166)
static void C_ccall f_2166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2145)
static void C_ccall f_2145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2112)
static void C_ccall f_2112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2118)
static void C_ccall f_2118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_fcall f_2066(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2081)
static void C_fcall f_2081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2025)
static void C_fcall f_2025(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2035)
static void C_fcall f_2035(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2045)
static void C_ccall f_2045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1981)
static void C_ccall f_1981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1989)
static void C_ccall f_1989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1993)
static void C_ccall f_1993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1965)
static void C_ccall f_1965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1965)
static void C_ccall f_1965r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1979)
static void C_ccall f_1979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1972)
static void C_ccall f_1972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1912)
static void C_fcall f_1912(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1918)
static void C_fcall f_1918(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1928)
static void C_fcall f_1928(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1872)
static void C_ccall f_1872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1872)
static void C_ccall f_1872r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1885)
static void C_ccall f_1885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1821)
static void C_fcall f_1821(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1858)
static void C_fcall f_1858(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1855)
static void C_ccall f_1855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1834)
static C_word C_fcall f_1834(C_word t0,C_word t1);
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1777)
static void C_fcall f_1777(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1807)
static void C_ccall f_1807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1787)
static void C_fcall f_1787(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1747)
static void C_ccall f_1747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1703)
static void C_fcall f_1703(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1713)
static C_word C_fcall f_1713(C_word t0,C_word t1);
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1665)
static void C_fcall f_1665(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1683)
static void C_fcall f_1683(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1646)
static void C_ccall f_1646(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1654)
static void C_ccall f_1654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1650)
static void C_ccall f_1650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1634)
static void C_ccall f_1634(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1634)
static void C_ccall f_1634r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1638)
static void C_ccall f_1638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1607)
static void C_fcall f_1607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1613)
static void C_ccall f_1613(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_1589)
static void C_ccall f_1589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1549)
static void C_fcall f_1549(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1555)
static void C_fcall f_1555(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1583)
static void C_ccall f_1583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1579)
static void C_ccall f_1579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1575)
static void C_ccall f_1575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1496)
static void C_ccall f_1496(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1505)
static void C_fcall f_1505(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1535)
static void C_ccall f_1535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1515)
static void C_ccall f_1515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1456)
static void C_fcall f_1456(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1472)
static void C_ccall f_1472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1409)
static void C_fcall f_1409(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1437)
static void C_ccall f_1437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1427)
static void C_ccall f_1427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1337)
static void C_ccall f_1337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1352)
static void C_fcall f_1352(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1382)
static void C_ccall f_1382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1362)
static void C_fcall f_1362(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1296)
static void C_fcall f_1296(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1306)
static void C_ccall f_1306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1245)
static void C_fcall f_1245(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1249)
static void C_ccall f_1249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1254)
static void C_fcall f_1254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1267)
static void C_fcall f_1267(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1239)
static void C_ccall f_1239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1233)
static void C_ccall f_1233(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1227)
static void C_ccall f_1227(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1209)
static void C_ccall f_1209(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1209)
static void C_ccall f_1209r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1215)
static void C_ccall f_1215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1185)
static void C_ccall f_1185(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1185)
static void C_ccall f_1185r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1191)
static void C_ccall f_1191(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1154)
static void C_fcall f_1154(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1163)
static void C_ccall f_1163(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1128)
static void C_fcall f_1128(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1152)
static void C_ccall f_1152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1132)
static void C_ccall f_1132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1135)
static void C_ccall f_1135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1071)
static void C_ccall f_1071(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1080)
static void C_fcall f_1080(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1114)
static void C_ccall f_1114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1101)
static void C_ccall f_1101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1034)
static void C_ccall f_1034(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1043)
static C_word C_fcall f_1043(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1014)
static void C_ccall f_1014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_912)
static void C_ccall f_912(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_912)
static void C_ccall f_912r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_919)
static void C_fcall f_919(C_word t0,C_word t1) C_noret;
C_noret_decl(f_922)
static void C_ccall f_922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_930)
static void C_fcall f_930(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_951)
static void C_fcall f_951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_975)
static C_word C_fcall f_975(C_word t0,C_word t1);
C_noret_decl(f_814)
static void C_ccall f_814(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_814)
static void C_ccall f_814r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_834)
static void C_ccall f_834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_836)
static void C_fcall f_836(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_846)
static void C_ccall f_846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_863)
static void C_fcall f_863(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_780)
static void C_fcall f_780(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_745)
static void C_ccall f_745(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_757)
static void C_ccall f_757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_753)
static void C_ccall f_753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_712)
static void C_fcall f_712(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_718)
static void C_fcall f_718(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_725)
static void C_ccall f_725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_665)
static void C_fcall f_665(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_710)
static void C_ccall f_710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_697)
static void C_ccall f_697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_655)
static void C_fcall f_655(C_word t0,C_word t1) C_noret;
C_noret_decl(f_649)
static void C_ccall f_649(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_643)
static void C_ccall f_643(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_637)
static void C_ccall f_637(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_631)
static C_word C_fcall f_631(C_word t0);
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_2472)
static void C_fcall trf_2472(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2472(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2472(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2066)
static void C_fcall trf_2066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2066(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2066(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2081)
static void C_fcall trf_2081(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2081(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2081(t0,t1,t2);}

C_noret_decl(trf_2025)
static void C_fcall trf_2025(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2025(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2025(t0,t1,t2);}

C_noret_decl(trf_2035)
static void C_fcall trf_2035(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2035(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2035(t0,t1,t2);}

C_noret_decl(trf_1912)
static void C_fcall trf_1912(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1912(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1912(t0,t1,t2,t3);}

C_noret_decl(trf_1918)
static void C_fcall trf_1918(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1918(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1918(t0,t1,t2);}

C_noret_decl(trf_1928)
static void C_fcall trf_1928(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1928(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1928(t0,t1);}

C_noret_decl(trf_1821)
static void C_fcall trf_1821(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1821(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1821(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1858)
static void C_fcall trf_1858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1858(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1858(t0,t1);}

C_noret_decl(trf_1777)
static void C_fcall trf_1777(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1777(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1777(t0,t1,t2,t3);}

C_noret_decl(trf_1787)
static void C_fcall trf_1787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1787(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1787(t0,t1);}

C_noret_decl(trf_1703)
static void C_fcall trf_1703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1703(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1703(t0,t1,t2);}

C_noret_decl(trf_1665)
static void C_fcall trf_1665(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1665(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1665(t0,t1,t2,t3);}

C_noret_decl(trf_1683)
static void C_fcall trf_1683(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1683(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1683(t0,t1);}

C_noret_decl(trf_1607)
static void C_fcall trf_1607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1607(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1607(t0,t1,t2);}

C_noret_decl(trf_1549)
static void C_fcall trf_1549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1549(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1549(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1555)
static void C_fcall trf_1555(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1555(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1555(t0,t1,t2);}

C_noret_decl(trf_1505)
static void C_fcall trf_1505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1505(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1505(t0,t1,t2);}

C_noret_decl(trf_1456)
static void C_fcall trf_1456(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1456(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1456(t0,t1,t2);}

C_noret_decl(trf_1409)
static void C_fcall trf_1409(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1409(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1409(t0,t1,t2,t3);}

C_noret_decl(trf_1352)
static void C_fcall trf_1352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1352(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1352(t0,t1,t2);}

C_noret_decl(trf_1362)
static void C_fcall trf_1362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1362(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1362(t0,t1);}

C_noret_decl(trf_1296)
static void C_fcall trf_1296(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1296(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1296(t0,t1,t2);}

C_noret_decl(trf_1245)
static void C_fcall trf_1245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1245(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1245(t0,t1,t2,t3);}

C_noret_decl(trf_1254)
static void C_fcall trf_1254(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1254(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1254(t0,t1,t2);}

C_noret_decl(trf_1267)
static void C_fcall trf_1267(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1267(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1267(t0,t1);}

C_noret_decl(trf_1154)
static void C_fcall trf_1154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1154(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1154(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1128)
static void C_fcall trf_1128(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1128(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1128(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1080)
static void C_fcall trf_1080(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1080(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1080(t0,t1,t2,t3);}

C_noret_decl(trf_919)
static void C_fcall trf_919(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_919(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_919(t0,t1);}

C_noret_decl(trf_930)
static void C_fcall trf_930(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_930(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_930(t0,t1,t2,t3);}

C_noret_decl(trf_951)
static void C_fcall trf_951(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_951(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_951(t0,t1);}

C_noret_decl(trf_836)
static void C_fcall trf_836(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_836(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_836(t0,t1,t2,t3);}

C_noret_decl(trf_863)
static void C_fcall trf_863(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_863(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_863(t0,t1,t2);}

C_noret_decl(trf_780)
static void C_fcall trf_780(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_780(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_780(t0,t1,t2);}

C_noret_decl(trf_712)
static void C_fcall trf_712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_712(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_712(t0,t1,t2);}

C_noret_decl(trf_718)
static void C_fcall trf_718(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_718(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_718(t0,t1,t2);}

C_noret_decl(trf_665)
static void C_fcall trf_665(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_665(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_665(t0,t1,t2);}

C_noret_decl(trf_655)
static void C_fcall trf_655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_655(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_655(t0,t1);}

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
C_srfi_14_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_14_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_14_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(862)){
C_save(t1);
C_rereclaim2(862*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,109);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[4]=C_h_intern(&lf[4],13,"make-char-set");
lf[5]=C_h_intern(&lf[5],8,"char-set");
lf[6]=C_h_intern(&lf[6],10,"char-set:s");
lf[7]=C_h_intern(&lf[7],9,"char-set\077");
lf[9]=C_h_intern(&lf[9],13,"\003syssubstring");
lf[11]=C_h_intern(&lf[11],9,"\003syserror");
lf[12]=C_static_string(C_heaptop,32,"BASE-CS parameter not a char-set");
lf[13]=C_static_string(C_heaptop,51,"Expected final base char set -- too many parameters");
lf[14]=C_h_intern(&lf[14],11,"make-string");
lf[16]=C_static_string(C_heaptop,14,"Not a char-set");
lf[19]=C_h_intern(&lf[19],13,"char-set-copy");
lf[20]=C_h_intern(&lf[20],9,"char-set=");
lf[21]=C_h_intern(&lf[21],10,"char-set<=");
lf[22]=C_h_intern(&lf[22],13,"char-set-hash");
lf[23]=C_h_intern(&lf[23],6,"modulo");
lf[24]=C_h_intern(&lf[24],18,"char-set-contains\077");
lf[25]=C_h_intern(&lf[25],13,"char-set-size");
lf[26]=C_h_intern(&lf[26],14,"char-set-count");
lf[28]=C_h_intern(&lf[28],12,"\003sysfor-each");
lf[30]=C_h_intern(&lf[30],15,"char-set-adjoin");
lf[31]=C_h_intern(&lf[31],16,"char-set-adjoin!");
lf[32]=C_h_intern(&lf[32],15,"char-set-delete");
lf[33]=C_h_intern(&lf[33],16,"char-set-delete!");
lf[34]=C_h_intern(&lf[34],15,"char-set-cursor");
lf[36]=C_h_intern(&lf[36],16,"end-of-char-set\077");
lf[37]=C_h_intern(&lf[37],12,"char-set-ref");
lf[38]=C_h_intern(&lf[38],20,"char-set-cursor-next");
lf[39]=C_h_intern(&lf[39],17,"char-set-for-each");
lf[40]=C_h_intern(&lf[40],12,"char-set-map");
lf[41]=C_h_intern(&lf[41],13,"char-set-fold");
lf[42]=C_h_intern(&lf[42],14,"char-set-every");
lf[43]=C_h_intern(&lf[43],12,"char-set-any");
lf[45]=C_h_intern(&lf[45],15,"char-set-unfold");
lf[46]=C_h_intern(&lf[46],16,"char-set-unfold!");
lf[48]=C_h_intern(&lf[48],14,"list->char-set");
lf[49]=C_h_intern(&lf[49],15,"list->char-set!");
lf[50]=C_h_intern(&lf[50],14,"char-set->list");
lf[52]=C_h_intern(&lf[52],16,"string->char-set");
lf[53]=C_h_intern(&lf[53],17,"string->char-set!");
lf[54]=C_h_intern(&lf[54],16,"char-set->string");
lf[56]=C_h_intern(&lf[56],3,"min");
lf[57]=C_static_string(C_heaptop,96,"Requested UCS range contains unavailable characters -- this implementation only "
"supports Latin-1");
lf[58]=C_h_intern(&lf[58],19,"ucs-range->char-set");
lf[59]=C_h_intern(&lf[59],20,"ucs-range->char-set!");
lf[61]=C_h_intern(&lf[61],15,"char-set-filter");
lf[62]=C_h_intern(&lf[62],16,"char-set-filter!");
lf[63]=C_h_intern(&lf[63],10,"->char-set");
lf[64]=C_static_string(C_heaptop,30,"Not a charset, string or char.");
lf[67]=C_h_intern(&lf[67],19,"char-set-complement");
lf[68]=C_h_intern(&lf[68],20,"char-set-complement!");
lf[69]=C_h_intern(&lf[69],15,"char-set-union!");
lf[70]=C_h_intern(&lf[70],14,"char-set-union");
lf[71]=C_h_intern(&lf[71],14,"char-set:empty");
lf[72]=C_h_intern(&lf[72],22,"char-set-intersection!");
lf[73]=C_h_intern(&lf[73],21,"char-set-intersection");
lf[74]=C_h_intern(&lf[74],13,"char-set:full");
lf[75]=C_h_intern(&lf[75],20,"char-set-difference!");
lf[76]=C_h_intern(&lf[76],19,"char-set-difference");
lf[77]=C_h_intern(&lf[77],13,"char-set-xor!");
lf[78]=C_h_intern(&lf[78],12,"char-set-xor");
lf[80]=C_h_intern(&lf[80],27,"char-set-diff+intersection!");
lf[81]=C_h_intern(&lf[81],26,"char-set-diff+intersection");
lf[82]=C_h_intern(&lf[82],11,"string-copy");
lf[83]=C_h_intern(&lf[83],19,"char-set:lower-case");
lf[84]=C_h_intern(&lf[84],19,"char-set:upper-case");
lf[85]=C_h_intern(&lf[85],19,"char-set:title-case");
lf[86]=C_h_intern(&lf[86],15,"char-set:letter");
lf[87]=C_h_intern(&lf[87],14,"char-set:digit");
lf[88]=C_h_intern(&lf[88],18,"char-set:hex-digit");
lf[89]=C_h_intern(&lf[89],21,"char-set:letter+digit");
lf[90]=C_h_intern(&lf[90],20,"char-set:punctuation");
lf[91]=C_h_intern(&lf[91],15,"char-set:symbol");
lf[92]=C_h_intern(&lf[92],16,"char-set:graphic");
lf[93]=C_h_intern(&lf[93],19,"char-set:whitespace");
lf[94]=C_h_intern(&lf[94],17,"char-set:printing");
lf[95]=C_h_intern(&lf[95],14,"char-set:blank");
lf[96]=C_h_intern(&lf[96],20,"char-set:iso-control");
lf[97]=C_h_intern(&lf[97],14,"char-set:ascii");
lf[98]=C_h_intern(&lf[98],7,"\003sysmap");
tmp=C_fix(9);
C_save(tmp);
tmp=C_fix(32);
C_save(tmp);
tmp=C_fix(160);
C_save(tmp);
lf[99]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
tmp=C_fix(9);
C_save(tmp);
tmp=C_fix(10);
C_save(tmp);
tmp=C_fix(11);
C_save(tmp);
tmp=C_fix(12);
C_save(tmp);
tmp=C_fix(13);
C_save(tmp);
tmp=C_fix(32);
C_save(tmp);
tmp=C_fix(160);
C_save(tmp);
lf[100]=C_h_list(7,C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(7);
tmp=C_fix(162);
C_save(tmp);
tmp=C_fix(163);
C_save(tmp);
tmp=C_fix(164);
C_save(tmp);
tmp=C_fix(165);
C_save(tmp);
tmp=C_fix(166);
C_save(tmp);
tmp=C_fix(167);
C_save(tmp);
tmp=C_fix(168);
C_save(tmp);
tmp=C_fix(169);
C_save(tmp);
tmp=C_fix(172);
C_save(tmp);
tmp=C_fix(174);
C_save(tmp);
tmp=C_fix(175);
C_save(tmp);
tmp=C_fix(176);
C_save(tmp);
tmp=C_fix(177);
C_save(tmp);
tmp=C_fix(180);
C_save(tmp);
tmp=C_fix(182);
C_save(tmp);
tmp=C_fix(184);
C_save(tmp);
tmp=C_fix(215);
C_save(tmp);
tmp=C_fix(247);
C_save(tmp);
lf[101]=C_h_list(18,C_pick(17),C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(18);
lf[102]=C_static_string(C_heaptop,9,"$+<=>^`|~");
tmp=C_fix(161);
C_save(tmp);
tmp=C_fix(171);
C_save(tmp);
tmp=C_fix(173);
C_save(tmp);
tmp=C_fix(183);
C_save(tmp);
tmp=C_fix(187);
C_save(tmp);
tmp=C_fix(191);
C_save(tmp);
lf[103]=C_h_list(6,C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(6);
lf[104]=C_static_string(C_heaptop,23,"!\042#%&\047()*,-./:;\077@[\134]_{}");
lf[105]=C_static_string(C_heaptop,22,"0123456789abcdefABCDEF");
lf[106]=C_static_string(C_heaptop,10,"0123456789");
lf[107]=C_h_intern(&lf[107],17,"register-feature!");
lf[108]=C_h_intern(&lf[108],7,"srfi-14");
C_register_lf2(lf,109,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_623,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 43   register-feature! */
t4=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[108]);}

/* k621 */
static void C_ccall f_623(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_623,2,t0,t1);}
t2=C_mutate(&lf[2],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_625,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[3],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_631,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[4]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_637,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[6]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_643,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[7]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_649,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[8],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_655,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[10],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_665,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[15],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_712,tmp=(C_word)a,a+=2,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 169  %latin1->char */
t11=lf[2];
f_625(3,t11,t10,C_fix(0));}

/* k737 in k621 */
static void C_ccall f_739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_739,2,t0,t1);}
t2=C_mutate(&lf[17],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 170  %latin1->char */
t4=lf[2];
f_625(3,t4,t3,C_fix(1));}

/* k741 in k737 in k621 */
static void C_ccall f_743(C_word c,C_word t0,C_word t1){
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
C_word ab[117],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_743,2,t0,t1);}
t2=C_mutate(&lf[18],t1);
t3=C_mutate((C_word*)lf[19]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_745,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[20]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_759,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[21]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_814,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[22]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_912,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[24]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1010,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[25]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1034,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[26]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1071,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[27],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1128,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[29],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1154,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[30]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1173,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[31]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1185,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[32]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1197,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[33]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1209,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[34]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1221,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[36]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1227,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[37]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1233,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[38]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1239,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate(&lf[35],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1245,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[39]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1287,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[40]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1337,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[41]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1400,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[42]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1447,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[43]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1496,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate(&lf[44],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1549,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[45]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1585,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[46]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1597,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate(&lf[47],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1607,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[5]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1622,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[48]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1634,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1646,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[50]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1656,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate(&lf[51],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1703,tmp=(C_word)a,a+=2,tmp));
t35=C_mutate((C_word*)lf[52]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1743,tmp=(C_word)a,a+=2,tmp));
t36=C_mutate((C_word*)lf[53]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1755,tmp=(C_word)a,a+=2,tmp));
t37=C_mutate((C_word*)lf[54]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1765,tmp=(C_word)a,a+=2,tmp));
t38=C_mutate(&lf[55],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1821,tmp=(C_word)a,a+=2,tmp));
t39=C_mutate((C_word*)lf[58]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1872,tmp=(C_word)a,a+=2,tmp));
t40=C_mutate((C_word*)lf[59]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1902,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate(&lf[60],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1912,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1965,tmp=(C_word)a,a+=2,tmp));
t43=C_mutate((C_word*)lf[62]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1981,tmp=(C_word)a,a+=2,tmp));
t44=C_mutate((C_word*)lf[63]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1995,tmp=(C_word)a,a+=2,tmp));
t45=C_mutate(&lf[65],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2025,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate(&lf[66],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2066,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2108,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate((C_word*)lf[68]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2136,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2158,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate((C_word*)lf[70]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2184,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate((C_word*)lf[72]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2233,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate((C_word*)lf[73]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2255,tmp=(C_word)a,a+=2,tmp));
t53=C_mutate((C_word*)lf[75]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2300,tmp=(C_word)a,a+=2,tmp));
t54=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2326,tmp=(C_word)a,a+=2,tmp));
t55=C_mutate((C_word*)lf[77]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2367,tmp=(C_word)a,a+=2,tmp));
t56=C_mutate((C_word*)lf[78]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2408,tmp=(C_word)a,a+=2,tmp));
t57=C_mutate(&lf[79],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2472,tmp=(C_word)a,a+=2,tmp));
t58=C_mutate((C_word*)lf[80]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2525,tmp=(C_word)a,a+=2,tmp));
t59=C_mutate((C_word*)lf[81]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2576,tmp=(C_word)a,a+=2,tmp));
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2605,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 658  char-set */
t61=*((C_word*)lf[5]+1);
((C_proc2)(void*)(*((C_word*)t61+1)))(2,t61,t60);}

/* k2603 in k741 in k737 in k621 */
static void C_ccall f_2605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2605,2,t0,t1);}
t2=C_mutate((C_word*)lf[71]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 659  char-set-complement */
t4=*((C_word*)lf[67]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[71]+1));}

/* k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2609,2,t0,t1);}
t2=C_mutate((C_word*)lf[74]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2613,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 662  ucs-range->char-set */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(97),C_fix(123));}

/* k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2616,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 663  ucs-range->char-set! */
t3=*((C_word*)lf[59]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(223),C_fix(247),C_SCHEME_TRUE,t1);}

/* k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2619,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 664  ucs-range->char-set! */
t3=*((C_word*)lf[59]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(248),C_fix(256),C_SCHEME_TRUE,t1);}

/* k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2622,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2721,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 665  %latin1->char */
t4=lf[2];
f_625(3,t4,t3,C_fix(181));}

/* k2719 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 665  char-set-adjoin! */
t2=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2622,2,t0,t1);}
t2=C_mutate((C_word*)lf[83]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 668  ucs-range->char-set */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(65),C_fix(91));}

/* k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2717,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 671  ucs-range->char-set! */
t4=*((C_word*)lf[59]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,C_fix(192),C_fix(215),C_SCHEME_TRUE,t1);}

/* k2715 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 670  ucs-range->char-set! */
t2=*((C_word*)lf[59]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(216),C_fix(223),C_SCHEME_TRUE,t1);}

/* k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2629,2,t0,t1);}
t2=C_mutate((C_word*)lf[84]+1,t1);
t3=C_mutate((C_word*)lf[85]+1,*((C_word*)lf[71]+1));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 676  char-set-union */
t5=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[84]+1),*((C_word*)lf[83]+1));}

/* k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2637,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2709,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 678  %latin1->char */
t4=lf[2];
f_625(3,t4,t3,C_fix(170));}

/* k2707 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2713,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 679  %latin1->char */
t3=lf[2];
f_625(3,t3,t2,C_fix(186));}

/* k2711 in k2707 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 677  char-set-adjoin! */
t2=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2637,2,t0,t1);}
t2=C_mutate((C_word*)lf[86]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2641,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 681  string->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[106]);}

/* k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2641,2,t0,t1);}
t2=C_mutate((C_word*)lf[87]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2645,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 682  string->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[105]);}

/* k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2645,2,t0,t1);}
t2=C_mutate((C_word*)lf[88]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 685  char-set-union */
t4=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[86]+1),*((C_word*)lf[87]+1));}

/* k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2649,2,t0,t1);}
t2=C_mutate((C_word*)lf[89]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2653,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 688  string->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[104]);}

/* k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2656,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* map */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[2],lf[103]);}

/* k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2659,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 695  list->char-set! */
t3=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2659,2,t0,t1);}
t2=C_mutate((C_word*)lf[90]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2663,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 698  string->char-set */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[102]);}

/* k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2663,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2666,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* map */
t3=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[2],lf[101]);}

/* k2664 in k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2669,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 717  list->char-set! */
t3=*((C_word*)lf[49]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k2667 in k2664 in k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2669,2,t0,t1);}
t2=C_mutate((C_word*)lf[91]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2673,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 721  char-set-union */
t4=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,*((C_word*)lf[89]+1),*((C_word*)lf[90]+1),*((C_word*)lf[91]+1));}

/* k2671 in k2667 in k2664 in k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2673,2,t0,t1);}
t2=C_mutate((C_word*)lf[92]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2705,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[2],lf[100]);}

/* k2703 in k2671 in k2667 in k2664 in k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 724  list->char-set */
t2=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2675 in k2671 in k2667 in k2664 in k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2677,2,t0,t1);}
t2=C_mutate((C_word*)lf[93]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 732  char-set-union */
t4=*((C_word*)lf[70]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[93]+1),*((C_word*)lf[92]+1));}

/* k2679 in k2675 in k2671 in k2667 in k2664 in k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2681,2,t0,t1);}
t2=C_mutate((C_word*)lf[94]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2685,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2701,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[98]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[2],lf[99]);}

/* k2699 in k2679 in k2675 in k2671 in k2667 in k2664 in k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 735  list->char-set */
t2=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2683 in k2679 in k2675 in k2671 in k2667 in k2664 in k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2685,2,t0,t1);}
t2=C_mutate((C_word*)lf[95]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 741  ucs-range->char-set */
t5=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(0),C_fix(32));}

/* k2695 in k2683 in k2679 in k2675 in k2671 in k2667 in k2664 in k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 741  ucs-range->char-set! */
t2=*((C_word*)lf[59]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(127),C_fix(160),C_SCHEME_TRUE,t1);}

/* k2687 in k2683 in k2679 in k2675 in k2671 in k2667 in k2664 in k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2689,2,t0,t1);}
t2=C_mutate((C_word*)lf[96]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 743  ucs-range->char-set */
t4=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(0),C_fix(128));}

/* k2691 in k2687 in k2683 in k2679 in k2675 in k2671 in k2667 in k2664 in k2661 in k2657 in k2654 in k2651 in k2647 in k2643 in k2639 in k2635 in k2632 in k2627 in k2624 in k2620 in k2617 in k2614 in k2611 in k2607 in k2603 in k741 in k737 in k621 */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[97]+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* char-set-diff+intersection in k741 in k737 in k621 */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2576r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2576r(t0,t1,t2,t3);}}

static void C_ccall f_2576r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2580,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2601,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 644  %char-set:s/check */
f_712(t5,t2,lf[81]);}

/* k2599 in char-set-diff+intersection in k741 in k737 in k621 */
static void C_ccall f_2601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 644  string-copy */
t2=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2578 in char-set-diff+intersection in k741 in k737 in k621 */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2583,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 645  make-string */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(256),lf[17]);}

/* k2581 in k2578 in char-set-diff+intersection in k741 in k737 in k621 */
static void C_ccall f_2583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2586,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 646  %char-set-diff+intersection! */
f_2472(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],lf[81]);}

/* k2584 in k2581 in k2578 in char-set-diff+intersection in k741 in k737 in k621 */
static void C_ccall f_2586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2593,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 647  make-char-set */
t3=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2591 in k2584 in k2581 in k2578 in char-set-diff+intersection in k741 in k737 in k621 */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2597,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 647  make-char-set */
t3=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2595 in k2591 in k2584 in k2581 in k2578 in char-set-diff+intersection in k741 in k737 in k621 */
static void C_ccall f_2597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 647  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* char-set-diff+intersection! in k741 in k737 in k621 */
static void C_ccall f_2525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2525r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2525r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2525r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2529,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 634  %char-set:s/check */
f_712(t5,t2,lf[80]);}

/* k2527 in char-set-diff+intersection! in k741 in k737 in k621 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2532,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 635  %char-set:s/check */
f_712(t2,((C_word*)t0)[3],lf[80]);}

/* k2530 in k2527 in char-set-diff+intersection! in k741 in k737 in k621 */
static void C_ccall f_2532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 636  %string-iter */
f_2025(t2,t3,((C_word*)t0)[3]);}

/* a2542 in k2530 in k2527 in char-set-diff+intersection! in k741 in k737 in k621 */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2543,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_setsubchar(((C_word*)t0)[3],t5,lf[17]));}
else{
t5=t2;
t6=(C_word)C_subchar(((C_word*)t0)[3],t5);
t7=f_631(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_UNDEFINED);}
else{
t9=t2;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_setsubchar(((C_word*)t0)[2],t9,lf[17]));}}}

/* k2533 in k2530 in k2527 in char-set-diff+intersection! in k741 in k737 in k621 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2538,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 640  %char-set-diff+intersection! */
f_2472(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[80]);}

/* k2536 in k2533 in k2530 in k2527 in char-set-diff+intersection! in k741 in k737 in k621 */
static void C_ccall f_2538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 641  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-diff+intersection! in k741 in k737 in k621 */
static void C_fcall f_2472(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2472,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2478,a[2]=t5,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* for-each */
t7=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t6,t4);}

/* a2477 in %char-set-diff+intersection! in k741 in k737 in k621 */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2478,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2484,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2523,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 630  %char-set:s/check */
f_712(t4,t2,((C_word*)t0)[2]);}

/* k2521 in a2477 in %char-set-diff+intersection! in k741 in k737 in k621 */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 625  %string-iter */
f_2025(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2483 in a2477 in %char-set-diff+intersection! in k741 in k737 in k621 */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2484,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=((C_word*)t0)[3];
t6=t2;
t7=(C_word)C_subchar(t5,t6);
t8=f_631(t7);
t9=(C_word)C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}
else{
t10=((C_word*)t0)[3];
t11=t2;
t12=(C_word)C_setsubchar(t10,t11,lf[17]);
t13=((C_word*)t0)[2];
t14=t2;
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_setsubchar(t13,t14,lf[18]));}}}

/* char-set-xor in k741 in k737 in k621 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2408r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2408r(t0,t1,t2);}}

static void C_ccall f_2408r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2418,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2463,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_u_i_car(t2);
/* srfi-14.scm: 615  %char-set:s/check */
f_712(t4,t5,lf[78]);}
else{
/* srfi-14.scm: 618  char-set-copy */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[71]+1));}}

/* k2461 in char-set-xor in k741 in k737 in k621 */
static void C_ccall f_2463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 615  %string-copy */
f_655(((C_word*)t0)[2],t1);}

/* k2416 in char-set-xor in k741 in k737 in k621 */
static void C_ccall f_2418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2421,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2430,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 616  %char-set-algebra */
f_2066(t2,t1,t3,t4,lf[78]);}

/* a2429 in k2416 in char-set-xor in k741 in k737 in k621 */
static void C_ccall f_2430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2430,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=t2;
t7=t3;
t8=t2;
t9=t3;
t10=(C_word)C_subchar(t8,t9);
t11=f_631(t10);
t12=(C_word)C_u_fixnum_difference(C_fix(1),t11);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2447,a[2]=t7,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* %latin1->char */
t14=lf[2];
f_625(3,t14,t13,t12);}}

/* k2445 in a2429 in k2416 in char-set-xor in k741 in k737 in k621 */
static void C_ccall f_2447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k2419 in k2416 in char-set-xor in k741 in k737 in k621 */
static void C_ccall f_2421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 617  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-xor! in k741 in k737 in k621 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2367r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2367r(t0,t1,t2,t3);}}

static void C_ccall f_2367r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2371,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2375,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 609  %char-set:s/check */
f_712(t5,t2,lf[77]);}

/* k2373 in char-set-xor! in k741 in k737 in k621 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2377,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 609  %char-set-algebra */
f_2066(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[77]);}

/* a2376 in k2373 in char-set-xor! in k741 in k737 in k621 */
static void C_ccall f_2377(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2377,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=t2;
t7=t3;
t8=t2;
t9=t3;
t10=(C_word)C_subchar(t8,t9);
t11=f_631(t10);
t12=(C_word)C_u_fixnum_difference(C_fix(1),t11);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2394,a[2]=t7,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* %latin1->char */
t14=lf[2];
f_625(3,t14,t13,t12);}}

/* k2392 in a2376 in k2373 in char-set-xor! in k741 in k737 in k621 */
static void C_ccall f_2394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k2369 in char-set-xor! in k741 in k737 in k621 */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-difference in k741 in k737 in k621 */
static void C_ccall f_2326(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2326r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2326r(t0,t1,t2,t3);}}

static void C_ccall f_2326r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2336,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2362,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 600  %char-set:s/check */
f_712(t5,t2,lf[76]);}
else{
/* srfi-14.scm: 603  char-set-copy */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}

/* k2360 in char-set-difference in k741 in k737 in k621 */
static void C_ccall f_2362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 600  %string-copy */
f_655(((C_word*)t0)[2],t1);}

/* k2334 in char-set-difference in k741 in k737 in k621 */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2339,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2344,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 601  %char-set-algebra */
f_2066(t2,t1,((C_word*)t0)[2],t3,lf[76]);}

/* a2343 in k2334 in char-set-difference in k741 in k737 in k621 */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2344,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?C_SCHEME_UNDEFINED:(C_word)C_setsubchar(t2,t3,lf[17])));}

/* k2337 in k2334 in char-set-difference in k741 in k737 in k621 */
static void C_ccall f_2339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 602  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-difference! in k741 in k737 in k621 */
static void C_ccall f_2300(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2300r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2300r(t0,t1,t2,t3);}}

static void C_ccall f_2300r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2304,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2308,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 594  %char-set:s/check */
f_712(t5,t2,lf[75]);}

/* k2306 in char-set-difference! in k741 in k737 in k621 */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2310,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 594  %char-set-algebra */
f_2066(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[75]);}

/* a2309 in k2306 in char-set-difference! in k741 in k737 in k621 */
static void C_ccall f_2310(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2310,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?C_SCHEME_UNDEFINED:(C_word)C_setsubchar(t2,t3,lf[17])));}

/* k2302 in char-set-difference! in k741 in k737 in k621 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-intersection in k741 in k737 in k621 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2255r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2255r(t0,t1,t2);}}

static void C_ccall f_2255r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2265,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2291,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_u_i_car(t2);
/* srfi-14.scm: 585  %char-set:s/check */
f_712(t4,t5,lf[73]);}
else{
/* srfi-14.scm: 588  char-set-copy */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[74]+1));}}

/* k2289 in char-set-intersection in k741 in k737 in k621 */
static void C_ccall f_2291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 585  %string-copy */
f_655(((C_word*)t0)[2],t1);}

/* k2263 in char-set-intersection in k741 in k737 in k621 */
static void C_ccall f_2265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2268,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2277,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 586  %char-set-algebra */
f_2066(t2,t1,t3,t4,lf[73]);}

/* a2276 in k2263 in char-set-intersection in k741 in k737 in k621 */
static void C_ccall f_2277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2277,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?(C_word)C_setsubchar(t2,t3,lf[17]):C_SCHEME_UNDEFINED));}

/* k2266 in k2263 in char-set-intersection in k741 in k737 in k621 */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 587  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-intersection! in k741 in k737 in k621 */
static void C_ccall f_2233(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2233r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2233r(t0,t1,t2,t3);}}

static void C_ccall f_2233r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2237,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2241,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 579  %char-set:s/check */
f_712(t5,t2,lf[72]);}

/* k2239 in char-set-intersection! in k741 in k737 in k621 */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2241,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2243,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 579  %char-set-algebra */
f_2066(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[72]);}

/* a2242 in k2239 in char-set-intersection! in k741 in k737 in k621 */
static void C_ccall f_2243(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2243,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?(C_word)C_setsubchar(t2,t3,lf[17]):C_SCHEME_UNDEFINED));}

/* k2235 in char-set-intersection! in k741 in k737 in k621 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-union in k741 in k737 in k621 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2184r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2184r(t0,t1,t2);}}

static void C_ccall f_2184r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2194,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2224,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_u_i_car(t2);
/* srfi-14.scm: 570  %char-set:s/check */
f_712(t4,t5,lf[70]);}
else{
/* srfi-14.scm: 573  char-set-copy */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[71]+1));}}

/* k2222 in char-set-union in k741 in k737 in k621 */
static void C_ccall f_2224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 570  %string-copy */
f_655(((C_word*)t0)[2],t1);}

/* k2192 in char-set-union in k741 in k737 in k621 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2197,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2206,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 571  %char-set-algebra */
f_2066(t2,t1,t3,t4,lf[70]);}

/* a2205 in k2192 in char-set-union in k741 in k737 in k621 */
static void C_ccall f_2206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2206,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?C_SCHEME_UNDEFINED:(C_word)C_setsubchar(t2,t3,lf[18])));}

/* k2195 in k2192 in char-set-union in k741 in k737 in k621 */
static void C_ccall f_2197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 572  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-union! in k741 in k737 in k621 */
static void C_ccall f_2158(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2158r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2158r(t0,t1,t2,t3);}}

static void C_ccall f_2158r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2162,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2166,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 564  %char-set:s/check */
f_712(t5,t2,lf[69]);}

/* k2164 in char-set-union! in k741 in k737 in k621 */
static void C_ccall f_2166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2166,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2168,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 564  %char-set-algebra */
f_2066(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[69]);}

/* a2167 in k2164 in char-set-union! in k741 in k737 in k621 */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2168,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?C_SCHEME_UNDEFINED:(C_word)C_setsubchar(t2,t3,lf[18])));}

/* k2160 in char-set-union! in k741 in k737 in k621 */
static void C_ccall f_2162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-complement! in k741 in k737 in k621 */
static void C_ccall f_2136(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2136,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2140,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 556  %char-set:s/check */
f_712(t3,t2,lf[68]);}

/* k2138 in char-set-complement! in k741 in k737 in k621 */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2145,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 557  %string-iter */
f_2025(t2,t3,t1);}

/* a2144 in k2138 in char-set-complement! in k741 in k737 in k621 */
static void C_ccall f_2145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2145,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(C_fix(1),t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2156,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* %latin1->char */
t6=lf[2];
f_625(3,t6,t5,t4);}

/* k2154 in a2144 in k2138 in char-set-complement! in k741 in k737 in k621 */
static void C_ccall f_2156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k2141 in k2138 in char-set-complement! in k741 in k737 in k621 */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-complement in k741 in k737 in k621 */
static void C_ccall f_2108(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2108,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2112,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 550  %char-set:s/check */
f_712(t3,t2,lf[67]);}

/* k2110 in char-set-complement in k741 in k737 in k621 */
static void C_ccall f_2112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2112,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2115,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 551  make-string */
t3=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(256));}

/* k2113 in k2110 in char-set-complement in k741 in k737 in k621 */
static void C_ccall f_2115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2115,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2118,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2123,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 552  %string-iter */
f_2025(t2,t3,((C_word*)t0)[2]);}

/* a2122 in k2113 in k2110 in char-set-complement in k741 in k737 in k621 */
static void C_ccall f_2123(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2123,4,t0,t1,t2,t3);}
t4=(C_word)C_u_fixnum_difference(C_fix(1),t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2134,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* %latin1->char */
t6=lf[2];
f_625(3,t6,t5,t4);}

/* k2132 in a2122 in k2113 in k2110 in char-set-complement in k741 in k737 in k621 */
static void C_ccall f_2134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_setsubchar(((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k2116 in k2113 in k2110 in char-set-complement in k741 in k737 in k621 */
static void C_ccall f_2118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 553  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-algebra in k741 in k737 in k621 */
static void C_fcall f_2066(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2066,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2072,a[2]=t5,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* for-each */
t7=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t6,t3);}

/* a2071 in %char-set-algebra in k741 in k737 in k621 */
static void C_ccall f_2072(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2072,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2076,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 539  %char-set:s/check */
f_712(t3,t2,((C_word*)t0)[2]);}

/* k2074 in a2071 in %char-set-algebra in k741 in k737 in k621 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2076,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2081,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2081(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k2074 in a2071 in %char-set-algebra in k741 in k737 in k621 */
static void C_fcall f_2081(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2081,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2091,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=(C_word)C_subchar(((C_word*)t0)[4],t5);
t7=f_631(t6);
/* srfi-14.scm: 542  op */
t8=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t4,((C_word*)t0)[2],t2,t7);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k2089 in lp in k2074 in a2071 in %char-set-algebra in k741 in k737 in k621 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 543  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2081(t3,((C_word*)t0)[2],t2);}

/* %string-iter in k741 in k737 in k621 */
static void C_fcall f_2025(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2025,NULL,3,t1,t2,t3);}
t4=(C_word)C_fix((C_word)C_header_size(t3));
t5=(C_word)C_u_fixnum_difference(t4,C_fix(1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2035,a[2]=t2,a[3]=t3,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2035(t9,t1,t5);}

/* lp in %string-iter in k741 in k737 in k621 */
static void C_fcall f_2035(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2035,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2045,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_subchar(((C_word*)t0)[3],t2);
t6=f_631(t5);
/* srfi-14.scm: 528  p */
t7=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t2,t6);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k2043 in lp in %string-iter in k741 in k737 in k621 */
static void C_ccall f_2045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 529  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2035(t3,((C_word*)t0)[2],t2);}

/* ->char-set in k741 in k737 in k621 */
static void C_ccall f_1995(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1995,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2002,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 505  char-set? */
t4=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2000 in ->char-set in k741 in k737 in k621 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[2]))){
/* srfi-14.scm: 506  string->char-set */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[2]))){
/* srfi-14.scm: 507  char-set */
t2=*((C_word*)lf[5]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-14.scm: 508  ##sys#error */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[63],lf[64],((C_word*)t0)[2]);}}}}

/* char-set-filter! in k741 in k737 in k621 */
static void C_ccall f_1981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1981,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1985,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1989,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 496  %char-set:s/check */
f_712(t6,t3,lf[62]);}

/* k1987 in char-set-filter! in k741 in k737 in k621 */
static void C_ccall f_1989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1993,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 497  %char-set:s/check */
f_712(t2,((C_word*)t0)[2],lf[62]);}

/* k1991 in k1987 in char-set-filter! in k741 in k737 in k621 */
static void C_ccall f_1993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 495  %char-set-filter! */
f_1912(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1983 in char-set-filter! in k741 in k737 in k621 */
static void C_ccall f_1985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-filter in k741 in k737 in k621 */
static void C_ccall f_1965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1965r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1965r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1965r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1969,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 487  %default-base */
f_665(t5,t4,*((C_word*)lf[61]+1));}

/* k1967 in char-set-filter in k741 in k737 in k621 */
static void C_ccall f_1969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1972,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1979,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 489  %char-set:s/check */
f_712(t3,((C_word*)t0)[2],lf[62]);}

/* k1977 in k1967 in char-set-filter in k741 in k737 in k621 */
static void C_ccall f_1979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 488  %char-set-filter! */
f_1912(((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1970 in k1967 in char-set-filter in k741 in k737 in k621 */
static void C_ccall f_1972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 492  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-filter! in k741 in k737 in k621 */
static void C_fcall f_1912(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1912,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1918,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1918(t8,t1,C_fix(255));}

/* lp in %char-set-filter! in k741 in k737 in k621 */
static void C_fcall f_1918(C_word t0,C_word t1,C_word t2){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1918,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1928,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1938,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[3];
t7=t2;
t8=(C_word)C_subchar(t6,t7);
t9=f_631(t8);
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t5;
f_1938(2,t11,C_SCHEME_FALSE);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1951,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 482  %latin1->char */
t12=lf[2];
f_625(3,t12,t11,t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1949 in lp in %char-set-filter! in k741 in k737 in k621 */
static void C_ccall f_1951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 482  pred */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1936 in lp in %char-set-filter! in k741 in k737 in k621 */
static void C_ccall f_1938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
f_1928(t4,(C_word)C_setsubchar(t2,t3,lf[18]));}
else{
t2=((C_word*)t0)[2];
f_1928(t2,C_SCHEME_UNDEFINED);}}

/* k1926 in lp in %char-set-filter! in k741 in k737 in k621 */
static void C_fcall f_1928(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 484  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1918(t3,((C_word*)t0)[2],t2);}

/* ucs-range->char-set! in k741 in k737 in k621 */
static void C_ccall f_1902(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1902,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1906,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1910,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 471  %char-set:s/check */
f_712(t7,t5,lf[59]);}

/* k1908 in ucs-range->char-set! in k741 in k737 in k621 */
static void C_ccall f_1910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 470  %ucs-range->char-set! */
f_1821(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[58]);}

/* k1904 in ucs-range->char-set! in k741 in k737 in k621 */
static void C_ccall f_1906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* ucs-range->char-set in k741 in k737 in k621 */
static void C_ccall f_1872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1872r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1872r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1872r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t5=(C_word)C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:(C_word)C_u_i_car(t4));
t7=(C_word)C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t4,C_fix(1)));
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1882,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 465  %default-base */
f_665(t9,t8,*((C_word*)lf[58]+1));}

/* k1880 in ucs-range->char-set in k741 in k737 in k621 */
static void C_ccall f_1882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1885,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 466  %ucs-range->char-set! */
f_1821(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[58]);}

/* k1883 in k1880 in ucs-range->char-set in k741 in k737 in k621 */
static void C_ccall f_1885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 467  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %ucs-range->char-set! in k741 in k737 in k621 */
static void C_fcall f_1821(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1821,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1825,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1858,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t9=t2;
t10=t3;
if(C_truep((C_word)C_fixnum_lessp(t9,t10))){
t11=t3;
t12=(C_word)C_fixnum_lessp(C_fix(256),t11);
t13=t8;
f_1858(t13,(C_truep(t12)?t4:C_SCHEME_FALSE));}
else{
t11=t8;
f_1858(t11,C_SCHEME_FALSE);}}

/* k1856 in %ucs-range->char-set! in k741 in k737 in k621 */
static void C_fcall f_1858(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-14.scm: 457  ##sys#error */
t2=*((C_word*)lf[11]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[57],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
f_1825(2,t2,C_SCHEME_UNDEFINED);}}

/* k1823 in %ucs-range->char-set! in k741 in k737 in k621 */
static void C_ccall f_1825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1825,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1855,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 460  min */
t3=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_fix(256));}

/* k1853 in k1823 in %ucs-range->char-set! in k741 in k737 in k621 */
static void C_ccall f_1855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1855,2,t0,t1);}
t2=(C_word)C_u_fixnum_difference(t1,C_fix(1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1834,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1834(t3,t2));}

/* lp in k1853 in k1823 in %ucs-range->char-set! in k741 in k737 in k621 */
static C_word C_fcall f_1834(C_word t0,C_word t1){
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
t2=((C_word*)t0)[3];
t3=t1;
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,t3))){
t4=((C_word*)t0)[2];
t5=t1;
t6=(C_word)C_setsubchar(t4,t5,lf[18]);
t7=(C_word)C_u_fixnum_difference(t1,C_fix(1));
t9=t7;
t1=t9;
goto loop;}
else{
return(C_SCHEME_UNDEFINED);}}

/* char-set->string in k741 in k737 in k621 */
static void C_ccall f_1765(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1765,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1769,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 438  %char-set:s/check */
f_712(t3,t2,lf[54]);}

/* k1767 in char-set->string in k741 in k737 in k621 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1772,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1819,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 439  char-set-size */
t4=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k1817 in k1767 in char-set->string in k741 in k737 in k621 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 439  make-string */
t2=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1770 in k1767 in char-set->string in k741 in k737 in k621 */
static void C_ccall f_1772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1772,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1777,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1777(t5,((C_word*)t0)[2],C_fix(255),C_fix(0));}

/* lp in k1770 in k1767 in char-set->string in k741 in k737 in k621 */
static void C_fcall f_1777(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_1777,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1787,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=t2;
t7=(C_word)C_subchar(((C_word*)t0)[2],t6);
t8=f_631(t7);
t9=(C_word)C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t5;
f_1787(t10,t3);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1807,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 443  %latin1->char */
t11=lf[2];
f_625(3,t11,t10,t2);}}}

/* k1805 in lp in k1770 in k1767 in char-set->string in k741 in k737 in k621 */
static void C_ccall f_1807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_setsubchar(((C_word*)t0)[4],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
f_1787(t3,(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}

/* k1785 in lp in k1770 in k1767 in char-set->string in k741 in k737 in k621 */
static void C_fcall f_1787(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 445  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1777(t3,((C_word*)t0)[2],t2,t1);}

/* string->char-set! in k741 in k737 in k621 */
static void C_ccall f_1755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1755,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1759,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1763,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 432  %char-set:s/check */
f_712(t5,t3,lf[53]);}

/* k1761 in string->char-set! in k741 in k737 in k621 */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 432  %string->char-set! */
f_1703(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1757 in string->char-set! in k741 in k737 in k621 */
static void C_ccall f_1759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string->char-set in k741 in k737 in k621 */
static void C_ccall f_1743(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1743r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1743r(t0,t1,t2,t3);}}

static void C_ccall f_1743r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1747,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 427  %default-base */
f_665(t4,t3,*((C_word*)lf[52]+1));}

/* k1745 in string->char-set in k741 in k737 in k621 */
static void C_ccall f_1747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1750,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 428  %string->char-set! */
f_1703(t2,((C_word*)t0)[2],t1);}

/* k1748 in k1745 in string->char-set in k741 in k737 in k621 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 429  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string->char-set! in k741 in k737 in k621 */
static void C_fcall f_1703(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1703,NULL,3,t1,t2,t3);}
t4=(C_word)C_fix((C_word)C_header_size(t2));
t5=(C_word)C_u_fixnum_difference(t4,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1713,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,f_1713(t6,t5));}

/* do295 in %string->char-set! in k741 in k737 in k621 */
static C_word C_fcall f_1713(C_word t0,C_word t1){
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
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
return(C_SCHEME_UNDEFINED);}
else{
t3=((C_word*)t0)[3];
t4=(C_word)C_subchar(((C_word*)t0)[2],t1);
t5=f_631(t4);
t6=(C_word)C_setsubchar(t3,t5,lf[18]);
t7=(C_word)C_u_fixnum_difference(t1,C_fix(1));
t9=t7;
t1=t9;
goto loop;}}

/* char-set->list in k741 in k737 in k621 */
static void C_ccall f_1656(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1656,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1660,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 408  %char-set:s/check */
f_712(t3,t2,lf[50]);}

/* k1658 in char-set->list in k741 in k737 in k621 */
static void C_ccall f_1660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1660,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1665,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1665(t5,((C_word*)t0)[2],C_fix(255),C_SCHEME_END_OF_LIST);}

/* lp in k1658 in char-set->list in k741 in k737 in k621 */
static void C_fcall f_1665(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_1665,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1683,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=(C_word)C_subchar(((C_word*)t0)[2],t7);
t9=f_631(t8);
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t6;
f_1683(t11,t3);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1693,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 413  %latin1->char */
t12=lf[2];
f_625(3,t12,t11,t2);}}}

/* k1691 in lp in k1658 in char-set->list in k741 in k737 in k621 */
static void C_ccall f_1693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1693,2,t0,t1);}
t2=((C_word*)t0)[3];
f_1683(t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k1681 in lp in k1658 in char-set->list in k741 in k737 in k621 */
static void C_fcall f_1683(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 411  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1665(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* list->char-set! in k741 in k737 in k621 */
static void C_ccall f_1646(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1646,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1650,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1654,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 403  %char-set:s/check */
f_712(t5,t3,lf[49]);}

/* k1652 in list->char-set! in k741 in k737 in k621 */
static void C_ccall f_1654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 403  %list->char-set! */
f_1607(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1648 in list->char-set! in k741 in k737 in k621 */
static void C_ccall f_1650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* list->char-set in k741 in k737 in k621 */
static void C_ccall f_1634(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1634r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1634r(t0,t1,t2,t3);}}

static void C_ccall f_1634r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1638,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 398  %default-base */
f_665(t4,t3,*((C_word*)lf[48]+1));}

/* k1636 in list->char-set in k741 in k737 in k621 */
static void C_ccall f_1638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1641,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 399  %list->char-set! */
f_1607(t2,((C_word*)t0)[2],t1);}

/* k1639 in k1636 in list->char-set in k741 in k737 in k621 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 400  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set in k741 in k737 in k621 */
static void C_ccall f_1622(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1622r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1622r(t0,t1,t2);}}

static void C_ccall f_1622r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1626,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 393  make-string */
t4=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(256),lf[17]);}

/* k1624 in char-set in k741 in k737 in k621 */
static void C_ccall f_1626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1629,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 394  %list->char-set! */
f_1607(t2,((C_word*)t0)[2],t1);}

/* k1627 in k1624 in char-set in k741 in k737 in k621 */
static void C_ccall f_1629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 395  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %list->char-set! in k741 in k737 in k621 */
static void C_fcall f_1607(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1607,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1613,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* for-each */
t5=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a1612 in %list->char-set! in k741 in k737 in k621 */
static void C_ccall f_1613(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1613,3,t0,t1,t2);}
t3=((C_word*)t0)[2];
t4=f_631(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_setsubchar(t3,t4,lf[18]));}

/* char-set-unfold! in k741 in k737 in k621 */
static void C_ccall f_1597(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_1597,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1601,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1605,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 380  %char-set:s/check */
f_712(t8,t6,lf[46]);}

/* k1603 in char-set-unfold! in k741 in k737 in k621 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 379  %char-set-unfold! */
f_1549(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1599 in char-set-unfold! in k741 in k737 in k621 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-unfold in k741 in k737 in k621 */
static void C_ccall f_1585(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr6r,(void*)f_1585r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_1585r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_1585r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1589,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 374  %default-base */
f_665(t7,t6,*((C_word*)lf[45]+1));}

/* k1587 in char-set-unfold in k741 in k737 in k621 */
static void C_ccall f_1589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1589,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1592,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 375  %char-set-unfold! */
f_1549(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1590 in k1587 in char-set-unfold in k741 in k737 in k621 */
static void C_ccall f_1592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 376  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-unfold! in k741 in k737 in k621 */
static void C_fcall f_1549(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1549,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1555,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t8,a[6]=t5,tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_1555(t10,t1,t6);}

/* lp in %char-set-unfold! in k741 in k737 in k621 */
static void C_fcall f_1555(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1555,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1583,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-14.scm: 369  p */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1581 in lp in %char-set-unfold! in k741 in k737 in k621 */
static void C_ccall f_1583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1583,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=((C_word*)t0)[6];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1579,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 370  f */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}}

/* k1577 in k1581 in lp in %char-set-unfold! in k741 in k737 in k621 */
static void C_ccall f_1579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1579,2,t0,t1);}
t2=f_631(t1);
t3=(C_word)C_setsubchar(((C_word*)t0)[6],t2,lf[18]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1575,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 371  g */
t5=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k1573 in k1577 in k1581 in lp in %char-set-unfold! in k741 in k737 in k621 */
static void C_ccall f_1575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 371  lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1555(t2,((C_word*)t0)[2],t1);}

/* char-set-any in k741 in k737 in k621 */
static void C_ccall f_1496(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1496,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1500,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 357  %char-set:s/check */
f_712(t4,t3,lf[43]);}

/* k1498 in char-set-any in k741 in k737 in k621 */
static void C_ccall f_1500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1500,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1505,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1505(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k1498 in char-set-any in k741 in k737 in k621 */
static void C_fcall f_1505(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1505,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1515,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=(C_word)C_subchar(((C_word*)t0)[3],t5);
t7=f_631(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=t4;
f_1515(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1535,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 360  %latin1->char */
t10=lf[2];
f_625(3,t10,t9,t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k1533 in lp in k1498 in char-set-any in k741 in k737 in k621 */
static void C_ccall f_1535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 360  pred */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1513 in lp in k1498 in char-set-any in k741 in k737 in k621 */
static void C_ccall f_1515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm: 361  lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1505(t3,((C_word*)t0)[4],t2);}}

/* char-set-every in k741 in k737 in k621 */
static void C_ccall f_1447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1447,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1451,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 349  %char-set:s/check */
f_712(t4,t3,lf[42]);}

/* k1449 in char-set-every in k741 in k737 in k621 */
static void C_ccall f_1451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1451,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1456,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1456(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k1449 in char-set-every in k741 in k737 in k621 */
static void C_fcall f_1456(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1456,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_fixnum_lessp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t2;
t6=(C_word)C_subchar(((C_word*)t0)[4],t5);
t7=f_631(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1472,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t8)){
t10=t9;
f_1472(2,t10,t8);}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1486,a[2]=t9,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 352  %latin1->char */
t11=lf[2];
f_625(3,t11,t10,t2);}}}

/* k1484 in lp in k1449 in char-set-every in k741 in k737 in k621 */
static void C_ccall f_1486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 352  pred */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1470 in lp in k1449 in char-set-every in k741 in k737 in k621 */
static void C_ccall f_1472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 353  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1456(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* char-set-fold in k741 in k737 in k621 */
static void C_ccall f_1400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1400,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1404,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 340  %char-set:s/check */
f_712(t5,t4,lf[41]);}

/* k1402 in char-set-fold in k741 in k737 in k621 */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1404,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1409,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1409(t5,((C_word*)t0)[3],C_fix(255),((C_word*)t0)[2]);}

/* lp in k1402 in char-set-fold in k741 in k737 in k621 */
static void C_fcall f_1409(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1409,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1427,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=(C_word)C_subchar(((C_word*)t0)[3],t7);
t9=f_631(t8);
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t6;
f_1427(2,t11,t3);}
else{
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1437,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 345  %latin1->char */
t12=lf[2];
f_625(3,t12,t11,t2);}}}

/* k1435 in lp in k1402 in char-set-fold in k741 in k737 in k621 */
static void C_ccall f_1437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 345  kons */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1425 in lp in k1402 in char-set-fold in k741 in k737 in k621 */
static void C_ccall f_1427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 343  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1409(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* char-set-map in k741 in k737 in k621 */
static void C_ccall f_1337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1337,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1341,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 329  %char-set:s/check */
f_712(t4,t3,lf[40]);}

/* k1339 in char-set-map in k741 in k737 in k621 */
static void C_ccall f_1341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1344,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 330  make-string */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(256),lf[17]);}

/* k1342 in k1339 in char-set-map in k741 in k737 in k621 */
static void C_ccall f_1344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1347,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1352,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1352(t6,t2,C_fix(255));}

/* lp in k1342 in k1339 in char-set-map in k741 in k737 in k621 */
static void C_fcall f_1352(C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1352,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1362,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=(C_word)C_subchar(((C_word*)t0)[4],t5);
t7=f_631(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=t4;
f_1362(t9,C_SCHEME_UNDEFINED);}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1382,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1386,a[2]=t9,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 334  %latin1->char */
t11=lf[2];
f_625(3,t11,t10,t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1384 in lp in k1342 in k1339 in char-set-map in k741 in k737 in k621 */
static void C_ccall f_1386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 334  proc */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1380 in lp in k1342 in k1339 in char-set-map in k741 in k737 in k621 */
static void C_ccall f_1382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=f_631(t1);
t3=((C_word*)t0)[3];
f_1362(t3,(C_word)C_setsubchar(((C_word*)t0)[2],t2,lf[18]));}

/* k1360 in lp in k1342 in k1339 in char-set-map in k741 in k737 in k621 */
static void C_fcall f_1362(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 335  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1352(t3,((C_word*)t0)[2],t2);}

/* k1345 in k1342 in k1339 in char-set-map in k741 in k737 in k621 */
static void C_ccall f_1347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 336  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-for-each in k741 in k737 in k621 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1287,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1291,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 321  %char-set:s/check */
f_712(t4,t3,lf[39]);}

/* k1289 in char-set-for-each in k741 in k737 in k621 */
static void C_ccall f_1291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1291,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1296,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1296(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k1289 in char-set-for-each in k741 in k737 in k621 */
static void C_fcall f_1296(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1296,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1306,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=(C_word)C_subchar(((C_word*)t0)[3],t5);
t7=f_631(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=t4;
f_1306(2,t9,C_SCHEME_UNDEFINED);}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1323,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 324  %latin1->char */
t10=lf[2];
f_625(3,t10,t9,t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1321 in lp in k1289 in char-set-for-each in k741 in k737 in k621 */
static void C_ccall f_1323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 324  proc */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1304 in lp in k1289 in char-set-for-each in k741 in k737 in k621 */
static void C_ccall f_1306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 325  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1296(t3,((C_word*)t0)[2],t2);}

/* %char-set-cursor-next in k741 in k737 in k621 */
static void C_fcall f_1245(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1245,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1249,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 310  %char-set:s/check */
f_712(t5,t2,t4);}

/* k1247 in %char-set-cursor-next in k741 in k737 in k621 */
static void C_ccall f_1249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1249,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1254,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1254(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k1247 in %char-set-cursor-next in k741 in k737 in k621 */
static void C_fcall f_1254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1254,NULL,3,t0,t1,t2);}
t3=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t4=(C_word)C_fixnum_lessp(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1267,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_1267(t6,t4);}
else{
t6=(C_word)C_subchar(((C_word*)t0)[2],t3);
t7=f_631(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
t9=t5;
f_1267(t9,(C_word)C_i_not(t8));}}

/* k1265 in lp in k1247 in %char-set-cursor-next in k741 in k737 in k621 */
static void C_fcall f_1267(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
/* srfi-14.scm: 314  lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1254(t2,((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* char-set-cursor-next in k741 in k737 in k621 */
static void C_ccall f_1239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1239,4,t0,t1,t2,t3);}
/* srfi-14.scm: 307  %char-set-cursor-next */
f_1245(t1,t2,t3,lf[38]);}

/* char-set-ref in k741 in k737 in k621 */
static void C_ccall f_1233(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1233,4,t0,t1,t2,t3);}
/* srfi-14.scm: 301  %latin1->char */
t4=lf[2];
f_625(3,t4,t1,t3);}

/* end-of-char-set? in k741 in k737 in k621 */
static void C_ccall f_1227(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1227,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_lessp(t2,C_fix(0)));}

/* char-set-cursor in k741 in k737 in k621 */
static void C_ccall f_1221(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1221,3,t0,t1,t2);}
/* srfi-14.scm: 297  %char-set-cursor-next */
f_1245(t1,t2,C_fix(256),lf[34]);}

/* char-set-delete! in k741 in k737 in k621 */
static void C_ccall f_1209(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+2)){
C_save_and_reclaim((void*)tr3r,(void*)f_1209r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1209r(t0,t1,t2,t3);}}

static void C_ccall f_1209r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1215,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 283  %set-char-set! */
f_1154(t1,t4,lf[33],t2,t3);}

/* a1214 in char-set-delete! in k741 in k737 in k621 */
static void C_ccall f_1215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1215,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_setsubchar(t2,t3,lf[17]));}

/* char-set-delete in k741 in k737 in k621 */
static void C_ccall f_1197(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+2)){
C_save_and_reclaim((void*)tr3r,(void*)f_1197r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1197r(t0,t1,t2,t3);}}

static void C_ccall f_1197r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1203,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 281  %set-char-set */
f_1128(t1,t4,lf[32],t2,t3);}

/* a1202 in char-set-delete in k741 in k737 in k621 */
static void C_ccall f_1203(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1203,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_setsubchar(t2,t3,lf[17]));}

/* char-set-adjoin! in k741 in k737 in k621 */
static void C_ccall f_1185(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+2)){
C_save_and_reclaim((void*)tr3r,(void*)f_1185r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1185r(t0,t1,t2,t3);}}

static void C_ccall f_1185r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1191,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 279  %set-char-set! */
f_1154(t1,t4,lf[31],t2,t3);}

/* a1190 in char-set-adjoin! in k741 in k737 in k621 */
static void C_ccall f_1191(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1191,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_setsubchar(t2,t3,lf[18]));}

/* char-set-adjoin in k741 in k737 in k621 */
static void C_ccall f_1173(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+2)){
C_save_and_reclaim((void*)tr3r,(void*)f_1173r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1173r(t0,t1,t2,t3);}}

static void C_ccall f_1173r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(2);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1179,tmp=(C_word)a,a+=2,tmp);
/* srfi-14.scm: 277  %set-char-set */
f_1128(t1,t4,lf[30],t2,t3);}

/* a1178 in char-set-adjoin in k741 in k737 in k621 */
static void C_ccall f_1179(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1179,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_setsubchar(t2,t3,lf[18]));}

/* %set-char-set! in k741 in k737 in k621 */
static void C_fcall f_1154(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1154,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1158,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 271  %char-set:s/check */
f_712(t6,t4,t3);}

/* k1156 in %set-char-set! in k741 in k737 in k621 */
static void C_ccall f_1158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1158,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1161,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1163,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t4=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a1162 in k1156 in %set-char-set! in k741 in k737 in k621 */
static void C_ccall f_1163(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1163,3,t0,t1,t2);}
t3=f_631(t2);
/* srfi-14.scm: 272  set */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,((C_word*)t0)[2],t3);}

/* k1159 in k1156 in %set-char-set! in k741 in k737 in k621 */
static void C_ccall f_1161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* %set-char-set in k741 in k737 in k621 */
static void C_fcall f_1128(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1128,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1132,a[2]=t5,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1152,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 265  %char-set:s/check */
f_712(t7,t4,t3);}

/* k1150 in %set-char-set in k741 in k737 in k621 */
static void C_ccall f_1152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 265  %string-copy */
f_655(((C_word*)t0)[2],t1);}

/* k1130 in %set-char-set in k741 in k737 in k621 */
static void C_ccall f_1132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1135,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1140,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t4=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a1139 in k1130 in %set-char-set in k741 in k737 in k621 */
static void C_ccall f_1140(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1140,3,t0,t1,t2);}
t3=f_631(t2);
/* srfi-14.scm: 266  set */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,((C_word*)t0)[2],t3);}

/* k1133 in k1130 in %set-char-set in k741 in k737 in k621 */
static void C_ccall f_1135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 268  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-count in k741 in k737 in k621 */
static void C_ccall f_1071(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1071,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1075,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 253  %char-set:s/check */
f_712(t4,t3,lf[26]);}

/* k1073 in char-set-count in k741 in k737 in k621 */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1075,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1080,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1080(t5,((C_word*)t0)[2],C_fix(255),C_fix(0));}

/* lp in k1073 in char-set-count in k741 in k737 in k621 */
static void C_fcall f_1080(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1080,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1101,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=t2;
t8=(C_word)C_subchar(((C_word*)t0)[3],t7);
t9=f_631(t8);
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t6;
f_1101(2,t11,C_SCHEME_FALSE);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1114,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 257  %latin1->char */
t12=lf[2];
f_625(3,t12,t11,t2);}}}

/* k1112 in lp in k1073 in char-set-count in k741 in k737 in k621 */
static void C_ccall f_1114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 257  pred */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1099 in lp in k1073 in char-set-count in k741 in k737 in k621 */
static void C_ccall f_1101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1)):((C_word*)t0)[5]);
/* srfi-14.scm: 256  lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1080(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* char-set-size in k741 in k737 in k621 */
static void C_ccall f_1034(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1034,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1038,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 246  %char-set:s/check */
f_712(t3,t2,lf[25]);}

/* k1036 in char-set-size in k741 in k737 in k621 */
static void C_ccall f_1038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1043,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1043(t2,C_fix(255),C_fix(0)));}

/* lp in k1036 in char-set-size in k741 in k737 in k621 */
static C_word C_fcall f_1043(C_word t0,C_word t1,C_word t2){
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
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
return(t2);}
else{
t4=(C_word)C_u_fixnum_difference(t1,C_fix(1));
t5=t1;
t6=(C_word)C_subchar(((C_word*)t0)[2],t5);
t7=f_631(t6);
t8=(C_word)C_u_fixnum_plus(t2,t7);
t10=t4;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* char-set-contains? in k741 in k737 in k621 */
static void C_ccall f_1010(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1010,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1014,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 241  %char-set:s/check */
f_712(t4,t2,lf[24]);}

/* k1012 in char-set-contains? in k741 in k737 in k621 */
static void C_ccall f_1014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=f_631(((C_word*)t0)[3]);
t3=(C_word)C_subchar(t1,t2);
t4=f_631(t3);
t5=(C_word)C_eqp(t4,C_fix(0));
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_not(t5));}

/* char-set-hash in k741 in k737 in k621 */
static void C_ccall f_912(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3rv,(void*)f_912r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_912r(t0,t1,t2,t3);}}

static void C_ccall f_912r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?C_fix(4194304):(C_word)C_slot(t3,C_fix(0)));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_919,a[2]=t2,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_eqp(((C_word*)t7)[1],C_fix(0));
if(C_truep(t9)){
t10=C_set_block_item(t7,0,C_fix(4194304));
t11=t8;
f_919(t11,t10);}
else{
t10=t8;
f_919(t10,C_SCHEME_UNDEFINED);}}

/* k917 in char-set-hash in k741 in k737 in k621 */
static void C_fcall f_919(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_919,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_922,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 228  %char-set:s/check */
f_712(t2,((C_word*)t0)[2],lf[22]);}

/* k920 in k917 in char-set-hash in k741 in k737 in k621 */
static void C_ccall f_922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_922,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_975,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=f_975(t2,C_fix(65536));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_930,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_930(t7,((C_word*)t0)[2],C_fix(255),C_fix(0));}

/* lp in k920 in k917 in char-set-hash in k741 in k737 in k621 */
static void C_fcall f_930(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_930,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-14.scm: 233  modulo */
t5=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,((C_word*)((C_word*)t0)[5])[1]);}
else{
t5=(C_word)C_u_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_951,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=(C_word)C_subchar(((C_word*)t0)[3],t7);
t9=f_631(t8);
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t6;
f_951(t11,t3);}
else{
t11=(C_word)C_fixnum_times(C_fix(37),t3);
t12=(C_word)C_u_fixnum_plus(t11,t2);
t13=t6;
f_951(t13,(C_word)C_u_fixnum_and(((C_word*)t0)[2],t12));}}}

/* k949 in lp in k920 in k917 in char-set-hash in k741 in k737 in k621 */
static void C_fcall f_951(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 234  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_930(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* lp in k920 in k917 in char-set-hash in k741 in k737 in k621 */
static C_word C_fcall f_975(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
t2=t1;
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,t3))){
return((C_word)C_u_fixnum_difference(t1,C_fix(1)));}
else{
t4=(C_word)C_u_fixnum_plus(t1,t1);
t6=t4;
t1=t6;
goto loop;}}

/* char-set<= in k741 in k737 in k621 */
static void C_ccall f_814(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_814r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_814r(t0,t1,t2);}}

static void C_ccall f_814r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_834,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 201  %char-set:s/check */
f_712(t6,t4,lf[21]);}}

/* k832 in char-set<= in k741 in k737 in k621 */
static void C_ccall f_834(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_834,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_836,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_836(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* lp in k832 in char-set<= in k741 in k737 in k621 */
static void C_fcall f_836(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_836,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t3);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_846,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_u_i_car(t3);
/* srfi-14.scm: 203  %char-set:s/check */
f_712(t6,t7,lf[21]);}}

/* k844 in lp in k832 in char-set<= in k741 in k737 in k621 */
static void C_ccall f_846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_846,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t3)){
/* srfi-14.scm: 205  lp */
t4=((C_word*)((C_word*)t0)[3])[1];
f_836(t4,((C_word*)t0)[2],t1,t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_863,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_863(t7,((C_word*)t0)[2],C_fix(255));}}

/* lp2 in k844 in lp in k832 in char-set<= in k741 in k737 in k621 */
static void C_fcall f_863(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_863,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
/* srfi-14.scm: 207  lp */
t4=((C_word*)((C_word*)t0)[6])[1];
f_836(t4,t1,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[3];
t5=t2;
t6=(C_word)C_subchar(t4,t5);
t7=f_631(t6);
t8=t2;
t9=(C_word)C_subchar(((C_word*)t0)[5],t8);
t10=f_631(t9);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t7,t10))){
t11=(C_word)C_u_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm: 209  lp2 */
t13=t1;
t14=t11;
t1=t13;
t2=t14;
goto loop;}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}}

/* char-set= in k741 in k737 in k621 */
static void C_ccall f_759(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_759r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_759r(t0,t1,t2);}}

static void C_ccall f_759r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_775,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 190  %char-set:s/check */
f_712(t6,t4,lf[20]);}}

/* k773 in char-set= in k741 in k737 in k621 */
static void C_ccall f_775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_775,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_780,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_780(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k773 in char-set= in k741 in k737 in k621 */
static void C_fcall f_780(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_780,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_pairp(t2);
t4=(C_word)C_i_not(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_804,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_u_i_car(t2);
/* srfi-14.scm: 193  %char-set:s/check */
f_712(t5,t6,lf[20]);}}

/* k802 in lp in k773 in char-set= in k741 in k737 in k621 */
static void C_ccall f_804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_u_i_string_equal_p(((C_word*)t0)[5],t1))){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 194  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_780(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* char-set-copy in k741 in k737 in k621 */
static void C_ccall f_745(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_745,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_753,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_757,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 183  %char-set:s/check */
f_712(t4,t2,lf[19]);}

/* k755 in char-set-copy in k741 in k737 in k621 */
static void C_ccall f_757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 183  %string-copy */
f_655(((C_word*)t0)[2],t1);}

/* k751 in char-set-copy in k741 in k737 in k621 */
static void C_ccall f_753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 183  make-char-set */
t2=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* %char-set:s/check in k621 */
static void C_fcall f_712(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_712,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_718,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_718(t7,t1,t2);}

/* lp in %char-set:s/check in k621 */
static void C_fcall f_718(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_718,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 154  char-set? */
t4=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k723 in lp in %char-set:s/check in k621 */
static void C_ccall f_725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_725,2,t0,t1);}
if(C_truep(t1)){
/* srfi-14.scm: 154  char-set:s */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_735,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 155  ##sys#error */
t3=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],lf[16],((C_word*)t0)[4]);}}

/* k733 in k723 in lp in %char-set:s/check in k621 */
static void C_ccall f_735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 155  lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_718(t2,((C_word*)t0)[2],t1);}

/* %default-base in k621 */
static void C_fcall f_665(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_665,NULL,3,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_690,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 142  char-set? */
t7=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
/* srfi-14.scm: 144  ##sys#error */
t6=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,lf[13],t3,t2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_710,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 146  %latin1->char */
t5=lf[2];
f_625(3,t5,t4,C_fix(0));}}

/* k708 in %default-base in k621 */
static void C_ccall f_710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 146  make-string */
t2=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_fix(256),t1);}

/* k688 in %default-base in k621 */
static void C_ccall f_690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_690,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_697,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 142  char-set:s */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* srfi-14.scm: 143  ##sys#error */
t2=*((C_word*)lf[11]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[12],((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k695 in k688 in %default-base in k621 */
static void C_ccall f_697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 142  %string-copy */
f_655(((C_word*)t0)[2],t1);}

/* %string-copy in k621 */
static void C_fcall f_655(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_655,NULL,2,t1,t2);}
t3=(C_word)C_fix((C_word)C_header_size(t2));
/* substring */
t4=*((C_word*)lf[9]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t2,C_fix(0),t3);}

/* char-set? in k621 */
static void C_ccall f_649(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_649,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[5]));}

/* char-set:s in k621 */
static void C_ccall f_643(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_643,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}

/* make-char-set in k621 */
static void C_ccall f_637(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_637,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,2,lf[5],t2));}

/* %char->latin1 in k621 */
static C_word C_fcall f_631(C_word t1){
C_word tmp;
C_word t2;
return((C_word)C_fix((C_word)C_character_code(t1)));}

/* %latin1->char in k621 */
static void C_ccall f_625(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_625,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_make_character((C_word)C_unfix(t2)));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[274] = {
{"toplevelsrfi-14.scm",(void*)C_srfi_14_toplevel},
{"f_623srfi-14.scm",(void*)f_623},
{"f_739srfi-14.scm",(void*)f_739},
{"f_743srfi-14.scm",(void*)f_743},
{"f_2605srfi-14.scm",(void*)f_2605},
{"f_2609srfi-14.scm",(void*)f_2609},
{"f_2613srfi-14.scm",(void*)f_2613},
{"f_2616srfi-14.scm",(void*)f_2616},
{"f_2619srfi-14.scm",(void*)f_2619},
{"f_2721srfi-14.scm",(void*)f_2721},
{"f_2622srfi-14.scm",(void*)f_2622},
{"f_2626srfi-14.scm",(void*)f_2626},
{"f_2717srfi-14.scm",(void*)f_2717},
{"f_2629srfi-14.scm",(void*)f_2629},
{"f_2634srfi-14.scm",(void*)f_2634},
{"f_2709srfi-14.scm",(void*)f_2709},
{"f_2713srfi-14.scm",(void*)f_2713},
{"f_2637srfi-14.scm",(void*)f_2637},
{"f_2641srfi-14.scm",(void*)f_2641},
{"f_2645srfi-14.scm",(void*)f_2645},
{"f_2649srfi-14.scm",(void*)f_2649},
{"f_2653srfi-14.scm",(void*)f_2653},
{"f_2656srfi-14.scm",(void*)f_2656},
{"f_2659srfi-14.scm",(void*)f_2659},
{"f_2663srfi-14.scm",(void*)f_2663},
{"f_2666srfi-14.scm",(void*)f_2666},
{"f_2669srfi-14.scm",(void*)f_2669},
{"f_2673srfi-14.scm",(void*)f_2673},
{"f_2705srfi-14.scm",(void*)f_2705},
{"f_2677srfi-14.scm",(void*)f_2677},
{"f_2681srfi-14.scm",(void*)f_2681},
{"f_2701srfi-14.scm",(void*)f_2701},
{"f_2685srfi-14.scm",(void*)f_2685},
{"f_2697srfi-14.scm",(void*)f_2697},
{"f_2689srfi-14.scm",(void*)f_2689},
{"f_2693srfi-14.scm",(void*)f_2693},
{"f_2576srfi-14.scm",(void*)f_2576},
{"f_2601srfi-14.scm",(void*)f_2601},
{"f_2580srfi-14.scm",(void*)f_2580},
{"f_2583srfi-14.scm",(void*)f_2583},
{"f_2586srfi-14.scm",(void*)f_2586},
{"f_2593srfi-14.scm",(void*)f_2593},
{"f_2597srfi-14.scm",(void*)f_2597},
{"f_2525srfi-14.scm",(void*)f_2525},
{"f_2529srfi-14.scm",(void*)f_2529},
{"f_2532srfi-14.scm",(void*)f_2532},
{"f_2543srfi-14.scm",(void*)f_2543},
{"f_2535srfi-14.scm",(void*)f_2535},
{"f_2538srfi-14.scm",(void*)f_2538},
{"f_2472srfi-14.scm",(void*)f_2472},
{"f_2478srfi-14.scm",(void*)f_2478},
{"f_2523srfi-14.scm",(void*)f_2523},
{"f_2484srfi-14.scm",(void*)f_2484},
{"f_2408srfi-14.scm",(void*)f_2408},
{"f_2463srfi-14.scm",(void*)f_2463},
{"f_2418srfi-14.scm",(void*)f_2418},
{"f_2430srfi-14.scm",(void*)f_2430},
{"f_2447srfi-14.scm",(void*)f_2447},
{"f_2421srfi-14.scm",(void*)f_2421},
{"f_2367srfi-14.scm",(void*)f_2367},
{"f_2375srfi-14.scm",(void*)f_2375},
{"f_2377srfi-14.scm",(void*)f_2377},
{"f_2394srfi-14.scm",(void*)f_2394},
{"f_2371srfi-14.scm",(void*)f_2371},
{"f_2326srfi-14.scm",(void*)f_2326},
{"f_2362srfi-14.scm",(void*)f_2362},
{"f_2336srfi-14.scm",(void*)f_2336},
{"f_2344srfi-14.scm",(void*)f_2344},
{"f_2339srfi-14.scm",(void*)f_2339},
{"f_2300srfi-14.scm",(void*)f_2300},
{"f_2308srfi-14.scm",(void*)f_2308},
{"f_2310srfi-14.scm",(void*)f_2310},
{"f_2304srfi-14.scm",(void*)f_2304},
{"f_2255srfi-14.scm",(void*)f_2255},
{"f_2291srfi-14.scm",(void*)f_2291},
{"f_2265srfi-14.scm",(void*)f_2265},
{"f_2277srfi-14.scm",(void*)f_2277},
{"f_2268srfi-14.scm",(void*)f_2268},
{"f_2233srfi-14.scm",(void*)f_2233},
{"f_2241srfi-14.scm",(void*)f_2241},
{"f_2243srfi-14.scm",(void*)f_2243},
{"f_2237srfi-14.scm",(void*)f_2237},
{"f_2184srfi-14.scm",(void*)f_2184},
{"f_2224srfi-14.scm",(void*)f_2224},
{"f_2194srfi-14.scm",(void*)f_2194},
{"f_2206srfi-14.scm",(void*)f_2206},
{"f_2197srfi-14.scm",(void*)f_2197},
{"f_2158srfi-14.scm",(void*)f_2158},
{"f_2166srfi-14.scm",(void*)f_2166},
{"f_2168srfi-14.scm",(void*)f_2168},
{"f_2162srfi-14.scm",(void*)f_2162},
{"f_2136srfi-14.scm",(void*)f_2136},
{"f_2140srfi-14.scm",(void*)f_2140},
{"f_2145srfi-14.scm",(void*)f_2145},
{"f_2156srfi-14.scm",(void*)f_2156},
{"f_2143srfi-14.scm",(void*)f_2143},
{"f_2108srfi-14.scm",(void*)f_2108},
{"f_2112srfi-14.scm",(void*)f_2112},
{"f_2115srfi-14.scm",(void*)f_2115},
{"f_2123srfi-14.scm",(void*)f_2123},
{"f_2134srfi-14.scm",(void*)f_2134},
{"f_2118srfi-14.scm",(void*)f_2118},
{"f_2066srfi-14.scm",(void*)f_2066},
{"f_2072srfi-14.scm",(void*)f_2072},
{"f_2076srfi-14.scm",(void*)f_2076},
{"f_2081srfi-14.scm",(void*)f_2081},
{"f_2091srfi-14.scm",(void*)f_2091},
{"f_2025srfi-14.scm",(void*)f_2025},
{"f_2035srfi-14.scm",(void*)f_2035},
{"f_2045srfi-14.scm",(void*)f_2045},
{"f_1995srfi-14.scm",(void*)f_1995},
{"f_2002srfi-14.scm",(void*)f_2002},
{"f_1981srfi-14.scm",(void*)f_1981},
{"f_1989srfi-14.scm",(void*)f_1989},
{"f_1993srfi-14.scm",(void*)f_1993},
{"f_1985srfi-14.scm",(void*)f_1985},
{"f_1965srfi-14.scm",(void*)f_1965},
{"f_1969srfi-14.scm",(void*)f_1969},
{"f_1979srfi-14.scm",(void*)f_1979},
{"f_1972srfi-14.scm",(void*)f_1972},
{"f_1912srfi-14.scm",(void*)f_1912},
{"f_1918srfi-14.scm",(void*)f_1918},
{"f_1951srfi-14.scm",(void*)f_1951},
{"f_1938srfi-14.scm",(void*)f_1938},
{"f_1928srfi-14.scm",(void*)f_1928},
{"f_1902srfi-14.scm",(void*)f_1902},
{"f_1910srfi-14.scm",(void*)f_1910},
{"f_1906srfi-14.scm",(void*)f_1906},
{"f_1872srfi-14.scm",(void*)f_1872},
{"f_1882srfi-14.scm",(void*)f_1882},
{"f_1885srfi-14.scm",(void*)f_1885},
{"f_1821srfi-14.scm",(void*)f_1821},
{"f_1858srfi-14.scm",(void*)f_1858},
{"f_1825srfi-14.scm",(void*)f_1825},
{"f_1855srfi-14.scm",(void*)f_1855},
{"f_1834srfi-14.scm",(void*)f_1834},
{"f_1765srfi-14.scm",(void*)f_1765},
{"f_1769srfi-14.scm",(void*)f_1769},
{"f_1819srfi-14.scm",(void*)f_1819},
{"f_1772srfi-14.scm",(void*)f_1772},
{"f_1777srfi-14.scm",(void*)f_1777},
{"f_1807srfi-14.scm",(void*)f_1807},
{"f_1787srfi-14.scm",(void*)f_1787},
{"f_1755srfi-14.scm",(void*)f_1755},
{"f_1763srfi-14.scm",(void*)f_1763},
{"f_1759srfi-14.scm",(void*)f_1759},
{"f_1743srfi-14.scm",(void*)f_1743},
{"f_1747srfi-14.scm",(void*)f_1747},
{"f_1750srfi-14.scm",(void*)f_1750},
{"f_1703srfi-14.scm",(void*)f_1703},
{"f_1713srfi-14.scm",(void*)f_1713},
{"f_1656srfi-14.scm",(void*)f_1656},
{"f_1660srfi-14.scm",(void*)f_1660},
{"f_1665srfi-14.scm",(void*)f_1665},
{"f_1693srfi-14.scm",(void*)f_1693},
{"f_1683srfi-14.scm",(void*)f_1683},
{"f_1646srfi-14.scm",(void*)f_1646},
{"f_1654srfi-14.scm",(void*)f_1654},
{"f_1650srfi-14.scm",(void*)f_1650},
{"f_1634srfi-14.scm",(void*)f_1634},
{"f_1638srfi-14.scm",(void*)f_1638},
{"f_1641srfi-14.scm",(void*)f_1641},
{"f_1622srfi-14.scm",(void*)f_1622},
{"f_1626srfi-14.scm",(void*)f_1626},
{"f_1629srfi-14.scm",(void*)f_1629},
{"f_1607srfi-14.scm",(void*)f_1607},
{"f_1613srfi-14.scm",(void*)f_1613},
{"f_1597srfi-14.scm",(void*)f_1597},
{"f_1605srfi-14.scm",(void*)f_1605},
{"f_1601srfi-14.scm",(void*)f_1601},
{"f_1585srfi-14.scm",(void*)f_1585},
{"f_1589srfi-14.scm",(void*)f_1589},
{"f_1592srfi-14.scm",(void*)f_1592},
{"f_1549srfi-14.scm",(void*)f_1549},
{"f_1555srfi-14.scm",(void*)f_1555},
{"f_1583srfi-14.scm",(void*)f_1583},
{"f_1579srfi-14.scm",(void*)f_1579},
{"f_1575srfi-14.scm",(void*)f_1575},
{"f_1496srfi-14.scm",(void*)f_1496},
{"f_1500srfi-14.scm",(void*)f_1500},
{"f_1505srfi-14.scm",(void*)f_1505},
{"f_1535srfi-14.scm",(void*)f_1535},
{"f_1515srfi-14.scm",(void*)f_1515},
{"f_1447srfi-14.scm",(void*)f_1447},
{"f_1451srfi-14.scm",(void*)f_1451},
{"f_1456srfi-14.scm",(void*)f_1456},
{"f_1486srfi-14.scm",(void*)f_1486},
{"f_1472srfi-14.scm",(void*)f_1472},
{"f_1400srfi-14.scm",(void*)f_1400},
{"f_1404srfi-14.scm",(void*)f_1404},
{"f_1409srfi-14.scm",(void*)f_1409},
{"f_1437srfi-14.scm",(void*)f_1437},
{"f_1427srfi-14.scm",(void*)f_1427},
{"f_1337srfi-14.scm",(void*)f_1337},
{"f_1341srfi-14.scm",(void*)f_1341},
{"f_1344srfi-14.scm",(void*)f_1344},
{"f_1352srfi-14.scm",(void*)f_1352},
{"f_1386srfi-14.scm",(void*)f_1386},
{"f_1382srfi-14.scm",(void*)f_1382},
{"f_1362srfi-14.scm",(void*)f_1362},
{"f_1347srfi-14.scm",(void*)f_1347},
{"f_1287srfi-14.scm",(void*)f_1287},
{"f_1291srfi-14.scm",(void*)f_1291},
{"f_1296srfi-14.scm",(void*)f_1296},
{"f_1323srfi-14.scm",(void*)f_1323},
{"f_1306srfi-14.scm",(void*)f_1306},
{"f_1245srfi-14.scm",(void*)f_1245},
{"f_1249srfi-14.scm",(void*)f_1249},
{"f_1254srfi-14.scm",(void*)f_1254},
{"f_1267srfi-14.scm",(void*)f_1267},
{"f_1239srfi-14.scm",(void*)f_1239},
{"f_1233srfi-14.scm",(void*)f_1233},
{"f_1227srfi-14.scm",(void*)f_1227},
{"f_1221srfi-14.scm",(void*)f_1221},
{"f_1209srfi-14.scm",(void*)f_1209},
{"f_1215srfi-14.scm",(void*)f_1215},
{"f_1197srfi-14.scm",(void*)f_1197},
{"f_1203srfi-14.scm",(void*)f_1203},
{"f_1185srfi-14.scm",(void*)f_1185},
{"f_1191srfi-14.scm",(void*)f_1191},
{"f_1173srfi-14.scm",(void*)f_1173},
{"f_1179srfi-14.scm",(void*)f_1179},
{"f_1154srfi-14.scm",(void*)f_1154},
{"f_1158srfi-14.scm",(void*)f_1158},
{"f_1163srfi-14.scm",(void*)f_1163},
{"f_1161srfi-14.scm",(void*)f_1161},
{"f_1128srfi-14.scm",(void*)f_1128},
{"f_1152srfi-14.scm",(void*)f_1152},
{"f_1132srfi-14.scm",(void*)f_1132},
{"f_1140srfi-14.scm",(void*)f_1140},
{"f_1135srfi-14.scm",(void*)f_1135},
{"f_1071srfi-14.scm",(void*)f_1071},
{"f_1075srfi-14.scm",(void*)f_1075},
{"f_1080srfi-14.scm",(void*)f_1080},
{"f_1114srfi-14.scm",(void*)f_1114},
{"f_1101srfi-14.scm",(void*)f_1101},
{"f_1034srfi-14.scm",(void*)f_1034},
{"f_1038srfi-14.scm",(void*)f_1038},
{"f_1043srfi-14.scm",(void*)f_1043},
{"f_1010srfi-14.scm",(void*)f_1010},
{"f_1014srfi-14.scm",(void*)f_1014},
{"f_912srfi-14.scm",(void*)f_912},
{"f_919srfi-14.scm",(void*)f_919},
{"f_922srfi-14.scm",(void*)f_922},
{"f_930srfi-14.scm",(void*)f_930},
{"f_951srfi-14.scm",(void*)f_951},
{"f_975srfi-14.scm",(void*)f_975},
{"f_814srfi-14.scm",(void*)f_814},
{"f_834srfi-14.scm",(void*)f_834},
{"f_836srfi-14.scm",(void*)f_836},
{"f_846srfi-14.scm",(void*)f_846},
{"f_863srfi-14.scm",(void*)f_863},
{"f_759srfi-14.scm",(void*)f_759},
{"f_775srfi-14.scm",(void*)f_775},
{"f_780srfi-14.scm",(void*)f_780},
{"f_804srfi-14.scm",(void*)f_804},
{"f_745srfi-14.scm",(void*)f_745},
{"f_757srfi-14.scm",(void*)f_757},
{"f_753srfi-14.scm",(void*)f_753},
{"f_712srfi-14.scm",(void*)f_712},
{"f_718srfi-14.scm",(void*)f_718},
{"f_725srfi-14.scm",(void*)f_725},
{"f_735srfi-14.scm",(void*)f_735},
{"f_665srfi-14.scm",(void*)f_665},
{"f_710srfi-14.scm",(void*)f_710},
{"f_690srfi-14.scm",(void*)f_690},
{"f_697srfi-14.scm",(void*)f_697},
{"f_655srfi-14.scm",(void*)f_655},
{"f_649srfi-14.scm",(void*)f_649},
{"f_643srfi-14.scm",(void*)f_643},
{"f_637srfi-14.scm",(void*)f_637},
{"f_631srfi-14.scm",(void*)f_631},
{"f_625srfi-14.scm",(void*)f_625},
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
