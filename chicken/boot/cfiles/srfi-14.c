/* Generated from srfi-14.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:15
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: srfi-14.scm -output-file srfi-14.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: srfi_14
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[218];


C_noret_decl(C_srfi_14_toplevel)
C_externexport void C_ccall C_srfi_14_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_629)
static void C_ccall f_629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_745)
static void C_ccall f_745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2640)
static void C_ccall f_2640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2657)
static void C_ccall f_2657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2660)
static void C_ccall f_2660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2665)
static void C_ccall f_2665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2672)
static void C_ccall f_2672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2704)
static void C_ccall f_2704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2732)
static void C_ccall f_2732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2728)
static void C_ccall f_2728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2617)
static void C_ccall f_2617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2556)
static void C_ccall f_2556(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2556)
static void C_ccall f_2556r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2563)
static void C_ccall f_2563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2503)
static void C_fcall f_2503(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2494)
static void C_ccall f_2494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2461)
static void C_ccall f_2461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2398)
static void C_ccall f_2398r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2370)
static void C_ccall f_2370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2331)
static void C_ccall f_2331(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2331)
static void C_ccall f_2331r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2341)
static void C_ccall f_2341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2174)
static void C_ccall f_2174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2154)
static void C_ccall f_2154(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2097)
static void C_fcall f_2097(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2107)
static void C_ccall f_2107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2112)
static void C_fcall f_2112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2056)
static void C_fcall f_2056(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2066)
static void C_fcall f_2066(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2026)
static void C_ccall f_2026(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2000)
static void C_ccall f_2000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1943)
static void C_fcall f_1943(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1949)
static void C_fcall f_1949(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1959)
static void C_fcall f_1959(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1846)
static void C_fcall f_1846(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1889)
static void C_fcall f_1889(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1865)
static C_word C_fcall f_1865(C_word t0,C_word t1);
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1802)
static void C_fcall f_1802(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1812)
static void C_fcall f_1812(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1780)
static void C_ccall f_1780(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1768)
static void C_ccall f_1768r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1775)
static void C_ccall f_1775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1725)
static void C_fcall f_1725(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1738)
static C_word C_fcall f_1738(C_word t0,C_word t1);
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1687)
static void C_fcall f_1687(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1705)
static void C_fcall f_1705(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1672)
static void C_ccall f_1672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1656)
static void C_ccall f_1656r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1629)
static void C_fcall f_1629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1619)
static void C_ccall f_1619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_1611)
static void C_ccall f_1611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1571)
static void C_fcall f_1571(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1577)
static void C_fcall f_1577(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1522)
static void C_ccall f_1522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1527)
static void C_fcall f_1527(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1469)
static void C_ccall f_1469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1478)
static void C_fcall f_1478(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1431)
static void C_fcall f_1431(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1459)
static void C_ccall f_1459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1449)
static void C_ccall f_1449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1363)
static void C_ccall f_1363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1366)
static void C_ccall f_1366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1374)
static void C_fcall f_1374(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1408)
static void C_ccall f_1408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_fcall f_1384(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1369)
static void C_ccall f_1369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1309)
static void C_ccall f_1309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_fcall f_1318(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1267)
static void C_fcall f_1267(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1276)
static void C_fcall f_1276(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1289)
static void C_fcall f_1289(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1240)
static void C_ccall f_1240(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1234)
static void C_ccall f_1234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1210)
static void C_ccall f_1210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1198)
static void C_ccall f_1198(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1173)
static void C_fcall f_1173(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1177)
static void C_ccall f_1177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1180)
static void C_ccall f_1180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1147)
static void C_fcall f_1147(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1171)
static void C_ccall f_1171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1151)
static void C_ccall f_1151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1159)
static void C_ccall f_1159(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1154)
static void C_ccall f_1154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1090)
static void C_ccall f_1090(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1099)
static void C_fcall f_1099(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1062)
static C_word C_fcall f_1062(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1026)
static void C_ccall f_1026(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1033)
static void C_ccall f_1033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_922)
static void C_ccall f_922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_925)
static void C_fcall f_925(C_word t0,C_word t1) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_939)
static void C_fcall f_939(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_960)
static void C_fcall f_960(C_word t0,C_word t1) C_noret;
C_noret_decl(f_984)
static C_word C_fcall f_984(C_word t0,C_word t1);
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_840)
static void C_ccall f_840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_842)
static void C_fcall f_842(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_869)
static void C_fcall f_869(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_765)
static void C_ccall f_765(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_765)
static void C_ccall f_765r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_781)
static void C_ccall f_781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_786)
static void C_fcall f_786(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_810)
static void C_ccall f_810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_751)
static void C_ccall f_751(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_718)
static void C_fcall f_718(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_724)
static void C_fcall f_724(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_731)
static void C_ccall f_731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_671)
static void C_fcall f_671(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_716)
static void C_ccall f_716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_696)
static void C_ccall f_696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_703)
static void C_ccall f_703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_661)
static void C_fcall f_661(C_word t0,C_word t1) C_noret;
C_noret_decl(f_655)
static void C_ccall f_655(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_649)
static void C_ccall f_649(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_643)
static void C_ccall f_643(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_637)
static C_word C_fcall f_637(C_word t0);
C_noret_decl(f_631)
static void C_ccall f_631(C_word c,C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_2503)
static void C_fcall trf_2503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2503(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2503(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2097)
static void C_fcall trf_2097(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2097(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2097(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2112)
static void C_fcall trf_2112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2112(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2112(t0,t1,t2);}

C_noret_decl(trf_2056)
static void C_fcall trf_2056(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2056(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2056(t0,t1,t2);}

C_noret_decl(trf_2066)
static void C_fcall trf_2066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2066(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2066(t0,t1,t2);}

C_noret_decl(trf_1943)
static void C_fcall trf_1943(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1943(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1943(t0,t1,t2,t3);}

C_noret_decl(trf_1949)
static void C_fcall trf_1949(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1949(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1949(t0,t1,t2);}

C_noret_decl(trf_1959)
static void C_fcall trf_1959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1959(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1959(t0,t1);}

C_noret_decl(trf_1846)
static void C_fcall trf_1846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1846(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1846(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1889)
static void C_fcall trf_1889(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1889(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1889(t0,t1);}

C_noret_decl(trf_1802)
static void C_fcall trf_1802(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1802(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1802(t0,t1,t2,t3);}

C_noret_decl(trf_1812)
static void C_fcall trf_1812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1812(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1812(t0,t1);}

C_noret_decl(trf_1725)
static void C_fcall trf_1725(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1725(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1725(t0,t1,t2,t3);}

C_noret_decl(trf_1687)
static void C_fcall trf_1687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1687(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1687(t0,t1,t2,t3);}

C_noret_decl(trf_1705)
static void C_fcall trf_1705(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1705(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1705(t0,t1);}

C_noret_decl(trf_1629)
static void C_fcall trf_1629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1629(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1629(t0,t1,t2);}

C_noret_decl(trf_1571)
static void C_fcall trf_1571(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1571(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1571(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1577)
static void C_fcall trf_1577(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1577(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1577(t0,t1,t2);}

C_noret_decl(trf_1527)
static void C_fcall trf_1527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1527(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1527(t0,t1,t2);}

C_noret_decl(trf_1478)
static void C_fcall trf_1478(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1478(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1478(t0,t1,t2);}

C_noret_decl(trf_1431)
static void C_fcall trf_1431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1431(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1431(t0,t1,t2,t3);}

C_noret_decl(trf_1374)
static void C_fcall trf_1374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1374(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1374(t0,t1,t2);}

C_noret_decl(trf_1384)
static void C_fcall trf_1384(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1384(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1384(t0,t1);}

C_noret_decl(trf_1318)
static void C_fcall trf_1318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1318(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1318(t0,t1,t2);}

C_noret_decl(trf_1267)
static void C_fcall trf_1267(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1267(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1267(t0,t1,t2,t3);}

C_noret_decl(trf_1276)
static void C_fcall trf_1276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1276(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1276(t0,t1,t2);}

C_noret_decl(trf_1289)
static void C_fcall trf_1289(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1289(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1289(t0,t1);}

C_noret_decl(trf_1173)
static void C_fcall trf_1173(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1173(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1173(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1147)
static void C_fcall trf_1147(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1147(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1147(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1099)
static void C_fcall trf_1099(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1099(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1099(t0,t1,t2,t3);}

C_noret_decl(trf_925)
static void C_fcall trf_925(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_925(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_925(t0,t1);}

C_noret_decl(trf_939)
static void C_fcall trf_939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_939(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_939(t0,t1,t2,t3);}

C_noret_decl(trf_960)
static void C_fcall trf_960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_960(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_960(t0,t1);}

C_noret_decl(trf_842)
static void C_fcall trf_842(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_842(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_842(t0,t1,t2,t3);}

C_noret_decl(trf_869)
static void C_fcall trf_869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_869(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_869(t0,t1,t2);}

C_noret_decl(trf_786)
static void C_fcall trf_786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_786(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_786(t0,t1,t2);}

C_noret_decl(trf_718)
static void C_fcall trf_718(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_718(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_718(t0,t1,t2);}

C_noret_decl(trf_724)
static void C_fcall trf_724(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_724(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_724(t0,t1,t2);}

C_noret_decl(trf_671)
static void C_fcall trf_671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_671(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_671(t0,t1,t2);}

C_noret_decl(trf_661)
static void C_fcall trf_661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_661(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_661(t0,t1);}

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
C_initialize_lf(lf,218);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[3]=C_static_lambda_info(C_heaptop,18,"(%latin1->char n0)");
lf[5]=C_static_lambda_info(C_heaptop,15,"(%char->latin1)");
lf[6]=C_h_intern(&lf[6],13,"make-char-set");
lf[7]=C_h_intern(&lf[7],8,"char-set");
lf[8]=C_static_lambda_info(C_heaptop,18,"(make-char-set s2)");
lf[9]=C_h_intern(&lf[9],10,"char-set:s");
lf[10]=C_static_lambda_info(C_heaptop,16,"(char-set:s cs3)");
lf[11]=C_h_intern(&lf[11],9,"char-set\077");
lf[12]=C_static_lambda_info(C_heaptop,14,"(char-set\077 x4)");
lf[14]=C_h_intern(&lf[14],9,"substring");
lf[15]=C_static_lambda_info(C_heaptop,17,"(%string-copy s5)");
lf[17]=C_h_intern(&lf[17],9,"\003syserror");
lf[18]=C_static_string(C_heaptop,32,"BASE-CS parameter not a char-set");
lf[19]=C_static_string(C_heaptop,51,"Expected final base char set -- too many parameters");
lf[20]=C_h_intern(&lf[20],11,"make-string");
lf[21]=C_static_lambda_info(C_heaptop,33,"(%default-base maybe-base6 proc7)");
lf[23]=C_static_string(C_heaptop,14,"Not a char-set");
lf[24]=C_static_lambda_info(C_heaptop,9,"(lp cs13)");
lf[25]=C_static_lambda_info(C_heaptop,31,"(%char-set:s/check cs10 proc11)");
lf[28]=C_h_intern(&lf[28],13,"char-set-copy");
lf[29]=C_static_lambda_info(C_heaptop,20,"(char-set-copy cs59)");
lf[30]=C_h_intern(&lf[30],9,"char-set=");
lf[31]=C_static_lambda_info(C_heaptop,11,"(lp rest67)");
lf[32]=C_static_lambda_info(C_heaptop,20,"(char-set= . rest60)");
lf[33]=C_h_intern(&lf[33],10,"char-set<=");
lf[34]=C_static_lambda_info(C_heaptop,9,"(lp2 i84)");
lf[35]=C_static_lambda_info(C_heaptop,16,"(lp s177 rest78)");
lf[36]=C_static_lambda_info(C_heaptop,21,"(char-set<= . rest71)");
lf[37]=C_h_intern(&lf[37],13,"char-set-hash");
lf[38]=C_static_lambda_info(C_heaptop,4,"(lp)");
lf[39]=C_h_intern(&lf[39],6,"modulo");
lf[40]=C_static_lambda_info(C_heaptop,16,"(lp i103 ans104)");
lf[41]=C_static_lambda_info(C_heaptop,36,"(char-set-hash cs91 . maybe-bound92)");
lf[42]=C_h_intern(&lf[42],18,"char-set-contains\077");
lf[43]=C_static_lambda_info(C_heaptop,34,"(char-set-contains\077 cs110 char111)");
lf[44]=C_h_intern(&lf[44],13,"char-set-size");
lf[45]=C_static_lambda_info(C_heaptop,12,"(lp size121)");
lf[46]=C_static_lambda_info(C_heaptop,21,"(char-set-size cs117)");
lf[47]=C_h_intern(&lf[47],14,"char-set-count");
lf[48]=C_static_lambda_info(C_heaptop,18,"(lp i129 count130)");
lf[49]=C_static_lambda_info(C_heaptop,32,"(char-set-count pred125 cset126)");
lf[51]=C_static_lambda_info(C_heaptop,12,"(a1158 c141)");
lf[52]=C_h_intern(&lf[52],12,"\003sysfor-each");
lf[53]=C_static_lambda_info(C_heaptop,45,"(%set-char-set set136 proc137 cs138 chars139)");
lf[55]=C_static_lambda_info(C_heaptop,12,"(a1181 c148)");
lf[56]=C_static_lambda_info(C_heaptop,46,"(%set-char-set! set143 proc144 cs145 chars146)");
lf[57]=C_h_intern(&lf[57],15,"char-set-adjoin");
lf[58]=C_static_lambda_info(C_heaptop,21,"(a1197 s25152 i26153)");
lf[59]=C_static_lambda_info(C_heaptop,34,"(char-set-adjoin cs150 . chars151)");
lf[60]=C_h_intern(&lf[60],16,"char-set-adjoin!");
lf[61]=C_static_lambda_info(C_heaptop,21,"(a1209 s25156 i26157)");
lf[62]=C_static_lambda_info(C_heaptop,35,"(char-set-adjoin! cs154 . chars155)");
lf[63]=C_h_intern(&lf[63],15,"char-set-delete");
lf[64]=C_static_lambda_info(C_heaptop,21,"(a1221 s23160 i24161)");
lf[65]=C_static_lambda_info(C_heaptop,34,"(char-set-delete cs158 . chars159)");
lf[66]=C_h_intern(&lf[66],16,"char-set-delete!");
lf[67]=C_static_lambda_info(C_heaptop,21,"(a1233 s23164 i24165)");
lf[68]=C_static_lambda_info(C_heaptop,35,"(char-set-delete! cs162 . chars163)");
lf[69]=C_h_intern(&lf[69],15,"char-set-cursor");
lf[71]=C_static_lambda_info(C_heaptop,25,"(char-set-cursor cset166)");
lf[72]=C_h_intern(&lf[72],16,"end-of-char-set\077");
lf[73]=C_static_lambda_info(C_heaptop,28,"(end-of-char-set\077 cursor167)");
lf[74]=C_h_intern(&lf[74],12,"char-set-ref");
lf[75]=C_static_lambda_info(C_heaptop,32,"(char-set-ref cset168 cursor169)");
lf[76]=C_h_intern(&lf[76],20,"char-set-cursor-next");
lf[77]=C_static_lambda_info(C_heaptop,40,"(char-set-cursor-next cset170 cursor171)");
lf[78]=C_static_lambda_info(C_heaptop,11,"(lp cur178)");
lf[79]=C_static_lambda_info(C_heaptop,49,"(%char-set-cursor-next cset173 cursor174 proc175)");
lf[80]=C_h_intern(&lf[80],17,"char-set-for-each");
lf[81]=C_static_lambda_info(C_heaptop,9,"(lp i191)");
lf[82]=C_static_lambda_info(C_heaptop,33,"(char-set-for-each proc187 cs188)");
lf[83]=C_h_intern(&lf[83],12,"char-set-map");
lf[84]=C_static_lambda_info(C_heaptop,9,"(lp i203)");
lf[85]=C_static_lambda_info(C_heaptop,28,"(char-set-map proc198 cs199)");
lf[86]=C_h_intern(&lf[86],13,"char-set-fold");
lf[87]=C_static_lambda_info(C_heaptop,16,"(lp i218 ans219)");
lf[88]=C_static_lambda_info(C_heaptop,37,"(char-set-fold kons213 knil214 cs215)");
lf[89]=C_h_intern(&lf[89],14,"char-set-every");
lf[90]=C_static_lambda_info(C_heaptop,9,"(lp i227)");
lf[91]=C_static_lambda_info(C_heaptop,30,"(char-set-every pred223 cs224)");
lf[92]=C_h_intern(&lf[92],12,"char-set-any");
lf[93]=C_static_lambda_info(C_heaptop,9,"(lp i239)");
lf[94]=C_static_lambda_info(C_heaptop,28,"(char-set-any pred235 cs236)");
lf[96]=C_static_lambda_info(C_heaptop,12,"(lp seed254)");
lf[97]=C_static_lambda_info(C_heaptop,47,"(%char-set-unfold! p248 f249 g250 s251 seed252)");
lf[98]=C_h_intern(&lf[98],15,"char-set-unfold");
lf[99]=C_static_lambda_info(C_heaptop,56,"(char-set-unfold p259 f260 g261 seed262 . maybe-base263)");
lf[100]=C_h_intern(&lf[100],16,"char-set-unfold!");
lf[101]=C_static_lambda_info(C_heaptop,54,"(char-set-unfold! p266 f267 g268 seed269 base-cset270)");
lf[103]=C_static_lambda_info(C_heaptop,15,"(a1634 char274)");
lf[104]=C_static_lambda_info(C_heaptop,32,"(%list->char-set! chars272 s273)");
lf[105]=C_static_lambda_info(C_heaptop,21,"(char-set . chars277)");
lf[106]=C_h_intern(&lf[106],14,"list->char-set");
lf[107]=C_static_lambda_info(C_heaptop,41,"(list->char-set chars280 . maybe-base281)");
lf[108]=C_h_intern(&lf[108],15,"list->char-set!");
lf[109]=C_static_lambda_info(C_heaptop,37,"(list->char-set! chars284 base-cs285)");
lf[110]=C_h_intern(&lf[110],14,"char-set->list");
lf[111]=C_static_lambda_info(C_heaptop,16,"(lp i290 ans291)");
lf[112]=C_static_lambda_info(C_heaptop,22,"(char-set->list cs287)");
lf[114]=C_static_lambda_info(C_heaptop,7,"(do298)");
lf[115]=C_static_lambda_info(C_heaptop,41,"(%string->char-set! str295 bs296 proc297)");
lf[116]=C_h_intern(&lf[116],16,"string->char-set");
lf[117]=C_static_lambda_info(C_heaptop,41,"(string->char-set str306 . maybe-base307)");
lf[118]=C_h_intern(&lf[118],17,"string->char-set!");
lf[119]=C_static_lambda_info(C_heaptop,37,"(string->char-set! str310 base-cs311)");
lf[120]=C_h_intern(&lf[120],16,"char-set->string");
lf[121]=C_static_lambda_info(C_heaptop,14,"(lp i317 j318)");
lf[122]=C_static_lambda_info(C_heaptop,24,"(char-set->string cs313)");
lf[124]=C_static_lambda_info(C_heaptop,4,"(lp)");
lf[125]=C_h_intern(&lf[125],3,"min");
lf[126]=C_static_string(C_heaptop,96,"Requested UCS range contains unavailable characters -- this implementation only "
"supports Latin-1");
lf[127]=C_static_lambda_info(C_heaptop,65,"(%ucs-range->char-set! lower324 upper325 error\077326 bs327 proc328)");
lf[128]=C_h_intern(&lf[128],19,"ucs-range->char-set");
lf[129]=C_static_lambda_info(C_heaptop,49,"(ucs-range->char-set lower338 upper339 . rest340)");
lf[130]=C_h_intern(&lf[130],20,"ucs-range->char-set!");
lf[131]=C_static_lambda_info(C_heaptop,61,"(ucs-range->char-set! lower349 upper350 error\077351 base-cs352)");
lf[133]=C_static_lambda_info(C_heaptop,9,"(lp i359)");
lf[134]=C_static_lambda_info(C_heaptop,39,"(%char-set-filter! pred354 ds355 bs356)");
lf[135]=C_h_intern(&lf[135],15,"char-set-filter");
lf[136]=C_h_intern(&lf[136],16,"char-set-filter!");
lf[137]=C_static_lambda_info(C_heaptop,56,"(char-set-filter predicate368 domain369 . maybe-base370)");
lf[138]=C_static_lambda_info(C_heaptop,52,"(char-set-filter! predicate373 domain374 base-cs375)");
lf[139]=C_h_intern(&lf[139],10,"->char-set");
lf[140]=C_static_string(C_heaptop,30,"Not a charset, string or char.");
lf[141]=C_static_lambda_info(C_heaptop,17,"(->char-set x377)");
lf[143]=C_static_lambda_info(C_heaptop,9,"(lp i381)");
lf[144]=C_static_lambda_info(C_heaptop,24,"(%string-iter p378 s379)");
lf[146]=C_static_lambda_info(C_heaptop,9,"(lp i391)");
lf[147]=C_static_lambda_info(C_heaptop,15,"(a2102 cset388)");
lf[148]=C_static_lambda_info(C_heaptop,47,"(%char-set-algebra s384 csets385 op386 proc387)");
lf[149]=C_h_intern(&lf[149],19,"char-set-complement");
lf[150]=C_static_lambda_info(C_heaptop,17,"(a2153 i399 v400)");
lf[151]=C_static_lambda_info(C_heaptop,27,"(char-set-complement cs396)");
lf[152]=C_h_intern(&lf[152],20,"char-set-complement!");
lf[153]=C_static_lambda_info(C_heaptop,17,"(a2175 i410 v411)");
lf[154]=C_static_lambda_info(C_heaptop,30,"(char-set-complement! cset408)");
lf[155]=C_h_intern(&lf[155],15,"char-set-union!");
lf[156]=C_static_lambda_info(C_heaptop,28,"(a2198 s41421 i42422 v43423)");
lf[157]=C_static_lambda_info(C_heaptop,37,"(char-set-union! cset1419 . csets420)");
lf[158]=C_h_intern(&lf[158],14,"char-set-union");
lf[159]=C_static_lambda_info(C_heaptop,28,"(a2236 s41429 i42430 v43431)");
lf[160]=C_h_intern(&lf[160],14,"char-set:empty");
lf[161]=C_static_lambda_info(C_heaptop,27,"(char-set-union . csets427)");
lf[162]=C_h_intern(&lf[162],22,"char-set-intersection!");
lf[163]=C_static_lambda_info(C_heaptop,28,"(a2273 s36437 i37438 v38439)");
lf[164]=C_static_lambda_info(C_heaptop,44,"(char-set-intersection! cset1435 . csets436)");
lf[165]=C_h_intern(&lf[165],21,"char-set-intersection");
lf[166]=C_static_lambda_info(C_heaptop,28,"(a2307 s36445 i37446 v38447)");
lf[167]=C_h_intern(&lf[167],13,"char-set:full");
lf[168]=C_static_lambda_info(C_heaptop,34,"(char-set-intersection . csets443)");
lf[169]=C_h_intern(&lf[169],20,"char-set-difference!");
lf[170]=C_static_lambda_info(C_heaptop,28,"(a2340 s46453 i47454 v48455)");
lf[171]=C_static_lambda_info(C_heaptop,42,"(char-set-difference! cset1451 . csets452)");
lf[172]=C_h_intern(&lf[172],19,"char-set-difference");
lf[173]=C_static_lambda_info(C_heaptop,28,"(a2374 s46462 i47463 v48464)");
lf[174]=C_static_lambda_info(C_heaptop,39,"(char-set-difference cs1459 . csets460)");
lf[175]=C_h_intern(&lf[175],13,"char-set-xor!");
lf[176]=C_static_lambda_info(C_heaptop,28,"(a2407 s51470 i52471 v53472)");
lf[177]=C_static_lambda_info(C_heaptop,35,"(char-set-xor! cset1468 . csets469)");
lf[178]=C_h_intern(&lf[178],12,"char-set-xor");
lf[179]=C_static_lambda_info(C_heaptop,28,"(a2460 s51481 i52482 v53483)");
lf[180]=C_static_lambda_info(C_heaptop,25,"(char-set-xor . csets479)");
lf[182]=C_static_lambda_info(C_heaptop,17,"(a2514 i495 v496)");
lf[183]=C_static_lambda_info(C_heaptop,13,"(a2508 cs494)");
lf[184]=C_static_lambda_info(C_heaptop,62,"(%char-set-diff+intersection! diff490 int491 csets492 proc493)");
lf[185]=C_h_intern(&lf[185],27,"char-set-diff+intersection!");
lf[186]=C_static_lambda_info(C_heaptop,17,"(a2573 i511 v512)");
lf[187]=C_static_lambda_info(C_heaptop,54,"(char-set-diff+intersection! cs1506 cs2507 . csets508)");
lf[188]=C_h_intern(&lf[188],26,"char-set-diff+intersection");
lf[189]=C_h_intern(&lf[189],11,"string-copy");
lf[190]=C_static_lambda_info(C_heaptop,46,"(char-set-diff+intersection cs1523 . csets524)");
lf[191]=C_h_intern(&lf[191],19,"char-set:lower-case");
lf[192]=C_h_intern(&lf[192],19,"char-set:upper-case");
lf[193]=C_h_intern(&lf[193],19,"char-set:title-case");
lf[194]=C_h_intern(&lf[194],15,"char-set:letter");
lf[195]=C_h_intern(&lf[195],14,"char-set:digit");
lf[196]=C_h_intern(&lf[196],18,"char-set:hex-digit");
lf[197]=C_h_intern(&lf[197],21,"char-set:letter+digit");
lf[198]=C_h_intern(&lf[198],20,"char-set:punctuation");
lf[199]=C_h_intern(&lf[199],15,"char-set:symbol");
lf[200]=C_h_intern(&lf[200],16,"char-set:graphic");
lf[201]=C_h_intern(&lf[201],19,"char-set:whitespace");
lf[202]=C_h_intern(&lf[202],17,"char-set:printing");
lf[203]=C_h_intern(&lf[203],14,"char-set:blank");
lf[204]=C_h_intern(&lf[204],20,"char-set:iso-control");
lf[205]=C_h_intern(&lf[205],14,"char-set:ascii");
lf[206]=C_h_intern(&lf[206],7,"\003sysmap");
tmp=C_fix(9);
C_save(tmp);
tmp=C_fix(32);
C_save(tmp);
tmp=C_fix(160);
C_save(tmp);
lf[207]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
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
lf[208]=C_h_list(7,C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
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
lf[209]=C_h_list(18,C_pick(17),C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(18);
lf[210]=C_static_string(C_heaptop,9,"$+<=>^`|~");
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
lf[211]=C_h_list(6,C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(6);
lf[212]=C_static_string(C_heaptop,23,"!\042#%&\047()*,-./:;\077@[\134]_{}");
lf[213]=C_static_string(C_heaptop,22,"0123456789abcdefABCDEF");
lf[214]=C_static_string(C_heaptop,10,"0123456789");
lf[215]=C_h_intern(&lf[215],17,"register-feature!");
lf[216]=C_h_intern(&lf[216],7,"srfi-14");
lf[217]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,218,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_629,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 43   register-feature! */
t4=*((C_word*)lf[215]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[216]);}

