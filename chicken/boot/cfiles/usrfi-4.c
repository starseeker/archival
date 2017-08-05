/* Generated from srfi-4.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:13
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: srfi-4.scm -output-file usrfi-4.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
   unit: srfi_4
*/

#include "chicken.h"

#define C_u8peek(b, i)         C_fix(((unsigned char *)C_data_pointer(b))[ C_unfix(i) ])
#define C_s8peek(b, i)         C_fix(((char *)C_data_pointer(b))[ C_unfix(i) ])
#define C_u16peek(b, i)        C_fix(((unsigned short *)C_data_pointer(b))[ C_unfix(i) ])
#define C_s16peek(b, i)        C_fix(((short *)C_data_pointer(b))[ C_unfix(i) ])
#ifdef C_SIXTY_FOUR
# define C_a_u32peek(ptr, d, b, i) C_fix(((C_u32 *)C_data_pointer(b))[ C_unfix(i) ])
# define C_a_s32peek(ptr, d, b, i) C_fix(((C_s32 *)C_data_pointer(b))[ C_unfix(i) ])
#else
# define C_a_u32peek(ptr, d, b, i) C_unsigned_int_to_num(ptr, ((C_u32 *)C_data_pointer(b))[ C_unfix(i) ])
# define C_a_s32peek(ptr, d, b, i) C_int_to_num(ptr, ((C_s32 *)C_data_pointer(b))[ C_unfix(i) ])
#endif
#define C_f32peek(b, i)        (C_temporary_flonum = ((float *)C_data_pointer(b))[ C_unfix(i) ], C_SCHEME_UNDEFINED)
#define C_f64peek(b, i)        (C_temporary_flonum = ((double *)C_data_pointer(b))[ C_unfix(i) ], C_SCHEME_UNDEFINED)
#define C_u8poke(b, i, x)      ((((unsigned char *)C_data_pointer(b))[ C_unfix(i) ] = C_unfix(x)), C_SCHEME_UNDEFINED)
#define C_s8poke(b, i, x)      ((((char *)C_data_pointer(b))[ C_unfix(i) ] = C_unfix(x)), C_SCHEME_UNDEFINED)
#define C_u16poke(b, i, x)     ((((unsigned short *)C_data_pointer(b))[ C_unfix(i) ] = C_unfix(x)), C_SCHEME_UNDEFINED)
#define C_s16poke(b, i, x)     ((((short *)C_data_pointer(b))[ C_unfix(i) ] = C_unfix(x)), C_SCHEME_UNDEFINED)
#define C_u32poke(b, i, x)     ((((C_u32 *)C_data_pointer(b))[ C_unfix(i) ] = C_num_to_unsigned_int(x)), C_SCHEME_UNDEFINED)
#define C_s32poke(b, i, x)     ((((C_s32 *)C_data_pointer(b))[ C_unfix(i) ] = C_num_to_int(x)), C_SCHEME_UNDEFINED)
#define C_f32poke(b, i, x)     ((((float *)C_data_pointer(b))[ C_unfix(i) ] = C_flonum_magnitude(x)), C_SCHEME_UNDEFINED)
#define C_f64poke(b, i, x)     ((((double *)C_data_pointer(b))[ C_unfix(i) ] = C_flonum_magnitude(x)), C_SCHEME_UNDEFINED)
#define C_copy_subvector(to, from, start_to, start_from, bytes)   \
  (C_memcpy((C_char *)C_data_pointer(to) + C_unfix(start_to), (C_char *)C_data_pointer(from) + C_unfix(start_from), C_unfix(bytes)), \
    C_SCHEME_UNDEFINED)

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[155];


/* from ext-free in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub146(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub146(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word bv=(C_word )(C_a0);
C_free((void *)C_block_item(bv, 1));
C_return:
#undef return

return C_r;}

/* from ext-alloc */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub141(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub141(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int bytes=(int )C_unfix(C_a0);
C_word *buf = (C_word *)C_malloc(bytes + sizeof(C_header));if(buf == NULL) return(C_SCHEME_FALSE);C_block_header(buf) = C_make_header(C_BYTEVECTOR_TYPE, bytes);return(buf);
C_return:
#undef return

return C_r;}

C_noret_decl(C_srfi_4_toplevel)
C_externexport void C_ccall C_srfi_4_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_849)
static void C_ccall f_849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_853)
static void C_ccall f_853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_857)
static void C_ccall f_857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_861)
static void C_ccall f_861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_865)
static void C_ccall f_865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_869)
static void C_ccall f_869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_877)
static void C_ccall f_877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_998)
static void C_ccall f_998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1006)
static void C_ccall f_1006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1026)
static void C_ccall f_1026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1030)
static void C_ccall f_1030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1034)
static void C_ccall f_1034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1046)
static void C_ccall f_1046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1050)
static void C_ccall f_1050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2866)
static void C_ccall f_2866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2862)
static void C_ccall f_2862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1058)
static void C_ccall f_1058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2057)
static void C_ccall f_2057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2061)
static void C_ccall f_2061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2065)
static void C_ccall f_2065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2069)
static void C_ccall f_2069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2077)
static void C_ccall f_2077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2081)
static void C_ccall f_2081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2085)
static void C_ccall f_2085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2192)
static void C_ccall f_2192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2280)
static void C_ccall f_2280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2284)
static void C_ccall f_2284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2288)
static void C_ccall f_2288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2328)
static void C_ccall f_2328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2332)
static void C_ccall f_2332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2812)
static void C_fcall f_2812(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_fcall f_2807(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2737)
static void C_fcall f_2737(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2763)
static void C_ccall f_2763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2768)
static void C_fcall f_2768(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2754)
static void C_fcall f_2754(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2690)
static void C_fcall f_2690(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2685)
static void C_fcall f_2685(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2652)
static void C_fcall f_2652(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2659)
static void C_fcall f_2659(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2590)
static void C_fcall f_2590(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2585)
static void C_fcall f_2585(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2576)
static void C_fcall f_2576(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2545)
static void C_fcall f_2545(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2554)
static void C_fcall f_2554(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2537)
static void C_ccall f_2537(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2531)
static void C_ccall f_2531(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2469)
static void C_fcall f_2469(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2421)
static void C_ccall f_2421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2345)
static void C_ccall f_2345(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2380)
static void C_ccall f_2380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2255)
static void C_fcall f_2255(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2250)
static void C_fcall f_2250(C_word t0) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2226)
static void C_ccall f_2226(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2214)
static void C_ccall f_2214(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2208)
static void C_ccall f_2208(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2135)
static void C_fcall f_2135(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2137)
static void C_ccall f_2137(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_fcall f_2146(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2105)
static void C_ccall f_2105(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2105)
static void C_ccall f_2105r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2020)
static void C_fcall f_2020(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2022)
static void C_ccall f_2022(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2029)
static void C_ccall f_2029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2034)
static void C_fcall f_2034(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2041)
static void C_ccall f_2041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1960)
static void C_fcall f_1960(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1955)
static void C_fcall f_1955(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1950)
static void C_fcall f_1950(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1904)
static void C_fcall f_1904(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1911)
static void C_ccall f_1911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1920)
static void C_fcall f_1920(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1925)
static void C_fcall f_1925(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1932)
static void C_ccall f_1932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1842)
static void C_fcall f_1842(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1837)
static void C_fcall f_1837(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1832)
static void C_fcall f_1832(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1786)
static void C_fcall f_1786(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1802)
static void C_fcall f_1802(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1807)
static void C_fcall f_1807(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1724)
static void C_fcall f_1724(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1719)
static void C_fcall f_1719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1714)
static void C_fcall f_1714(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1675)
static void C_fcall f_1675(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1693)
static C_word C_fcall f_1693(C_word t0,C_word t1);
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1613)
static void C_fcall f_1613(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1608)
static void C_fcall f_1608(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1603)
static void C_fcall f_1603(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1564)
static void C_fcall f_1564(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1571)
static void C_ccall f_1571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1582)
static C_word C_fcall f_1582(C_word t0,C_word t1);
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1502)
static void C_fcall f_1502(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1497)
static void C_fcall f_1497(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1492)
static void C_fcall f_1492(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1450)
static void C_fcall f_1450(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1471)
static void C_fcall f_1471(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1478)
static void C_ccall f_1478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1388)
static void C_fcall f_1388(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1383)
static void C_fcall f_1383(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1378)
static void C_fcall f_1378(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1336)
static void C_fcall f_1336(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1343)
static void C_ccall f_1343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1357)
static void C_fcall f_1357(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1220)
static void C_ccall f_1220(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1220)
static void C_ccall f_1220r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1274)
static void C_fcall f_1274(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1269)
static void C_fcall f_1269(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1264)
static void C_fcall f_1264(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1222)
static void C_fcall f_1222(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1238)
static void C_ccall f_1238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1243)
static void C_fcall f_1243(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1106)
static void C_ccall f_1106(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1106)
static void C_ccall f_1106r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1160)
static void C_fcall f_1160(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1155)
static void C_fcall f_1155(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1150)
static void C_fcall f_1150(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1108)
static void C_fcall f_1108(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1124)
static void C_ccall f_1124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1129)
static void C_fcall f_1129(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1088)
static void C_fcall f_1088(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static void C_fcall f_1063(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1079)
static void C_ccall f_1079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1061)
static void C_ccall f_1061(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_923)
static void C_ccall f_923(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_947)
static void C_ccall f_947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_954)
static void C_ccall f_954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_978)
static void C_fcall f_978(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static void C_fcall f_901(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_890)
static void C_fcall f_890(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_892)
static void C_ccall f_892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_879)
static void C_fcall f_879(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_881)
static void C_ccall f_881(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_885)
static void C_ccall f_885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_839)
static void C_fcall f_839(C_word t0,C_word t1) C_noret;
C_noret_decl(f_841)
static void C_ccall f_841(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_836)
static void C_ccall f_836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_833)
static void C_ccall f_833(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_830)
static C_word C_fcall f_830(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_827)
static C_word C_fcall f_827(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_824)
static void C_ccall f_824(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_821)
static void C_ccall f_821(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_818)
static void C_ccall f_818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_815)
static void C_ccall f_815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_809)
static void C_ccall f_809(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_803)
static void C_ccall f_803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_800)
static void C_ccall f_800(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_794)
static void C_ccall f_794(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_788)
static void C_ccall f_788(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_785)
static void C_ccall f_785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_767)
static void C_ccall f_767(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_755)
static void C_ccall f_755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;

C_noret_decl(trf_2812)
static void C_fcall trf_2812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2812(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2812(t0,t1);}

C_noret_decl(trf_2807)
static void C_fcall trf_2807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2807(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2807(t0,t1,t2);}

C_noret_decl(trf_2737)
static void C_fcall trf_2737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2737(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2737(t0,t1,t2,t3);}

C_noret_decl(trf_2768)
static void C_fcall trf_2768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2768(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2768(t0,t1,t2);}

C_noret_decl(trf_2754)
static void C_fcall trf_2754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2754(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2754(t0,t1);}