/* k627 */
static void C_ccall f_629(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_629,2,t0,t1);}
t2=C_mutate(&lf[2],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_631,a[2]=lf[3],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[4],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_637,a[2]=lf[5],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[6]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_643,a[2]=lf[8],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[9]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_649,a[2]=lf[10],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[11]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_655,a[2]=lf[12],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[13],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_661,a[2]=lf[15],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[16],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_671,a[2]=lf[21],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[22],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_718,a[2]=lf[25],tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_745,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 169  %latin1->char */
t11=lf[2];
f_631(3,t11,t10,C_fix(0));}

/* k743 in k627 */
static void C_ccall f_745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_745,2,t0,t1);}
t2=C_mutate(&lf[26],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_749,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 170  %latin1->char */
t4=lf[2];
f_631(3,t4,t3,C_fix(1));}

/* k747 in k743 in k627 */
static void C_ccall f_749(C_word c,C_word t0,C_word t1){
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
C_word ab[174],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_749,2,t0,t1);}
t2=C_mutate(&lf[27],t1);
t3=C_mutate((C_word*)lf[28]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_751,a[2]=lf[29],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[30]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_765,a[2]=lf[32],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[33]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_820,a[2]=lf[36],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[37]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_918,a[2]=lf[41],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[42]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1026,a[2]=lf[43],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[44]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1053,a[2]=lf[46],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[47]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1090,a[2]=lf[49],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[50],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1147,a[2]=lf[53],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[54],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1173,a[2]=lf[56],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[57]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1192,a[2]=lf[59],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[60]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1204,a[2]=lf[62],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[63]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1216,a[2]=lf[65],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[66]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1228,a[2]=lf[68],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1240,a[2]=lf[71],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[72]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1246,a[2]=lf[73],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1252,a[2]=lf[75],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1258,a[2]=lf[77],tmp=(C_word)a,a+=3,tmp));
t20=C_mutate(&lf[70],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1267,a[2]=lf[79],tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[80]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1309,a[2]=lf[82],tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[83]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1359,a[2]=lf[85],tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[86]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1422,a[2]=lf[88],tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[89]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1469,a[2]=lf[91],tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[92]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1518,a[2]=lf[94],tmp=(C_word)a,a+=3,tmp));
t26=C_mutate(&lf[95],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1571,a[2]=lf[97],tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[98]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1607,a[2]=lf[99],tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[100]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1619,a[2]=lf[101],tmp=(C_word)a,a+=3,tmp));
t29=C_mutate(&lf[102],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1629,a[2]=lf[104],tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[7]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1644,a[2]=lf[105],tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[106]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1656,a[2]=lf[107],tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[108]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1668,a[2]=lf[109],tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[110]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1678,a[2]=lf[112],tmp=(C_word)a,a+=3,tmp));
t34=C_mutate(&lf[113],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1725,a[2]=lf[115],tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[116]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1768,a[2]=lf[117],tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[118]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1780,a[2]=lf[119],tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[120]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1790,a[2]=lf[122],tmp=(C_word)a,a+=3,tmp));
t38=C_mutate(&lf[123],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1846,a[2]=lf[127],tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[128]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1903,a[2]=lf[129],tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[130]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1933,a[2]=lf[131],tmp=(C_word)a,a+=3,tmp));
t41=C_mutate(&lf[132],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1943,a[2]=lf[134],tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[135]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1996,a[2]=lf[137],tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[136]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2012,a[2]=lf[138],tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[139]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2026,a[2]=lf[141],tmp=(C_word)a,a+=3,tmp));
t45=C_mutate(&lf[142],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2056,a[2]=lf[144],tmp=(C_word)a,a+=3,tmp));
t46=C_mutate(&lf[145],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2097,a[2]=lf[148],tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[149]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2139,a[2]=lf[151],tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[152]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2167,a[2]=lf[154],tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[155]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2189,a[2]=lf[157],tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[158]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2215,a[2]=lf[161],tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[162]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2264,a[2]=lf[164],tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[165]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2286,a[2]=lf[168],tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[169]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2331,a[2]=lf[171],tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[172]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2357,a[2]=lf[174],tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[175]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2398,a[2]=lf[177],tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[178]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2439,a[2]=lf[180],tmp=(C_word)a,a+=3,tmp));
t57=C_mutate(&lf[181],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2503,a[2]=lf[184],tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[185]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2556,a[2]=lf[187],tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[188]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2607,a[2]=lf[190],tmp=(C_word)a,a+=3,tmp));
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2636,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 658  char-set */
t61=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t61+1)))(2,t61,t60);}