C_noret_decl(trf_2690)
static void C_fcall trf_2690(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2690(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2690(t0,t1);}

C_noret_decl(trf_2685)
static void C_fcall trf_2685(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2685(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2685(t0,t1,t2);}

C_noret_decl(trf_2652)
static void C_fcall trf_2652(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2652(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2652(t0,t1,t2,t3);}

C_noret_decl(trf_2659)
static void C_fcall trf_2659(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2659(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2659(t0,t1);}

C_noret_decl(trf_2590)
static void C_fcall trf_2590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2590(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2590(t0,t1);}

C_noret_decl(trf_2585)
static void C_fcall trf_2585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2585(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2585(t0,t1,t2);}

C_noret_decl(trf_2576)
static void C_fcall trf_2576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2576(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2576(t0,t1,t2,t3);}

C_noret_decl(trf_2545)
static void C_fcall trf_2545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2545(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2545(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2554)
static void C_fcall trf_2554(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2554(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2554(t0,t1,t2);}

C_noret_decl(trf_2469)
static void C_fcall trf_2469(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2469(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2469(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2255)
static void C_fcall trf_2255(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2255(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2255(t0,t1,t2,t3);}

C_noret_decl(trf_2250)
static void C_fcall trf_2250(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2250(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_2250(t0);}

C_noret_decl(trf_2135)
static void C_fcall trf_2135(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2135(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2135(t0,t1,t2);}

C_noret_decl(trf_2146)
static void C_fcall trf_2146(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2146(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2146(t0,t1,t2);}

C_noret_decl(trf_2020)
static void C_fcall trf_2020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2020(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2020(t0,t1,t2);}

C_noret_decl(trf_2034)
static void C_fcall trf_2034(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2034(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2034(t0,t1,t2,t3);}

C_noret_decl(trf_1960)
static void C_fcall trf_1960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1960(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1960(t0,t1);}

C_noret_decl(trf_1955)
static void C_fcall trf_1955(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1955(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1955(t0,t1,t2);}

C_noret_decl(trf_1950)
static void C_fcall trf_1950(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1950(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1950(t0,t1,t2,t3);}

C_noret_decl(trf_1904)
static void C_fcall trf_1904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1904(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1904(t0,t1,t2,t3);}

C_noret_decl(trf_1920)
static void C_fcall trf_1920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1920(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1920(t0,t1);}

C_noret_decl(trf_1925)
static void C_fcall trf_1925(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1925(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1925(t0,t1,t2);}

C_noret_decl(trf_1842)
static void C_fcall trf_1842(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1842(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1842(t0,t1);}

C_noret_decl(trf_1837)
static void C_fcall trf_1837(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1837(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1837(t0,t1,t2);}

C_noret_decl(trf_1832)
static void C_fcall trf_1832(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1832(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1832(t0,t1,t2,t3);}

C_noret_decl(trf_1786)
static void C_fcall trf_1786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1786(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1786(t0,t1,t2,t3);}

C_noret_decl(trf_1802)
static void C_fcall trf_1802(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1802(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1802(t0,t1);}

C_noret_decl(trf_1807)
static void C_fcall trf_1807(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1807(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1807(t0,t1,t2);}

C_noret_decl(trf_1724)
static void C_fcall trf_1724(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1724(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1724(t0,t1);}

C_noret_decl(trf_1719)
static void C_fcall trf_1719(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1719(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1719(t0,t1,t2);}

C_noret_decl(trf_1714)
static void C_fcall trf_1714(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1714(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1714(t0,t1,t2,t3);}

C_noret_decl(trf_1675)
static void C_fcall trf_1675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1675(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1675(t0,t1,t2,t3);}

C_noret_decl(trf_1613)
static void C_fcall trf_1613(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1613(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1613(t0,t1);}

C_noret_decl(trf_1608)
static void C_fcall trf_1608(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1608(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1608(t0,t1,t2);}

C_noret_decl(trf_1603)
static void C_fcall trf_1603(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1603(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1603(t0,t1,t2,t3);}

C_noret_decl(trf_1564)
static void C_fcall trf_1564(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1564(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1564(t0,t1,t2,t3);}

C_noret_decl(trf_1502)
static void C_fcall trf_1502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1502(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1502(t0,t1);}

C_noret_decl(trf_1497)
static void C_fcall trf_1497(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1497(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1497(t0,t1,t2);}

C_noret_decl(trf_1492)
static void C_fcall trf_1492(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1492(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1492(t0,t1,t2,t3);}

C_noret_decl(trf_1450)
static void C_fcall trf_1450(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1450(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1450(t0,t1,t2,t3);}

C_noret_decl(trf_1471)
static void C_fcall trf_1471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1471(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1471(t0,t1,t2);}

C_noret_decl(trf_1388)
static void C_fcall trf_1388(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1388(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1388(t0,t1);}

C_noret_decl(trf_1383)
static void C_fcall trf_1383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1383(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1383(t0,t1,t2);}

C_noret_decl(trf_1378)
static void C_fcall trf_1378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1378(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1378(t0,t1,t2,t3);}

C_noret_decl(trf_1336)
static void C_fcall trf_1336(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1336(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1336(t0,t1,t2,t3);}

C_noret_decl(trf_1357)
static void C_fcall trf_1357(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1357(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1357(t0,t1,t2);}

C_noret_decl(trf_1274)
static void C_fcall trf_1274(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1274(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1274(t0,t1);}

C_noret_decl(trf_1269)
static void C_fcall trf_1269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1269(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1269(t0,t1,t2);}

C_noret_decl(trf_1264)
static void C_fcall trf_1264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1264(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1264(t0,t1,t2,t3);}

C_noret_decl(trf_1222)
static void C_fcall trf_1222(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1222(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1222(t0,t1,t2,t3);}

C_noret_decl(trf_1243)
static void C_fcall trf_1243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1243(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1243(t0,t1,t2);}

C_noret_decl(trf_1160)
static void C_fcall trf_1160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1160(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1160(t0,t1);}

C_noret_decl(trf_1155)
static void C_fcall trf_1155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1155(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1155(t0,t1,t2);}

C_noret_decl(trf_1150)
static void C_fcall trf_1150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1150(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1150(t0,t1,t2,t3);}

C_noret_decl(trf_1108)
static void C_fcall trf_1108(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1108(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1108(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1129)
static void C_fcall trf_1129(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1129(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1129(t0,t1,t2);}

C_noret_decl(trf_1088)
static void C_fcall trf_1088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1088(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1088(t0,t1);}

C_noret_decl(trf_1063)
static void C_fcall trf_1063(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1063(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1063(t0,t1,t2,t3);}

C_noret_decl(trf_978)
static void C_fcall trf_978(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_978(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_978(t0,t1,t2);}

C_noret_decl(trf_901)
static void C_fcall trf_901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_901(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_901(t0,t1,t2,t3);}

C_noret_decl(trf_890)
static void C_fcall trf_890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_890(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_890(t0,t1,t2);}

C_noret_decl(trf_879)
static void C_fcall trf_879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_879(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_879(t0,t1,t2);}

C_noret_decl(trf_839)
static void C_fcall trf_839(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_839(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_839(t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_4_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_4_toplevel(C_word c,C_word t0,C_word t1){
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
else C_toplevel_entry(C_text("srfi_4_toplevel"));
C_check_nursery_minimum(42);
if(!C_demand(42)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1354)){
C_save(t1);
C_rereclaim2(1354*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(42);
C_initialize_lf(lf,155);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],24,"\003syscheck-exact-interval");
lf[3]=C_h_intern(&lf[3],9,"\003syserror");
lf[4]=C_static_string(C_heaptop,38,"numeric value is not in expected range");
lf[5]=C_h_intern(&lf[5],26,"\003syscheck-inexact-interval");
lf[6]=C_static_string(C_heaptop,38,"numeric value is not in expected range");
lf[14]=C_h_intern(&lf[14],15,"\003syscons-flonum");
lf[24]=C_h_intern(&lf[24],15,"u8vector-length");
lf[25]=C_h_intern(&lf[25],15,"s8vector-length");
lf[26]=C_h_intern(&lf[26],16,"u16vector-length");
lf[27]=C_h_intern(&lf[27],16,"s16vector-length");
lf[28]=C_h_intern(&lf[28],16,"u32vector-length");
lf[29]=C_h_intern(&lf[29],16,"s32vector-length");
lf[30]=C_h_intern(&lf[30],16,"f32vector-length");
lf[31]=C_h_intern(&lf[31],16,"f64vector-length");
lf[32]=C_static_string(C_heaptop,28,"argument may not be negative");
lf[33]=C_h_intern(&lf[33],13,"u8vector-set!");
lf[34]=C_h_intern(&lf[34],13,"s8vector-set!");
lf[35]=C_h_intern(&lf[35],14,"u16vector-set!");
lf[36]=C_h_intern(&lf[36],14,"s16vector-set!");
lf[37]=C_h_intern(&lf[37],14,"u32vector-set!");
lf[38]=C_static_string(C_heaptop,28,"argument may not be negative");
lf[39]=C_static_string(C_heaptop,30,"argument exceeds integer range");
lf[40]=C_h_intern(&lf[40],14,"s32vector-set!");
lf[41]=C_static_string(C_heaptop,30,"argument exceeds integer range");
lf[42]=C_h_intern(&lf[42],14,"f32vector-set!");
lf[43]=C_h_intern(&lf[43],14,"f64vector-set!");
lf[44]=C_h_intern(&lf[44],12,"u8vector-ref");
lf[45]=C_h_intern(&lf[45],12,"s8vector-ref");
lf[46]=C_h_intern(&lf[46],13,"u16vector-ref");
lf[47]=C_h_intern(&lf[47],13,"s16vector-ref");
lf[48]=C_h_intern(&lf[48],13,"u32vector-ref");
lf[49]=C_h_intern(&lf[49],13,"s32vector-ref");
lf[50]=C_h_intern(&lf[50],13,"f32vector-ref");
lf[51]=C_h_intern(&lf[51],13,"f64vector-ref");
lf[52]=C_h_intern(&lf[52],14,"set-finalizer!");
lf[53]=C_static_string(C_heaptop,59,"not enough memory - can not allocate external number vector");
lf[54]=C_h_intern(&lf[54],19,"\003sysallocate-vector");
lf[55]=C_h_intern(&lf[55],21,"release-number-vector");
lf[56]=C_static_string(C_heaptop,39,"bad argument type - not a number vector");
tmp=C_intern(C_heaptop,8,"u8vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"u16vector");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"s8vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"s16vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"u32vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"s32vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"f32vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"f64vector");
C_save(tmp);
lf[57]=C_h_list(8,C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(8);
lf[58]=C_h_intern(&lf[58],13,"make-u8vector");
lf[59]=C_h_intern(&lf[59],8,"u8vector");
lf[60]=C_h_intern(&lf[60],13,"make-s8vector");
lf[61]=C_h_intern(&lf[61],8,"s8vector");
lf[62]=C_h_intern(&lf[62],4,"fin\077");
lf[63]=C_h_intern(&lf[63],14,"make-u16vector");
lf[64]=C_h_intern(&lf[64],9,"u16vector");
lf[65]=C_h_intern(&lf[65],14,"make-s16vector");
lf[66]=C_h_intern(&lf[66],9,"s16vector");
lf[67]=C_h_intern(&lf[67],14,"make-u32vector");
lf[68]=C_h_intern(&lf[68],9,"u32vector");
lf[69]=C_h_intern(&lf[69],14,"make-s32vector");
lf[70]=C_h_intern(&lf[70],9,"s32vector");
lf[71]=C_h_intern(&lf[71],14,"make-f32vector");
lf[72]=C_h_intern(&lf[72],9,"f32vector");
lf[73]=C_h_intern(&lf[73],14,"make-f64vector");
lf[74]=C_h_intern(&lf[74],9,"f64vector");
lf[75]=C_h_intern(&lf[75],27,"\003sysnot-a-proper-list-error");
lf[76]=C_h_intern(&lf[76],14,"list->u8vector");
lf[77]=C_h_intern(&lf[77],14,"list->s8vector");
lf[78]=C_h_intern(&lf[78],15,"list->u16vector");
lf[79]=C_h_intern(&lf[79],15,"list->s16vector");
lf[80]=C_h_intern(&lf[80],15,"list->u32vector");
lf[81]=C_h_intern(&lf[81],15,"list->s32vector");
lf[82]=C_h_intern(&lf[82],15,"list->f32vector");
lf[83]=C_h_intern(&lf[83],15,"list->f64vector");
lf[84]=C_h_intern(&lf[84],14,"u8vector->list");
lf[85]=C_h_intern(&lf[85],14,"s8vector->list");
lf[86]=C_h_intern(&lf[86],15,"u16vector->list");
lf[87]=C_h_intern(&lf[87],15,"s16vector->list");
lf[88]=C_h_intern(&lf[88],15,"u32vector->list");
lf[89]=C_h_intern(&lf[89],15,"s32vector->list");
lf[90]=C_h_intern(&lf[90],15,"f32vector->list");
lf[91]=C_h_intern(&lf[91],15,"f64vector->list");
lf[92]=C_h_intern(&lf[92],9,"u8vector\077");
lf[93]=C_h_intern(&lf[93],9,"s8vector\077");
lf[94]=C_h_intern(&lf[94],10,"u16vector\077");
lf[95]=C_h_intern(&lf[95],10,"s16vector\077");
lf[96]=C_h_intern(&lf[96],10,"u32vector\077");
lf[97]=C_h_intern(&lf[97],10,"s32vector\077");
lf[98]=C_h_intern(&lf[98],10,"f32vector\077");
lf[99]=C_h_intern(&lf[99],10,"f64vector\077");
lf[100]=C_static_string(C_heaptop,49,"bytevector does not have correct size for packing");
lf[101]=C_h_intern(&lf[101],21,"u8vector->byte-vector");
lf[102]=C_h_intern(&lf[102],21,"s8vector->byte-vector");
lf[103]=C_h_intern(&lf[103],22,"u16vector->byte-vector");
lf[104]=C_h_intern(&lf[104],22,"s16vector->byte-vector");
lf[105]=C_h_intern(&lf[105],22,"u32vector->byte-vector");
lf[106]=C_h_intern(&lf[106],22,"s32vector->byte-vector");
lf[107]=C_h_intern(&lf[107],22,"f32vector->byte-vector");
lf[108]=C_h_intern(&lf[108],22,"f64vector->byte-vector");
lf[109]=C_h_intern(&lf[109],21,"byte-vector->u8vector");
lf[110]=C_h_intern(&lf[110],21,"byte-vector->s8vector");
lf[111]=C_h_intern(&lf[111],22,"byte-vector->u16vector");
lf[112]=C_h_intern(&lf[112],22,"byte-vector->s16vector");
lf[113]=C_h_intern(&lf[113],22,"byte-vector->u32vector");
lf[114]=C_h_intern(&lf[114],22,"byte-vector->s32vector");
lf[115]=C_h_intern(&lf[115],22,"byte-vector->f32vector");
lf[116]=C_h_intern(&lf[116],22,"byte-vector->f64vector");
lf[117]=C_h_intern(&lf[117],18,"\003sysuser-read-hook");
lf[118]=C_h_intern(&lf[118],4,"read");
lf[119]=C_h_intern(&lf[119],2,"u8");
lf[120]=C_h_intern(&lf[120],2,"s8");
lf[121]=C_h_intern(&lf[121],3,"u16");
lf[122]=C_h_intern(&lf[122],3,"s16");
lf[123]=C_h_intern(&lf[123],3,"u32");
lf[124]=C_h_intern(&lf[124],3,"s32");
lf[125]=C_h_intern(&lf[125],3,"f32");
lf[126]=C_h_intern(&lf[126],3,"f64");
lf[127]=C_h_intern(&lf[127],1,"f");
lf[128]=C_h_intern(&lf[128],1,"F");
lf[129]=C_static_string(C_heaptop,25,"illegal bytevector syntax");
lf[130]=C_h_intern(&lf[130],19,"\003sysuser-print-hook");
lf[131]=C_h_intern(&lf[131],9,"\003sysprint");
lf[133]=C_h_intern(&lf[133],11,"subu8vector");
lf[134]=C_h_intern(&lf[134],12,"subu16vector");
lf[135]=C_h_intern(&lf[135],12,"subu32vector");
lf[136]=C_h_intern(&lf[136],11,"subs8vector");
lf[137]=C_h_intern(&lf[137],12,"subs16vector");
lf[138]=C_h_intern(&lf[138],12,"subs32vector");
lf[139]=C_h_intern(&lf[139],12,"subf32vector");
lf[140]=C_h_intern(&lf[140],12,"subf64vector");
lf[141]=C_h_intern(&lf[141],14,"write-u8vector");
lf[142]=C_h_intern(&lf[142],16,"\003syswrite-char-0");
lf[143]=C_h_intern(&lf[143],19,"\003sysstandard-output");
lf[144]=C_h_intern(&lf[144],14,"read-u8vector!");
lf[145]=C_h_intern(&lf[145],16,"\003sysread-string!");
lf[146]=C_h_intern(&lf[146],18,"\003sysstandard-input");
lf[147]=C_h_intern(&lf[147],18,"open-output-string");
lf[148]=C_h_intern(&lf[148],17,"get-output-string");
lf[149]=C_h_intern(&lf[149],13,"read-u8vector");
lf[150]=C_h_intern(&lf[150],14,"\003syswrite-char");
lf[151]=C_h_intern(&lf[151],15,"\003sysread-char-0");
lf[152]=C_h_intern(&lf[152],17,"register-feature!");
lf[153]=C_h_intern(&lf[153],6,"srfi-4");
lf[154]=C_h_intern(&lf[154],18,"getter-with-setter");
C_register_lf2(lf,155,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=C_mutate((C_word*)lf[2]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_755,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[5]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_767,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[7],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_785,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[8],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_788,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[9],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_791,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[10],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_794,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[11],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_797,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[12],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_800,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[13],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_803,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[15],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_809,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[16],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_815,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate(&lf[17],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_818,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[18],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_821,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate(&lf[19],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_824,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate(&lf[20],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_827,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate(&lf[21],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_830,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate(&lf[22],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_833,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate(&lf[23],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_836,tmp=(C_word)a,a+=2,tmp));
t21=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_839,tmp=(C_word)a,a+=2,tmp);
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_849,a[2]=t21,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 163  len */
f_839(t22,C_SCHEME_FALSE);}

/* k847 */
static void C_ccall f_849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_849,2,t0,t1);}
t2=C_mutate((C_word*)lf[24]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 164  len */
f_839(t3,C_SCHEME_FALSE);}

/* k851 in k847 */
static void C_ccall f_853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_853,2,t0,t1);}
t2=C_mutate((C_word*)lf[25]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 165  len */
f_839(t3,C_fix(1));}

/* k855 in k851 in k847 */
static void C_ccall f_857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_857,2,t0,t1);}
t2=C_mutate((C_word*)lf[26]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_861,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 166  len */
f_839(t3,C_fix(1));}

/* k859 in k855 in k851 in k847 */
static void C_ccall f_861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_861,2,t0,t1);}
t2=C_mutate((C_word*)lf[27]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 167  len */
f_839(t3,C_fix(2));}

/* k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_865,2,t0,t1);}
t2=C_mutate((C_word*)lf[28]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 168  len */
f_839(t3,C_fix(2));}

/* k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_869,2,t0,t1);}
t2=C_mutate((C_word*)lf[29]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_873,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 169  len */
f_839(t3,C_fix(2));}

/* k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_873,2,t0,t1);}
t2=C_mutate((C_word*)lf[30]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_877,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 170  len */
f_839(t3,C_fix(3));}

/* k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_877(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_877,2,t0,t1);}
t2=C_mutate((C_word*)lf[31]+1,t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_879,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_890,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_901,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_978,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_998,a[2]=t5,a[3]=t4,a[4]=t6,a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 226  setu */
f_901(t7,*((C_word*)lf[24]+1),lf[16],lf[33]);}

/* k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_998,2,t0,t1);}
t2=C_mutate((C_word*)lf[33]+1,t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1002,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 227  set */
f_890(t3,*((C_word*)lf[25]+1),lf[17]);}

/* k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1002,2,t0,t1);}
t2=C_mutate((C_word*)lf[34]+1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1006,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 228  setu */
f_901(t3,*((C_word*)lf[26]+1),lf[18],lf[35]);}

/* k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1006,2,t0,t1);}
t2=C_mutate((C_word*)lf[35]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1010,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 229  set */
f_890(t3,*((C_word*)lf[27]+1),lf[19]);}

/* k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1010(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1010,2,t0,t1);}
t2=C_mutate((C_word*)lf[36]+1,t1);
t3=*((C_word*)lf[28]+1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_947,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[37]+1,t4);
t6=*((C_word*)lf[29]+1);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_923,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=C_mutate((C_word*)lf[40]+1,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 232  setf */
f_978(t9,*((C_word*)lf[30]+1),lf[22]);}

/* k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1022,2,t0,t1);}
t2=C_mutate((C_word*)lf[42]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1026,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 233  setf */
f_978(t3,*((C_word*)lf[31]+1),lf[23]);}

/* k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1026,2,t0,t1);}
t2=C_mutate((C_word*)lf[43]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2890,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 236  get */
f_879(t4,*((C_word*)lf[24]+1),lf[7]);}

/* k2888 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 236  getter-with-setter */
t2=*((C_word*)lf[154]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[33]+1));}

/* k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1030,2,t0,t1);}
t2=C_mutate((C_word*)lf[44]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1034,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2886,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 239  get */
f_879(t4,*((C_word*)lf[25]+1),lf[8]);}

/* k2884 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 239  getter-with-setter */
t2=*((C_word*)lf[154]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[34]+1));}

/* k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1034,2,t0,t1);}
t2=C_mutate((C_word*)lf[45]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1038,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2882,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 242  get */
f_879(t4,*((C_word*)lf[26]+1),lf[9]);}

/* k2880 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 242  getter-with-setter */
t2=*((C_word*)lf[154]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[35]+1));}

/* k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1038,2,t0,t1);}
t2=C_mutate((C_word*)lf[46]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2878,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 245  get */
f_879(t4,*((C_word*)lf[27]+1),lf[10]);}

/* k2876 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 245  getter-with-setter */
t2=*((C_word*)lf[154]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[36]+1));}

/* k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1042,2,t0,t1);}
t2=C_mutate((C_word*)lf[47]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2874,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 249  get */
f_879(t4,*((C_word*)lf[28]+1),lf[11]);}

/* k2872 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 248  getter-with-setter */
t2=*((C_word*)lf[154]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[37]+1));}

/* k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1046,2,t0,t1);}
t2=C_mutate((C_word*)lf[48]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2870,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 253  get */
f_879(t4,*((C_word*)lf[29]+1),lf[12]);}

/* k2868 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 252  getter-with-setter */
t2=*((C_word*)lf[154]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[40]+1));}

/* k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1050,2,t0,t1);}
t2=C_mutate((C_word*)lf[49]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2866,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 257  get */
f_879(t4,*((C_word*)lf[30]+1),lf[13]);}

/* k2864 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 256  getter-with-setter */
t2=*((C_word*)lf[154]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[42]+1));}

/* k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1054,2,t0,t1);}
t2=C_mutate((C_word*)lf[50]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1058,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2862,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 261  get */
f_879(t4,*((C_word*)lf[31]+1),lf[15]);}

/* k2860 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 260  getter-with-setter */
t2=*((C_word*)lf[154]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[43]+1));}

/* k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1058(C_word c,C_word t0,C_word t1){
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
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1058,2,t0,t1);}
t2=C_mutate((C_word*)lf[51]+1,t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1061,tmp=(C_word)a,a+=2,tmp);
t4=*((C_word*)lf[52]+1);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1063,tmp=(C_word)a,a+=2,tmp);
t6=C_mutate((C_word*)lf[55]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1081,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[58]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1106,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t8=C_mutate((C_word*)lf[60]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1220,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t9=C_mutate((C_word*)lf[63]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1334,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t10=C_mutate((C_word*)lf[65]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1448,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t11=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1562,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1673,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t13=C_mutate((C_word*)lf[71]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1784,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t14=C_mutate((C_word*)lf[73]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1902,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2020,tmp=(C_word)a,a+=2,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2057,a[2]=t15,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 420  init */
f_2020(t16,*((C_word*)lf[58]+1),*((C_word*)lf[33]+1));}

/* k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2057,2,t0,t1);}
t2=C_mutate((C_word*)lf[76]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 421  init */
f_2020(t3,*((C_word*)lf[60]+1),*((C_word*)lf[34]+1));}

/* k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2061,2,t0,t1);}
t2=C_mutate((C_word*)lf[77]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 422  init */
f_2020(t3,*((C_word*)lf[63]+1),*((C_word*)lf[35]+1));}

/* k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2065,2,t0,t1);}
t2=C_mutate((C_word*)lf[78]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 423  init */
f_2020(t3,*((C_word*)lf[65]+1),*((C_word*)lf[36]+1));}

/* k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2069,2,t0,t1);}
t2=C_mutate((C_word*)lf[79]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 424  init */
f_2020(t3,*((C_word*)lf[67]+1),*((C_word*)lf[37]+1));}

/* k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2073,2,t0,t1);}
t2=C_mutate((C_word*)lf[80]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 425  init */
f_2020(t3,*((C_word*)lf[69]+1),*((C_word*)lf[40]+1));}

/* k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2077,2,t0,t1);}
t2=C_mutate((C_word*)lf[81]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2081,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 426  init */
f_2020(t3,*((C_word*)lf[71]+1),*((C_word*)lf[42]+1));}

/* k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2081,2,t0,t1);}
t2=C_mutate((C_word*)lf[82]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2085,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 427  init */
f_2020(t3,*((C_word*)lf[73]+1),*((C_word*)lf[43]+1));}

/* k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2085(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2085,2,t0,t1);}
t2=C_mutate((C_word*)lf[83]+1,t1);
t3=*((C_word*)lf[76]+1);
t4=C_mutate((C_word*)lf[59]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2087,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=*((C_word*)lf[77]+1);
t6=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2093,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[78]+1);
t8=C_mutate((C_word*)lf[64]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2099,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=*((C_word*)lf[79]+1);
t10=C_mutate((C_word*)lf[66]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2105,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[80]+1);
t12=C_mutate((C_word*)lf[68]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2111,a[2]=t11,tmp=(C_word)a,a+=3,tmp));
t13=*((C_word*)lf[81]+1);
t14=C_mutate((C_word*)lf[70]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2117,a[2]=t13,tmp=(C_word)a,a+=3,tmp));
t15=*((C_word*)lf[82]+1);
t16=C_mutate((C_word*)lf[72]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2123,a[2]=t15,tmp=(C_word)a,a+=3,tmp));
t17=*((C_word*)lf[83]+1);
t18=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2129,a[2]=t17,tmp=(C_word)a,a+=3,tmp));
t19=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2135,tmp=(C_word)a,a+=2,tmp);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2172,a[2]=t19,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 478  init */
f_2135(t20,*((C_word*)lf[24]+1),lf[7]);}