/* k2634 in k747 in k743 in k627 */
static void C_ccall f_2636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2636,2,t0,t1);}
t2=C_mutate((C_word*)lf[160]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2640,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 659  char-set-complement */
t4=*((C_word*)lf[149]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[160]+1));}

/* k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2640,2,t0,t1);}
t2=C_mutate((C_word*)lf[167]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 662  ucs-range->char-set */
t4=*((C_word*)lf[128]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(97),C_fix(123));}

/* k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2647,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 663  ucs-range->char-set! */
t3=*((C_word*)lf[130]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(223),C_fix(247),C_SCHEME_TRUE,t1);}

/* k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2650,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 664  ucs-range->char-set! */
t3=*((C_word*)lf[130]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(248),C_fix(256),C_SCHEME_TRUE,t1);}

/* k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2650,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2653,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2752,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 665  %latin1->char */
t4=lf[2];
f_631(3,t4,t3,C_fix(181));}

/* k2750 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 665  char-set-adjoin! */
t2=*((C_word*)lf[60]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2653,2,t0,t1);}
t2=C_mutate((C_word*)lf[191]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2657,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 668  ucs-range->char-set */
t4=*((C_word*)lf[128]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(65),C_fix(91));}

/* k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2657,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2660,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2748,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 671  ucs-range->char-set! */
t4=*((C_word*)lf[130]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,C_fix(192),C_fix(215),C_SCHEME_TRUE,t1);}

/* k2746 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 670  ucs-range->char-set! */
t2=*((C_word*)lf[130]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(216),C_fix(223),C_SCHEME_TRUE,t1);}

/* k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2660,2,t0,t1);}
t2=C_mutate((C_word*)lf[192]+1,t1);
t3=C_mutate((C_word*)lf[193]+1,*((C_word*)lf[160]+1));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2665,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 676  char-set-union */
t5=*((C_word*)lf[158]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[192]+1),*((C_word*)lf[191]+1));}

/* k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2665,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2668,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2740,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 678  %latin1->char */
t4=lf[2];
f_631(3,t4,t3,C_fix(170));}

/* k2738 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2744,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 679  %latin1->char */
t3=lf[2];
f_631(3,t3,t2,C_fix(186));}

/* k2742 in k2738 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 677  char-set-adjoin! */
t2=*((C_word*)lf[60]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2668,2,t0,t1);}
t2=C_mutate((C_word*)lf[194]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2672,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 681  string->char-set */
t4=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[214]);}

/* k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2672,2,t0,t1);}
t2=C_mutate((C_word*)lf[195]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2676,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 682  string->char-set */
t4=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[213]);}

/* k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2676,2,t0,t1);}
t2=C_mutate((C_word*)lf[196]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 685  char-set-union */
t4=*((C_word*)lf[158]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[194]+1),*((C_word*)lf[195]+1));}

/* k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2680,2,t0,t1);}
t2=C_mutate((C_word*)lf[197]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 688  string->char-set */
t4=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[212]);}

/* k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2687,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* map */
t3=*((C_word*)lf[206]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[2],lf[211]);}

/* k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2690,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 695  list->char-set! */
t3=*((C_word*)lf[108]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2690,2,t0,t1);}
t2=C_mutate((C_word*)lf[198]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 698  string->char-set */
t4=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[210]);}

/* k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2694,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2697,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* map */
t3=*((C_word*)lf[206]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[2],lf[209]);}

/* k2695 in k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2697,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2700,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 717  list->char-set! */
t3=*((C_word*)lf[108]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k2698 in k2695 in k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2700,2,t0,t1);}
t2=C_mutate((C_word*)lf[199]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2704,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 721  char-set-union */
t4=*((C_word*)lf[158]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,*((C_word*)lf[197]+1),*((C_word*)lf[198]+1),*((C_word*)lf[199]+1));}

/* k2702 in k2698 in k2695 in k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2704,2,t0,t1);}
t2=C_mutate((C_word*)lf[200]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2736,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[206]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[2],lf[208]);}

/* k2734 in k2702 in k2698 in k2695 in k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 724  list->char-set */
t2=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2706 in k2702 in k2698 in k2695 in k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2708,2,t0,t1);}
t2=C_mutate((C_word*)lf[201]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 732  char-set-union */
t4=*((C_word*)lf[158]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[201]+1),*((C_word*)lf[200]+1));}

/* k2710 in k2706 in k2702 in k2698 in k2695 in k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2712,2,t0,t1);}
t2=C_mutate((C_word*)lf[202]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2716,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2732,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[206]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,lf[2],lf[207]);}

/* k2730 in k2710 in k2706 in k2702 in k2698 in k2695 in k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 735  list->char-set */
t2=*((C_word*)lf[106]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2714 in k2710 in k2706 in k2702 in k2698 in k2695 in k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2716,2,t0,t1);}
t2=C_mutate((C_word*)lf[203]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2728,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 741  ucs-range->char-set */
t5=*((C_word*)lf[128]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(0),C_fix(32));}

/* k2726 in k2714 in k2710 in k2706 in k2702 in k2698 in k2695 in k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 741  ucs-range->char-set! */
t2=*((C_word*)lf[130]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],C_fix(127),C_fix(160),C_SCHEME_TRUE,t1);}

/* k2718 in k2714 in k2710 in k2706 in k2702 in k2698 in k2695 in k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2720,2,t0,t1);}
t2=C_mutate((C_word*)lf[204]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2724,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 743  ucs-range->char-set */
t4=*((C_word*)lf[128]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(0),C_fix(128));}

/* k2722 in k2718 in k2714 in k2710 in k2706 in k2702 in k2698 in k2695 in k2692 in k2688 in k2685 in k2682 in k2678 in k2674 in k2670 in k2666 in k2663 in k2658 in k2655 in k2651 in k2648 in k2645 in k2642 in k2638 in k2634 in k747 in k743 in k627 */
static void C_ccall f_2724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[205]+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* char-set-diff+intersection in k747 in k743 in k627 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2607r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2607r(t0,t1,t2,t3);}}

static void C_ccall f_2607r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2611,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2632,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 644  %char-set:s/check */
f_718(t5,t2,lf[188]);}

/* k2630 in char-set-diff+intersection in k747 in k743 in k627 */
static void C_ccall f_2632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 644  string-copy */
t2=*((C_word*)lf[189]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2609 in char-set-diff+intersection in k747 in k743 in k627 */
static void C_ccall f_2611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2611,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2614,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 645  make-string */
t3=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(256),lf[26]);}

/* k2612 in k2609 in char-set-diff+intersection in k747 in k743 in k627 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2617,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 646  %char-set-diff+intersection! */
f_2503(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],lf[188]);}

/* k2615 in k2612 in k2609 in char-set-diff+intersection in k747 in k743 in k627 */
static void C_ccall f_2617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2617,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2624,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 647  make-char-set */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2622 in k2615 in k2612 in k2609 in char-set-diff+intersection in k747 in k743 in k627 */
static void C_ccall f_2624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2628,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 647  make-char-set */
t3=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2626 in k2622 in k2615 in k2612 in k2609 in char-set-diff+intersection in k747 in k743 in k627 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 647  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* char-set-diff+intersection! in k747 in k743 in k627 */
static void C_ccall f_2556(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2556r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2556r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2556r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2560,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 634  %char-set:s/check */
f_718(t5,t2,lf[185]);}

/* k2558 in char-set-diff+intersection! in k747 in k743 in k627 */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2563,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 635  %char-set:s/check */
f_718(t2,((C_word*)t0)[3],lf[185]);}

/* k2561 in k2558 in char-set-diff+intersection! in k747 in k743 in k627 */
static void C_ccall f_2563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2566,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2574,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=lf[186],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 636  %string-iter */
f_2056(t2,t3,((C_word*)t0)[3]);}

/* a2573 in k2561 in k2558 in char-set-diff+intersection! in k747 in k743 in k627 */
static void C_ccall f_2574(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2574,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_string_set(((C_word*)t0)[3],t5,lf[26]));}
else{
t5=t2;
t6=(C_word)C_i_string_ref(((C_word*)t0)[3],t5);
t7=f_637(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_UNDEFINED);}
else{
t9=t2;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_i_string_set(((C_word*)t0)[2],t9,lf[26]));}}}