/* k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2172,2,t0,t1);}
t2=C_mutate((C_word*)lf[84]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 479  init */
f_2135(t3,*((C_word*)lf[25]+1),lf[8]);}

/* k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2176,2,t0,t1);}
t2=C_mutate((C_word*)lf[85]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 480  init */
f_2135(t3,*((C_word*)lf[26]+1),lf[9]);}

/* k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2180,2,t0,t1);}
t2=C_mutate((C_word*)lf[86]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 481  init */
f_2135(t3,*((C_word*)lf[27]+1),lf[10]);}

/* k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2184,2,t0,t1);}
t2=C_mutate((C_word*)lf[87]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 482  init */
f_2135(t3,*((C_word*)lf[28]+1),lf[11]);}

/* k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2188,2,t0,t1);}
t2=C_mutate((C_word*)lf[88]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 483  init */
f_2135(t3,*((C_word*)lf[29]+1),lf[12]);}

/* k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2192,2,t0,t1);}
t2=C_mutate((C_word*)lf[89]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 484  init */
f_2135(t3,*((C_word*)lf[30]+1),lf[13]);}

/* k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2196,2,t0,t1);}
t2=C_mutate((C_word*)lf[90]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2200,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 485  init */
f_2135(t3,*((C_word*)lf[31]+1),lf[15]);}

/* k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2200(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2200,2,t0,t1);}
t2=C_mutate((C_word*)lf[91]+1,t1);
t3=C_mutate((C_word*)lf[92]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2202,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[93]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2208,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[94]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2214,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[95]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2220,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[96]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2226,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[97]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2232,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[98]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2238,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[99]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2244,tmp=(C_word)a,a+=2,tmp));
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2250,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2255,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2280,a[2]=t11,a[3]=t12,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 518  pack */
f_2250(t13);}

/* k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2280,2,t0,t1);}
t2=C_mutate((C_word*)lf[101]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 519  pack */
f_2250(t3);}

/* k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2284,2,t0,t1);}
t2=C_mutate((C_word*)lf[102]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 520  pack */
f_2250(t3);}

/* k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2288,2,t0,t1);}
t2=C_mutate((C_word*)lf[103]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 521  pack */
f_2250(t3);}

/* k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2292,2,t0,t1);}
t2=C_mutate((C_word*)lf[104]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 522  pack */
f_2250(t3);}

/* k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2296,2,t0,t1);}
t2=C_mutate((C_word*)lf[105]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2300,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 523  pack */
f_2250(t3);}

/* k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2300,2,t0,t1);}
t2=C_mutate((C_word*)lf[106]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 524  pack */
f_2250(t3);}

/* k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2304,2,t0,t1);}
t2=C_mutate((C_word*)lf[107]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2308,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 525  pack */
f_2250(t3);}

/* k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2308,2,t0,t1);}
t2=C_mutate((C_word*)lf[108]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 527  unpack */
f_2255(t3,lf[59],C_SCHEME_TRUE,lf[109]);}

/* k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2312,2,t0,t1);}
t2=C_mutate((C_word*)lf[109]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 528  unpack */
f_2255(t3,lf[61],C_SCHEME_TRUE,lf[110]);}

/* k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2316,2,t0,t1);}
t2=C_mutate((C_word*)lf[110]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 529  unpack */
f_2255(t3,lf[64],C_fix(2),lf[111]);}

/* k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2320,2,t0,t1);}
t2=C_mutate((C_word*)lf[111]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 530  unpack */
f_2255(t3,lf[66],C_fix(2),lf[112]);}

/* k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2324,2,t0,t1);}
t2=C_mutate((C_word*)lf[112]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 531  unpack */
f_2255(t3,lf[68],C_fix(4),lf[113]);}

/* k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2328,2,t0,t1);}
t2=C_mutate((C_word*)lf[113]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 532  unpack */
f_2255(t3,lf[70],C_fix(4),lf[114]);}

/* k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2332,2,t0,t1);}
t2=C_mutate((C_word*)lf[114]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 533  unpack */
f_2255(t3,lf[72],C_fix(4),lf[115]);}

/* k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2336,2,t0,t1);}
t2=C_mutate((C_word*)lf[115]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 534  unpack */
f_2255(t3,lf[74],C_fix(8),lf[116]);}

/* k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1){
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
C_word ab[85],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2340,2,t0,t1);}
t2=C_mutate((C_word*)lf[116]+1,t1);
t3=*((C_word*)lf[117]+1);
t4=*((C_word*)lf[118]+1);
t5=(C_word)C_a_i_list(&a,16,lf[119],*((C_word*)lf[76]+1),lf[120],*((C_word*)lf[77]+1),lf[121],*((C_word*)lf[78]+1),lf[122],*((C_word*)lf[79]+1),lf[123],*((C_word*)lf[80]+1),lf[124],*((C_word*)lf[81]+1),lf[125],*((C_word*)lf[82]+1),lf[126],*((C_word*)lf[83]+1));
t6=C_mutate((C_word*)lf[117]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2345,a[2]=t3,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=*((C_word*)lf[130]+1);
t8=C_mutate((C_word*)lf[130]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2401,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[132],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2469,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[133]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2495,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[134]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2501,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[135]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2507,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[136]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2513,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[137]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2519,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[138]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2525,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[139]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2531,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[140]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2537,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[141]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2543,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[144]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2650,tmp=(C_word)a,a+=2,tmp));
t20=*((C_word*)lf[147]+1);
t21=*((C_word*)lf[148]+1);
t22=C_mutate((C_word*)lf[149]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2735,a[2]=t20,a[3]=t21,tmp=(C_word)a,a+=4,tmp));
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2858,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 651  register-feature! */
t24=*((C_word*)lf[152]+1);
((C_proc3)(void*)(*((C_word*)t24+1)))(3,t24,t23,lf[153]);}

/* k2856 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2735(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr2r,(void*)f_2735r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2735r(t0,t1,t2);}}

static void C_ccall f_2735r(C_word t0,C_word t1,C_word t2){
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
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2807,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2812,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-n669689 */
t6=t5;
f_2812(t6,t1);}
else{
t6=(C_word)C_u_i_car(t2);
t7=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t7))){
/* def-p670687 */
t8=t4;
f_2807(t8,t1,t6);}
else{
t8=(C_word)C_u_i_car(t7);
t9=(C_word)C_slot(t7,C_fix(1));
/* body667672 */
t10=t3;
f_2737(t10,t1,t6,t8);}}}

/* def-n669 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2812(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2812,NULL,2,t0,t1);}
/* def-p670687 */
t2=((C_word*)t0)[2];
f_2807(t2,t1,C_SCHEME_FALSE);}

/* def-p670 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2807(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2807,NULL,3,t0,t1,t2);}
/* body667672 */
t3=((C_word*)t0)[2];
f_2737(t3,t1,t2,*((C_word*)lf[146]+1));}

/* body667 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2737(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2737,NULL,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2744,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 631  ##sys#allocate-vector */
t5=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t2,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2763,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 641  open-output-string */
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2761 in body667 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2763,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2768,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2768(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k2761 in body667 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2768(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2768,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2772,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t4)){
/* srfi-4.scm: 643  get-output-string */
t5=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,((C_word*)t0)[4]);}
else{
t5=t3;
f_2772(2,t5,C_SCHEME_FALSE);}}

/* k2770 in loop in k2761 in body667 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2772,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2778,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 644  ##sys#read-char-0 */
t3=*((C_word*)lf[151]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k2776 in k2770 in loop in k2761 in body667 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2778,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
/* srfi-4.scm: 646  get-output-string */
t2=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2790,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 648  ##sys#write-char */
t3=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[4]);}}

/* k2788 in k2776 in k2770 in loop in k2761 in body667 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_u_fixnum_difference(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
/* srfi-4.scm: 649  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2768(t3,((C_word*)t0)[2],t2);}

/* k2742 in body667 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2747,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 632  ##sys#read-string! */
t3=*((C_word*)lf[145]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_fix(0));}

/* k2745 in k2742 in body667 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2754,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[3],t1);
if(C_truep(t3)){
t4=t2;
f_2754(t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2760,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 637  ##sys#allocate-vector */
t5=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t1,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}}

/* k2758 in k2745 in k2742 in body667 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_substring_copy(((C_word*)t0)[4],t1,C_fix(0),((C_word*)t0)[3],C_fix(0));
t3=((C_word*)t0)[2];
f_2754(t3,t1);}

/* k2752 in k2745 in k2742 in body667 in read-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2754(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2754,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,2,lf[59],t1));}

/* read-u8vector! in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2650(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_2650r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2650r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2650r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2652,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2685,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2690,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-port646656 */
t9=t8;
f_2690(t9,t1);}
else{
t9=(C_word)C_u_i_car(t4);
t10=(C_word)C_slot(t4,C_fix(1));
if(C_truep((C_word)C_i_nullp(t10))){
/* def-start647654 */
t11=t7;
f_2685(t11,t1,t9);}
else{
t11=(C_word)C_u_i_car(t10);
t12=(C_word)C_slot(t10,C_fix(1));
/* body644649 */
t13=t6;
f_2652(t13,t1,t9,t11);}}}

/* def-port646 in read-u8vector! in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2690(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2690,NULL,2,t0,t1);}
/* def-start647654 */
t2=((C_word*)t0)[2];
f_2685(t2,t1,*((C_word*)lf[146]+1));}

/* def-start647 in read-u8vector! in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2685(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2685,NULL,3,t0,t1,t2);}
/* body644649 */
t3=((C_word*)t0)[2];
f_2652(t3,t1,t2,C_fix(0));}

/* body644 in read-u8vector! in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2652(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2652,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2659,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=(C_word)C_u_fixnum_plus(t3,((C_word*)((C_word*)t0)[2])[1]);
t7=(C_word)C_block_size(t4);
if(C_truep((C_word)C_fixnum_greaterp(t6,t7))){
t8=(C_word)C_block_size(t4);
t9=(C_word)C_u_fixnum_difference(t8,t3);
t10=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t11=t5;
f_2659(t11,t10);}
else{
t8=t5;
f_2659(t8,C_SCHEME_UNDEFINED);}}
else{
t6=t5;
f_2659(t6,C_SCHEME_UNDEFINED);}}

/* k2657 in body644 in read-u8vector! in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2659(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 623  ##sys#read-string! */
t2=*((C_word*)lf[145]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* write-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_2543r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2543r(t0,t1,t2,t3);}}

static void C_ccall f_2543r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(13);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2545,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2576,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2585,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2590,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-port612631 */
t8=t7;
f_2590(t8,t1);}
else{
t8=(C_word)C_u_i_car(t3);
t9=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-from613629 */
t10=t6;
f_2585(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-to614626 */
t12=t5;
f_2576(t12,t1,t8,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
/* body610616 */
t14=t4;
f_2545(t14,t1,t8,t10,t12);}}}}

/* def-port612 in write-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2590(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2590,NULL,2,t0,t1);}
/* def-from613629 */
t2=((C_word*)t0)[2];
f_2585(t2,t1,*((C_word*)lf[143]+1));}

/* def-from613 in write-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2585(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2585,NULL,3,t0,t1,t2);}
/* def-to614626 */
t3=((C_word*)t0)[2];
f_2576(t3,t1,t2,C_fix(0));}

/* def-to614 in write-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2576(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2576,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_u_i_8vector_length(((C_word*)t0)[3]);
/* body610616 */
t5=((C_word*)t0)[2];
f_2545(t5,t1,t2,t3,t4);}

/* body610 in write-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2545(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2545,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2554,a[2]=t2,a[3]=t5,a[4]=t7,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_2554(t9,t1,t3);}

/* do621 in body610 in write-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2554(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2554,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2564,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_make_character((C_word)C_unfix((C_word)C_u8peek(((C_word*)t0)[3],t2)));
/* srfi-4.scm: 612  ##sys#write-char-0 */
t5=*((C_word*)lf[142]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}}

/* k2562 in do621 in body610 in write-u8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2554(t3,((C_word*)t0)[2],t2);}

/* subf64vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2537(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2537,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 604  subvector */
f_2469(t1,t2,lf[74],C_fix(8),t3,t4);}

/* subf32vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2531(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2531,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 603  subvector */
f_2469(t1,t2,lf[72],C_fix(4),t3,t4);}

/* subs32vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2525,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 602  subvector */
f_2469(t1,t2,lf[70],C_fix(4),t3,t4);}

/* subs16vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2519,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 601  subvector */
f_2469(t1,t2,lf[66],C_fix(2),t3,t4);}

/* subs8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2513,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 600  subvector */
f_2469(t1,t2,lf[61],C_fix(1),t3,t4);}

/* subu32vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2507,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 599  subvector */
f_2469(t1,t2,lf[68],C_fix(4),t3,t4);}

/* subu16vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2501,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 598  subvector */
f_2469(t1,t2,lf[64],C_fix(2),t3,t4);}

/* subu8vector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2495,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 597  subvector */
f_2469(t1,t2,lf[59],C_fix(1),t3,t4);}

/* subvector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2469(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2469,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_block_size(t7);
t9=(C_word)C_fixnum_divide(t8,t4);
t10=(C_word)C_u_fixnum_difference(t6,t5);
t11=(C_word)C_fixnum_times(t4,t10);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2482,a[2]=t1,a[3]=t11,a[4]=t7,a[5]=t4,a[6]=t5,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 591  ##sys#allocate-vector */
t13=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t13+1)))(6,t13,t12,t11,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k2480 in subvector in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2482,2,t0,t1);}
t2=(C_word)C_string_to_bytevector(t1);
t3=(C_word)C_a_i_record(&a,2,((C_word*)t0)[7],t1);
t4=(C_word)C_fixnum_times(((C_word*)t0)[6],((C_word*)t0)[5]);
t5=(C_word)C_copy_subvector(t1,((C_word*)t0)[4],C_fix(0),t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}

/* ##sys#user-print-hook in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2401(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[102],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2401,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,3,lf[59],lf[119],*((C_word*)lf[84]+1));
t6=(C_word)C_a_i_list(&a,3,lf[61],lf[120],*((C_word*)lf[85]+1));
t7=(C_word)C_a_i_list(&a,3,lf[64],lf[121],*((C_word*)lf[86]+1));
t8=(C_word)C_a_i_list(&a,3,lf[66],lf[122],*((C_word*)lf[87]+1));
t9=(C_word)C_a_i_list(&a,3,lf[68],lf[123],*((C_word*)lf[88]+1));
t10=(C_word)C_a_i_list(&a,3,lf[70],lf[124],*((C_word*)lf[89]+1));
t11=(C_word)C_a_i_list(&a,3,lf[72],lf[125],*((C_word*)lf[90]+1));
t12=(C_word)C_a_i_list(&a,3,lf[74],lf[126],*((C_word*)lf[91]+1));
t13=(C_word)C_a_i_list(&a,8,t5,t6,t7,t8,t9,t10,t11,t12);
t14=(C_word)C_u_i_assq((C_word)C_slot(t2,C_fix(0)),t13);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2411,a[2]=t2,a[3]=t14,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 575  ##sys#print */
t16=*((C_word*)lf[131]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t15,C_make_character(35),C_SCHEME_FALSE,t4);}
else{
/* srfi-4.scm: 578  old-hook */
t15=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t15+1)))(5,t15,t1,t2,t3,t4);}}

/* k2409 in ##sys#user-print-hook in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2411,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_u_i_cadr(((C_word*)t0)[3]);
/* srfi-4.scm: 576  ##sys#print */
t4=*((C_word*)lf[131]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k2412 in k2409 in ##sys#user-print-hook in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2414,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2421,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_i_caddr(((C_word*)t0)[3]);
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,((C_word*)t0)[2]);}

/* k2419 in k2412 in k2409 in ##sys#user-print-hook in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 577  ##sys#print */
t2=*((C_word*)lf[131]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* ##sys#user-read-hook in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2345(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2345,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_truep((C_word)C_eqp(t4,C_make_character(117)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(115)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(102)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(85)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(83)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(70)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2355,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 552  read */
t6=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
/* srfi-4.scm: 557  old-hook */
t5=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t3);}}

/* k2353 in ##sys#user-read-hook in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2355,2,t0,t1);}
t2=(C_word)C_i_symbolp(t1);
t3=(C_truep(t2)?t1:C_SCHEME_FALSE);
t4=(C_word)C_eqp(t3,lf[127]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(t3,lf[128]));
if(C_truep(t5)){
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_u_i_memq(t3,((C_word*)t0)[4]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2380,a[2]=((C_word*)t0)[5],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 555  read */
t8=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,((C_word*)t0)[2]);}
else{
/* srfi-4.scm: 556  ##sys#error */
t7=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[5],lf[129],t3);}}}

/* k2378 in k2353 in ##sys#user-read-hook in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2306 in k2302 in k2298 in k2294 in k2290 in k2286 in k2282 in k2278 in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(C_word)C_slot(t2,C_fix(0));
t4=t3;
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t1);}

/* unpack in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2255(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2255,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2257,a[2]=t2,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp));}

/* f_2257 in unpack in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2257(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2257,3,t0,t1,t2);}
t3=(C_word)C_i_check_bytevector_2(t2,((C_word*)t0)[4]);
t4=(C_word)C_block_size(t2);
t5=(C_word)C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
t6=(C_truep(t5)?t5:(C_word)C_eqp(C_fix(0),(C_word)C_fixnum_modulo(t4,((C_word*)t0)[3])));
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,2,((C_word*)t0)[2],t2));}
else{
/* srfi-4.scm: 516  ##sys#error */
t7=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t1,((C_word*)t0)[4],lf[100],((C_word*)t0)[2],t4,((C_word*)t0)[3]);}}

/* pack in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2250(C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2250,NULL,1,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2252,tmp=(C_word)a,a+=2,tmp));}

/* f_2252 in pack in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2252,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}

/* f64vector? in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2244,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[74]));}

/* f32vector? in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2238(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2238,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[72]));}

/* s32vector? in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2232,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[70]));}

/* u32vector? in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2226(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2226,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[68]));}

/* s16vector? in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2220(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2220,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[66]));}

/* u16vector? in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2214(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2214,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[64]));}

/* s8vector? in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2208(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2208,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[61]));}

/* u8vector? in k2198 in k2194 in k2190 in k2186 in k2182 in k2178 in k2174 in k2170 in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2202(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2202,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[59]));}

/* init in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2135(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2135,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2137,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp));}

/* f_2137 in init in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2137(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2137,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2141,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 471  length */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2139 */
static void C_ccall f_2141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2141,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2146,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2146(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k2139 */
static void C_fcall f_2146(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2146,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 475  ref */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t2);}}

/* k2158 in loop in k2139 */
static void C_ccall f_2160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2164,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-4.scm: 476  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2146(t4,t2,t3);}

/* k2162 in k2158 in loop in k2139 */
static void C_ccall f_2164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2164,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f64vector in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2129(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2129r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2129r(t0,t1,t2);}}

static void C_ccall f_2129r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 462  list->f64vector */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* f32vector in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2123(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2123r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2123r(t0,t1,t2);}}

static void C_ccall f_2123r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 458  list->f32vector */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* s32vector in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2117(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2117r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2117r(t0,t1,t2);}}

static void C_ccall f_2117r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 454  list->s32vector */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* u32vector in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2111r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2111r(t0,t1,t2);}}

static void C_ccall f_2111r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 450  list->u32vector */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* s16vector in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2105(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2105r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2105r(t0,t1,t2);}}

static void C_ccall f_2105r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 446  list->s16vector */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* u16vector in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2099(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2099r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2099r(t0,t1,t2);}}

static void C_ccall f_2099r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 442  list->u16vector */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* s8vector in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2093(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2093r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2093r(t0,t1,t2);}}

static void C_ccall f_2093r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 438  list->s8vector */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* u8vector in k2083 in k2079 in k2075 in k2071 in k2067 in k2063 in k2059 in k2055 in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2087(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2087r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2087r(t0,t1,t2);}}

static void C_ccall f_2087r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 434  list->u8vector */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* init in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_2020(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2020,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2022,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp));}

/* f_2022 in init in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_2022(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2022,3,t0,t1,t2);}
t3=(C_word)C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2029,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 412  make */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k2027 */
static void C_ccall f_2029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2029,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2034,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2034(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* do462 in k2027 */
static void C_fcall f_2034(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2034,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2041,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep((C_word)C_blockp(t2))?(C_word)C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm: 417  set */
t6=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[5],t3,(C_word)C_slot(t2,C_fix(0)));}
else{
/* srfi-4.scm: 418  ##sys#not-a-proper-list-error */
t6=*((C_word*)lf[75]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,((C_word*)t0)[2]);}}}

/* k2039 in do462 in k2027 */
static void C_ccall f_2041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[5])[1];
f_2034(t2,((C_word*)t0)[4],(C_word)C_slot(((C_word*)t0)[3],C_fix(1)),(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-f64vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1902(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_1902r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1902r(t0,t1,t2,t3);}}

static void C_ccall f_1902r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(15);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1950,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1955,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1960,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init419440 */
t8=t7;
f_1960(t8,t1);}
else{
t8=(C_word)C_u_i_car(t3);
t9=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?420438 */
t10=t6;
f_1955(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin421435 */
t12=t5;
f_1950(t12,t1,t8,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
/* body417423 */
t14=t4;
f_1904(t14,t1,t8,t10);}}}}

/* def-init419 in make-f64vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1960(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1960,NULL,2,t0,t1);}
/* def-ext?420438 */
t2=((C_word*)t0)[2];
f_1955(t2,t1,C_SCHEME_FALSE);}

/* def-ext?420 in make-f64vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1955(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1955,NULL,3,t0,t1,t2);}
/* def-fin421435 */
t3=((C_word*)t0)[2];
f_1950(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin421 in make-f64vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1950(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1950,NULL,4,t0,t1,t2,t3);}
/* body417423 */
t4=((C_word*)t0)[2];
f_1904(t4,t1,t2,t3);}

/* body417 in make-f64vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1904(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1904,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1949,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 391  alloc */
f_1063(t5,lf[73],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(3)),t3);}