/* k2564 in k2561 in k2558 in char-set-diff+intersection! in k747 in k743 in k627 */
static void C_ccall f_2566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2569,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 640  %char-set-diff+intersection! */
f_2503(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[185]);}

/* k2567 in k2564 in k2561 in k2558 in char-set-diff+intersection! in k747 in k743 in k627 */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 641  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-diff+intersection! in k747 in k743 in k627 */
static void C_fcall f_2503(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2503,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2509,a[2]=t5,a[3]=t3,a[4]=t2,a[5]=lf[183],tmp=(C_word)a,a+=6,tmp);
/* for-each */
t7=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t6,t4);}

/* a2508 in %char-set-diff+intersection! in k747 in k743 in k627 */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2509,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2515,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[182],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2554,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 630  %char-set:s/check */
f_718(t4,t2,((C_word*)t0)[2]);}

/* k2552 in a2508 in %char-set-diff+intersection! in k747 in k743 in k627 */
static void C_ccall f_2554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 625  %string-iter */
f_2056(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2514 in a2508 in %char-set-diff+intersection! in k747 in k743 in k627 */
static void C_ccall f_2515(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2515,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=((C_word*)t0)[3];
t6=t2;
t7=(C_word)C_i_string_ref(t5,t6);
t8=f_637(t7);
t9=(C_word)C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}
else{
t10=((C_word*)t0)[3];
t11=t2;
t12=(C_word)C_i_string_set(t10,t11,lf[26]);
t13=((C_word*)t0)[2];
t14=t2;
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_i_string_set(t13,t14,lf[27]));}}}

/* char-set-xor in k747 in k743 in k627 */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2439r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2439r(t0,t1,t2);}}

static void C_ccall f_2439r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2449,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2494,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_car(t2);
/* srfi-14.scm: 615  %char-set:s/check */
f_718(t4,t5,lf[178]);}
else{
/* srfi-14.scm: 618  char-set-copy */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[160]+1));}}

/* k2492 in char-set-xor in k747 in k743 in k627 */
static void C_ccall f_2494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 615  %string-copy */
f_661(((C_word*)t0)[2],t1);}

/* k2447 in char-set-xor in k747 in k743 in k627 */
static void C_ccall f_2449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2452,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2461,a[2]=lf[179],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 616  %char-set-algebra */
f_2097(t2,t1,t3,t4,lf[178]);}

/* a2460 in k2447 in char-set-xor in k747 in k743 in k627 */
static void C_ccall f_2461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2461,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=t2;
t7=t3;
t8=t2;
t9=t3;
t10=(C_word)C_i_string_ref(t8,t9);
t11=f_637(t10);
t12=(C_word)C_fixnum_difference(C_fix(1),t11);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2478,a[2]=t7,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* %latin1->char */
t14=lf[2];
f_631(3,t14,t13,t12);}}

/* k2476 in a2460 in k2447 in char-set-xor in k747 in k743 in k627 */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_string_set(((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k2450 in k2447 in char-set-xor in k747 in k743 in k627 */
static void C_ccall f_2452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 617  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-xor! in k747 in k743 in k627 */
static void C_ccall f_2398(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2398r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2398r(t0,t1,t2,t3);}}

static void C_ccall f_2398r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2402,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2406,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 609  %char-set:s/check */
f_718(t5,t2,lf[175]);}

/* k2404 in char-set-xor! in k747 in k743 in k627 */
static void C_ccall f_2406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2408,a[2]=lf[176],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 609  %char-set-algebra */
f_2097(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[175]);}

/* a2407 in k2404 in char-set-xor! in k747 in k743 in k627 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2408,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=t2;
t7=t3;
t8=t2;
t9=t3;
t10=(C_word)C_i_string_ref(t8,t9);
t11=f_637(t10);
t12=(C_word)C_fixnum_difference(C_fix(1),t11);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2425,a[2]=t7,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* %latin1->char */
t14=lf[2];
f_631(3,t14,t13,t12);}}

/* k2423 in a2407 in k2404 in char-set-xor! in k747 in k743 in k627 */
static void C_ccall f_2425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_string_set(((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k2400 in char-set-xor! in k747 in k743 in k627 */
static void C_ccall f_2402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-difference in k747 in k743 in k627 */
static void C_ccall f_2357(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_2357r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2357r(t0,t1,t2,t3);}}

static void C_ccall f_2357r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2367,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2393,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 600  %char-set:s/check */
f_718(t5,t2,lf[172]);}
else{
/* srfi-14.scm: 603  char-set-copy */
t4=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}

/* k2391 in char-set-difference in k747 in k743 in k627 */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 600  %string-copy */
f_661(((C_word*)t0)[2],t1);}

/* k2365 in char-set-difference in k747 in k743 in k627 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2370,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2375,a[2]=lf[173],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 601  %char-set-algebra */
f_2097(t2,t1,((C_word*)t0)[2],t3,lf[172]);}

/* a2374 in k2365 in char-set-difference in k747 in k743 in k627 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2375,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?C_SCHEME_UNDEFINED:(C_word)C_i_string_set(t2,t3,lf[26])));}

/* k2368 in k2365 in char-set-difference in k747 in k743 in k627 */
static void C_ccall f_2370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 602  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-difference! in k747 in k743 in k627 */
static void C_ccall f_2331(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2331r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2331r(t0,t1,t2,t3);}}

static void C_ccall f_2331r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2335,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2339,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 594  %char-set:s/check */
f_718(t5,t2,lf[169]);}

/* k2337 in char-set-difference! in k747 in k743 in k627 */
static void C_ccall f_2339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2341,a[2]=lf[170],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 594  %char-set-algebra */
f_2097(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[169]);}

/* a2340 in k2337 in char-set-difference! in k747 in k743 in k627 */
static void C_ccall f_2341(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2341,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?C_SCHEME_UNDEFINED:(C_word)C_i_string_set(t2,t3,lf[26])));}

/* k2333 in char-set-difference! in k747 in k743 in k627 */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-intersection in k747 in k743 in k627 */
static void C_ccall f_2286(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2286r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2286r(t0,t1,t2);}}

static void C_ccall f_2286r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2296,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2322,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_car(t2);
/* srfi-14.scm: 585  %char-set:s/check */
f_718(t4,t5,lf[165]);}
else{
/* srfi-14.scm: 588  char-set-copy */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[167]+1));}}

/* k2320 in char-set-intersection in k747 in k743 in k627 */
static void C_ccall f_2322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 585  %string-copy */
f_661(((C_word*)t0)[2],t1);}

/* k2294 in char-set-intersection in k747 in k743 in k627 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2299,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2308,a[2]=lf[166],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 586  %char-set-algebra */
f_2097(t2,t1,t3,t4,lf[165]);}

/* a2307 in k2294 in char-set-intersection in k747 in k743 in k627 */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2308,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?(C_word)C_i_string_set(t2,t3,lf[26]):C_SCHEME_UNDEFINED));}

/* k2297 in k2294 in char-set-intersection in k747 in k743 in k627 */
static void C_ccall f_2299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 587  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-intersection! in k747 in k743 in k627 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2264r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2264r(t0,t1,t2,t3);}}

static void C_ccall f_2264r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2268,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2272,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 579  %char-set:s/check */
f_718(t5,t2,lf[162]);}

/* k2270 in char-set-intersection! in k747 in k743 in k627 */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2274,a[2]=lf[163],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 579  %char-set-algebra */
f_2097(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[162]);}

/* a2273 in k2270 in char-set-intersection! in k747 in k743 in k627 */
static void C_ccall f_2274(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2274,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?(C_word)C_i_string_set(t2,t3,lf[26]):C_SCHEME_UNDEFINED));}

/* k2266 in char-set-intersection! in k747 in k743 in k627 */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-union in k747 in k743 in k627 */
static void C_ccall f_2215(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2215r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2215r(t0,t1,t2);}}

static void C_ccall f_2215r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2225,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2255,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_car(t2);
/* srfi-14.scm: 570  %char-set:s/check */
f_718(t4,t5,lf[158]);}
else{
/* srfi-14.scm: 573  char-set-copy */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,*((C_word*)lf[160]+1));}}

/* k2253 in char-set-union in k747 in k743 in k627 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 570  %string-copy */
f_661(((C_word*)t0)[2],t1);}

/* k2223 in char-set-union in k747 in k743 in k627 */
static void C_ccall f_2225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2225,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2228,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=lf[159],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 571  %char-set-algebra */
f_2097(t2,t1,t3,t4,lf[158]);}

/* a2236 in k2223 in char-set-union in k747 in k743 in k627 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2237,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?C_SCHEME_UNDEFINED:(C_word)C_i_string_set(t2,t3,lf[27])));}

/* k2226 in k2223 in char-set-union in k747 in k743 in k627 */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 572  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-union! in k747 in k743 in k627 */
static void C_ccall f_2189(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2189r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2189r(t0,t1,t2,t3);}}

static void C_ccall f_2189r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2193,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2197,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 564  %char-set:s/check */
f_718(t5,t2,lf[155]);}

/* k2195 in char-set-union! in k747 in k743 in k627 */
static void C_ccall f_2197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2199,a[2]=lf[156],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 564  %char-set-algebra */
f_2097(((C_word*)t0)[3],t1,((C_word*)t0)[2],t2,lf[155]);}

/* a2198 in k2195 in char-set-union! in k747 in k743 in k627 */
static void C_ccall f_2199(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2199,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?C_SCHEME_UNDEFINED:(C_word)C_i_string_set(t2,t3,lf[27])));}

/* k2191 in char-set-union! in k747 in k743 in k627 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-complement! in k747 in k743 in k627 */
static void C_ccall f_2167(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2167,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2171,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 556  %char-set:s/check */
f_718(t3,t2,lf[152]);}

/* k2169 in char-set-complement! in k747 in k743 in k627 */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2176,a[2]=t1,a[3]=lf[153],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 557  %string-iter */
f_2056(t2,t3,t1);}

/* a2175 in k2169 in char-set-complement! in k747 in k743 in k627 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2176,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(C_fix(1),t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2187,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* %latin1->char */
t6=lf[2];
f_631(3,t6,t5,t4);}

/* k2185 in a2175 in k2169 in char-set-complement! in k747 in k743 in k627 */
static void C_ccall f_2187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_string_set(((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k2172 in k2169 in char-set-complement! in k747 in k743 in k627 */
static void C_ccall f_2174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-complement in k747 in k743 in k627 */
static void C_ccall f_2139(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2139,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2143,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 550  %char-set:s/check */
f_718(t3,t2,lf[149]);}

/* k2141 in char-set-complement in k747 in k743 in k627 */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2146,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 551  make-string */
t3=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(256));}

/* k2144 in k2141 in char-set-complement in k747 in k743 in k627 */
static void C_ccall f_2146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2146,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2149,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2154,a[2]=t1,a[3]=lf[150],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 552  %string-iter */
f_2056(t2,t3,((C_word*)t0)[2]);}

/* a2153 in k2144 in k2141 in char-set-complement in k747 in k743 in k627 */
static void C_ccall f_2154(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2154,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(C_fix(1),t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2165,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* %latin1->char */
t6=lf[2];
f_631(3,t6,t5,t4);}

/* k2163 in a2153 in k2144 in k2141 in char-set-complement in k747 in k743 in k627 */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_string_set(((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k2147 in k2144 in k2141 in char-set-complement in k747 in k743 in k627 */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 553  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-algebra in k747 in k743 in k627 */
static void C_fcall f_2097(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2097,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2103,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=lf[147],tmp=(C_word)a,a+=6,tmp);
/* for-each */
t7=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t6,t3);}

/* a2102 in %char-set-algebra in k747 in k743 in k627 */
static void C_ccall f_2103(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2103,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2107,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 539  %char-set:s/check */
f_718(t3,t2,((C_word*)t0)[2]);}

/* k2105 in a2102 in %char-set-algebra in k747 in k743 in k627 */
static void C_ccall f_2107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2107,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2112,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,a[6]=lf[146],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2112(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k2105 in a2102 in %char-set-algebra in k747 in k743 in k627 */
static void C_fcall f_2112(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2112,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2122,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=(C_word)C_i_string_ref(((C_word*)t0)[4],t5);
t7=f_637(t6);
/* srfi-14.scm: 542  op */
t8=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t8))(5,t8,t4,((C_word*)t0)[2],t2,t7);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k2120 in lp in k2105 in a2102 in %char-set-algebra in k747 in k743 in k627 */
static void C_ccall f_2122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 543  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2112(t3,((C_word*)t0)[2],t2);}

/* %string-iter in k747 in k743 in k627 */
static void C_fcall f_2056(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2056,NULL,3,t1,t2,t3);}
t4=(C_word)C_i_string_length(t3);
t5=(C_word)C_fixnum_difference(t4,C_fix(1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2066,a[2]=t2,a[3]=t3,a[4]=t7,a[5]=lf[143],tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_2066(t9,t1,t5);}

/* lp in %string-iter in k747 in k743 in k627 */
static void C_fcall f_2066(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2066,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2076,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t6=f_637(t5);
/* srfi-14.scm: 528  p */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t4,t2,t6);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k2074 in lp in %string-iter in k747 in k743 in k627 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 529  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2066(t3,((C_word*)t0)[2],t2);}