/* k1947 in body417 in make-f64vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1949,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[74],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1911,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[62]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 392  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1911(2,t5,C_SCHEME_UNDEFINED);}}

/* k1909 in k1947 in body417 in make-f64vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1911,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(((C_word*)((C_word*)t0)[5])[1]))){
t4=t3;
f_1920(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1939,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 398  exact->inexact */
C_exact_to_inexact(3,0,t4,((C_word*)((C_word*)t0)[5])[1]);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1937 in k1909 in k1947 in body417 in make-f64vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_1920(t3,t2);}

/* k1918 in k1909 in k1947 in body417 in make-f64vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1920(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1920,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1925,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1925(t5,((C_word*)t0)[2],C_fix(0));}

/* do428 in k1918 in k1909 in k1947 in body417 in make-f64vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1925(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1925,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1932,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 401  ##sys#f64vector-set! */
t4=lf[23];
f_836(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)((C_word*)t0)[2])[1]);}}

/* k1930 in do428 in k1918 in k1909 in k1947 in body417 in make-f64vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1925(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-f32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1784(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_1784r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1784r(t0,t1,t2,t3);}}

static void C_ccall f_1784r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(15);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1832,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1837,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1842,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init383404 */
t8=t7;
f_1842(t8,t1);}
else{
t8=(C_word)C_u_i_car(t3);
t9=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?384402 */
t10=t6;
f_1837(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin385399 */
t12=t5;
f_1832(t12,t1,t8,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
/* body381387 */
t14=t4;
f_1786(t14,t1,t8,t10);}}}}

/* def-init383 in make-f32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1842(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1842,NULL,2,t0,t1);}
/* def-ext?384402 */
t2=((C_word*)t0)[2];
f_1837(t2,t1,C_SCHEME_FALSE);}

/* def-ext?384 in make-f32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1837(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1837,NULL,3,t0,t1,t2);}
/* def-fin385399 */
t3=((C_word*)t0)[2];
f_1832(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin385 in make-f32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1832(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1832,NULL,4,t0,t1,t2,t3);}
/* body381387 */
t4=((C_word*)t0)[2];
f_1786(t4,t1,t2,t3);}

/* body381 in make-f32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1786(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1786,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1831,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 376  alloc */
f_1063(t5,lf[71],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(2)),t3);}

/* k1829 in body381 in make-f32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1831,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[72],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1793,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[62]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 377  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1793(2,t5,C_SCHEME_UNDEFINED);}}

/* k1791 in k1829 in body381 in make-f32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1793,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(((C_word*)((C_word*)t0)[5])[1]))){
t4=t3;
f_1802(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1821,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 383  exact->inexact */
C_exact_to_inexact(3,0,t4,((C_word*)((C_word*)t0)[5])[1]);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1819 in k1791 in k1829 in body381 in make-f32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_1802(t3,t2);}

/* k1800 in k1791 in k1829 in body381 in make-f32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1802(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1802,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1807,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1807(t5,((C_word*)t0)[2],C_fix(0));}

/* do392 in k1800 in k1791 in k1829 in body381 in make-f32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1807(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1807,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1814,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 386  ##sys#f32vector-set! */
t4=lf[22];
f_833(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)((C_word*)t0)[2])[1]);}}

/* k1812 in do392 in k1800 in k1791 in k1829 in body381 in make-f32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1807(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-s32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1673(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_1673r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1673r(t0,t1,t2,t3);}}

static void C_ccall f_1673r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(15);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1714,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1719,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1724,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init348368 */
t8=t7;
f_1724(t8,t1);}
else{
t8=(C_word)C_u_i_car(t3);
t9=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?349366 */
t10=t6;
f_1719(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin350363 */
t12=t5;
f_1714(t12,t1,t8,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
/* body346352 */
t14=t4;
f_1675(t14,t1,t8,t10);}}}}

/* def-init348 in make-s32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1724(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1724,NULL,2,t0,t1);}
/* def-ext?349366 */
t2=((C_word*)t0)[2];
f_1719(t2,t1,C_SCHEME_FALSE);}

/* def-ext?349 in make-s32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1719(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1719,NULL,3,t0,t1,t2);}
/* def-fin350363 */
t3=((C_word*)t0)[2];
f_1714(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin350 in make-s32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1714(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1714,NULL,4,t0,t1,t2,t3);}
/* body346352 */
t4=((C_word*)t0)[2];
f_1675(t4,t1,t2,t3);}

/* body346 in make-s32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1675(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1675,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1713,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 363  alloc */
f_1063(t4,lf[69],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(2)),t3);}

/* k1711 in body346 in make-s32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1713,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[70],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1682,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[62]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 364  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1682(2,t5,C_SCHEME_UNDEFINED);}}

/* k1680 in k1711 in body346 in make-s32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1682,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1693,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1693(t3,C_fix(0)));}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* do357 in k1680 in k1711 in body346 in make-s32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static C_word C_fcall f_1693(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=f_830(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t4=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* make-u32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1562(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_1562r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1562r(t0,t1,t2,t3);}}

static void C_ccall f_1562r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(15);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1564,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1603,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1608,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1613,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init313333 */
t8=t7;
f_1613(t8,t1);}
else{
t8=(C_word)C_u_i_car(t3);
t9=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?314331 */
t10=t6;
f_1608(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin315328 */
t12=t5;
f_1603(t12,t1,t8,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
/* body311317 */
t14=t4;
f_1564(t14,t1,t8,t10);}}}}

/* def-init313 in make-u32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1613(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1613,NULL,2,t0,t1);}
/* def-ext?314331 */
t2=((C_word*)t0)[2];
f_1608(t2,t1,C_SCHEME_FALSE);}

/* def-ext?314 in make-u32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1608(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1608,NULL,3,t0,t1,t2);}
/* def-fin315328 */
t3=((C_word*)t0)[2];
f_1603(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin315 in make-u32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1603(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1603,NULL,4,t0,t1,t2,t3);}
/* body311317 */
t4=((C_word*)t0)[2];
f_1564(t4,t1,t2,t3);}

/* body311 in make-u32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1564(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1564,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1602,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 350  alloc */
f_1063(t4,lf[67],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(2)),t3);}

/* k1600 in body311 in make-u32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1602,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[68],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1571,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[62]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 351  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1571(2,t5,C_SCHEME_UNDEFINED);}}

/* k1569 in k1600 in body311 in make-u32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1571,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1582,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1582(t3,C_fix(0)));}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* do322 in k1569 in k1600 in body311 in make-u32vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static C_word C_fcall f_1582(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=f_827(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t4=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* make-s16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1448(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_1448r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1448r(t0,t1,t2,t3);}}

static void C_ccall f_1448r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(15);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1492,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1497,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init277298 */
t8=t7;
f_1502(t8,t1);}
else{
t8=(C_word)C_u_i_car(t3);
t9=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?278296 */
t10=t6;
f_1497(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin279293 */
t12=t5;
f_1492(t12,t1,t8,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
/* body275281 */
t14=t4;
f_1450(t14,t1,t8,t10);}}}}

/* def-init277 in make-s16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1502(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1502,NULL,2,t0,t1);}
/* def-ext?278296 */
t2=((C_word*)t0)[2];
f_1497(t2,t1,C_SCHEME_FALSE);}

/* def-ext?278 in make-s16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1497(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1497,NULL,3,t0,t1,t2);}
/* def-fin279293 */
t3=((C_word*)t0)[2];
f_1492(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin279 in make-s16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1492(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1492,NULL,4,t0,t1,t2,t3);}
/* body275281 */
t4=((C_word*)t0)[2];
f_1450(t4,t1,t2,t3);}

/* body275 in make-s16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1450(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1450,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1491,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 337  alloc */
f_1063(t4,lf[65],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(1)),t3);}

/* k1489 in body275 in make-s16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1491,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[66],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1457,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[62]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 338  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1457(2,t5,C_SCHEME_UNDEFINED);}}

/* k1455 in k1489 in body275 in make-s16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1457,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 342  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(-32768),C_fix(32767),lf[65]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1464 in k1455 in k1489 in body275 in make-s16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1466,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1471,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1471(t5,((C_word*)t0)[2],C_fix(0));}

/* do286 in k1464 in k1455 in k1489 in body275 in make-s16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1471(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1471,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1478,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 345  ##sys#s16vector-set! */
t4=lf[19];
f_824(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* k1476 in do286 in k1464 in k1455 in k1489 in body275 in make-s16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1471(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-u16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1334(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_1334r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1334r(t0,t1,t2,t3);}}

static void C_ccall f_1334r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(15);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1378,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1383,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1388,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init241262 */
t8=t7;
f_1388(t8,t1);}
else{
t8=(C_word)C_u_i_car(t3);
t9=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?242260 */
t10=t6;
f_1383(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin243257 */
t12=t5;
f_1378(t12,t1,t8,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
/* body239245 */
t14=t4;
f_1336(t14,t1,t8,t10);}}}}

/* def-init241 in make-u16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1388(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1388,NULL,2,t0,t1);}
/* def-ext?242260 */
t2=((C_word*)t0)[2];
f_1383(t2,t1,C_SCHEME_FALSE);}

/* def-ext?242 in make-u16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1383(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1383,NULL,3,t0,t1,t2);}
/* def-fin243257 */
t3=((C_word*)t0)[2];
f_1378(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin243 in make-u16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1378(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1378,NULL,4,t0,t1,t2,t3);}
/* body239245 */
t4=((C_word*)t0)[2];
f_1336(t4,t1,t2,t3);}

/* body239 in make-u16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1336(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1336,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 324  alloc */
f_1063(t4,lf[63],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(1)),t3);}

/* k1375 in body239 in make-u16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1377,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[64],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1343,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[62]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 325  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1343(2,t5,C_SCHEME_UNDEFINED);}}

/* k1341 in k1375 in body239 in make-u16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1343,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 329  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(0),C_fix(65535),lf[63]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1350 in k1341 in k1375 in body239 in make-u16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1352,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1357,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1357(t5,((C_word*)t0)[2],C_fix(0));}

/* do250 in k1350 in k1341 in k1375 in body239 in make-u16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1357(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1357,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1364,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 332  ##sys#u16vector-set! */
t4=lf[18];
f_821(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* k1362 in do250 in k1350 in k1341 in k1375 in body239 in make-u16vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1357(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-s8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1220(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_1220r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1220r(t0,t1,t2,t3);}}

static void C_ccall f_1220r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(15);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1222,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1264,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1269,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1274,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init205226 */
t8=t7;
f_1274(t8,t1);}
else{
t8=(C_word)C_u_i_car(t3);
t9=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?206224 */
t10=t6;
f_1269(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin207221 */
t12=t5;
f_1264(t12,t1,t8,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
/* body203209 */
t14=t4;
f_1222(t14,t1,t8,t10);}}}}

/* def-init205 in make-s8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1274(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1274,NULL,2,t0,t1);}
/* def-ext?206224 */
t2=((C_word*)t0)[2];
f_1269(t2,t1,C_SCHEME_FALSE);}

/* def-ext?206 in make-s8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1269(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1269,NULL,3,t0,t1,t2);}
/* def-fin207221 */
t3=((C_word*)t0)[2];
f_1264(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin207 in make-s8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1264(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1264,NULL,4,t0,t1,t2,t3);}
/* body203209 */
t4=((C_word*)t0)[2];
f_1222(t4,t1,t2,t3);}

/* body203 in make-s8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1222(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1222,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 311  alloc */
f_1063(t4,lf[60],((C_word*)t0)[5],t3);}

/* k1261 in body203 in make-s8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1263,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[61],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1229,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[62]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 312  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1229(2,t5,C_SCHEME_UNDEFINED);}}

/* k1227 in k1261 in body203 in make-s8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1229,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 316  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(-128),C_fix(127),lf[60]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1236 in k1227 in k1261 in body203 in make-s8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1238,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1243,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1243(t5,((C_word*)t0)[2],C_fix(0));}

/* do214 in k1236 in k1227 in k1261 in body203 in make-s8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1243(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1243,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1250,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 319  ##sys#s8vector-set! */
t4=lf[17];
f_818(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* k1248 in do214 in k1236 in k1227 in k1261 in body203 in make-s8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1243(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-u8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1106(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_1106r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1106r(t0,t1,t2,t3);}}

static void C_ccall f_1106r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(15);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1108,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1150,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1155,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1160,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init168189 */
t8=t7;
f_1160(t8,t1);}
else{
t8=(C_word)C_u_i_car(t3);
t9=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?169187 */
t10=t6;
f_1155(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin?170184 */
t12=t5;
f_1150(t12,t1,t8,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
/* body166172 */
t14=t4;
f_1108(t14,t1,t8,t10,t12);}}}}

/* def-init168 in make-u8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1160(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1160,NULL,2,t0,t1);}
/* def-ext?169187 */
t2=((C_word*)t0)[2];
f_1155(t2,t1,C_SCHEME_FALSE);}

/* def-ext?169 in make-u8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1155(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1155,NULL,3,t0,t1,t2);}
/* def-fin?170184 */
t3=((C_word*)t0)[2];
f_1150(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin?170 in make-u8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1150(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1150,NULL,4,t0,t1,t2,t3);}
/* body166172 */
t4=((C_word*)t0)[2];
f_1108(t4,t1,t2,t3,C_SCHEME_TRUE);}

/* body166 in make-u8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1108(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1108,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1149,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* srfi-4.scm: 298  alloc */
f_1063(t5,lf[58],((C_word*)t0)[5],t3);}

/* k1147 in body166 in make-u8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1149,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[59],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1115,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 299  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1115(2,t5,C_SCHEME_UNDEFINED);}}

/* k1113 in k1147 in body166 in make-u8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1115,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 303  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(0),C_fix(255),lf[58]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1122 in k1113 in k1147 in body166 in make-u8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1124,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1129,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1129(t5,((C_word*)t0)[2],C_fix(0));}

/* do177 in k1122 in k1113 in k1147 in body166 in make-u8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1129(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1129,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1136,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 306  ##sys#u8vector-set! */
t4=lf[16];
f_815(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* k1134 in do177 in k1122 in k1113 in k1147 in body166 in make-u8vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1129(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* release-number-vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1081,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1088,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_structurep(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=t3;
f_1088(t5,(C_word)C_u_i_memq(t4,lf[57]));}
else{
t4=t3;
f_1088(t4,C_SCHEME_FALSE);}}

/* k1086 in release-number-vector in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1088(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-4.scm: 292  ext-free */
t2=((C_word*)t0)[4];
f_1061(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-4.scm: 293  ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[55],lf[56],((C_word*)t0)[2]);}}

/* alloc in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_1063(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1063,NULL,4,t1,t2,t3,t4);}
if(C_truep(t4)){
t5=t3;
t6=(C_word)stub141(C_SCHEME_UNDEFINED,t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* srfi-4.scm: 283  ##sys#error */
t7=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t1,t2,lf[53],t3);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1079,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 284  ##sys#allocate-vector */
t6=*((C_word*)lf[54]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}}

/* k1077 in alloc in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_string_to_bytevector(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* ext-free in k1056 in k1052 in k1048 in k1044 in k1040 in k1036 in k1032 in k1028 in k1024 in k1020 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_1061(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1061,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub146(C_SCHEME_UNDEFINED,t2));}

/* f_923 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_923(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_923,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_927,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 201  length */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k925 */
static void C_ccall f_927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fits_in_int_p(((C_word*)t0)[2]))){
t3=t2;
f_930(2,t3,C_SCHEME_UNDEFINED);}
else{
/* srfi-4.scm: 203  ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[40],lf[41],((C_word*)t0)[2]);}}

/* k928 in k925 */
static void C_ccall f_930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 205  upd */
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_830(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_947 in k1008 in k1004 in k1000 in k996 in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_947(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_947,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_951,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 209  length */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k949 */
static void C_ccall f_951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_negativep(((C_word*)t0)[2]))){
/* srfi-4.scm: 211  ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[37],lf[38],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_fits_in_unsigned_int_p(((C_word*)t0)[2]))){
t3=t2;
f_954(2,t3,C_SCHEME_UNDEFINED);}
else{
/* srfi-4.scm: 213  ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[37],lf[39],((C_word*)t0)[2]);}}}

/* k952 in k949 */
static void C_ccall f_954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 215  upd */
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_827(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* setf in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_978(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_978,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_980,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp));}

/* f_980 in setf in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_980,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_984,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 219  length */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k982 */
static void C_ccall f_984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_991,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(((C_word*)t0)[2]))){
t3=t2;
f_991(2,t3,((C_word*)t0)[2]);}
else{
/* srfi-4.scm: 224  exact->inexact */
C_exact_to_inexact(3,0,t2,((C_word*)t0)[2]);}}

/* k989 in k982 */
static void C_ccall f_991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 222  upd */
t2=((C_word*)t0)[5];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* setu in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_901(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_901,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_903,a[2]=t2,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp));}

/* f_903 in setu in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_903,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_907,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 192  length */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k905 */
static void C_ccall f_907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_910,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[3],C_fix(0)))){
/* srfi-4.scm: 195  ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],lf[32],((C_word*)t0)[3]);}
else{
t3=t2;
f_910(2,t3,C_SCHEME_UNDEFINED);}}

/* k908 in k905 */
static void C_ccall f_910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 197  upd */
t2=((C_word*)t0)[6];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_890(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_890,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_892,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp));}

/* f_892 in set in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_892(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_892,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_896,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 185  length */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k894 */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 188  upd */
t2=((C_word*)t0)[6];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* get in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_fcall f_879(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_879,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_881,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp));}

/* f_881 in get in k875 in k871 in k867 in k863 in k859 in k855 in k851 in k847 */
static void C_ccall f_881(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_881,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_885,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 179  length */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k883 */
static void C_ccall f_885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 181  acc */
t2=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* len */
static void C_fcall f_839(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_839,NULL,2,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_841,a[2]=t2,tmp=(C_word)a,a+=3,tmp));}

/* f_841 in len */
static void C_ccall f_841(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_841,3,t0,t1,t2);}
t3=(C_word)C_block_size((C_word)C_slot(t2,C_fix(1)));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(((C_word*)t0)[2])?(C_word)C_fixnum_shift_right(t3,((C_word*)t0)[2]):t3));}