/* ->char-set in k747 in k743 in k627 */
static void C_ccall f_2026(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2026,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2033,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 505  char-set? */
t4=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2031 in ->char-set in k747 in k743 in k627 */
static void C_ccall f_2033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[2]))){
/* srfi-14.scm: 506  string->char-set */
t2=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[2]))){
/* srfi-14.scm: 507  char-set */
t2=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-14.scm: 508  ##sys#error */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[139],lf[140],((C_word*)t0)[2]);}}}}

/* char-set-filter! in k747 in k743 in k627 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2012,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2016,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2020,a[2]=t4,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 496  %char-set:s/check */
f_718(t6,t3,lf[136]);}

/* k2018 in char-set-filter! in k747 in k743 in k627 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2024,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 497  %char-set:s/check */
f_718(t2,((C_word*)t0)[2],lf[136]);}

/* k2022 in k2018 in char-set-filter! in k747 in k743 in k627 */
static void C_ccall f_2024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 495  %char-set-filter! */
f_1943(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2014 in char-set-filter! in k747 in k743 in k627 */
static void C_ccall f_2016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-filter in k747 in k743 in k627 */
static void C_ccall f_1996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1996r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1996r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1996r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2000,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 487  %default-base */
f_671(t5,t4,*((C_word*)lf[135]+1));}

/* k1998 in char-set-filter in k747 in k743 in k627 */
static void C_ccall f_2000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2000,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2003,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2010,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 489  %char-set:s/check */
f_718(t3,((C_word*)t0)[2],lf[136]);}

/* k2008 in k1998 in char-set-filter in k747 in k743 in k627 */
static void C_ccall f_2010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 488  %char-set-filter! */
f_1943(((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2001 in k1998 in char-set-filter in k747 in k743 in k627 */
static void C_ccall f_2003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 492  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-filter! in k747 in k743 in k627 */
static void C_fcall f_1943(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1943,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1949,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t6,a[6]=lf[133],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1949(t8,t1,C_fix(255));}

/* lp in %char-set-filter! in k747 in k743 in k627 */
static void C_fcall f_1949(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1949,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1959,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1969,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[3];
t7=t2;
t8=(C_word)C_i_string_ref(t6,t7);
t9=f_637(t8);
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t5;
f_1969(2,t11,C_SCHEME_FALSE);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1982,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 482  %latin1->char */
t12=lf[2];
f_631(3,t12,t11,t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1980 in lp in %char-set-filter! in k747 in k743 in k627 */
static void C_ccall f_1982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 482  pred */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1967 in lp in %char-set-filter! in k747 in k743 in k627 */
static void C_ccall f_1969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
f_1959(t4,(C_word)C_i_string_set(t2,t3,lf[27]));}
else{
t2=((C_word*)t0)[2];
f_1959(t2,C_SCHEME_UNDEFINED);}}

/* k1957 in lp in %char-set-filter! in k747 in k743 in k627 */
static void C_fcall f_1959(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 484  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1949(t3,((C_word*)t0)[2],t2);}

/* ucs-range->char-set! in k747 in k743 in k627 */
static void C_ccall f_1933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1933,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1937,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1941,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 471  %char-set:s/check */
f_718(t7,t5,lf[130]);}

/* k1939 in ucs-range->char-set! in k747 in k743 in k627 */
static void C_ccall f_1941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 470  %ucs-range->char-set! */
f_1846(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[128]);}

/* k1935 in ucs-range->char-set! in k747 in k743 in k627 */
static void C_ccall f_1937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* ucs-range->char-set in k747 in k743 in k627 */
static void C_ccall f_1903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1903r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1903r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1903r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t5=(C_word)C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:(C_word)C_i_car(t4));
t7=(C_word)C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t4));
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1913,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 465  %default-base */
f_671(t9,t8,*((C_word*)lf[128]+1));}

/* k1911 in ucs-range->char-set in k747 in k743 in k627 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1916,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 466  %ucs-range->char-set! */
f_1846(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[128]);}

/* k1914 in k1911 in ucs-range->char-set in k747 in k743 in k627 */
static void C_ccall f_1916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 467  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %ucs-range->char-set! in k747 in k743 in k627 */
static void C_fcall f_1846(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1846,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_check_exact_2(t2,t6);
t8=(C_word)C_i_check_exact_2(t3,t6);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1856,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1889,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t11=t2;
t12=t3;
if(C_truep((C_word)C_fixnum_lessp(t11,t12))){
t13=t3;
t14=(C_word)C_fixnum_lessp(C_fix(256),t13);
t15=t10;
f_1889(t15,(C_truep(t14)?t4:C_SCHEME_FALSE));}
else{
t13=t10;
f_1889(t13,C_SCHEME_FALSE);}}

/* k1887 in %ucs-range->char-set! in k747 in k743 in k627 */
static void C_fcall f_1889(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-14.scm: 457  ##sys#error */
t2=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[5],lf[126],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
f_1856(2,t2,C_SCHEME_UNDEFINED);}}

/* k1854 in %ucs-range->char-set! in k747 in k743 in k627 */
static void C_ccall f_1856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1886,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 460  min */
t3=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_fix(256));}

/* k1884 in k1854 in %ucs-range->char-set! in k747 in k743 in k627 */
static void C_ccall f_1886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1886,2,t0,t1);}
t2=(C_word)C_fixnum_difference(t1,C_fix(1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[124],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1865(t3,t2));}

/* lp in k1884 in k1854 in %ucs-range->char-set! in k747 in k743 in k627 */
static C_word C_fcall f_1865(C_word t0,C_word t1){
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
C_stack_check;
t2=((C_word*)t0)[3];
t3=t1;
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,t3))){
t4=((C_word*)t0)[2];
t5=t1;
t6=(C_word)C_i_string_set(t4,t5,lf[27]);
t7=(C_word)C_fixnum_difference(t1,C_fix(1));
t9=t7;
t1=t9;
goto loop;}
else{
return(C_SCHEME_UNDEFINED);}}

/* char-set->string in k747 in k743 in k627 */
static void C_ccall f_1790(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1790,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1794,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 438  %char-set:s/check */
f_718(t3,t2,lf[120]);}

/* k1792 in char-set->string in k747 in k743 in k627 */
static void C_ccall f_1794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1797,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1844,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 439  char-set-size */
t4=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k1842 in k1792 in char-set->string in k747 in k743 in k627 */
static void C_ccall f_1844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 439  make-string */
t2=*((C_word*)lf[20]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1795 in k1792 in char-set->string in k747 in k743 in k627 */
static void C_ccall f_1797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1797,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1802,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=lf[121],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1802(t5,((C_word*)t0)[2],C_fix(255),C_fix(0));}

/* lp in k1795 in k1792 in char-set->string in k747 in k743 in k627 */
static void C_fcall f_1802(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_1802,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1812,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=t2;
t7=(C_word)C_i_string_ref(((C_word*)t0)[2],t6);
t8=f_637(t7);
t9=(C_word)C_eqp(t8,C_fix(0));
if(C_truep(t9)){
t10=t5;
f_1812(t10,t3);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1832,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 443  %latin1->char */
t11=lf[2];
f_631(3,t11,t10,t2);}}}

/* k1830 in lp in k1795 in k1792 in char-set->string in k747 in k743 in k627 */
static void C_ccall f_1832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_string_set(((C_word*)t0)[4],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
f_1812(t3,(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}

/* k1810 in lp in k1795 in k1792 in char-set->string in k747 in k743 in k627 */
static void C_fcall f_1812(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 445  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1802(t3,((C_word*)t0)[2],t2,t1);}

/* string->char-set! in k747 in k743 in k627 */
static void C_ccall f_1780(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1780,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1784,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1788,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 432  %char-set:s/check */
f_718(t5,t3,lf[118]);}

/* k1786 in string->char-set! in k747 in k743 in k627 */
static void C_ccall f_1788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 432  %string->char-set! */
f_1725(((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[118]);}

/* k1782 in string->char-set! in k747 in k743 in k627 */
static void C_ccall f_1784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string->char-set in k747 in k743 in k627 */
static void C_ccall f_1768(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1768r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1768r(t0,t1,t2,t3);}}

static void C_ccall f_1768r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1772,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 427  %default-base */
f_671(t4,t3,*((C_word*)lf[116]+1));}

/* k1770 in string->char-set in k747 in k743 in k627 */
static void C_ccall f_1772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1772,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1775,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 428  %string->char-set! */
f_1725(t2,((C_word*)t0)[2],t1,lf[116]);}

/* k1773 in k1770 in string->char-set in k747 in k743 in k627 */
static void C_ccall f_1775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 429  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string->char-set! in k747 in k743 in k627 */
static void C_fcall f_1725(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1725,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(t2,t4);
t6=(C_word)C_i_string_length(t2);
t7=(C_word)C_fixnum_difference(t6,C_fix(1));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1738,a[2]=t2,a[3]=t3,a[4]=lf[114],tmp=(C_word)a,a+=5,tmp);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,f_1738(t8,t7));}

/* do298 in %string->char-set! in k747 in k743 in k627 */
static C_word C_fcall f_1738(C_word t0,C_word t1){
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
C_stack_check;
t2=t1;
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
return(C_SCHEME_UNDEFINED);}
else{
t3=((C_word*)t0)[3];
t4=(C_word)C_i_string_ref(((C_word*)t0)[2],t1);
t5=f_637(t4);
t6=(C_word)C_i_string_set(t3,t5,lf[27]);
t7=(C_word)C_fixnum_difference(t1,C_fix(1));
t9=t7;
t1=t9;
goto loop;}}

/* char-set->list in k747 in k743 in k627 */
static void C_ccall f_1678(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1678,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1682,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 408  %char-set:s/check */
f_718(t3,t2,lf[110]);}

/* k1680 in char-set->list in k747 in k743 in k627 */
static void C_ccall f_1682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1682,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1687,a[2]=t1,a[3]=t3,a[4]=lf[111],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1687(t5,((C_word*)t0)[2],C_fix(255),C_SCHEME_END_OF_LIST);}

/* lp in k1680 in char-set->list in k747 in k743 in k627 */
static void C_fcall f_1687(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_1687,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1705,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=(C_word)C_i_string_ref(((C_word*)t0)[2],t7);
t9=f_637(t8);
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t6;
f_1705(t11,t3);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1715,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 413  %latin1->char */
t12=lf[2];
f_631(3,t12,t11,t2);}}}

/* k1713 in lp in k1680 in char-set->list in k747 in k743 in k627 */
static void C_ccall f_1715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1715,2,t0,t1);}
t2=((C_word*)t0)[3];
f_1705(t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k1703 in lp in k1680 in char-set->list in k747 in k743 in k627 */
static void C_fcall f_1705(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 411  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1687(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* list->char-set! in k747 in k743 in k627 */
static void C_ccall f_1668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1668,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1672,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1676,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 403  %char-set:s/check */
f_718(t5,t3,lf[108]);}

/* k1674 in list->char-set! in k747 in k743 in k627 */
static void C_ccall f_1676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 403  %list->char-set! */
f_1629(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1670 in list->char-set! in k747 in k743 in k627 */
static void C_ccall f_1672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* list->char-set in k747 in k743 in k627 */
static void C_ccall f_1656(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1656r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1656r(t0,t1,t2,t3);}}

static void C_ccall f_1656r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1660,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 398  %default-base */
f_671(t4,t3,*((C_word*)lf[106]+1));}

/* k1658 in list->char-set in k747 in k743 in k627 */
static void C_ccall f_1660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1663,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 399  %list->char-set! */
f_1629(t2,((C_word*)t0)[2],t1);}

/* k1661 in k1658 in list->char-set in k747 in k743 in k627 */
static void C_ccall f_1663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 400  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set in k747 in k743 in k627 */
static void C_ccall f_1644(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1644r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1644r(t0,t1,t2);}}

static void C_ccall f_1644r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1648,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 393  make-string */
t4=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_fix(256),lf[26]);}

/* k1646 in char-set in k747 in k743 in k627 */
static void C_ccall f_1648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1648,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1651,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 394  %list->char-set! */
f_1629(t2,((C_word*)t0)[2],t1);}

/* k1649 in k1646 in char-set in k747 in k743 in k627 */
static void C_ccall f_1651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 395  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %list->char-set! in k747 in k743 in k627 */
static void C_fcall f_1629(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1629,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1635,a[2]=t3,a[3]=lf[103],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a1634 in %list->char-set! in k747 in k743 in k627 */
static void C_ccall f_1635(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1635,3,t0,t1,t2);}
t3=((C_word*)t0)[2];
t4=f_637(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_string_set(t3,t4,lf[27]));}

/* char-set-unfold! in k747 in k743 in k627 */
static void C_ccall f_1619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_1619,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1623,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1627,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 380  %char-set:s/check */
f_718(t8,t6,lf[100]);}

/* k1625 in char-set-unfold! in k747 in k743 in k627 */
static void C_ccall f_1627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 379  %char-set-unfold! */
f_1571(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1621 in char-set-unfold! in k747 in k743 in k627 */
static void C_ccall f_1623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* char-set-unfold in k747 in k743 in k627 */
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr6r,(void*)f_1607r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_1607r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_1607r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1611,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 374  %default-base */
f_671(t7,t6,*((C_word*)lf[98]+1));}

/* k1609 in char-set-unfold in k747 in k743 in k627 */
static void C_ccall f_1611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1611,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1614,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 375  %char-set-unfold! */
f_1571(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1612 in k1609 in char-set-unfold in k747 in k743 in k627 */
static void C_ccall f_1614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 376  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %char-set-unfold! in k747 in k743 in k627 */
static void C_fcall f_1571(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1571,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1577,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t8,a[6]=t5,a[7]=lf[96],tmp=(C_word)a,a+=8,tmp));
t10=((C_word*)t8)[1];
f_1577(t10,t1,t6);}

/* lp in %char-set-unfold! in k747 in k743 in k627 */
static void C_fcall f_1577(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1577,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1605,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-14.scm: 369  p */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k1603 in lp in %char-set-unfold! in k747 in k743 in k627 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1605,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=((C_word*)t0)[6];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1601,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-14.scm: 370  f */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[3]);}}

/* k1599 in k1603 in lp in %char-set-unfold! in k747 in k743 in k627 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1601,2,t0,t1);}
t2=f_637(t1);
t3=(C_word)C_i_string_set(((C_word*)t0)[6],t2,lf[27]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1597,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 371  g */
t5=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}

/* k1595 in k1599 in k1603 in lp in %char-set-unfold! in k747 in k743 in k627 */
static void C_ccall f_1597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 371  lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1577(t2,((C_word*)t0)[2],t1);}

/* char-set-any in k747 in k743 in k627 */
static void C_ccall f_1518(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1518,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1522,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 357  %char-set:s/check */
f_718(t4,t3,lf[92]);}

/* k1520 in char-set-any in k747 in k743 in k627 */
static void C_ccall f_1522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1522,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1527,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=lf[93],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1527(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k1520 in char-set-any in k747 in k743 in k627 */
static void C_fcall f_1527(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1527,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1537,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=(C_word)C_i_string_ref(((C_word*)t0)[3],t5);
t7=f_637(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=t4;
f_1537(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1557,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 360  %latin1->char */
t10=lf[2];
f_631(3,t10,t9,t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k1555 in lp in k1520 in char-set-any in k747 in k743 in k627 */
static void C_ccall f_1557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 360  pred */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1535 in lp in k1520 in char-set-any in k747 in k743 in k627 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-14.scm: 361  lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1527(t3,((C_word*)t0)[4],t2);}}

/* char-set-every in k747 in k743 in k627 */
static void C_ccall f_1469(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1469,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1473,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 349  %char-set:s/check */
f_718(t4,t3,lf[89]);}

/* k1471 in char-set-every in k747 in k743 in k627 */
static void C_ccall f_1473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1473,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1478,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=lf[90],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1478(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k1471 in char-set-every in k747 in k743 in k627 */
static void C_fcall f_1478(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1478,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_fixnum_lessp(t3,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=t2;
t6=(C_word)C_i_string_ref(((C_word*)t0)[4],t5);
t7=f_637(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1494,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t8)){
t10=t9;
f_1494(2,t10,t8);}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1508,a[2]=t9,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 352  %latin1->char */
t11=lf[2];
f_631(3,t11,t10,t2);}}}

/* k1506 in lp in k1471 in char-set-every in k747 in k743 in k627 */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 352  pred */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1492 in lp in k1471 in char-set-every in k747 in k743 in k627 */
static void C_ccall f_1494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 353  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1478(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* char-set-fold in k747 in k743 in k627 */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1422,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1426,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 340  %char-set:s/check */
f_718(t5,t4,lf[86]);}

/* k1424 in char-set-fold in k747 in k743 in k627 */
static void C_ccall f_1426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1426,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1431,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=lf[87],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1431(t5,((C_word*)t0)[3],C_fix(255),((C_word*)t0)[2]);}

/* lp in k1424 in char-set-fold in k747 in k743 in k627 */
static void C_fcall f_1431(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_1431,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1449,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=(C_word)C_i_string_ref(((C_word*)t0)[3],t7);
t9=f_637(t8);
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t6;
f_1449(2,t11,t3);}
else{
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1459,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 345  %latin1->char */
t12=lf[2];
f_631(3,t12,t11,t2);}}}

/* k1457 in lp in k1424 in char-set-fold in k747 in k743 in k627 */
static void C_ccall f_1459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 345  kons */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1447 in lp in k1424 in char-set-fold in k747 in k743 in k627 */
static void C_ccall f_1449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 343  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1431(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* char-set-map in k747 in k743 in k627 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1359,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1363,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 329  %char-set:s/check */
f_718(t4,t3,lf[83]);}

/* k1361 in char-set-map in k747 in k743 in k627 */
static void C_ccall f_1363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1366,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 330  make-string */
t3=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(256),lf[26]);}

/* k1364 in k1361 in char-set-map in k747 in k743 in k627 */
static void C_ccall f_1366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1369,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1374,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=lf[84],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1374(t6,t2,C_fix(255));}

/* lp in k1364 in k1361 in char-set-map in k747 in k743 in k627 */
static void C_fcall f_1374(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1374,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1384,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=(C_word)C_i_string_ref(((C_word*)t0)[4],t5);
t7=f_637(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=t4;
f_1384(t9,C_SCHEME_UNDEFINED);}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1404,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1408,a[2]=t9,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 334  %latin1->char */
t11=lf[2];
f_631(3,t11,t10,t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1406 in lp in k1364 in k1361 in char-set-map in k747 in k743 in k627 */
static void C_ccall f_1408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 334  proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1402 in lp in k1364 in k1361 in char-set-map in k747 in k743 in k627 */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=f_637(t1);
t3=((C_word*)t0)[3];
f_1384(t3,(C_word)C_i_string_set(((C_word*)t0)[2],t2,lf[27]));}

/* k1382 in lp in k1364 in k1361 in char-set-map in k747 in k743 in k627 */
static void C_fcall f_1384(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 335  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1374(t3,((C_word*)t0)[2],t2);}

/* k1367 in k1364 in k1361 in char-set-map in k747 in k743 in k627 */
static void C_ccall f_1369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 336  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-for-each in k747 in k743 in k627 */
static void C_ccall f_1309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1309,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1313,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 321  %char-set:s/check */
f_718(t4,t3,lf[80]);}

/* k1311 in char-set-for-each in k747 in k743 in k627 */
static void C_ccall f_1313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1313,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1318,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=lf[81],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1318(t5,((C_word*)t0)[2],C_fix(255));}

/* lp in k1311 in char-set-for-each in k747 in k743 in k627 */
static void C_fcall f_1318(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1318,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1328,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=(C_word)C_i_string_ref(((C_word*)t0)[3],t5);
t7=f_637(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
t9=t4;
f_1328(2,t9,C_SCHEME_UNDEFINED);}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1345,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 324  %latin1->char */
t10=lf[2];
f_631(3,t10,t9,t2);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1343 in lp in k1311 in char-set-for-each in k747 in k743 in k627 */
static void C_ccall f_1345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 324  proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1326 in lp in k1311 in char-set-for-each in k747 in k743 in k627 */
static void C_ccall f_1328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-14.scm: 325  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1318(t3,((C_word*)t0)[2],t2);}

/* %char-set-cursor-next in k747 in k743 in k627 */
static void C_fcall f_1267(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1267,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1271,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 310  %char-set:s/check */
f_718(t5,t2,t4);}

/* k1269 in %char-set-cursor-next in k747 in k743 in k627 */
static void C_ccall f_1271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1271,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1276,a[2]=t1,a[3]=t3,a[4]=lf[78],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1276(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k1269 in %char-set-cursor-next in k747 in k743 in k627 */
static void C_fcall f_1276(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1276,NULL,3,t0,t1,t2);}
t3=(C_word)C_fixnum_difference(t2,C_fix(1));
t4=(C_word)C_fixnum_lessp(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1289,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_1289(t6,t4);}
else{
t6=(C_word)C_i_string_ref(((C_word*)t0)[2],t3);
t7=f_637(t6);
t8=(C_word)C_eqp(t7,C_fix(0));
t9=t5;
f_1289(t9,(C_word)C_i_not(t8));}}

/* k1287 in lp in k1269 in %char-set-cursor-next in k747 in k743 in k627 */
static void C_fcall f_1289(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
/* srfi-14.scm: 314  lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1276(t2,((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* char-set-cursor-next in k747 in k743 in k627 */
static void C_ccall f_1258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1258,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[76]);
/* srfi-14.scm: 307  %char-set-cursor-next */
f_1267(t1,t2,t3,lf[76]);}

/* char-set-ref in k747 in k743 in k627 */
static void C_ccall f_1252(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1252,4,t0,t1,t2,t3);}
/* srfi-14.scm: 301  %latin1->char */
t4=lf[2];
f_631(3,t4,t1,t3);}

/* end-of-char-set? in k747 in k743 in k627 */
static void C_ccall f_1246(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1246,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_lessp(t2,C_fix(0)));}

/* char-set-cursor in k747 in k743 in k627 */
static void C_ccall f_1240(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1240,3,t0,t1,t2);}
/* srfi-14.scm: 297  %char-set-cursor-next */
f_1267(t1,t2,C_fix(256),lf[69]);}

/* char-set-delete! in k747 in k743 in k627 */
static void C_ccall f_1228(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1228r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1228r(t0,t1,t2,t3);}}

static void C_ccall f_1228r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1234,a[2]=lf[67],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 283  %set-char-set! */
f_1173(t1,t4,lf[66],t2,t3);}

/* a1233 in char-set-delete! in k747 in k743 in k627 */
static void C_ccall f_1234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1234,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_string_set(t2,t3,lf[26]));}

/* char-set-delete in k747 in k743 in k627 */
static void C_ccall f_1216(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1216r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1216r(t0,t1,t2,t3);}}

static void C_ccall f_1216r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1222,a[2]=lf[64],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 281  %set-char-set */
f_1147(t1,t4,lf[63],t2,t3);}

/* a1221 in char-set-delete in k747 in k743 in k627 */
static void C_ccall f_1222(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1222,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_string_set(t2,t3,lf[26]));}

/* char-set-adjoin! in k747 in k743 in k627 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1204r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1204r(t0,t1,t2,t3);}}

static void C_ccall f_1204r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1210,a[2]=lf[61],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 279  %set-char-set! */
f_1173(t1,t4,lf[60],t2,t3);}

/* a1209 in char-set-adjoin! in k747 in k743 in k627 */
static void C_ccall f_1210(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1210,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_string_set(t2,t3,lf[27]));}

/* char-set-adjoin in k747 in k743 in k627 */
static void C_ccall f_1192(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_1192r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1192r(t0,t1,t2,t3);}}

static void C_ccall f_1192r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1198,a[2]=lf[58],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 277  %set-char-set */
f_1147(t1,t4,lf[57],t2,t3);}

/* a1197 in char-set-adjoin in k747 in k743 in k627 */
static void C_ccall f_1198(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1198,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_string_set(t2,t3,lf[27]));}

/* %set-char-set! in k747 in k743 in k627 */
static void C_fcall f_1173(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1173,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1177,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 271  %char-set:s/check */
f_718(t6,t4,t3);}

/* k1175 in %set-char-set! in k747 in k743 in k627 */
static void C_ccall f_1177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1180,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1182,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[55],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a1181 in k1175 in %set-char-set! in k747 in k743 in k627 */
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1182,3,t0,t1,t2);}
t3=f_637(t2);
/* srfi-14.scm: 272  set */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[2],t3);}

/* k1178 in k1175 in %set-char-set! in k747 in k743 in k627 */
static void C_ccall f_1180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* %set-char-set in k747 in k743 in k627 */
static void C_fcall f_1147(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1147,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1151,a[2]=t5,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1171,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 265  %char-set:s/check */
f_718(t7,t4,t3);}

/* k1169 in %set-char-set in k747 in k743 in k627 */
static void C_ccall f_1171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 265  %string-copy */
f_661(((C_word*)t0)[2],t1);}

/* k1149 in %set-char-set in k747 in k743 in k627 */
static void C_ccall f_1151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1154,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1159,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[51],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t4=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a1158 in k1149 in %set-char-set in k747 in k743 in k627 */
static void C_ccall f_1159(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1159,3,t0,t1,t2);}
t3=f_637(t2);
/* srfi-14.scm: 266  set */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[2],t3);}

/* k1152 in k1149 in %set-char-set in k747 in k743 in k627 */
static void C_ccall f_1154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 268  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* char-set-count in k747 in k743 in k627 */
static void C_ccall f_1090(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1090,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1094,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 253  %char-set:s/check */
f_718(t4,t3,lf[47]);}

/* k1092 in char-set-count in k747 in k743 in k627 */
static void C_ccall f_1094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1094,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1099,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=lf[48],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1099(t5,((C_word*)t0)[2],C_fix(255),C_fix(0));}

/* lp in k1092 in char-set-count in k747 in k743 in k627 */
static void C_fcall f_1099(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_1099,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1120,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=t2;
t8=(C_word)C_i_string_ref(((C_word*)t0)[3],t7);
t9=f_637(t8);
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t6;
f_1120(2,t11,C_SCHEME_FALSE);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1133,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 257  %latin1->char */
t12=lf[2];
f_631(3,t12,t11,t2);}}}

/* k1131 in lp in k1092 in char-set-count in k747 in k743 in k627 */
static void C_ccall f_1133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 257  pred */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1118 in lp in k1092 in char-set-count in k747 in k743 in k627 */
static void C_ccall f_1120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1)):((C_word*)t0)[5]);
/* srfi-14.scm: 256  lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1099(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* char-set-size in k747 in k743 in k627 */
static void C_ccall f_1053(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1053,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1057,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 246  %char-set:s/check */
f_718(t3,t2,lf[44]);}