/* ##sys#f64vector-set! */
static void C_ccall f_836(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_836,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_f64poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#f32vector-set! */
static void C_ccall f_833(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_833,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_f32poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#s32vector-set! */
static C_word C_fcall f_830(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
return((C_word)C_s32poke((C_word)C_slot(t1,C_fix(1)),t2,t3));}

/* ##sys#u32vector-set! */
static C_word C_fcall f_827(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
return((C_word)C_u32poke((C_word)C_slot(t1,C_fix(1)),t2,t3));}

/* ##sys#s16vector-set! */
static void C_ccall f_824(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_824,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_s16poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#u16vector-set! */
static void C_ccall f_821(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_821,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u16poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#s8vector-set! */
static void C_ccall f_818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_818,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_s8poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#u8vector-set! */
static void C_ccall f_815(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_815,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u8poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#f64vector-ref */
static void C_ccall f_809(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_809,4,t0,t1,t2,t3);}
t4=(C_word)C_f64peek((C_word)C_slot(t2,C_fix(1)),t3);
/* srfi-4.scm: 139  ##sys#cons-flonum */
t5=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* ##sys#f32vector-ref */
static void C_ccall f_803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_803,4,t0,t1,t2,t3);}
t4=(C_word)C_f32peek((C_word)C_slot(t2,C_fix(1)),t3);
/* srfi-4.scm: 135  ##sys#cons-flonum */
t5=*((C_word*)lf[14]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* ##sys#s32vector-ref */
static void C_ccall f_800(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_800,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_s32peek(&a,2,(C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#u32vector-ref */
static void C_ccall f_797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_797,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_u32peek(&a,2,(C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#s16vector-ref */
static void C_ccall f_794(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_794,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_s16peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#u16vector-ref */
static void C_ccall f_791(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_791,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u16peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#s8vector-ref */
static void C_ccall f_788(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_788,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_s8peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#u8vector-ref */
static void C_ccall f_785(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_785,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u8peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#check-inexact-interval */
static void C_ccall f_767(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_767,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_lessp(t2,t3);
t7=(C_truep(t6)?t6:(C_word)C_i_greaterp(t2,t4));
if(C_truep(t7)){
/* srfi-4.scm: 121  ##sys#error */
t8=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t1,lf[6],t2,t3,t4);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}}

/* ##sys#check-exact-interval */
static void C_ccall f_755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_755,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_fixnum_lessp(t2,t3);
t7=(C_truep(t6)?t6:(C_word)C_fixnum_greaterp(t2,t4));
if(C_truep(t7)){
/* srfi-4.scm: 115  ##sys#error */
t8=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t8+1)))(7,t8,t1,t5,lf[4],t2,t3,t4);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[261] = {
{"toplevelsrfi-4.scm",(void*)C_srfi_4_toplevel},
{"f_849srfi-4.scm",(void*)f_849},
{"f_853srfi-4.scm",(void*)f_853},
{"f_857srfi-4.scm",(void*)f_857},
{"f_861srfi-4.scm",(void*)f_861},
{"f_865srfi-4.scm",(void*)f_865},
{"f_869srfi-4.scm",(void*)f_869},
{"f_873srfi-4.scm",(void*)f_873},
{"f_877srfi-4.scm",(void*)f_877},
{"f_998srfi-4.scm",(void*)f_998},
{"f_1002srfi-4.scm",(void*)f_1002},
{"f_1006srfi-4.scm",(void*)f_1006},
{"f_1010srfi-4.scm",(void*)f_1010},
{"f_1022srfi-4.scm",(void*)f_1022},
{"f_1026srfi-4.scm",(void*)f_1026},
{"f_2890srfi-4.scm",(void*)f_2890},
{"f_1030srfi-4.scm",(void*)f_1030},
{"f_2886srfi-4.scm",(void*)f_2886},
{"f_1034srfi-4.scm",(void*)f_1034},
{"f_2882srfi-4.scm",(void*)f_2882},
{"f_1038srfi-4.scm",(void*)f_1038},
{"f_2878srfi-4.scm",(void*)f_2878},
{"f_1042srfi-4.scm",(void*)f_1042},
{"f_2874srfi-4.scm",(void*)f_2874},
{"f_1046srfi-4.scm",(void*)f_1046},
{"f_2870srfi-4.scm",(void*)f_2870},
{"f_1050srfi-4.scm",(void*)f_1050},
{"f_2866srfi-4.scm",(void*)f_2866},
{"f_1054srfi-4.scm",(void*)f_1054},
{"f_2862srfi-4.scm",(void*)f_2862},
{"f_1058srfi-4.scm",(void*)f_1058},
{"f_2057srfi-4.scm",(void*)f_2057},
{"f_2061srfi-4.scm",(void*)f_2061},
{"f_2065srfi-4.scm",(void*)f_2065},
{"f_2069srfi-4.scm",(void*)f_2069},
{"f_2073srfi-4.scm",(void*)f_2073},
{"f_2077srfi-4.scm",(void*)f_2077},
{"f_2081srfi-4.scm",(void*)f_2081},
{"f_2085srfi-4.scm",(void*)f_2085},
{"f_2172srfi-4.scm",(void*)f_2172},
{"f_2176srfi-4.scm",(void*)f_2176},
{"f_2180srfi-4.scm",(void*)f_2180},
{"f_2184srfi-4.scm",(void*)f_2184},
{"f_2188srfi-4.scm",(void*)f_2188},
{"f_2192srfi-4.scm",(void*)f_2192},
{"f_2196srfi-4.scm",(void*)f_2196},
{"f_2200srfi-4.scm",(void*)f_2200},
{"f_2280srfi-4.scm",(void*)f_2280},
{"f_2284srfi-4.scm",(void*)f_2284},
{"f_2288srfi-4.scm",(void*)f_2288},
{"f_2292srfi-4.scm",(void*)f_2292},
{"f_2296srfi-4.scm",(void*)f_2296},
{"f_2300srfi-4.scm",(void*)f_2300},
{"f_2304srfi-4.scm",(void*)f_2304},
{"f_2308srfi-4.scm",(void*)f_2308},
{"f_2312srfi-4.scm",(void*)f_2312},
{"f_2316srfi-4.scm",(void*)f_2316},
{"f_2320srfi-4.scm",(void*)f_2320},
{"f_2324srfi-4.scm",(void*)f_2324},
{"f_2328srfi-4.scm",(void*)f_2328},
{"f_2332srfi-4.scm",(void*)f_2332},
{"f_2336srfi-4.scm",(void*)f_2336},
{"f_2340srfi-4.scm",(void*)f_2340},
{"f_2858srfi-4.scm",(void*)f_2858},
{"f_2735srfi-4.scm",(void*)f_2735},
{"f_2812srfi-4.scm",(void*)f_2812},
{"f_2807srfi-4.scm",(void*)f_2807},
{"f_2737srfi-4.scm",(void*)f_2737},
{"f_2763srfi-4.scm",(void*)f_2763},
{"f_2768srfi-4.scm",(void*)f_2768},
{"f_2772srfi-4.scm",(void*)f_2772},
{"f_2778srfi-4.scm",(void*)f_2778},
{"f_2790srfi-4.scm",(void*)f_2790},
{"f_2744srfi-4.scm",(void*)f_2744},
{"f_2747srfi-4.scm",(void*)f_2747},
{"f_2760srfi-4.scm",(void*)f_2760},
{"f_2754srfi-4.scm",(void*)f_2754},
{"f_2650srfi-4.scm",(void*)f_2650},
{"f_2690srfi-4.scm",(void*)f_2690},
{"f_2685srfi-4.scm",(void*)f_2685},
{"f_2652srfi-4.scm",(void*)f_2652},
{"f_2659srfi-4.scm",(void*)f_2659},
{"f_2543srfi-4.scm",(void*)f_2543},
{"f_2590srfi-4.scm",(void*)f_2590},
{"f_2585srfi-4.scm",(void*)f_2585},
{"f_2576srfi-4.scm",(void*)f_2576},
{"f_2545srfi-4.scm",(void*)f_2545},
{"f_2554srfi-4.scm",(void*)f_2554},
{"f_2564srfi-4.scm",(void*)f_2564},
{"f_2537srfi-4.scm",(void*)f_2537},
{"f_2531srfi-4.scm",(void*)f_2531},
{"f_2525srfi-4.scm",(void*)f_2525},
{"f_2519srfi-4.scm",(void*)f_2519},
{"f_2513srfi-4.scm",(void*)f_2513},
{"f_2507srfi-4.scm",(void*)f_2507},
{"f_2501srfi-4.scm",(void*)f_2501},
{"f_2495srfi-4.scm",(void*)f_2495},
{"f_2469srfi-4.scm",(void*)f_2469},
{"f_2482srfi-4.scm",(void*)f_2482},
{"f_2401srfi-4.scm",(void*)f_2401},
{"f_2411srfi-4.scm",(void*)f_2411},
{"f_2414srfi-4.scm",(void*)f_2414},
{"f_2421srfi-4.scm",(void*)f_2421},
{"f_2345srfi-4.scm",(void*)f_2345},
{"f_2355srfi-4.scm",(void*)f_2355},
{"f_2380srfi-4.scm",(void*)f_2380},
{"f_2255srfi-4.scm",(void*)f_2255},
{"f_2257srfi-4.scm",(void*)f_2257},
{"f_2250srfi-4.scm",(void*)f_2250},
{"f_2252srfi-4.scm",(void*)f_2252},
{"f_2244srfi-4.scm",(void*)f_2244},
{"f_2238srfi-4.scm",(void*)f_2238},
{"f_2232srfi-4.scm",(void*)f_2232},
{"f_2226srfi-4.scm",(void*)f_2226},
{"f_2220srfi-4.scm",(void*)f_2220},
{"f_2214srfi-4.scm",(void*)f_2214},
{"f_2208srfi-4.scm",(void*)f_2208},
{"f_2202srfi-4.scm",(void*)f_2202},
{"f_2135srfi-4.scm",(void*)f_2135},
{"f_2137srfi-4.scm",(void*)f_2137},
{"f_2141srfi-4.scm",(void*)f_2141},
{"f_2146srfi-4.scm",(void*)f_2146},
{"f_2160srfi-4.scm",(void*)f_2160},
{"f_2164srfi-4.scm",(void*)f_2164},
{"f_2129srfi-4.scm",(void*)f_2129},
{"f_2123srfi-4.scm",(void*)f_2123},
{"f_2117srfi-4.scm",(void*)f_2117},
{"f_2111srfi-4.scm",(void*)f_2111},
{"f_2105srfi-4.scm",(void*)f_2105},
{"f_2099srfi-4.scm",(void*)f_2099},
{"f_2093srfi-4.scm",(void*)f_2093},
{"f_2087srfi-4.scm",(void*)f_2087},
{"f_2020srfi-4.scm",(void*)f_2020},
{"f_2022srfi-4.scm",(void*)f_2022},
{"f_2029srfi-4.scm",(void*)f_2029},
{"f_2034srfi-4.scm",(void*)f_2034},
{"f_2041srfi-4.scm",(void*)f_2041},
{"f_1902srfi-4.scm",(void*)f_1902},
{"f_1960srfi-4.scm",(void*)f_1960},
{"f_1955srfi-4.scm",(void*)f_1955},
{"f_1950srfi-4.scm",(void*)f_1950},
{"f_1904srfi-4.scm",(void*)f_1904},
{"f_1949srfi-4.scm",(void*)f_1949},
{"f_1911srfi-4.scm",(void*)f_1911},
{"f_1939srfi-4.scm",(void*)f_1939},
{"f_1920srfi-4.scm",(void*)f_1920},
{"f_1925srfi-4.scm",(void*)f_1925},
{"f_1932srfi-4.scm",(void*)f_1932},
{"f_1784srfi-4.scm",(void*)f_1784},
{"f_1842srfi-4.scm",(void*)f_1842},
{"f_1837srfi-4.scm",(void*)f_1837},
{"f_1832srfi-4.scm",(void*)f_1832},
{"f_1786srfi-4.scm",(void*)f_1786},
{"f_1831srfi-4.scm",(void*)f_1831},
{"f_1793srfi-4.scm",(void*)f_1793},
{"f_1821srfi-4.scm",(void*)f_1821},
{"f_1802srfi-4.scm",(void*)f_1802},
{"f_1807srfi-4.scm",(void*)f_1807},
{"f_1814srfi-4.scm",(void*)f_1814},
{"f_1673srfi-4.scm",(void*)f_1673},
{"f_1724srfi-4.scm",(void*)f_1724},
{"f_1719srfi-4.scm",(void*)f_1719},
{"f_1714srfi-4.scm",(void*)f_1714},
{"f_1675srfi-4.scm",(void*)f_1675},
{"f_1713srfi-4.scm",(void*)f_1713},
{"f_1682srfi-4.scm",(void*)f_1682},
{"f_1693srfi-4.scm",(void*)f_1693},
{"f_1562srfi-4.scm",(void*)f_1562},
{"f_1613srfi-4.scm",(void*)f_1613},
{"f_1608srfi-4.scm",(void*)f_1608},
{"f_1603srfi-4.scm",(void*)f_1603},
{"f_1564srfi-4.scm",(void*)f_1564},
{"f_1602srfi-4.scm",(void*)f_1602},
{"f_1571srfi-4.scm",(void*)f_1571},
{"f_1582srfi-4.scm",(void*)f_1582},
{"f_1448srfi-4.scm",(void*)f_1448},
{"f_1502srfi-4.scm",(void*)f_1502},
{"f_1497srfi-4.scm",(void*)f_1497},
{"f_1492srfi-4.scm",(void*)f_1492},
{"f_1450srfi-4.scm",(void*)f_1450},
{"f_1491srfi-4.scm",(void*)f_1491},
{"f_1457srfi-4.scm",(void*)f_1457},
{"f_1466srfi-4.scm",(void*)f_1466},
{"f_1471srfi-4.scm",(void*)f_1471},
{"f_1478srfi-4.scm",(void*)f_1478},
{"f_1334srfi-4.scm",(void*)f_1334},
{"f_1388srfi-4.scm",(void*)f_1388},
{"f_1383srfi-4.scm",(void*)f_1383},
{"f_1378srfi-4.scm",(void*)f_1378},
{"f_1336srfi-4.scm",(void*)f_1336},
{"f_1377srfi-4.scm",(void*)f_1377},
{"f_1343srfi-4.scm",(void*)f_1343},
{"f_1352srfi-4.scm",(void*)f_1352},
{"f_1357srfi-4.scm",(void*)f_1357},
{"f_1364srfi-4.scm",(void*)f_1364},
{"f_1220srfi-4.scm",(void*)f_1220},
{"f_1274srfi-4.scm",(void*)f_1274},
{"f_1269srfi-4.scm",(void*)f_1269},
{"f_1264srfi-4.scm",(void*)f_1264},
{"f_1222srfi-4.scm",(void*)f_1222},
{"f_1263srfi-4.scm",(void*)f_1263},
{"f_1229srfi-4.scm",(void*)f_1229},
{"f_1238srfi-4.scm",(void*)f_1238},
{"f_1243srfi-4.scm",(void*)f_1243},
{"f_1250srfi-4.scm",(void*)f_1250},
{"f_1106srfi-4.scm",(void*)f_1106},
{"f_1160srfi-4.scm",(void*)f_1160},
{"f_1155srfi-4.scm",(void*)f_1155},
{"f_1150srfi-4.scm",(void*)f_1150},
{"f_1108srfi-4.scm",(void*)f_1108},
{"f_1149srfi-4.scm",(void*)f_1149},
{"f_1115srfi-4.scm",(void*)f_1115},
{"f_1124srfi-4.scm",(void*)f_1124},
{"f_1129srfi-4.scm",(void*)f_1129},
{"f_1136srfi-4.scm",(void*)f_1136},
{"f_1081srfi-4.scm",(void*)f_1081},
{"f_1088srfi-4.scm",(void*)f_1088},
{"f_1063srfi-4.scm",(void*)f_1063},
{"f_1079srfi-4.scm",(void*)f_1079},
{"f_1061srfi-4.scm",(void*)f_1061},
{"f_923srfi-4.scm",(void*)f_923},
{"f_927srfi-4.scm",(void*)f_927},
{"f_930srfi-4.scm",(void*)f_930},
{"f_947srfi-4.scm",(void*)f_947},
{"f_951srfi-4.scm",(void*)f_951},
{"f_954srfi-4.scm",(void*)f_954},
{"f_978srfi-4.scm",(void*)f_978},
{"f_980srfi-4.scm",(void*)f_980},
{"f_984srfi-4.scm",(void*)f_984},
{"f_991srfi-4.scm",(void*)f_991},
{"f_901srfi-4.scm",(void*)f_901},
{"f_903srfi-4.scm",(void*)f_903},
{"f_907srfi-4.scm",(void*)f_907},
{"f_910srfi-4.scm",(void*)f_910},
{"f_890srfi-4.scm",(void*)f_890},
{"f_892srfi-4.scm",(void*)f_892},
{"f_896srfi-4.scm",(void*)f_896},
{"f_879srfi-4.scm",(void*)f_879},
{"f_881srfi-4.scm",(void*)f_881},
{"f_885srfi-4.scm",(void*)f_885},
{"f_839srfi-4.scm",(void*)f_839},
{"f_841srfi-4.scm",(void*)f_841},
{"f_836srfi-4.scm",(void*)f_836},
{"f_833srfi-4.scm",(void*)f_833},
{"f_830srfi-4.scm",(void*)f_830},
{"f_827srfi-4.scm",(void*)f_827},
{"f_824srfi-4.scm",(void*)f_824},
{"f_821srfi-4.scm",(void*)f_821},
{"f_818srfi-4.scm",(void*)f_818},
{"f_815srfi-4.scm",(void*)f_815},
{"f_809srfi-4.scm",(void*)f_809},
{"f_803srfi-4.scm",(void*)f_803},
{"f_800srfi-4.scm",(void*)f_800},
{"f_797srfi-4.scm",(void*)f_797},
{"f_794srfi-4.scm",(void*)f_794},
{"f_791srfi-4.scm",(void*)f_791},
{"f_788srfi-4.scm",(void*)f_788},
{"f_785srfi-4.scm",(void*)f_785},
{"f_767srfi-4.scm",(void*)f_767},
{"f_755srfi-4.scm",(void*)f_755},
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