/* k1055 in char-set-size in k747 in k743 in k627 */
static void C_ccall f_1057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1057,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1062,a[2]=t1,a[3]=lf[45],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1062(t2,C_fix(255),C_fix(0)));}

/* lp in k1055 in char-set-size in k747 in k743 in k627 */
static C_word C_fcall f_1062(C_word t0,C_word t1,C_word t2){
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
t3=t1;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
return(t2);}
else{
t4=(C_word)C_fixnum_difference(t1,C_fix(1));
t5=t1;
t6=(C_word)C_i_string_ref(((C_word*)t0)[2],t5);
t7=f_637(t6);
t8=(C_word)C_fixnum_plus(t2,t7);
t10=t4;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* char-set-contains? in k747 in k743 in k627 */
static void C_ccall f_1026(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1026,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_char_2(t3,lf[42]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1033,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 241  %char-set:s/check */
f_718(t5,t2,lf[42]);}

/* k1031 in char-set-contains? in k747 in k743 in k627 */
static void C_ccall f_1033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=f_637(((C_word*)t0)[3]);
t3=(C_word)C_i_string_ref(t1,t2);
t4=f_637(t3);
t5=(C_word)C_eqp(t4,C_fix(0));
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_not(t5));}

/* char-set-hash in k747 in k743 in k627 */
static void C_ccall f_918(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_918r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_918r(t0,t1,t2,t3);}}

static void C_ccall f_918r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_922,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_922(2,t5,C_fix(4194304));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_922(2,t6,(C_word)C_i_car(t3));}
else{
/* srfi-14.scm: 225  ##sys#error */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[1],t3);}}}

/* k920 in char-set-hash in k747 in k743 in k627 */
static void C_ccall f_922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_922,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_eqp(((C_word*)t3)[1],C_fix(0));
if(C_truep(t5)){
t6=C_set_block_item(t3,0,C_fix(4194304));
t7=t4;
f_925(t7,t6);}
else{
t6=t4;
f_925(t6,C_SCHEME_UNDEFINED);}}

/* k923 in k920 in char-set-hash in k747 in k743 in k627 */
static void C_fcall f_925(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_925,NULL,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)((C_word*)t0)[4])[1],lf[37]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_931,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 228  %char-set:s/check */
f_718(t3,((C_word*)t0)[2],lf[37]);}

/* k929 in k923 in k920 in char-set-hash in k747 in k743 in k627 */
static void C_ccall f_931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_931,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_984,a[2]=((C_word*)t0)[3],a[3]=lf[38],tmp=(C_word)a,a+=4,tmp);
t3=f_984(t2,C_fix(65536));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_939,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=lf[40],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_939(t7,((C_word*)t0)[2],C_fix(255),C_fix(0));}

/* lp in k929 in k923 in k920 in char-set-hash in k747 in k743 in k627 */
static void C_fcall f_939(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_939,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-14.scm: 233  modulo */
t5=*((C_word*)lf[39]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t3,((C_word*)((C_word*)t0)[5])[1]);}
else{
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_960,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=(C_word)C_i_string_ref(((C_word*)t0)[3],t7);
t9=f_637(t8);
t10=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t10)){
t11=t6;
f_960(t11,t3);}
else{
t11=(C_word)C_fixnum_times(C_fix(37),t3);
t12=(C_word)C_fixnum_plus(t11,t2);
t13=t6;
f_960(t13,(C_word)C_fixnum_and(((C_word*)t0)[2],t12));}}}

/* k958 in lp in k929 in k923 in k920 in char-set-hash in k747 in k743 in k627 */
static void C_fcall f_960(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 234  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_939(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* lp in k929 in k923 in k920 in char-set-hash in k747 in k743 in k627 */
static C_word C_fcall f_984(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
t2=t1;
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,t3))){
return((C_word)C_fixnum_difference(t1,C_fix(1)));}
else{
t4=(C_word)C_fixnum_plus(t1,t1);
t6=t4;
t1=t6;
goto loop;}}

/* char-set<= in k747 in k743 in k627 */
static void C_ccall f_820(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_820r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_820r(t0,t1,t2);}}

static void C_ccall f_820r(C_word t0,C_word t1,C_word t2){
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
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_840,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 201  %char-set:s/check */
f_718(t6,t4,lf[33]);}}

/* k838 in char-set<= in k747 in k743 in k627 */
static void C_ccall f_840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_840,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_842,a[2]=t3,a[3]=lf[35],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_842(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* lp in k838 in char-set<= in k747 in k743 in k627 */
static void C_fcall f_842(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_842,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t3);
t5=(C_word)C_i_not(t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_852,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_car(t3);
/* srfi-14.scm: 203  %char-set:s/check */
f_718(t6,t7,lf[33]);}}

/* k850 in lp in k838 in char-set<= in k747 in k743 in k627 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_852,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t3)){
/* srfi-14.scm: 205  lp */
t4=((C_word*)((C_word*)t0)[3])[1];
f_842(t4,((C_word*)t0)[2],t1,t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_869,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=lf[34],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_869(t7,((C_word*)t0)[2],C_fix(255));}}

/* lp2 in k850 in lp in k838 in char-set<= in k747 in k743 in k627 */
static void C_fcall f_869(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_869,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
/* srfi-14.scm: 207  lp */
t4=((C_word*)((C_word*)t0)[6])[1];
f_842(t4,t1,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t4=((C_word*)t0)[3];
t5=t2;
t6=(C_word)C_i_string_ref(t4,t5);
t7=f_637(t6);
t8=t2;
t9=(C_word)C_i_string_ref(((C_word*)t0)[5],t8);
t10=f_637(t9);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t7,t10))){
t11=(C_word)C_fixnum_difference(t2,C_fix(1));
/* srfi-14.scm: 209  lp2 */
t13=t1;
t14=t11;
t1=t13;
t2=t14;
goto loop;}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}}

/* char-set= in k747 in k743 in k627 */
static void C_ccall f_765(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_765r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_765r(t0,t1,t2);}}

static void C_ccall f_765r(C_word t0,C_word t1,C_word t2){
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
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_781,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 190  %char-set:s/check */
f_718(t6,t4,lf[30]);}}

/* k779 in char-set= in k747 in k743 in k627 */
static void C_ccall f_781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_781,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_786,a[2]=t3,a[3]=t1,a[4]=lf[31],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_786(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k779 in char-set= in k747 in k743 in k627 */
static void C_fcall f_786(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_786,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_pairp(t2);
t4=(C_word)C_i_not(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_810,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_car(t2);
/* srfi-14.scm: 193  %char-set:s/check */
f_718(t5,t6,lf[30]);}}

/* k808 in lp in k779 in char-set= in k747 in k743 in k627 */
static void C_ccall f_810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_i_string_equal_p(((C_word*)t0)[5],t1))){
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-14.scm: 194  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_786(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* char-set-copy in k747 in k743 in k627 */
static void C_ccall f_751(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_751,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_759,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_763,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 183  %char-set:s/check */
f_718(t4,t2,lf[28]);}

/* k761 in char-set-copy in k747 in k743 in k627 */
static void C_ccall f_763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 183  %string-copy */
f_661(((C_word*)t0)[2],t1);}

/* k757 in char-set-copy in k747 in k743 in k627 */
static void C_ccall f_759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 183  make-char-set */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* %char-set:s/check in k627 */
static void C_fcall f_718(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_718,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_724,a[2]=t3,a[3]=t5,a[4]=lf[24],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_724(t7,t1,t2);}

/* lp in %char-set:s/check in k627 */
static void C_fcall f_724(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_724,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-14.scm: 154  char-set? */
t4=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k729 in lp in %char-set:s/check in k627 */
static void C_ccall f_731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_731,2,t0,t1);}
if(C_truep(t1)){
/* srfi-14.scm: 154  char-set:s */
t2=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_741,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-14.scm: 155  ##sys#error */
t3=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],lf[23],((C_word*)t0)[4]);}}

/* k739 in k729 in lp in %char-set:s/check in k627 */
static void C_ccall f_741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 155  lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_724(t2,((C_word*)t0)[2],t1);}

/* %default-base in k627 */
static void C_fcall f_671(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_671,NULL,3,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_696,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-14.scm: 142  char-set? */
t7=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
/* srfi-14.scm: 144  ##sys#error */
t6=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,lf[19],t3,t2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_716,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 146  %latin1->char */
t5=lf[2];
f_631(3,t5,t4,C_fix(0));}}

/* k714 in %default-base in k627 */
static void C_ccall f_716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 146  make-string */
t2=*((C_word*)lf[20]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_fix(256),t1);}

/* k694 in %default-base in k627 */
static void C_ccall f_696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_696,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_703,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* srfi-14.scm: 142  char-set:s */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}
else{
/* srfi-14.scm: 143  ##sys#error */
t2=*((C_word*)lf[17]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[18],((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k701 in k694 in %default-base in k627 */
static void C_ccall f_703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-14.scm: 142  %string-copy */
f_661(((C_word*)t0)[2],t1);}

/* %string-copy in k627 */
static void C_fcall f_661(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_661,NULL,2,t1,t2);}
t3=(C_word)C_i_string_length(t2);
/* srfi-14.scm: 130  substring */
t4=*((C_word*)lf[14]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,t2,C_fix(0),t3);}

/* char-set? in k627 */
static void C_ccall f_655(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_655,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[7]));}

/* char-set:s in k627 */
static void C_ccall f_649(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_649,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}

/* make-char-set in k627 */
static void C_ccall f_643(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_643,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,2,lf[7],t2));}

/* %char->latin1 in k627 */
static C_word C_fcall f_637(C_word t1){
C_word tmp;
C_word t2;
C_stack_check;
return((C_word)C_fix((C_word)C_character_code(t1)));}

/* %latin1->char in k627 */
static void C_ccall f_631(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_631,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_make_character((C_word)C_unfix(t2)));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[275] = {
{"toplevelsrfi-14.scm",(void*)C_srfi_14_toplevel},
{"f_629srfi-14.scm",(void*)f_629},
{"f_745srfi-14.scm",(void*)f_745},
{"f_749srfi-14.scm",(void*)f_749},
{"f_2636srfi-14.scm",(void*)f_2636},
{"f_2640srfi-14.scm",(void*)f_2640},
{"f_2644srfi-14.scm",(void*)f_2644},
{"f_2647srfi-14.scm",(void*)f_2647},
{"f_2650srfi-14.scm",(void*)f_2650},
{"f_2752srfi-14.scm",(void*)f_2752},
{"f_2653srfi-14.scm",(void*)f_2653},
{"f_2657srfi-14.scm",(void*)f_2657},
{"f_2748srfi-14.scm",(void*)f_2748},
{"f_2660srfi-14.scm",(void*)f_2660},
{"f_2665srfi-14.scm",(void*)f_2665},
{"f_2740srfi-14.scm",(void*)f_2740},
{"f_2744srfi-14.scm",(void*)f_2744},
{"f_2668srfi-14.scm",(void*)f_2668},
{"f_2672srfi-14.scm",(void*)f_2672},
{"f_2676srfi-14.scm",(void*)f_2676},
{"f_2680srfi-14.scm",(void*)f_2680},
{"f_2684srfi-14.scm",(void*)f_2684},
{"f_2687srfi-14.scm",(void*)f_2687},
{"f_2690srfi-14.scm",(void*)f_2690},
{"f_2694srfi-14.scm",(void*)f_2694},
{"f_2697srfi-14.scm",(void*)f_2697},
{"f_2700srfi-14.scm",(void*)f_2700},
{"f_2704srfi-14.scm",(void*)f_2704},
{"f_2736srfi-14.scm",(void*)f_2736},
{"f_2708srfi-14.scm",(void*)f_2708},
{"f_2712srfi-14.scm",(void*)f_2712},
{"f_2732srfi-14.scm",(void*)f_2732},
{"f_2716srfi-14.scm",(void*)f_2716},
{"f_2728srfi-14.scm",(void*)f_2728},
{"f_2720srfi-14.scm",(void*)f_2720},
{"f_2724srfi-14.scm",(void*)f_2724},
{"f_2607srfi-14.scm",(void*)f_2607},
{"f_2632srfi-14.scm",(void*)f_2632},
{"f_2611srfi-14.scm",(void*)f_2611},
{"f_2614srfi-14.scm",(void*)f_2614},
{"f_2617srfi-14.scm",(void*)f_2617},
{"f_2624srfi-14.scm",(void*)f_2624},
{"f_2628srfi-14.scm",(void*)f_2628},
{"f_2556srfi-14.scm",(void*)f_2556},
{"f_2560srfi-14.scm",(void*)f_2560},
{"f_2563srfi-14.scm",(void*)f_2563},
{"f_2574srfi-14.scm",(void*)f_2574},
{"f_2566srfi-14.scm",(void*)f_2566},
{"f_2569srfi-14.scm",(void*)f_2569},
{"f_2503srfi-14.scm",(void*)f_2503},
{"f_2509srfi-14.scm",(void*)f_2509},
{"f_2554srfi-14.scm",(void*)f_2554},
{"f_2515srfi-14.scm",(void*)f_2515},
{"f_2439srfi-14.scm",(void*)f_2439},
{"f_2494srfi-14.scm",(void*)f_2494},
{"f_2449srfi-14.scm",(void*)f_2449},
{"f_2461srfi-14.scm",(void*)f_2461},
{"f_2478srfi-14.scm",(void*)f_2478},
{"f_2452srfi-14.scm",(void*)f_2452},
{"f_2398srfi-14.scm",(void*)f_2398},
{"f_2406srfi-14.scm",(void*)f_2406},
{"f_2408srfi-14.scm",(void*)f_2408},
{"f_2425srfi-14.scm",(void*)f_2425},
{"f_2402srfi-14.scm",(void*)f_2402},
{"f_2357srfi-14.scm",(void*)f_2357},
{"f_2393srfi-14.scm",(void*)f_2393},
{"f_2367srfi-14.scm",(void*)f_2367},
{"f_2375srfi-14.scm",(void*)f_2375},
{"f_2370srfi-14.scm",(void*)f_2370},
{"f_2331srfi-14.scm",(void*)f_2331},
{"f_2339srfi-14.scm",(void*)f_2339},
{"f_2341srfi-14.scm",(void*)f_2341},
{"f_2335srfi-14.scm",(void*)f_2335},
{"f_2286srfi-14.scm",(void*)f_2286},
{"f_2322srfi-14.scm",(void*)f_2322},
{"f_2296srfi-14.scm",(void*)f_2296},
{"f_2308srfi-14.scm",(void*)f_2308},
{"f_2299srfi-14.scm",(void*)f_2299},
{"f_2264srfi-14.scm",(void*)f_2264},
{"f_2272srfi-14.scm",(void*)f_2272},
{"f_2274srfi-14.scm",(void*)f_2274},
{"f_2268srfi-14.scm",(void*)f_2268},
{"f_2215srfi-14.scm",(void*)f_2215},
{"f_2255srfi-14.scm",(void*)f_2255},
{"f_2225srfi-14.scm",(void*)f_2225},
{"f_2237srfi-14.scm",(void*)f_2237},
{"f_2228srfi-14.scm",(void*)f_2228},
{"f_2189srfi-14.scm",(void*)f_2189},
{"f_2197srfi-14.scm",(void*)f_2197},
{"f_2199srfi-14.scm",(void*)f_2199},
{"f_2193srfi-14.scm",(void*)f_2193},
{"f_2167srfi-14.scm",(void*)f_2167},
{"f_2171srfi-14.scm",(void*)f_2171},
{"f_2176srfi-14.scm",(void*)f_2176},
{"f_2187srfi-14.scm",(void*)f_2187},
{"f_2174srfi-14.scm",(void*)f_2174},
{"f_2139srfi-14.scm",(void*)f_2139},
{"f_2143srfi-14.scm",(void*)f_2143},
{"f_2146srfi-14.scm",(void*)f_2146},
{"f_2154srfi-14.scm",(void*)f_2154},
{"f_2165srfi-14.scm",(void*)f_2165},
{"f_2149srfi-14.scm",(void*)f_2149},
{"f_2097srfi-14.scm",(void*)f_2097},
{"f_2103srfi-14.scm",(void*)f_2103},
{"f_2107srfi-14.scm",(void*)f_2107},
{"f_2112srfi-14.scm",(void*)f_2112},
{"f_2122srfi-14.scm",(void*)f_2122},
{"f_2056srfi-14.scm",(void*)f_2056},
{"f_2066srfi-14.scm",(void*)f_2066},
{"f_2076srfi-14.scm",(void*)f_2076},
{"f_2026srfi-14.scm",(void*)f_2026},
{"f_2033srfi-14.scm",(void*)f_2033},
{"f_2012srfi-14.scm",(void*)f_2012},
{"f_2020srfi-14.scm",(void*)f_2020},
{"f_2024srfi-14.scm",(void*)f_2024},
{"f_2016srfi-14.scm",(void*)f_2016},
{"f_1996srfi-14.scm",(void*)f_1996},
{"f_2000srfi-14.scm",(void*)f_2000},
{"f_2010srfi-14.scm",(void*)f_2010},
{"f_2003srfi-14.scm",(void*)f_2003},
{"f_1943srfi-14.scm",(void*)f_1943},
{"f_1949srfi-14.scm",(void*)f_1949},
{"f_1982srfi-14.scm",(void*)f_1982},
{"f_1969srfi-14.scm",(void*)f_1969},
{"f_1959srfi-14.scm",(void*)f_1959},
{"f_1933srfi-14.scm",(void*)f_1933},
{"f_1941srfi-14.scm",(void*)f_1941},
{"f_1937srfi-14.scm",(void*)f_1937},
{"f_1903srfi-14.scm",(void*)f_1903},
{"f_1913srfi-14.scm",(void*)f_1913},
{"f_1916srfi-14.scm",(void*)f_1916},
{"f_1846srfi-14.scm",(void*)f_1846},
{"f_1889srfi-14.scm",(void*)f_1889},
{"f_1856srfi-14.scm",(void*)f_1856},
{"f_1886srfi-14.scm",(void*)f_1886},
{"f_1865srfi-14.scm",(void*)f_1865},
{"f_1790srfi-14.scm",(void*)f_1790},
{"f_1794srfi-14.scm",(void*)f_1794},
{"f_1844srfi-14.scm",(void*)f_1844},
{"f_1797srfi-14.scm",(void*)f_1797},
{"f_1802srfi-14.scm",(void*)f_1802},
{"f_1832srfi-14.scm",(void*)f_1832},
{"f_1812srfi-14.scm",(void*)f_1812},
{"f_1780srfi-14.scm",(void*)f_1780},
{"f_1788srfi-14.scm",(void*)f_1788},
{"f_1784srfi-14.scm",(void*)f_1784},
{"f_1768srfi-14.scm",(void*)f_1768},
{"f_1772srfi-14.scm",(void*)f_1772},
{"f_1775srfi-14.scm",(void*)f_1775},
{"f_1725srfi-14.scm",(void*)f_1725},
{"f_1738srfi-14.scm",(void*)f_1738},
{"f_1678srfi-14.scm",(void*)f_1678},
{"f_1682srfi-14.scm",(void*)f_1682},
{"f_1687srfi-14.scm",(void*)f_1687},
{"f_1715srfi-14.scm",(void*)f_1715},
{"f_1705srfi-14.scm",(void*)f_1705},
{"f_1668srfi-14.scm",(void*)f_1668},
{"f_1676srfi-14.scm",(void*)f_1676},
{"f_1672srfi-14.scm",(void*)f_1672},
{"f_1656srfi-14.scm",(void*)f_1656},
{"f_1660srfi-14.scm",(void*)f_1660},
{"f_1663srfi-14.scm",(void*)f_1663},
{"f_1644srfi-14.scm",(void*)f_1644},
{"f_1648srfi-14.scm",(void*)f_1648},
{"f_1651srfi-14.scm",(void*)f_1651},
{"f_1629srfi-14.scm",(void*)f_1629},
{"f_1635srfi-14.scm",(void*)f_1635},
{"f_1619srfi-14.scm",(void*)f_1619},
{"f_1627srfi-14.scm",(void*)f_1627},
{"f_1623srfi-14.scm",(void*)f_1623},
{"f_1607srfi-14.scm",(void*)f_1607},
{"f_1611srfi-14.scm",(void*)f_1611},
{"f_1614srfi-14.scm",(void*)f_1614},
{"f_1571srfi-14.scm",(void*)f_1571},
{"f_1577srfi-14.scm",(void*)f_1577},
{"f_1605srfi-14.scm",(void*)f_1605},
{"f_1601srfi-14.scm",(void*)f_1601},
{"f_1597srfi-14.scm",(void*)f_1597},
{"f_1518srfi-14.scm",(void*)f_1518},
{"f_1522srfi-14.scm",(void*)f_1522},
{"f_1527srfi-14.scm",(void*)f_1527},
{"f_1557srfi-14.scm",(void*)f_1557},
{"f_1537srfi-14.scm",(void*)f_1537},
{"f_1469srfi-14.scm",(void*)f_1469},
{"f_1473srfi-14.scm",(void*)f_1473},
{"f_1478srfi-14.scm",(void*)f_1478},
{"f_1508srfi-14.scm",(void*)f_1508},
{"f_1494srfi-14.scm",(void*)f_1494},
{"f_1422srfi-14.scm",(void*)f_1422},
{"f_1426srfi-14.scm",(void*)f_1426},
{"f_1431srfi-14.scm",(void*)f_1431},
{"f_1459srfi-14.scm",(void*)f_1459},
{"f_1449srfi-14.scm",(void*)f_1449},
{"f_1359srfi-14.scm",(void*)f_1359},
{"f_1363srfi-14.scm",(void*)f_1363},
{"f_1366srfi-14.scm",(void*)f_1366},
{"f_1374srfi-14.scm",(void*)f_1374},
{"f_1408srfi-14.scm",(void*)f_1408},
{"f_1404srfi-14.scm",(void*)f_1404},
{"f_1384srfi-14.scm",(void*)f_1384},
{"f_1369srfi-14.scm",(void*)f_1369},
{"f_1309srfi-14.scm",(void*)f_1309},
{"f_1313srfi-14.scm",(void*)f_1313},
{"f_1318srfi-14.scm",(void*)f_1318},
{"f_1345srfi-14.scm",(void*)f_1345},
{"f_1328srfi-14.scm",(void*)f_1328},
{"f_1267srfi-14.scm",(void*)f_1267},
{"f_1271srfi-14.scm",(void*)f_1271},
{"f_1276srfi-14.scm",(void*)f_1276},
{"f_1289srfi-14.scm",(void*)f_1289},
{"f_1258srfi-14.scm",(void*)f_1258},
{"f_1252srfi-14.scm",(void*)f_1252},
{"f_1246srfi-14.scm",(void*)f_1246},
{"f_1240srfi-14.scm",(void*)f_1240},
{"f_1228srfi-14.scm",(void*)f_1228},
{"f_1234srfi-14.scm",(void*)f_1234},
{"f_1216srfi-14.scm",(void*)f_1216},
{"f_1222srfi-14.scm",(void*)f_1222},
{"f_1204srfi-14.scm",(void*)f_1204},
{"f_1210srfi-14.scm",(void*)f_1210},
{"f_1192srfi-14.scm",(void*)f_1192},
{"f_1198srfi-14.scm",(void*)f_1198},
{"f_1173srfi-14.scm",(void*)f_1173},
{"f_1177srfi-14.scm",(void*)f_1177},
{"f_1182srfi-14.scm",(void*)f_1182},
{"f_1180srfi-14.scm",(void*)f_1180},
{"f_1147srfi-14.scm",(void*)f_1147},
{"f_1171srfi-14.scm",(void*)f_1171},
{"f_1151srfi-14.scm",(void*)f_1151},
{"f_1159srfi-14.scm",(void*)f_1159},
{"f_1154srfi-14.scm",(void*)f_1154},
{"f_1090srfi-14.scm",(void*)f_1090},
{"f_1094srfi-14.scm",(void*)f_1094},
{"f_1099srfi-14.scm",(void*)f_1099},
{"f_1133srfi-14.scm",(void*)f_1133},
{"f_1120srfi-14.scm",(void*)f_1120},
{"f_1053srfi-14.scm",(void*)f_1053},
{"f_1057srfi-14.scm",(void*)f_1057},
{"f_1062srfi-14.scm",(void*)f_1062},
{"f_1026srfi-14.scm",(void*)f_1026},
{"f_1033srfi-14.scm",(void*)f_1033},
{"f_918srfi-14.scm",(void*)f_918},
{"f_922srfi-14.scm",(void*)f_922},
{"f_925srfi-14.scm",(void*)f_925},
{"f_931srfi-14.scm",(void*)f_931},
{"f_939srfi-14.scm",(void*)f_939},
{"f_960srfi-14.scm",(void*)f_960},
{"f_984srfi-14.scm",(void*)f_984},
{"f_820srfi-14.scm",(void*)f_820},
{"f_840srfi-14.scm",(void*)f_840},
{"f_842srfi-14.scm",(void*)f_842},
{"f_852srfi-14.scm",(void*)f_852},
{"f_869srfi-14.scm",(void*)f_869},
{"f_765srfi-14.scm",(void*)f_765},
{"f_781srfi-14.scm",(void*)f_781},
{"f_786srfi-14.scm",(void*)f_786},
{"f_810srfi-14.scm",(void*)f_810},
{"f_751srfi-14.scm",(void*)f_751},
{"f_763srfi-14.scm",(void*)f_763},
{"f_759srfi-14.scm",(void*)f_759},
{"f_718srfi-14.scm",(void*)f_718},
{"f_724srfi-14.scm",(void*)f_724},
{"f_731srfi-14.scm",(void*)f_731},
{"f_741srfi-14.scm",(void*)f_741},
{"f_671srfi-14.scm",(void*)f_671},
{"f_716srfi-14.scm",(void*)f_716},
{"f_696srfi-14.scm",(void*)f_696},
{"f_703srfi-14.scm",(void*)f_703},
{"f_661srfi-14.scm",(void*)f_661},
{"f_655srfi-14.scm",(void*)f_655},
{"f_649srfi-14.scm",(void*)f_649},
{"f_643srfi-14.scm",(void*)f_643},
{"f_637srfi-14.scm",(void*)f_637},
{"f_631srfi-14.scm",(void*)f_631},
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
