/* Generated from srfi-4.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:15
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: srfi-4.scm -output-file srfi-4.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
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

static C_TLS C_word lf[291];


/* from ext-free in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub158(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub158(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word bv=(C_word )(C_a0);
C_free((void *)C_block_item(bv, 1));
C_return:
#undef return

return C_r;}

/* from k1135 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub153(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub153(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int bytes=(int )C_unfix(C_a0);
C_word *buf = (C_word *)C_malloc(bytes + sizeof(C_header));if(buf == NULL) return(C_SCHEME_FALSE);C_block_header(buf) = C_make_header(C_BYTEVECTOR_TYPE, bytes);return(buf);
C_return:
#undef return

return C_r;}

C_noret_decl(C_srfi_4_toplevel)
C_externexport void C_ccall C_srfi_4_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_899)
static void C_ccall f_899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_911)
static void C_ccall f_911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_915)
static void C_ccall f_915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_919)
static void C_ccall f_919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_923)
static void C_ccall f_923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1071)
static void C_ccall f_1071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1079)
static void C_ccall f_1079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1095)
static void C_ccall f_1095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1099)
static void C_ccall f_1099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1107)
static void C_ccall f_1107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1111)
static void C_ccall f_1111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1115)
static void C_ccall f_1115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1119)
static void C_ccall f_1119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1123)
static void C_ccall f_1123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2205)
static void C_ccall f_2205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2209)
static void C_ccall f_2209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2221)
static void C_ccall f_2221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word t0,C_word t1) C_noret;
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
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2463)
static void C_ccall f_2463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2479)
static void C_ccall f_2479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3002)
static void C_fcall f_3002(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2997)
static void C_fcall f_2997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2921)
static void C_fcall f_2921(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2958)
static void C_fcall f_2958(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2944)
static void C_fcall f_2944(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2871)
static void C_fcall f_2871(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2866)
static void C_fcall f_2866(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2821)
static void C_fcall f_2821(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2837)
static void C_fcall f_2837(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2756)
static void C_fcall f_2756(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2751)
static void C_fcall f_2751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2742)
static void C_fcall f_2742(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2705)
static void C_fcall f_2705(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2720)
static void C_fcall f_2720(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2685)
static void C_ccall f_2685(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2679)
static void C_ccall f_2679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2661)
static void C_ccall f_2661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2655)
static void C_ccall f_2655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2612)
static void C_fcall f_2612(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2398)
static void C_fcall f_2398(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2390)
static void C_fcall f_2390(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2392)
static void C_ccall f_2392(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2275)
static void C_fcall f_2275(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2281)
static void C_ccall f_2281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_fcall f_2286(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2263)
static void C_ccall f_2263(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2263)
static void C_ccall f_2263r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2157)
static void C_fcall f_2157(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2174)
static void C_fcall f_2174(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2094)
static void C_fcall f_2094(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2089)
static void C_fcall f_2089(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2084)
static void C_fcall f_2084(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2032)
static void C_fcall f_2032(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2083)
static void C_ccall f_2083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2054)
static void C_fcall f_2054(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_fcall f_2059(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1967)
static void C_fcall f_1967(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1962)
static void C_fcall f_1962(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1957)
static void C_fcall f_1957(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1905)
static void C_fcall f_1905(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1927)
static void C_fcall f_1927(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1932)
static void C_fcall f_1932(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1783)
static void C_ccall f_1783(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1783)
static void C_ccall f_1783r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1840)
static void C_fcall f_1840(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1835)
static void C_fcall f_1835(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1830)
static void C_fcall f_1830(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1785)
static void C_fcall f_1785(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1809)
static C_word C_fcall f_1809(C_word t0,C_word t1);
C_noret_decl(f_1663)
static void C_ccall f_1663(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1720)
static void C_fcall f_1720(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static void C_fcall f_1715(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1710)
static void C_fcall f_1710(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1665)
static void C_fcall f_1665(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1709)
static void C_ccall f_1709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1675)
static void C_ccall f_1675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1689)
static C_word C_fcall f_1689(C_word t0,C_word t1);
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1600)
static void C_fcall f_1600(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1595)
static void C_fcall f_1595(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1590)
static void C_fcall f_1590(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1545)
static void C_fcall f_1545(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1589)
static void C_ccall f_1589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1555)
static void C_ccall f_1555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1564)
static void C_ccall f_1564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1569)
static void C_fcall f_1569(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1423)
static void C_ccall f_1423(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1423)
static void C_ccall f_1423r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1480)
static void C_fcall f_1480(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1475)
static void C_fcall f_1475(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1470)
static void C_fcall f_1470(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1425)
static void C_fcall f_1425(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1469)
static void C_ccall f_1469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1449)
static void C_fcall f_1449(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1456)
static void C_ccall f_1456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1360)
static void C_fcall f_1360(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1355)
static void C_fcall f_1355(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1350)
static void C_fcall f_1350(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1305)
static void C_fcall f_1305(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1315)
static void C_ccall f_1315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1329)
static void C_fcall f_1329(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1336)
static void C_ccall f_1336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1183)
static void C_ccall f_1183(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1183)
static void C_ccall f_1183r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1240)
static void C_fcall f_1240(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1235)
static void C_fcall f_1235(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1230)
static void C_fcall f_1230(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1185)
static void C_fcall f_1185(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1195)
static void C_ccall f_1195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1209)
static void C_fcall f_1209(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1165)
static void C_fcall f_1165(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1140)
static void C_fcall f_1140(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1138)
static void C_ccall f_1138(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_988)
static void C_ccall f_988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_994)
static void C_ccall f_994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1015)
static void C_ccall f_1015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1018)
static void C_ccall f_1018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1021)
static void C_ccall f_1021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1045)
static void C_fcall f_1045(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1051)
static void C_ccall f_1051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1057)
static void C_ccall f_1057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1064)
static void C_ccall f_1064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_956)
static void C_fcall f_956(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_958)
static void C_ccall f_958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_968)
static void C_ccall f_968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_939)
static void C_fcall f_939(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_941)
static void C_ccall f_941(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_945)
static void C_ccall f_945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_925)
static void C_fcall f_925(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_934)
static void C_ccall f_934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_882)
static void C_fcall f_882(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_879)
static void C_ccall f_879(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_873)
static C_word C_fcall f_873(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_870)
static C_word C_fcall f_870(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_861)
static void C_ccall f_861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_858)
static void C_ccall f_858(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_846)
static void C_ccall f_846(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_840)
static void C_ccall f_840(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_837)
static void C_ccall f_837(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_834)
static void C_ccall f_834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_831)
static void C_ccall f_831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_828)
static void C_ccall f_828(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_792)
static void C_ccall f_792(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;

C_noret_decl(trf_3002)
static void C_fcall trf_3002(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3002(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3002(t0,t1);}

C_noret_decl(trf_2997)
static void C_fcall trf_2997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2997(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2997(t0,t1,t2);}

C_noret_decl(trf_2921)
static void C_fcall trf_2921(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2921(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2921(t0,t1,t2,t3);}

C_noret_decl(trf_2958)
static void C_fcall trf_2958(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2958(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2958(t0,t1,t2);}

C_noret_decl(trf_2944)
static void C_fcall trf_2944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2944(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2944(t0,t1);}

C_noret_decl(trf_2871)
static void C_fcall trf_2871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2871(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2871(t0,t1);}

C_noret_decl(trf_2866)
static void C_fcall trf_2866(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2866(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2866(t0,t1,t2);}

C_noret_decl(trf_2821)
static void C_fcall trf_2821(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2821(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2821(t0,t1,t2,t3);}

C_noret_decl(trf_2837)
static void C_fcall trf_2837(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2837(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2837(t0,t1);}

C_noret_decl(trf_2756)
static void C_fcall trf_2756(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2756(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2756(t0,t1);}

C_noret_decl(trf_2751)
static void C_fcall trf_2751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2751(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2751(t0,t1,t2);}

C_noret_decl(trf_2742)
static void C_fcall trf_2742(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2742(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2742(t0,t1,t2,t3);}

C_noret_decl(trf_2705)
static void C_fcall trf_2705(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2705(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2705(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2720)
static void C_fcall trf_2720(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2720(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2720(t0,t1,t2);}

C_noret_decl(trf_2612)
static void C_fcall trf_2612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2612(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2612(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2398)
static void C_fcall trf_2398(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2398(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2398(t0,t1,t2,t3);}

C_noret_decl(trf_2390)
static void C_fcall trf_2390(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2390(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2390(t0,t1,t2);}

C_noret_decl(trf_2275)
static void C_fcall trf_2275(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2275(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2275(t0,t1,t2);}

C_noret_decl(trf_2286)
static void C_fcall trf_2286(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2286(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2286(t0,t1,t2);}

C_noret_decl(trf_2157)
static void C_fcall trf_2157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2157(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2157(t0,t1,t2,t3);}

C_noret_decl(trf_2174)
static void C_fcall trf_2174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2174(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2174(t0,t1,t2,t3);}

C_noret_decl(trf_2094)
static void C_fcall trf_2094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2094(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2094(t0,t1);}

C_noret_decl(trf_2089)
static void C_fcall trf_2089(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2089(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2089(t0,t1,t2);}

C_noret_decl(trf_2084)
static void C_fcall trf_2084(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2084(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2084(t0,t1,t2,t3);}

C_noret_decl(trf_2032)
static void C_fcall trf_2032(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2032(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2032(t0,t1,t2,t3);}

C_noret_decl(trf_2054)
static void C_fcall trf_2054(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2054(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2054(t0,t1);}

C_noret_decl(trf_2059)
static void C_fcall trf_2059(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2059(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2059(t0,t1,t2);}

C_noret_decl(trf_1967)
static void C_fcall trf_1967(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1967(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1967(t0,t1);}

C_noret_decl(trf_1962)
static void C_fcall trf_1962(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1962(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1962(t0,t1,t2);}

C_noret_decl(trf_1957)
static void C_fcall trf_1957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1957(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1957(t0,t1,t2,t3);}

C_noret_decl(trf_1905)
static void C_fcall trf_1905(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1905(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1905(t0,t1,t2,t3);}

C_noret_decl(trf_1927)
static void C_fcall trf_1927(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1927(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1927(t0,t1);}

C_noret_decl(trf_1932)
static void C_fcall trf_1932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1932(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1932(t0,t1,t2);}

C_noret_decl(trf_1840)
static void C_fcall trf_1840(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1840(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1840(t0,t1);}

C_noret_decl(trf_1835)
static void C_fcall trf_1835(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1835(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1835(t0,t1,t2);}

C_noret_decl(trf_1830)
static void C_fcall trf_1830(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1830(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1830(t0,t1,t2,t3);}

C_noret_decl(trf_1785)
static void C_fcall trf_1785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1785(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1785(t0,t1,t2,t3);}

C_noret_decl(trf_1720)
static void C_fcall trf_1720(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1720(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1720(t0,t1);}

C_noret_decl(trf_1715)
static void C_fcall trf_1715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1715(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1715(t0,t1,t2);}

C_noret_decl(trf_1710)
static void C_fcall trf_1710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1710(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1710(t0,t1,t2,t3);}

C_noret_decl(trf_1665)
static void C_fcall trf_1665(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1665(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1665(t0,t1,t2,t3);}

C_noret_decl(trf_1600)
static void C_fcall trf_1600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1600(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1600(t0,t1);}

C_noret_decl(trf_1595)
static void C_fcall trf_1595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1595(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1595(t0,t1,t2);}

C_noret_decl(trf_1590)
static void C_fcall trf_1590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1590(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1590(t0,t1,t2,t3);}

C_noret_decl(trf_1545)
static void C_fcall trf_1545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1545(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1545(t0,t1,t2,t3);}

C_noret_decl(trf_1569)
static void C_fcall trf_1569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1569(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1569(t0,t1,t2);}

C_noret_decl(trf_1480)
static void C_fcall trf_1480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1480(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1480(t0,t1);}

C_noret_decl(trf_1475)
static void C_fcall trf_1475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1475(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1475(t0,t1,t2);}

C_noret_decl(trf_1470)
static void C_fcall trf_1470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1470(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1470(t0,t1,t2,t3);}

C_noret_decl(trf_1425)
static void C_fcall trf_1425(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1425(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1425(t0,t1,t2,t3);}

C_noret_decl(trf_1449)
static void C_fcall trf_1449(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1449(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1449(t0,t1,t2);}

C_noret_decl(trf_1360)
static void C_fcall trf_1360(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1360(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1360(t0,t1);}

C_noret_decl(trf_1355)
static void C_fcall trf_1355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1355(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1355(t0,t1,t2);}

C_noret_decl(trf_1350)
static void C_fcall trf_1350(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1350(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1350(t0,t1,t2,t3);}

C_noret_decl(trf_1305)
static void C_fcall trf_1305(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1305(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1305(t0,t1,t2,t3);}

C_noret_decl(trf_1329)
static void C_fcall trf_1329(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1329(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1329(t0,t1,t2);}

C_noret_decl(trf_1240)
static void C_fcall trf_1240(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1240(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1240(t0,t1);}

C_noret_decl(trf_1235)
static void C_fcall trf_1235(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1235(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1235(t0,t1,t2);}

C_noret_decl(trf_1230)
static void C_fcall trf_1230(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1230(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1230(t0,t1,t2,t3);}

C_noret_decl(trf_1185)
static void C_fcall trf_1185(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1185(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1185(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1209)
static void C_fcall trf_1209(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1209(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1209(t0,t1,t2);}

C_noret_decl(trf_1165)
static void C_fcall trf_1165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1165(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1165(t0,t1);}

C_noret_decl(trf_1140)
static void C_fcall trf_1140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1140(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1140(t0,t1,t2,t3);}

C_noret_decl(trf_1045)
static void C_fcall trf_1045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1045(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1045(t0,t1,t2,t3);}

C_noret_decl(trf_956)
static void C_fcall trf_956(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_956(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_956(t0,t1,t2,t3);}

C_noret_decl(trf_939)
static void C_fcall trf_939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_939(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_939(t0,t1,t2,t3);}

C_noret_decl(trf_925)
static void C_fcall trf_925(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_925(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_925(t0,t1,t2,t3);}

C_noret_decl(trf_882)
static void C_fcall trf_882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_882(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_882(t0,t1,t2,t3);}

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
C_check_nursery_minimum(61);
if(!C_demand(61)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1374)){
C_save(t1);
C_rereclaim2(1374*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(61);
C_initialize_lf(lf,291);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],24,"\003syscheck-exact-interval");
lf[3]=C_h_intern(&lf[3],9,"\003syserror");
lf[4]=C_static_string(C_heaptop,38,"numeric value is not in expected range");
lf[5]=C_static_lambda_info(C_heaptop,46,"(##sys#check-exact-interval n0 from1 to2 loc3)");
lf[6]=C_h_intern(&lf[6],26,"\003syscheck-inexact-interval");
lf[7]=C_static_string(C_heaptop,38,"numeric value is not in expected range");
lf[8]=C_static_lambda_info(C_heaptop,49,"(##sys#check-inexact-interval n7 from8 to9 loc10)");
lf[10]=C_static_lambda_info(C_heaptop,28,"(##sys#u8vector-ref v14 i15)");
lf[12]=C_static_lambda_info(C_heaptop,28,"(##sys#s8vector-ref v16 i17)");
lf[14]=C_static_lambda_info(C_heaptop,29,"(##sys#u16vector-ref v18 i19)");
lf[16]=C_static_lambda_info(C_heaptop,29,"(##sys#s16vector-ref v20 i21)");
lf[18]=C_static_lambda_info(C_heaptop,29,"(##sys#u32vector-ref v22 i23)");
lf[20]=C_static_lambda_info(C_heaptop,29,"(##sys#s32vector-ref v24 i25)");
lf[22]=C_h_intern(&lf[22],15,"\003syscons-flonum");
lf[23]=C_static_lambda_info(C_heaptop,29,"(##sys#f32vector-ref v26 i27)");
lf[25]=C_static_lambda_info(C_heaptop,29,"(##sys#f64vector-ref v29 i30)");
lf[27]=C_static_lambda_info(C_heaptop,33,"(##sys#u8vector-set! v32 i33 x34)");
lf[29]=C_static_lambda_info(C_heaptop,33,"(##sys#s8vector-set! v35 i36 x37)");
lf[31]=C_static_lambda_info(C_heaptop,34,"(##sys#u16vector-set! v38 i39 x40)");
lf[33]=C_static_lambda_info(C_heaptop,34,"(##sys#s16vector-set! v41 i42 x43)");
lf[35]=C_static_lambda_info(C_heaptop,30,"(##sys#u32vector-set! i45 x46)");
lf[37]=C_static_lambda_info(C_heaptop,30,"(##sys#s32vector-set! i48 x49)");
lf[39]=C_static_lambda_info(C_heaptop,34,"(##sys#f32vector-set! v50 i51 x52)");
lf[41]=C_static_lambda_info(C_heaptop,34,"(##sys#f64vector-set! v53 i54 x55)");
lf[42]=C_static_lambda_info(C_heaptop,11,"(f_884 v60)");
lf[43]=C_static_lambda_info(C_heaptop,25,"(len tag57 shift58 loc59)");
lf[44]=C_h_intern(&lf[44],15,"u8vector-length");
lf[45]=C_h_intern(&lf[45],15,"s8vector-length");
lf[46]=C_h_intern(&lf[46],16,"u16vector-length");
lf[47]=C_h_intern(&lf[47],16,"s16vector-length");
lf[48]=C_h_intern(&lf[48],16,"u32vector-length");
lf[49]=C_h_intern(&lf[49],16,"s32vector-length");
lf[50]=C_h_intern(&lf[50],16,"f32vector-length");
lf[51]=C_h_intern(&lf[51],16,"f64vector-length");
lf[52]=C_h_intern(&lf[52],15,"\003syscheck-range");
lf[53]=C_static_lambda_info(C_heaptop,15,"(f_927 v80 i81)");
lf[54]=C_static_lambda_info(C_heaptop,26,"(get length77 acc78 loc79)");
lf[55]=C_static_lambda_info(C_heaptop,19,"(f_941 v87 i88 x89)");
lf[56]=C_static_lambda_info(C_heaptop,26,"(set length84 upd85 loc86)");
lf[57]=C_static_string(C_heaptop,28,"argument may not be negative");
lf[58]=C_static_lambda_info(C_heaptop,19,"(f_958 v96 i97 x98)");
lf[59]=C_static_lambda_info(C_heaptop,27,"(setu length93 upd94 loc95)");
lf[60]=C_static_lambda_info(C_heaptop,23,"(f_1047 v124 i125 x126)");
lf[61]=C_static_lambda_info(C_heaptop,30,"(setf length121 upd122 loc123)");
lf[62]=C_h_intern(&lf[62],13,"u8vector-set!");
lf[63]=C_h_intern(&lf[63],13,"s8vector-set!");
lf[64]=C_h_intern(&lf[64],14,"u16vector-set!");
lf[65]=C_h_intern(&lf[65],14,"s16vector-set!");
lf[66]=C_h_intern(&lf[66],14,"u32vector-set!");
lf[67]=C_static_string(C_heaptop,28,"argument may not be negative");
lf[68]=C_static_string(C_heaptop,30,"argument exceeds integer range");
lf[69]=C_static_lambda_info(C_heaptop,23,"(f_1011 v115 i116 x117)");
lf[70]=C_h_intern(&lf[70],14,"s32vector-set!");
lf[71]=C_static_string(C_heaptop,30,"argument exceeds integer range");
lf[72]=C_static_lambda_info(C_heaptop,22,"(f_984 v106 i107 x108)");
lf[73]=C_h_intern(&lf[73],14,"f32vector-set!");
lf[74]=C_h_intern(&lf[74],14,"f64vector-set!");
lf[75]=C_h_intern(&lf[75],12,"u8vector-ref");
lf[76]=C_h_intern(&lf[76],12,"s8vector-ref");
lf[77]=C_h_intern(&lf[77],13,"u16vector-ref");
lf[78]=C_h_intern(&lf[78],13,"s16vector-ref");
lf[79]=C_h_intern(&lf[79],13,"u32vector-ref");
lf[80]=C_h_intern(&lf[80],13,"s32vector-ref");
lf[81]=C_h_intern(&lf[81],13,"f32vector-ref");
lf[82]=C_h_intern(&lf[82],13,"f64vector-ref");
lf[83]=C_static_lambda_info(C_heaptop,18,"(ext-free a157160)");
lf[84]=C_h_intern(&lf[84],14,"set-finalizer!");
lf[85]=C_static_string(C_heaptop,59,"not enough memory - can not allocate external number vector");
lf[86]=C_h_intern(&lf[86],19,"\003sysallocate-vector");
lf[87]=C_static_lambda_info(C_heaptop,29,"(alloc loc163 len164 ext\077165)");
lf[88]=C_h_intern(&lf[88],21,"release-number-vector");
lf[89]=C_static_string(C_heaptop,39,"bad argument type - not a number vector");
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
lf[90]=C_h_list(8,C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(8);
lf[91]=C_static_lambda_info(C_heaptop,28,"(release-number-vector v171)");
lf[92]=C_h_intern(&lf[92],13,"make-u8vector");
lf[93]=C_h_intern(&lf[93],8,"u8vector");
lf[94]=C_static_lambda_info(C_heaptop,12,"(do189 i191)");
lf[95]=C_static_lambda_info(C_heaptop,33,"(body178 init185 ext\077186 fin\077187)");
lf[96]=C_static_lambda_info(C_heaptop,37,"(def-fin\077182 %init175198 %ext\077176199)");
lf[97]=C_static_lambda_info(C_heaptop,25,"(def-ext\077181 %init175201)");
lf[98]=C_static_lambda_info(C_heaptop,13,"(def-init180)");
lf[99]=C_static_lambda_info(C_heaptop,32,"(make-u8vector len173 . g172174)");
lf[100]=C_h_intern(&lf[100],13,"make-s8vector");
lf[101]=C_h_intern(&lf[101],8,"s8vector");
lf[102]=C_static_lambda_info(C_heaptop,12,"(do227 i229)");
lf[103]=C_h_intern(&lf[103],4,"fin\077");
lf[104]=C_static_lambda_info(C_heaptop,25,"(body216 init223 ext\077224)");
lf[105]=C_static_lambda_info(C_heaptop,36,"(def-fin220 %init213236 %ext\077214237)");
lf[106]=C_static_lambda_info(C_heaptop,25,"(def-ext\077219 %init213239)");
lf[107]=C_static_lambda_info(C_heaptop,13,"(def-init218)");
lf[108]=C_static_lambda_info(C_heaptop,32,"(make-s8vector len211 . g210212)");
lf[109]=C_h_intern(&lf[109],14,"make-u16vector");
lf[110]=C_h_intern(&lf[110],9,"u16vector");
lf[111]=C_static_lambda_info(C_heaptop,12,"(do264 i266)");
lf[112]=C_static_lambda_info(C_heaptop,25,"(body253 init260 ext\077261)");
lf[113]=C_static_lambda_info(C_heaptop,36,"(def-fin257 %init250273 %ext\077251274)");
lf[114]=C_static_lambda_info(C_heaptop,25,"(def-ext\077256 %init250276)");
lf[115]=C_static_lambda_info(C_heaptop,13,"(def-init255)");
lf[116]=C_static_lambda_info(C_heaptop,33,"(make-u16vector len248 . g247249)");
lf[117]=C_h_intern(&lf[117],14,"make-s16vector");
lf[118]=C_h_intern(&lf[118],9,"s16vector");
lf[119]=C_static_lambda_info(C_heaptop,12,"(do301 i303)");
lf[120]=C_static_lambda_info(C_heaptop,25,"(body290 init297 ext\077298)");
lf[121]=C_static_lambda_info(C_heaptop,36,"(def-fin294 %init287310 %ext\077288311)");
lf[122]=C_static_lambda_info(C_heaptop,25,"(def-ext\077293 %init287313)");
lf[123]=C_static_lambda_info(C_heaptop,13,"(def-init292)");
lf[124]=C_static_lambda_info(C_heaptop,33,"(make-s16vector len285 . g284286)");
lf[125]=C_h_intern(&lf[125],14,"make-u32vector");
lf[126]=C_h_intern(&lf[126],9,"u32vector");
lf[127]=C_static_lambda_info(C_heaptop,7,"(do338)");
lf[128]=C_static_lambda_info(C_heaptop,25,"(body327 init334 ext\077335)");
lf[129]=C_static_lambda_info(C_heaptop,36,"(def-fin331 %init324347 %ext\077325348)");
lf[130]=C_static_lambda_info(C_heaptop,25,"(def-ext\077330 %init324350)");
lf[131]=C_static_lambda_info(C_heaptop,13,"(def-init329)");
lf[132]=C_static_lambda_info(C_heaptop,33,"(make-u32vector len322 . g321323)");
lf[133]=C_h_intern(&lf[133],14,"make-s32vector");
lf[134]=C_h_intern(&lf[134],9,"s32vector");
lf[135]=C_static_lambda_info(C_heaptop,7,"(do375)");
lf[136]=C_static_lambda_info(C_heaptop,25,"(body364 init371 ext\077372)");
lf[137]=C_static_lambda_info(C_heaptop,36,"(def-fin368 %init361384 %ext\077362385)");
lf[138]=C_static_lambda_info(C_heaptop,25,"(def-ext\077367 %init361387)");
lf[139]=C_static_lambda_info(C_heaptop,13,"(def-init366)");
lf[140]=C_static_lambda_info(C_heaptop,33,"(make-s32vector len359 . g358360)");
lf[141]=C_h_intern(&lf[141],14,"make-f32vector");
lf[142]=C_h_intern(&lf[142],9,"f32vector");
lf[143]=C_static_lambda_info(C_heaptop,12,"(do412 i414)");
lf[144]=C_static_lambda_info(C_heaptop,25,"(body401 init408 ext\077409)");
lf[145]=C_static_lambda_info(C_heaptop,36,"(def-fin405 %init398422 %ext\077399423)");
lf[146]=C_static_lambda_info(C_heaptop,25,"(def-ext\077404 %init398425)");
lf[147]=C_static_lambda_info(C_heaptop,13,"(def-init403)");
lf[148]=C_static_lambda_info(C_heaptop,33,"(make-f32vector len396 . g395397)");
lf[149]=C_h_intern(&lf[149],14,"make-f64vector");
lf[150]=C_h_intern(&lf[150],9,"f64vector");
lf[151]=C_static_lambda_info(C_heaptop,12,"(do450 i452)");
lf[152]=C_static_lambda_info(C_heaptop,25,"(body439 init446 ext\077447)");
lf[153]=C_static_lambda_info(C_heaptop,36,"(def-fin443 %init436460 %ext\077437461)");
lf[154]=C_static_lambda_info(C_heaptop,25,"(def-ext\077442 %init436463)");
lf[155]=C_static_lambda_info(C_heaptop,13,"(def-init441)");
lf[156]=C_static_lambda_info(C_heaptop,33,"(make-f64vector len434 . g433435)");
lf[157]=C_h_intern(&lf[157],27,"\003sysnot-a-proper-list-error");
lf[158]=C_static_lambda_info(C_heaptop,17,"(do486 p488 i489)");
lf[159]=C_static_lambda_info(C_heaptop,15,"(f_2159 lst483)");
lf[160]=C_static_lambda_info(C_heaptop,28,"(init make480 set481 loc482)");
lf[161]=C_h_intern(&lf[161],14,"list->u8vector");
lf[162]=C_h_intern(&lf[162],14,"list->s8vector");
lf[163]=C_h_intern(&lf[163],15,"list->u16vector");
lf[164]=C_h_intern(&lf[164],15,"list->s16vector");
lf[165]=C_h_intern(&lf[165],15,"list->u32vector");
lf[166]=C_h_intern(&lf[166],15,"list->s32vector");
lf[167]=C_h_intern(&lf[167],15,"list->f32vector");
lf[168]=C_h_intern(&lf[168],15,"list->f64vector");
lf[169]=C_static_lambda_info(C_heaptop,18,"(u8vector . xs502)");
lf[170]=C_static_lambda_info(C_heaptop,18,"(s8vector . xs504)");
lf[171]=C_static_lambda_info(C_heaptop,19,"(u16vector . xs506)");
lf[172]=C_static_lambda_info(C_heaptop,19,"(s16vector . xs508)");
lf[173]=C_static_lambda_info(C_heaptop,19,"(u32vector . xs510)");
lf[174]=C_static_lambda_info(C_heaptop,19,"(s32vector . xs512)");
lf[175]=C_static_lambda_info(C_heaptop,19,"(f32vector . xs514)");
lf[176]=C_static_lambda_info(C_heaptop,19,"(f64vector . xs516)");
lf[177]=C_static_lambda_info(C_heaptop,11,"(loop i524)");
lf[178]=C_static_lambda_info(C_heaptop,13,"(f_2277 v521)");
lf[179]=C_static_lambda_info(C_heaptop,23,"(init length519 ref520)");
lf[180]=C_h_intern(&lf[180],14,"u8vector->list");
lf[181]=C_h_intern(&lf[181],14,"s8vector->list");
lf[182]=C_h_intern(&lf[182],15,"u16vector->list");
lf[183]=C_h_intern(&lf[183],15,"s16vector->list");
lf[184]=C_h_intern(&lf[184],15,"u32vector->list");
lf[185]=C_h_intern(&lf[185],15,"s32vector->list");
lf[186]=C_h_intern(&lf[186],15,"f32vector->list");
lf[187]=C_h_intern(&lf[187],15,"f64vector->list");
lf[188]=C_h_intern(&lf[188],9,"u8vector\077");
lf[189]=C_static_lambda_info(C_heaptop,16,"(u8vector\077 x534)");
lf[190]=C_h_intern(&lf[190],9,"s8vector\077");
lf[191]=C_static_lambda_info(C_heaptop,16,"(s8vector\077 x535)");
lf[192]=C_h_intern(&lf[192],10,"u16vector\077");
lf[193]=C_static_lambda_info(C_heaptop,17,"(u16vector\077 x536)");
lf[194]=C_h_intern(&lf[194],10,"s16vector\077");
lf[195]=C_static_lambda_info(C_heaptop,17,"(s16vector\077 x537)");
lf[196]=C_h_intern(&lf[196],10,"u32vector\077");
lf[197]=C_static_lambda_info(C_heaptop,17,"(u32vector\077 x538)");
lf[198]=C_h_intern(&lf[198],10,"s32vector\077");
lf[199]=C_static_lambda_info(C_heaptop,17,"(s32vector\077 x539)");
lf[200]=C_h_intern(&lf[200],10,"f32vector\077");
lf[201]=C_static_lambda_info(C_heaptop,17,"(f32vector\077 x540)");
lf[202]=C_h_intern(&lf[202],10,"f64vector\077");
lf[203]=C_static_lambda_info(C_heaptop,17,"(f64vector\077 x541)");
lf[204]=C_static_lambda_info(C_heaptop,13,"(f_2392 v546)");
lf[205]=C_static_lambda_info(C_heaptop,20,"(pack tag544 loc545)");
lf[206]=C_static_string(C_heaptop,49,"bytevector does not have correct size for packing");
lf[207]=C_static_lambda_info(C_heaptop,15,"(f_2400 str551)");
lf[208]=C_static_lambda_info(C_heaptop,28,"(unpack tag548 sz549 loc550)");
lf[209]=C_h_intern(&lf[209],21,"u8vector->byte-vector");
lf[210]=C_h_intern(&lf[210],21,"s8vector->byte-vector");
lf[211]=C_h_intern(&lf[211],22,"u16vector->byte-vector");
lf[212]=C_h_intern(&lf[212],22,"s16vector->byte-vector");
lf[213]=C_h_intern(&lf[213],22,"u32vector->byte-vector");
lf[214]=C_h_intern(&lf[214],22,"s32vector->byte-vector");
lf[215]=C_h_intern(&lf[215],22,"f32vector->byte-vector");
lf[216]=C_h_intern(&lf[216],22,"f64vector->byte-vector");
lf[217]=C_h_intern(&lf[217],21,"byte-vector->u8vector");
lf[218]=C_h_intern(&lf[218],21,"byte-vector->s8vector");
lf[219]=C_h_intern(&lf[219],22,"byte-vector->u16vector");
lf[220]=C_h_intern(&lf[220],22,"byte-vector->s16vector");
lf[221]=C_h_intern(&lf[221],22,"byte-vector->u32vector");
lf[222]=C_h_intern(&lf[222],22,"byte-vector->s32vector");
lf[223]=C_h_intern(&lf[223],22,"byte-vector->f32vector");
lf[224]=C_h_intern(&lf[224],22,"byte-vector->f64vector");
lf[225]=C_h_intern(&lf[225],18,"\003sysuser-read-hook");
lf[226]=C_h_intern(&lf[226],4,"read");
lf[227]=C_h_intern(&lf[227],2,"u8");
lf[228]=C_h_intern(&lf[228],2,"s8");
lf[229]=C_h_intern(&lf[229],3,"u16");
lf[230]=C_h_intern(&lf[230],3,"s16");
lf[231]=C_h_intern(&lf[231],3,"u32");
lf[232]=C_h_intern(&lf[232],3,"s32");
lf[233]=C_h_intern(&lf[233],3,"f32");
lf[234]=C_h_intern(&lf[234],3,"f64");
lf[235]=C_h_intern(&lf[235],1,"f");
lf[236]=C_h_intern(&lf[236],1,"F");
lf[237]=C_static_string(C_heaptop,25,"illegal bytevector syntax");
lf[238]=C_static_lambda_info(C_heaptop,38,"(##sys#user-read-hook char576 port577)");
lf[239]=C_h_intern(&lf[239],19,"\003sysuser-print-hook");
lf[240]=C_h_intern(&lf[240],9,"\003sysprint");
lf[241]=C_static_lambda_info(C_heaptop,48,"(##sys#user-print-hook x586 readable587 port588)");
lf[243]=C_static_lambda_info(C_heaptop,48,"(subvector v592 t593 es594 from595 to596 loc597)");
lf[244]=C_h_intern(&lf[244],11,"subu8vector");
lf[245]=C_static_lambda_info(C_heaptop,32,"(subu8vector v609 from610 to611)");
lf[246]=C_h_intern(&lf[246],12,"subu16vector");
lf[247]=C_static_lambda_info(C_heaptop,33,"(subu16vector v612 from613 to614)");
lf[248]=C_h_intern(&lf[248],12,"subu32vector");
lf[249]=C_static_lambda_info(C_heaptop,33,"(subu32vector v615 from616 to617)");
lf[250]=C_h_intern(&lf[250],11,"subs8vector");
lf[251]=C_static_lambda_info(C_heaptop,32,"(subs8vector v618 from619 to620)");
lf[252]=C_h_intern(&lf[252],12,"subs16vector");
lf[253]=C_static_lambda_info(C_heaptop,33,"(subs16vector v621 from622 to623)");
lf[254]=C_h_intern(&lf[254],12,"subs32vector");
lf[255]=C_static_lambda_info(C_heaptop,33,"(subs32vector v624 from625 to626)");
lf[256]=C_h_intern(&lf[256],12,"subf32vector");
lf[257]=C_static_lambda_info(C_heaptop,33,"(subf32vector v627 from628 to629)");
lf[258]=C_h_intern(&lf[258],12,"subf64vector");
lf[259]=C_static_lambda_info(C_heaptop,33,"(subf64vector v630 from631 to632)");
lf[260]=C_h_intern(&lf[260],14,"write-u8vector");
lf[261]=C_h_intern(&lf[261],16,"\003syswrite-char-0");
lf[262]=C_static_lambda_info(C_heaptop,12,"(do650 i652)");
lf[263]=C_h_intern(&lf[263],14,"\003syscheck-port");
lf[264]=C_static_lambda_info(C_heaptop,31,"(body639 port646 from647 to648)");
lf[265]=C_static_lambda_info(C_heaptop,35,"(def-to643 %port636658 %from637659)");
lf[266]=C_static_lambda_info(C_heaptop,25,"(def-from642 %port636661)");
lf[267]=C_h_intern(&lf[267],19,"\003sysstandard-output");
lf[268]=C_static_lambda_info(C_heaptop,13,"(def-port641)");
lf[269]=C_static_lambda_info(C_heaptop,31,"(write-u8vector v634 . g633635)");
lf[270]=C_h_intern(&lf[270],14,"read-u8vector!");
lf[271]=C_h_intern(&lf[271],16,"\003sysread-string!");
lf[272]=C_static_lambda_info(C_heaptop,26,"(body675 port681 start682)");
lf[273]=C_static_lambda_info(C_heaptop,26,"(def-start678 %port673690)");
lf[274]=C_h_intern(&lf[274],18,"\003sysstandard-input");
lf[275]=C_static_lambda_info(C_heaptop,13,"(def-port677)");
lf[276]=C_static_lambda_info(C_heaptop,39,"(read-u8vector! n670 dest671 . g669672)");
lf[277]=C_h_intern(&lf[277],18,"open-output-string");
lf[278]=C_h_intern(&lf[278],17,"get-output-string");
lf[279]=C_h_intern(&lf[279],13,"read-u8vector");
lf[280]=C_h_intern(&lf[280],14,"\003syswrite-char");
lf[281]=C_h_intern(&lf[281],15,"\003sysread-char-0");
lf[282]=C_static_lambda_info(C_heaptop,11,"(loop n717)");
lf[283]=C_static_lambda_info(C_heaptop,19,"(body702 n708 p709)");
lf[284]=C_static_lambda_info(C_heaptop,19,"(def-p705 %n700725)");
lf[285]=C_static_lambda_info(C_heaptop,10,"(def-n704)");
lf[286]=C_static_lambda_info(C_heaptop,25,"(read-u8vector . g698699)");
lf[287]=C_h_intern(&lf[287],17,"register-feature!");
lf[288]=C_h_intern(&lf[288],6,"srfi-4");
lf[289]=C_h_intern(&lf[289],18,"getter-with-setter");
lf[290]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,291,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=C_mutate((C_word*)lf[2]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_792,a[2]=lf[5],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[6]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_807,a[2]=lf[8],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[9],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_828,a[2]=lf[10],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[11],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_831,a[2]=lf[12],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[13],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_834,a[2]=lf[14],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[15],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_837,a[2]=lf[16],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[17],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_840,a[2]=lf[18],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[19],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_843,a[2]=lf[20],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[21],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_846,a[2]=lf[23],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[24],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_852,a[2]=lf[25],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate(&lf[26],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_858,a[2]=lf[27],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate(&lf[28],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_861,a[2]=lf[29],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate(&lf[30],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_864,a[2]=lf[31],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate(&lf[32],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_867,a[2]=lf[33],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate(&lf[34],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_870,a[2]=lf[35],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[36],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_873,a[2]=lf[37],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate(&lf[38],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_876,a[2]=lf[39],tmp=(C_word)a,a+=3,tmp));
t20=C_mutate(&lf[40],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_879,a[2]=lf[41],tmp=(C_word)a,a+=3,tmp));
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_882,a[2]=lf[43],tmp=(C_word)a,a+=3,tmp);
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_895,a[2]=t21,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 163  len */
f_882(t22,lf[93],C_SCHEME_FALSE,lf[44]);}

/* k893 */
static void C_ccall f_895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_895,2,t0,t1);}
t2=C_mutate((C_word*)lf[44]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 164  len */
f_882(t3,lf[101],C_SCHEME_FALSE,lf[45]);}

/* k897 in k893 */
static void C_ccall f_899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_899,2,t0,t1);}
t2=C_mutate((C_word*)lf[45]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_903,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 165  len */
f_882(t3,lf[110],C_fix(1),lf[46]);}

/* k901 in k897 in k893 */
static void C_ccall f_903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_903,2,t0,t1);}
t2=C_mutate((C_word*)lf[46]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 166  len */
f_882(t3,lf[118],C_fix(1),lf[47]);}

/* k905 in k901 in k897 in k893 */
static void C_ccall f_907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_907,2,t0,t1);}
t2=C_mutate((C_word*)lf[47]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 167  len */
f_882(t3,lf[126],C_fix(2),lf[48]);}

/* k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_911,2,t0,t1);}
t2=C_mutate((C_word*)lf[48]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 168  len */
f_882(t3,lf[134],C_fix(2),lf[49]);}

/* k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_915,2,t0,t1);}
t2=C_mutate((C_word*)lf[49]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 169  len */
f_882(t3,lf[142],C_fix(2),lf[50]);}

/* k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_919,2,t0,t1);}
t2=C_mutate((C_word*)lf[50]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_923,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 170  len */
f_882(t3,lf[150],C_fix(3),lf[51]);}

/* k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_923(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_923,2,t0,t1);}
t2=C_mutate((C_word*)lf[51]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_925,a[2]=lf[54],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_939,a[2]=lf[56],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_956,a[2]=lf[59],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1045,a[2]=lf[61],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1071,a[2]=t5,a[3]=t4,a[4]=t6,a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 226  setu */
f_956(t7,*((C_word*)lf[44]+1),lf[26],lf[62]);}

/* k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1071,2,t0,t1);}
t2=C_mutate((C_word*)lf[62]+1,t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 227  set */
f_939(t3,*((C_word*)lf[45]+1),lf[28],lf[63]);}

/* k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1075,2,t0,t1);}
t2=C_mutate((C_word*)lf[63]+1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1079,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 228  setu */
f_956(t3,*((C_word*)lf[46]+1),lf[30],lf[64]);}

/* k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1079,2,t0,t1);}
t2=C_mutate((C_word*)lf[64]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1083,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 229  set */
f_939(t3,*((C_word*)lf[47]+1),lf[32],lf[65]);}

/* k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1083(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1083,2,t0,t1);}
t2=C_mutate((C_word*)lf[65]+1,t1);
t3=*((C_word*)lf[48]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1011,a[2]=t3,a[3]=lf[69],tmp=(C_word)a,a+=4,tmp);
t5=C_mutate((C_word*)lf[66]+1,t4);
t6=*((C_word*)lf[49]+1);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_984,a[2]=t6,a[3]=lf[72],tmp=(C_word)a,a+=4,tmp);
t8=C_mutate((C_word*)lf[70]+1,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 232  setf */
f_1045(t9,*((C_word*)lf[50]+1),lf[38],lf[73]);}

/* k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1095,2,t0,t1);}
t2=C_mutate((C_word*)lf[73]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1099,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 233  setf */
f_1045(t3,*((C_word*)lf[51]+1),lf[40],lf[74]);}

/* k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1099,2,t0,t1);}
t2=C_mutate((C_word*)lf[74]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3083,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 236  get */
f_925(t4,*((C_word*)lf[44]+1),lf[9],lf[75]);}

/* k3081 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_3083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 236  getter-with-setter */
t2=*((C_word*)lf[289]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[62]+1));}

/* k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1103,2,t0,t1);}
t2=C_mutate((C_word*)lf[75]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3079,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 239  get */
f_925(t4,*((C_word*)lf[45]+1),lf[11],lf[76]);}

/* k3077 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_3079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 239  getter-with-setter */
t2=*((C_word*)lf[289]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[63]+1));}

/* k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1107,2,t0,t1);}
t2=C_mutate((C_word*)lf[76]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3075,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 242  get */
f_925(t4,*((C_word*)lf[46]+1),lf[13],lf[77]);}

/* k3073 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_3075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 242  getter-with-setter */
t2=*((C_word*)lf[289]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[64]+1));}

/* k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1111,2,t0,t1);}
t2=C_mutate((C_word*)lf[77]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1115,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3071,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 245  get */
f_925(t4,*((C_word*)lf[47]+1),lf[15],lf[78]);}

/* k3069 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_3071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 245  getter-with-setter */
t2=*((C_word*)lf[289]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[65]+1));}

/* k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1115,2,t0,t1);}
t2=C_mutate((C_word*)lf[78]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3067,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 249  get */
f_925(t4,*((C_word*)lf[48]+1),lf[17],lf[79]);}

/* k3065 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_3067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 248  getter-with-setter */
t2=*((C_word*)lf[289]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[66]+1));}

/* k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1119,2,t0,t1);}
t2=C_mutate((C_word*)lf[79]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3063,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 253  get */
f_925(t4,*((C_word*)lf[49]+1),lf[19],lf[80]);}

/* k3061 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_3063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 252  getter-with-setter */
t2=*((C_word*)lf[289]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[70]+1));}

/* k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1123,2,t0,t1);}
t2=C_mutate((C_word*)lf[80]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3059,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 257  get */
f_925(t4,*((C_word*)lf[50]+1),lf[21],lf[81]);}

/* k3057 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 256  getter-with-setter */
t2=*((C_word*)lf[289]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[73]+1));}

/* k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1127,2,t0,t1);}
t2=C_mutate((C_word*)lf[81]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1131,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 261  get */
f_925(t4,*((C_word*)lf[51]+1),lf[24],lf[82]);}

/* k3053 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 260  getter-with-setter */
t2=*((C_word*)lf[289]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[74]+1));}

/* k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1131(C_word c,C_word t0,C_word t1){
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
C_word ab[65],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1131,2,t0,t1);}
t2=C_mutate((C_word*)lf[82]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1138,a[2]=lf[83],tmp=(C_word)a,a+=3,tmp);
t4=*((C_word*)lf[84]+1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1140,a[2]=lf[87],tmp=(C_word)a,a+=3,tmp);
t6=C_mutate((C_word*)lf[88]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1158,a[2]=t3,a[3]=lf[91],tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[92]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1183,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=lf[99],tmp=(C_word)a,a+=6,tmp));
t8=C_mutate((C_word*)lf[100]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1303,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=lf[108],tmp=(C_word)a,a+=6,tmp));
t9=C_mutate((C_word*)lf[109]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1423,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=lf[116],tmp=(C_word)a,a+=6,tmp));
t10=C_mutate((C_word*)lf[117]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1543,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=lf[124],tmp=(C_word)a,a+=6,tmp));
t11=C_mutate((C_word*)lf[125]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1663,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=lf[132],tmp=(C_word)a,a+=6,tmp));
t12=C_mutate((C_word*)lf[133]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1783,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=lf[140],tmp=(C_word)a,a+=6,tmp));
t13=C_mutate((C_word*)lf[141]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1903,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=lf[148],tmp=(C_word)a,a+=6,tmp));
t14=C_mutate((C_word*)lf[149]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2030,a[2]=t5,a[3]=t3,a[4]=t4,a[5]=lf[156],tmp=(C_word)a,a+=6,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2157,a[2]=lf[160],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2197,a[2]=t15,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 420  init */
f_2157(t16,*((C_word*)lf[92]+1),*((C_word*)lf[62]+1),lf[161]);}

/* k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2197,2,t0,t1);}
t2=C_mutate((C_word*)lf[161]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 421  init */
f_2157(t3,*((C_word*)lf[100]+1),*((C_word*)lf[63]+1),lf[162]);}

/* k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2201,2,t0,t1);}
t2=C_mutate((C_word*)lf[162]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 422  init */
f_2157(t3,*((C_word*)lf[109]+1),*((C_word*)lf[64]+1),lf[163]);}

/* k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2205,2,t0,t1);}
t2=C_mutate((C_word*)lf[163]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 423  init */
f_2157(t3,*((C_word*)lf[117]+1),*((C_word*)lf[65]+1),lf[164]);}

/* k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2209,2,t0,t1);}
t2=C_mutate((C_word*)lf[164]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 424  init */
f_2157(t3,*((C_word*)lf[125]+1),*((C_word*)lf[66]+1),lf[165]);}

/* k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2213,2,t0,t1);}
t2=C_mutate((C_word*)lf[165]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 425  init */
f_2157(t3,*((C_word*)lf[133]+1),*((C_word*)lf[70]+1),lf[166]);}

/* k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2217,2,t0,t1);}
t2=C_mutate((C_word*)lf[166]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 426  init */
f_2157(t3,*((C_word*)lf[141]+1),*((C_word*)lf[73]+1),lf[167]);}

/* k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2221,2,t0,t1);}
t2=C_mutate((C_word*)lf[167]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2225,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 427  init */
f_2157(t3,*((C_word*)lf[149]+1),*((C_word*)lf[74]+1),lf[168]);}

/* k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2225(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2225,2,t0,t1);}
t2=C_mutate((C_word*)lf[168]+1,t1);
t3=*((C_word*)lf[161]+1);
t4=C_mutate((C_word*)lf[93]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2227,a[2]=t3,a[3]=lf[169],tmp=(C_word)a,a+=4,tmp));
t5=*((C_word*)lf[162]+1);
t6=C_mutate((C_word*)lf[101]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2233,a[2]=t5,a[3]=lf[170],tmp=(C_word)a,a+=4,tmp));
t7=*((C_word*)lf[163]+1);
t8=C_mutate((C_word*)lf[110]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2239,a[2]=t7,a[3]=lf[171],tmp=(C_word)a,a+=4,tmp));
t9=*((C_word*)lf[164]+1);
t10=C_mutate((C_word*)lf[118]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2245,a[2]=t9,a[3]=lf[172],tmp=(C_word)a,a+=4,tmp));
t11=*((C_word*)lf[165]+1);
t12=C_mutate((C_word*)lf[126]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2251,a[2]=t11,a[3]=lf[173],tmp=(C_word)a,a+=4,tmp));
t13=*((C_word*)lf[166]+1);
t14=C_mutate((C_word*)lf[134]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2257,a[2]=t13,a[3]=lf[174],tmp=(C_word)a,a+=4,tmp));
t15=*((C_word*)lf[167]+1);
t16=C_mutate((C_word*)lf[142]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2263,a[2]=t15,a[3]=lf[175],tmp=(C_word)a,a+=4,tmp));
t17=*((C_word*)lf[168]+1);
t18=C_mutate((C_word*)lf[150]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2269,a[2]=t17,a[3]=lf[176],tmp=(C_word)a,a+=4,tmp));
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2275,a[2]=lf[179],tmp=(C_word)a,a+=3,tmp);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2312,a[2]=t19,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 478  init */
f_2275(t20,*((C_word*)lf[44]+1),lf[9]);}

/* k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2312,2,t0,t1);}
t2=C_mutate((C_word*)lf[180]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 479  init */
f_2275(t3,*((C_word*)lf[45]+1),lf[11]);}

/* k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2316,2,t0,t1);}
t2=C_mutate((C_word*)lf[181]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 480  init */
f_2275(t3,*((C_word*)lf[46]+1),lf[13]);}

/* k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2320,2,t0,t1);}
t2=C_mutate((C_word*)lf[182]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 481  init */
f_2275(t3,*((C_word*)lf[47]+1),lf[15]);}

/* k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2324,2,t0,t1);}
t2=C_mutate((C_word*)lf[183]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2328,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 482  init */
f_2275(t3,*((C_word*)lf[48]+1),lf[17]);}

/* k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2328,2,t0,t1);}
t2=C_mutate((C_word*)lf[184]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 483  init */
f_2275(t3,*((C_word*)lf[49]+1),lf[19]);}

/* k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2332,2,t0,t1);}
t2=C_mutate((C_word*)lf[185]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 484  init */
f_2275(t3,*((C_word*)lf[50]+1),lf[21]);}

/* k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2336,2,t0,t1);}
t2=C_mutate((C_word*)lf[186]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 485  init */
f_2275(t3,*((C_word*)lf[51]+1),lf[24]);}

/* k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2340,2,t0,t1);}
t2=C_mutate((C_word*)lf[187]+1,t1);
t3=C_mutate((C_word*)lf[188]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2342,a[2]=lf[189],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[190]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2348,a[2]=lf[191],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[192]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2354,a[2]=lf[193],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[194]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2360,a[2]=lf[195],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[196]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2366,a[2]=lf[197],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[198]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2372,a[2]=lf[199],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[200]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2378,a[2]=lf[201],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[202]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2384,a[2]=lf[203],tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2390,a[2]=lf[205],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2398,a[2]=lf[208],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2423,a[2]=t11,a[3]=t12,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 518  pack */
f_2390(t13,lf[93],lf[209]);}

/* k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2423,2,t0,t1);}
t2=C_mutate((C_word*)lf[209]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 519  pack */
f_2390(t3,lf[101],lf[210]);}

/* k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2427,2,t0,t1);}
t2=C_mutate((C_word*)lf[210]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 520  pack */
f_2390(t3,lf[110],lf[211]);}

/* k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2431,2,t0,t1);}
t2=C_mutate((C_word*)lf[211]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 521  pack */
f_2390(t3,lf[118],lf[212]);}

/* k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2435,2,t0,t1);}
t2=C_mutate((C_word*)lf[212]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 522  pack */
f_2390(t3,lf[126],lf[213]);}

/* k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2439,2,t0,t1);}
t2=C_mutate((C_word*)lf[213]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 523  pack */
f_2390(t3,lf[134],lf[214]);}

/* k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2443,2,t0,t1);}
t2=C_mutate((C_word*)lf[214]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 524  pack */
f_2390(t3,lf[142],lf[215]);}

/* k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2447,2,t0,t1);}
t2=C_mutate((C_word*)lf[215]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2451,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 525  pack */
f_2390(t3,lf[150],lf[216]);}

/* k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2451,2,t0,t1);}
t2=C_mutate((C_word*)lf[216]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 527  unpack */
f_2398(t3,lf[93],C_SCHEME_TRUE,lf[217]);}

/* k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2455,2,t0,t1);}
t2=C_mutate((C_word*)lf[217]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 528  unpack */
f_2398(t3,lf[101],C_SCHEME_TRUE,lf[218]);}

/* k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2459,2,t0,t1);}
t2=C_mutate((C_word*)lf[218]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 529  unpack */
f_2398(t3,lf[110],C_fix(2),lf[219]);}

/* k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2463,2,t0,t1);}
t2=C_mutate((C_word*)lf[219]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 530  unpack */
f_2398(t3,lf[118],C_fix(2),lf[220]);}

/* k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2467,2,t0,t1);}
t2=C_mutate((C_word*)lf[220]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 531  unpack */
f_2398(t3,lf[126],C_fix(4),lf[221]);}

/* k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2471,2,t0,t1);}
t2=C_mutate((C_word*)lf[221]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 532  unpack */
f_2398(t3,lf[134],C_fix(4),lf[222]);}

/* k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2475,2,t0,t1);}
t2=C_mutate((C_word*)lf[222]+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2479,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 533  unpack */
f_2398(t3,lf[142],C_fix(4),lf[223]);}

/* k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2479,2,t0,t1);}
t2=C_mutate((C_word*)lf[223]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2483,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 534  unpack */
f_2398(t3,lf[150],C_fix(8),lf[224]);}

/* k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
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
C_word ab[99],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2483,2,t0,t1);}
t2=C_mutate((C_word*)lf[224]+1,t1);
t3=*((C_word*)lf[225]+1);
t4=*((C_word*)lf[226]+1);
t5=(C_word)C_a_i_list(&a,16,lf[227],*((C_word*)lf[161]+1),lf[228],*((C_word*)lf[162]+1),lf[229],*((C_word*)lf[163]+1),lf[230],*((C_word*)lf[164]+1),lf[231],*((C_word*)lf[165]+1),lf[232],*((C_word*)lf[166]+1),lf[233],*((C_word*)lf[167]+1),lf[234],*((C_word*)lf[168]+1));
t6=C_mutate((C_word*)lf[225]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2488,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=lf[238],tmp=(C_word)a,a+=6,tmp));
t7=*((C_word*)lf[239]+1);
t8=C_mutate((C_word*)lf[239]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2544,a[2]=t7,a[3]=lf[241],tmp=(C_word)a,a+=4,tmp));
t9=C_mutate(&lf[242],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2612,a[2]=lf[243],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[244]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2655,a[2]=lf[245],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[246]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2661,a[2]=lf[247],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[248]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2667,a[2]=lf[249],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[250]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2673,a[2]=lf[251],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[252]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2679,a[2]=lf[253],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[254]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2685,a[2]=lf[255],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[256]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2691,a[2]=lf[257],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[258]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=lf[259],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[260]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2703,a[2]=lf[269],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[270]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2819,a[2]=lf[276],tmp=(C_word)a,a+=3,tmp));
t20=*((C_word*)lf[277]+1);
t21=*((C_word*)lf[278]+1);
t22=C_mutate((C_word*)lf[279]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2919,a[2]=t20,a[3]=t21,a[4]=lf[286],tmp=(C_word)a,a+=5,tmp));
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3051,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 651  register-feature! */
t24=*((C_word*)lf[287]+1);
((C_proc3)C_retrieve_proc(t24))(3,t24,t23,lf[288]);}

/* k3049 in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_3051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr2r,(void*)f_2919r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2919r(t0,t1,t2);}}

static void C_ccall f_2919r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(13);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[283],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2997,a[2]=t3,a[3]=lf[284],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3002,a[2]=t4,a[3]=lf[285],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-n704726 */
t6=t5;
f_3002(t6,t1);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t7))){
/* def-p705724 */
t8=t4;
f_2997(t8,t1,t6);}
else{
t8=(C_word)C_i_car(t7);
t9=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t9))){
/* body702707 */
t10=t3;
f_2921(t10,t1,t6,t8);}
else{
/* ##sys#error */
t10=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,lf[0],t9);}}}}

/* def-n704 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_3002(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3002,NULL,2,t0,t1);}
/* def-p705724 */
t2=((C_word*)t0)[2];
f_2997(t2,t1,C_SCHEME_FALSE);}

/* def-p705 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2997(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2997,NULL,3,t0,t1,t2);}
/* body702707 */
t3=((C_word*)t0)[2];
f_2921(t3,t1,t2,*((C_word*)lf[274]+1));}

/* body702 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2921(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2921,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 629  ##sys#check-port */
t5=*((C_word*)lf[263]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t3,lf[279]);}

/* k2923 in body702 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2925,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[279]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2934,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 631  ##sys#allocate-vector */
t4=*((C_word*)lf[86]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[6],C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2953,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 641  open-output-string */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}}

/* k2951 in k2923 in body702 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2953,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2958,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=lf[282],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2958(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k2951 in k2923 in body702 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2958(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2958,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t4)){
/* srfi-4.scm: 643  get-output-string */
t5=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,((C_word*)t0)[4]);}
else{
t5=t3;
f_2962(2,t5,C_SCHEME_FALSE);}}

/* k2960 in loop in k2951 in k2923 in body702 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2962,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2968,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 644  ##sys#read-char-0 */
t3=*((C_word*)lf[281]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}}

/* k2966 in k2960 in loop in k2951 in k2923 in body702 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2968,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
/* srfi-4.scm: 646  get-output-string */
t2=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2980,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 648  ##sys#write-char */
t3=*((C_word*)lf[280]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[4]);}}

/* k2978 in k2966 in k2960 in loop in k2951 in k2923 in body702 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
/* srfi-4.scm: 649  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2958(t3,((C_word*)t0)[2],t2);}

/* k2932 in k2923 in body702 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2934,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2937,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 632  ##sys#read-string! */
t3=*((C_word*)lf[271]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_fix(0));}

/* k2935 in k2932 in k2923 in body702 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2944,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[3],t1);
if(C_truep(t3)){
t4=t2;
f_2944(t4,((C_word*)t0)[2]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2950,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 637  ##sys#allocate-vector */
t5=*((C_word*)lf[86]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t1,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}}

/* k2948 in k2935 in k2932 in k2923 in body702 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_substring_copy(((C_word*)t0)[4],t1,C_fix(0),((C_word*)t0)[3],C_fix(0));
t3=((C_word*)t0)[2];
f_2944(t3,t1);}

/* k2942 in k2935 in k2932 in k2923 in body702 in read-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2944(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2944,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,2,lf[93],t1));}

/* read-u8vector! in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_2819r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2819r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2819r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(15);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2821,a[2]=t5,a[3]=t3,a[4]=lf[272],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2866,a[2]=t6,a[3]=lf[273],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2871,a[2]=t7,a[3]=lf[275],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-port677691 */
t9=t8;
f_2871(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-start678689 */
t11=t7;
f_2866(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* body675680 */
t13=t6;
f_2821(t13,t1,t9,t11);}
else{
/* ##sys#error */
t13=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}}}

/* def-port677 in read-u8vector! in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2871(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2871,NULL,2,t0,t1);}
/* def-start678689 */
t2=((C_word*)t0)[2];
f_2866(t2,t1,*((C_word*)lf[274]+1));}

/* def-start678 in read-u8vector! in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2866(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2866,NULL,3,t0,t1,t2);}
/* body675680 */
t3=((C_word*)t0)[2];
f_2821(t3,t1,t2,C_fix(0));}

/* body675 in read-u8vector! in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2821(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2821,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2825,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 615  ##sys#check-port */
t5=*((C_word*)lf[263]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t2,lf[270]);}

/* k2823 in body675 in read-u8vector! in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2825(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2825,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[270]);
t3=(C_word)C_i_check_structure_2(((C_word*)t0)[5],lf[93],lf[270]);
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2837,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t6=(C_word)C_i_check_exact_2(((C_word*)((C_word*)t0)[3])[1],lf[270]);
t7=(C_word)C_fixnum_plus(((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1]);
t8=(C_word)C_block_size(t4);
if(C_truep((C_word)C_fixnum_greaterp(t7,t8))){
t9=(C_word)C_block_size(t4);
t10=(C_word)C_fixnum_difference(t9,((C_word*)t0)[6]);
t11=C_mutate(((C_word *)((C_word*)t0)[3])+1,t10);
t12=t5;
f_2837(t12,t11);}
else{
t9=t5;
f_2837(t9,C_SCHEME_UNDEFINED);}}
else{
t6=t5;
f_2837(t6,C_SCHEME_UNDEFINED);}}

/* k2835 in k2823 in body675 in read-u8vector! in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2837(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 623  ##sys#read-string! */
t2=*((C_word*)lf[271]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* write-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2703(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_2703r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2703r(t0,t1,t2,t3);}}

static void C_ccall f_2703r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(17);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2705,a[2]=t2,a[3]=lf[264],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2742,a[2]=t2,a[3]=t4,a[4]=lf[265],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2751,a[2]=t5,a[3]=lf[266],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2756,a[2]=t6,a[3]=lf[268],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-port641662 */
t8=t7;
f_2756(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-from642660 */
t10=t6;
f_2751(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-to643657 */
t12=t5;
f_2742(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body639645 */
t14=t4;
f_2705(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-port641 in write-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2756(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2756,NULL,2,t0,t1);}
/* def-from642660 */
t2=((C_word*)t0)[2];
f_2751(t2,t1,*((C_word*)lf[267]+1));}

/* def-from642 in write-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2751(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2751,NULL,3,t0,t1,t2);}
/* def-to643657 */
t3=((C_word*)t0)[2];
f_2742(t3,t1,t2,C_fix(0));}

/* def-to643 in write-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2742(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2742,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2750,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 606  u8vector-length */
t5=*((C_word*)lf[44]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k2748 in def-to643 in write-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* body639645 */
t2=((C_word*)t0)[5];
f_2705(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* body639 in write-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2705(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2705,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_structure_2(((C_word*)t0)[2],lf[93],lf[260]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2712,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 608  ##sys#check-port */
t7=*((C_word*)lf[263]+1);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t2,lf[260]);}

/* k2710 in body639 in write-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2712,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=lf[262],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2720(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* do650 in k2710 in body639 in write-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2720(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2720,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2730,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_make_character((C_word)C_unfix((C_word)C_u8peek(((C_word*)t0)[3],t2)));
/* srfi-4.scm: 612  ##sys#write-char-0 */
t5=*((C_word*)lf[261]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,((C_word*)t0)[2]);}}

/* k2728 in do650 in k2710 in body639 in write-u8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2720(t3,((C_word*)t0)[2],t2);}

/* subf64vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2697(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2697,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 604  subvector */
f_2612(t1,t2,lf[150],C_fix(8),t3,t4,lf[258]);}

/* subf32vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2691(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2691,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 603  subvector */
f_2612(t1,t2,lf[142],C_fix(4),t3,t4,lf[256]);}

/* subs32vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2685(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2685,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 602  subvector */
f_2612(t1,t2,lf[134],C_fix(4),t3,t4,lf[254]);}

/* subs16vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2679,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 601  subvector */
f_2612(t1,t2,lf[118],C_fix(2),t3,t4,lf[252]);}

/* subs8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2673,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 600  subvector */
f_2612(t1,t2,lf[101],C_fix(1),t3,t4,lf[250]);}

/* subu32vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2667,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 599  subvector */
f_2612(t1,t2,lf[126],C_fix(4),t3,t4,lf[248]);}

/* subu16vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2661,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 598  subvector */
f_2612(t1,t2,lf[110],C_fix(2),t3,t4,lf[246]);}

/* subu8vector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2655(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2655,5,t0,t1,t2,t3,t4);}
/* srfi-4.scm: 597  subvector */
f_2612(t1,t2,lf[93],C_fix(1),t3,t4,lf[244]);}

/* subvector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2612(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2612,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(C_word)C_i_check_structure_2(t2,t3,t7);
t9=(C_word)C_slot(t2,C_fix(1));
t10=(C_word)C_block_size(t9);
t11=(C_word)C_fixnum_divide(t10,t4);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2625,a[2]=t7,a[3]=t11,a[4]=t1,a[5]=t9,a[6]=t3,a[7]=t4,a[8]=t5,a[9]=t6,tmp=(C_word)a,a+=10,tmp);
t13=(C_word)C_fixnum_plus(t11,C_fix(1));
/* srfi-4.scm: 588  ##sys#check-range */
t14=*((C_word*)lf[52]+1);
((C_proc6)(void*)(*((C_word*)t14+1)))(6,t14,t12,t5,C_fix(0),t13,t7);}

/* k2623 in subvector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2628,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-4.scm: 589  ##sys#check-range */
t4=*((C_word*)lf[52]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,((C_word*)t0)[9],C_fix(0),t3,((C_word*)t0)[2]);}

/* k2626 in k2623 in subvector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2628,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(C_word)C_fixnum_times(((C_word*)t0)[5],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 591  ##sys#allocate-vector */
t5=*((C_word*)lf[86]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k2632 in k2626 in k2623 in subvector in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2634,2,t0,t1);}
t2=(C_word)C_string_to_bytevector(t1);
t3=(C_word)C_a_i_record(&a,2,((C_word*)t0)[7],t1);
t4=(C_word)C_fixnum_times(((C_word*)t0)[6],((C_word*)t0)[5]);
t5=(C_word)C_copy_subvector(t1,((C_word*)t0)[4],C_fix(0),t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}

/* ##sys#user-print-hook in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2544,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,3,lf[93],lf[227],*((C_word*)lf[180]+1));
t6=(C_word)C_a_i_list(&a,3,lf[101],lf[228],*((C_word*)lf[181]+1));
t7=(C_word)C_a_i_list(&a,3,lf[110],lf[229],*((C_word*)lf[182]+1));
t8=(C_word)C_a_i_list(&a,3,lf[118],lf[230],*((C_word*)lf[183]+1));
t9=(C_word)C_a_i_list(&a,3,lf[126],lf[231],*((C_word*)lf[184]+1));
t10=(C_word)C_a_i_list(&a,3,lf[134],lf[232],*((C_word*)lf[185]+1));
t11=(C_word)C_a_i_list(&a,3,lf[142],lf[233],*((C_word*)lf[186]+1));
t12=(C_word)C_a_i_list(&a,3,lf[150],lf[234],*((C_word*)lf[187]+1));
t13=(C_word)C_a_i_list(&a,8,t5,t6,t7,t8,t9,t10,t11,t12);
t14=(C_word)C_i_assq((C_word)C_slot(t2,C_fix(0)),t13);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2554,a[2]=t2,a[3]=t14,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 575  ##sys#print */
t16=*((C_word*)lf[240]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t15,C_make_character(35),C_SCHEME_FALSE,t4);}
else{
/* srfi-4.scm: 578  old-hook */
t15=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t15))(5,t15,t1,t2,t3,t4);}}

/* k2552 in ##sys#user-print-hook in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[3]);
/* srfi-4.scm: 576  ##sys#print */
t4=*((C_word*)lf[240]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,t3,C_SCHEME_FALSE,((C_word*)t0)[4]);}

/* k2555 in k2552 in ##sys#user-print-hook in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2564,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[3]);
t4=t3;
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,((C_word*)t0)[2]);}

/* k2562 in k2555 in k2552 in ##sys#user-print-hook in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 577  ##sys#print */
t2=*((C_word*)lf[240]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* ##sys#user-read-hook in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2488(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2488,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_truep((C_word)C_eqp(t4,C_make_character(117)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(115)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(102)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(85)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(83)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,C_make_character(70)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2498,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 552  read */
t6=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}
else{
/* srfi-4.scm: 557  old-hook */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k2496 in ##sys#user-read-hook in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2498(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2498,2,t0,t1);}
t2=(C_word)C_i_symbolp(t1);
t3=(C_truep(t2)?t1:C_SCHEME_FALSE);
t4=(C_word)C_eqp(t3,lf[235]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(t3,lf[236]));
if(C_truep(t5)){
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_memq(t3,((C_word*)t0)[4]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2523,a[2]=((C_word*)t0)[5],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 555  read */
t8=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[2]);}
else{
/* srfi-4.scm: 556  ##sys#error */
t7=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[5],lf[237],t3);}}}

/* k2521 in k2496 in ##sys#user-read-hook in k2481 in k2477 in k2473 in k2469 in k2465 in k2461 in k2457 in k2453 in k2449 in k2445 in k2441 in k2437 in k2433 in k2429 in k2425 in k2421 in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(C_word)C_slot(t2,C_fix(0));
t4=t3;
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],t1);}

/* unpack in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2398(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2398,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2400,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=lf[207],tmp=(C_word)a,a+=6,tmp));}

/* f_2400 in unpack in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2400,3,t0,t1,t2);}
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
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t1,((C_word*)t0)[4],lf[206],((C_word*)t0)[2],t4,((C_word*)t0)[3]);}}

/* pack in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2390(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2390,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2392,a[2]=t3,a[3]=t2,a[4]=lf[204],tmp=(C_word)a,a+=5,tmp));}

/* f_2392 in pack in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2392(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2392,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,((C_word*)t0)[3],((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* f64vector? in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2384,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[150]));}

/* f32vector? in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2378(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2378,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[142]));}

/* s32vector? in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2372(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2372,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[134]));}

/* u32vector? in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2366(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2366,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[126]));}

/* s16vector? in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2360,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[118]));}

/* u16vector? in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2354,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[110]));}

/* s8vector? in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2348,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[101]));}

/* u8vector? in k2338 in k2334 in k2330 in k2326 in k2322 in k2318 in k2314 in k2310 in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2342(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2342,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[93]));}

/* init in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2275(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2275,NULL,3,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2277,a[2]=t2,a[3]=t3,a[4]=lf[178],tmp=(C_word)a,a+=5,tmp));}

/* f_2277 in init in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2277(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2277,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2281,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 471  length */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2279 */
static void C_ccall f_2281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2281,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2286,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=lf[177],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2286(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k2279 */
static void C_fcall f_2286(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2286,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2300,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 475  ref */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],t2);}}

/* k2298 in loop in k2279 */
static void C_ccall f_2300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2300,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2304,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-4.scm: 476  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2286(t4,t2,t3);}

/* k2302 in k2298 in loop in k2279 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2304,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* f64vector in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2269(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2269r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2269r(t0,t1,t2);}}

static void C_ccall f_2269r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 462  list->f64vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* f32vector in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2263(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2263r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2263r(t0,t1,t2);}}

static void C_ccall f_2263r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 458  list->f32vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* s32vector in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2257(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2257r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2257r(t0,t1,t2);}}

static void C_ccall f_2257r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 454  list->s32vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* u32vector in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2251(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2251r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2251r(t0,t1,t2);}}

static void C_ccall f_2251r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 450  list->u32vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* s16vector in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2245r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2245r(t0,t1,t2);}}

static void C_ccall f_2245r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 446  list->s16vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* u16vector in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2239r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2239r(t0,t1,t2);}}

static void C_ccall f_2239r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 442  list->u16vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* s8vector in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2233(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2233r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2233r(t0,t1,t2);}}

static void C_ccall f_2233r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 438  list->s8vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* u8vector in k2223 in k2219 in k2215 in k2211 in k2207 in k2203 in k2199 in k2195 in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2227r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2227r(t0,t1,t2);}}

static void C_ccall f_2227r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-4.scm: 434  list->u8vector */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* init in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2157(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2157,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2159,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=lf[159],tmp=(C_word)a,a+=6,tmp));}

/* f_2159 in init in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2159,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,((C_word*)t0)[4]);
t4=(C_word)C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2169,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 412  make */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}

/* k2167 */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2169,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2174,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=lf[158],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2174(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* do486 in k2167 */
static void C_fcall f_2174(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2174,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2181,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep((C_word)C_blockp(t2))?(C_word)C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm: 417  set */
t6=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,((C_word*)t0)[5],t3,(C_word)C_slot(t2,C_fix(0)));}
else{
/* srfi-4.scm: 418  ##sys#not-a-proper-list-error */
t6=*((C_word*)lf[157]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,((C_word*)t0)[2]);}}}

/* k2179 in do486 in k2167 */
static void C_ccall f_2181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[5])[1];
f_2174(t2,((C_word*)t0)[4],(C_word)C_slot(((C_word*)t0)[3],C_fix(1)),(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-f64vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_2030r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2030r(t0,t1,t2,t3);}}

static void C_ccall f_2030r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=lf[152],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2084,a[2]=t4,a[3]=lf[153],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2089,a[2]=t5,a[3]=lf[154],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2094,a[2]=t6,a[3]=lf[155],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init441464 */
t8=t7;
f_2094(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?442462 */
t10=t6;
f_2089(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin443459 */
t12=t5;
f_2084(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body439445 */
t14=t4;
f_2032(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init441 in make-f64vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2094(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2094,NULL,2,t0,t1);}
/* def-ext?442462 */
t2=((C_word*)t0)[2];
f_2089(t2,t1,C_SCHEME_FALSE);}

/* def-ext?442 in make-f64vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2089(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2089,NULL,3,t0,t1,t2);}
/* def-fin443459 */
t3=((C_word*)t0)[2];
f_2084(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin443 in make-f64vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2084(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2084,NULL,4,t0,t1,t2,t3);}
/* body439445 */
t4=((C_word*)t0)[2];
f_2032(t4,t1,t2,t3);}

/* body439 in make-f64vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2032(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2032,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[149]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2083,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 391  alloc */
f_1140(t6,lf[149],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(3)),t3);}

/* k2081 in body439 in make-f64vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2083,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[150],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2042,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[103]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 392  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_2042(2,t5,C_SCHEME_UNDEFINED);}}

/* k2040 in k2081 in body439 in make-f64vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2042,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t2)){
t3=(C_word)C_i_check_number_2(((C_word*)((C_word*)t0)[5])[1],lf[149]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(((C_word*)((C_word*)t0)[5])[1]))){
t5=t4;
f_2054(t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2073,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 398  exact->inexact */
C_exact_to_inexact(3,0,t5,((C_word*)((C_word*)t0)[5])[1]);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k2071 in k2040 in k2081 in body439 in make-f64vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2054(t3,t2);}

/* k2052 in k2040 in k2081 in body439 in make-f64vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2054(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2054,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2059,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[151],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2059(t5,((C_word*)t0)[2],C_fix(0));}

/* do450 in k2052 in k2040 in k2081 in body439 in make-f64vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_2059(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2059,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2066,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 401  ##sys#f64vector-set! */
t4=lf[40];
f_879(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)((C_word*)t0)[2])[1]);}}

/* k2064 in do450 in k2052 in k2040 in k2081 in body439 in make-f64vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_2059(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-f32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1903(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1903r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1903r(t0,t1,t2,t3);}}

static void C_ccall f_1903r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1905,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=lf[144],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1957,a[2]=t4,a[3]=lf[145],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1962,a[2]=t5,a[3]=lf[146],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1967,a[2]=t6,a[3]=lf[147],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init403426 */
t8=t7;
f_1967(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?404424 */
t10=t6;
f_1962(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin405421 */
t12=t5;
f_1957(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body401407 */
t14=t4;
f_1905(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init403 in make-f32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1967(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1967,NULL,2,t0,t1);}
/* def-ext?404424 */
t2=((C_word*)t0)[2];
f_1962(t2,t1,C_SCHEME_FALSE);}

/* def-ext?404 in make-f32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1962(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1962,NULL,3,t0,t1,t2);}
/* def-fin405421 */
t3=((C_word*)t0)[2];
f_1957(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin405 in make-f32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1957(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1957,NULL,4,t0,t1,t2,t3);}
/* body401407 */
t4=((C_word*)t0)[2];
f_1905(t4,t1,t2,t3);}

/* body401 in make-f32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1905(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1905,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[141]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1956,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 376  alloc */
f_1140(t6,lf[141],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(2)),t3);}

/* k1954 in body401 in make-f32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1956,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[142],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1915,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[103]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 377  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1915(2,t5,C_SCHEME_UNDEFINED);}}

/* k1913 in k1954 in body401 in make-f32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1915,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[5])[1];
if(C_truep(t2)){
t3=(C_word)C_i_check_number_2(((C_word*)((C_word*)t0)[5])[1],lf[141]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(((C_word*)((C_word*)t0)[5])[1]))){
t5=t4;
f_1927(t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1946,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm: 383  exact->inexact */
C_exact_to_inexact(3,0,t5,((C_word*)((C_word*)t0)[5])[1]);}}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1944 in k1913 in k1954 in body401 in make-f32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_1927(t3,t2);}

/* k1925 in k1913 in k1954 in body401 in make-f32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1927(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1927,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1932,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[143],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1932(t5,((C_word*)t0)[2],C_fix(0));}

/* do412 in k1925 in k1913 in k1954 in body401 in make-f32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1932(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1932,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1939,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 386  ##sys#f32vector-set! */
t4=lf[38];
f_876(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)((C_word*)t0)[2])[1]);}}

/* k1937 in do412 in k1925 in k1913 in k1954 in body401 in make-f32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1932(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-s32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1783(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1783r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1783r(t0,t1,t2,t3);}}

static void C_ccall f_1783r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=lf[136],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1830,a[2]=t4,a[3]=lf[137],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1835,a[2]=t5,a[3]=lf[138],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1840,a[2]=t6,a[3]=lf[139],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init366388 */
t8=t7;
f_1840(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?367386 */
t10=t6;
f_1835(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin368383 */
t12=t5;
f_1830(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body364370 */
t14=t4;
f_1785(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init366 in make-s32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1840(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1840,NULL,2,t0,t1);}
/* def-ext?367386 */
t2=((C_word*)t0)[2];
f_1835(t2,t1,C_SCHEME_FALSE);}

/* def-ext?367 in make-s32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1835(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1835,NULL,3,t0,t1,t2);}
/* def-fin368383 */
t3=((C_word*)t0)[2];
f_1830(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin368 in make-s32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1830(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1830,NULL,4,t0,t1,t2,t3);}
/* body364370 */
t4=((C_word*)t0)[2];
f_1785(t4,t1,t2,t3);}

/* body364 in make-s32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1785(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1785,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[133]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1829,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 363  alloc */
f_1140(t5,lf[133],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(2)),t3);}

/* k1827 in body364 in make-s32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1829,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[134],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1795,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[103]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 364  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1795(2,t5,C_SCHEME_UNDEFINED);}}

/* k1793 in k1827 in body364 in make-s32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1795,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[133]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1809,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[135],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_1809(t4,C_fix(0)));}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* do375 in k1793 in k1827 in body364 in make-s32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static C_word C_fcall f_1809(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=f_873(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t4=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* make-u32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1663(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1663r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1663r(t0,t1,t2,t3);}}

static void C_ccall f_1663r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1665,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=lf[128],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1710,a[2]=t4,a[3]=lf[129],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1715,a[2]=t5,a[3]=lf[130],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1720,a[2]=t6,a[3]=lf[131],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init329351 */
t8=t7;
f_1720(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?330349 */
t10=t6;
f_1715(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin331346 */
t12=t5;
f_1710(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body327333 */
t14=t4;
f_1665(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init329 in make-u32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1720(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1720,NULL,2,t0,t1);}
/* def-ext?330349 */
t2=((C_word*)t0)[2];
f_1715(t2,t1,C_SCHEME_FALSE);}

/* def-ext?330 in make-u32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1715(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1715,NULL,3,t0,t1,t2);}
/* def-fin331346 */
t3=((C_word*)t0)[2];
f_1710(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin331 in make-u32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1710(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1710,NULL,4,t0,t1,t2,t3);}
/* body327333 */
t4=((C_word*)t0)[2];
f_1665(t4,t1,t2,t3);}

/* body327 in make-u32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1665(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1665,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[125]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1709,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 350  alloc */
f_1140(t5,lf[125],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(2)),t3);}

/* k1707 in body327 in make-u32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1709,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[126],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1675,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[103]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 351  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1675(2,t5,C_SCHEME_UNDEFINED);}}

/* k1673 in k1707 in body327 in make-u32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1675,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[125]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1689,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[127],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_1689(t4,C_fix(0)));}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* do338 in k1673 in k1707 in body327 in make-u32vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static C_word C_fcall f_1689(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=f_870(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t4=(C_word)C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* make-s16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1543(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1543r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1543r(t0,t1,t2,t3);}}

static void C_ccall f_1543r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=lf[120],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1590,a[2]=t4,a[3]=lf[121],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1595,a[2]=t5,a[3]=lf[122],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1600,a[2]=t6,a[3]=lf[123],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init292314 */
t8=t7;
f_1600(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?293312 */
t10=t6;
f_1595(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin294309 */
t12=t5;
f_1590(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body290296 */
t14=t4;
f_1545(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init292 in make-s16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1600(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1600,NULL,2,t0,t1);}
/* def-ext?293312 */
t2=((C_word*)t0)[2];
f_1595(t2,t1,C_SCHEME_FALSE);}

/* def-ext?293 in make-s16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1595(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1595,NULL,3,t0,t1,t2);}
/* def-fin294309 */
t3=((C_word*)t0)[2];
f_1590(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin294 in make-s16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1590(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1590,NULL,4,t0,t1,t2,t3);}
/* body290296 */
t4=((C_word*)t0)[2];
f_1545(t4,t1,t2,t3);}

/* body290 in make-s16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1545(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1545,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[117]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1589,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 337  alloc */
f_1140(t5,lf[117],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(1)),t3);}

/* k1587 in body290 in make-s16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1589,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[118],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1555,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[103]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 338  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1555(2,t5,C_SCHEME_UNDEFINED);}}

/* k1553 in k1587 in body290 in make-s16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1555,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1564,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 342  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(-32768),C_fix(32767),lf[117]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1562 in k1553 in k1587 in body290 in make-s16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1564,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1569,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[119],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1569(t5,((C_word*)t0)[2],C_fix(0));}

/* do301 in k1562 in k1553 in k1587 in body290 in make-s16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1569(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1569,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1576,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 345  ##sys#s16vector-set! */
t4=lf[32];
f_867(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* k1574 in do301 in k1562 in k1553 in k1587 in body290 in make-s16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1569(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-u16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1423(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1423r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1423r(t0,t1,t2,t3);}}

static void C_ccall f_1423r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1425,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=lf[112],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1470,a[2]=t4,a[3]=lf[113],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1475,a[2]=t5,a[3]=lf[114],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1480,a[2]=t6,a[3]=lf[115],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init255277 */
t8=t7;
f_1480(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?256275 */
t10=t6;
f_1475(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin257272 */
t12=t5;
f_1470(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body253259 */
t14=t4;
f_1425(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init255 in make-u16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1480(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1480,NULL,2,t0,t1);}
/* def-ext?256275 */
t2=((C_word*)t0)[2];
f_1475(t2,t1,C_SCHEME_FALSE);}

/* def-ext?256 in make-u16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1475(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1475,NULL,3,t0,t1,t2);}
/* def-fin257272 */
t3=((C_word*)t0)[2];
f_1470(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin257 in make-u16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1470(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1470,NULL,4,t0,t1,t2,t3);}
/* body253259 */
t4=((C_word*)t0)[2];
f_1425(t4,t1,t2,t3);}

/* body253 in make-u16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1425(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1425,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[109]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1469,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 324  alloc */
f_1140(t5,lf[109],(C_word)C_fixnum_shift_left(((C_word*)t0)[5],C_fix(1)),t3);}

/* k1467 in body253 in make-u16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1469,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[110],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1435,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[103]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 325  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1435(2,t5,C_SCHEME_UNDEFINED);}}

/* k1433 in k1467 in body253 in make-u16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1435,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 329  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(0),C_fix(65535),lf[109]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1442 in k1433 in k1467 in body253 in make-u16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1444,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1449,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[111],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1449(t5,((C_word*)t0)[2],C_fix(0));}

/* do264 in k1442 in k1433 in k1467 in body253 in make-u16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1449(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1449,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1456,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 332  ##sys#u16vector-set! */
t4=lf[30];
f_864(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* k1454 in do264 in k1442 in k1433 in k1467 in body253 in make-u16vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1449(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-s8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1303(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1303r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1303r(t0,t1,t2,t3);}}

static void C_ccall f_1303r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=lf[104],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1350,a[2]=t4,a[3]=lf[105],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1355,a[2]=t5,a[3]=lf[106],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1360,a[2]=t6,a[3]=lf[107],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init218240 */
t8=t7;
f_1360(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?219238 */
t10=t6;
f_1355(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin220235 */
t12=t5;
f_1350(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body216222 */
t14=t4;
f_1305(t14,t1,t8,t10);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init218 in make-s8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1360(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1360,NULL,2,t0,t1);}
/* def-ext?219238 */
t2=((C_word*)t0)[2];
f_1355(t2,t1,C_SCHEME_FALSE);}

/* def-ext?219 in make-s8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1355(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1355,NULL,3,t0,t1,t2);}
/* def-fin220235 */
t3=((C_word*)t0)[2];
f_1350(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin220 in make-s8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1350(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1350,NULL,4,t0,t1,t2,t3);}
/* body216222 */
t4=((C_word*)t0)[2];
f_1305(t4,t1,t2,t3);}

/* body216 in make-s8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1305(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1305,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[100]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1349,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 311  alloc */
f_1140(t5,lf[100],((C_word*)t0)[5],t3);}

/* k1347 in body216 in make-s8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1349,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[101],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1315,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[4])?*((C_word*)lf[103]+1):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 312  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1315(2,t5,C_SCHEME_UNDEFINED);}}

/* k1313 in k1347 in body216 in make-s8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1315,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 316  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(-128),C_fix(127),lf[100]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1322 in k1313 in k1347 in body216 in make-s8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1324,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1329,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[102],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1329(t5,((C_word*)t0)[2],C_fix(0));}

/* do227 in k1322 in k1313 in k1347 in body216 in make-s8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1329(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1329,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1336,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 319  ##sys#s8vector-set! */
t4=lf[28];
f_861(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* k1334 in do227 in k1322 in k1313 in k1347 in body216 in make-s8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1329(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* make-u8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1183(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+19)){
C_save_and_reclaim((void*)tr3r,(void*)f_1183r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1183r(t0,t1,t2,t3);}}

static void C_ccall f_1183r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(19);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=lf[95],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1230,a[2]=t4,a[3]=lf[96],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1235,a[2]=t5,a[3]=lf[97],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1240,a[2]=t6,a[3]=lf[98],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-init180202 */
t8=t7;
f_1240(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-ext?181200 */
t10=t6;
f_1235(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-fin?182197 */
t12=t5;
f_1230(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body178184 */
t14=t4;
f_1185(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[0],t13);}}}}}

/* def-init180 in make-u8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1240(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1240,NULL,2,t0,t1);}
/* def-ext?181200 */
t2=((C_word*)t0)[2];
f_1235(t2,t1,C_SCHEME_FALSE);}

/* def-ext?181 in make-u8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1235(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1235,NULL,3,t0,t1,t2);}
/* def-fin?182197 */
t3=((C_word*)t0)[2];
f_1230(t3,t1,t2,C_SCHEME_FALSE);}

/* def-fin?182 in make-u8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1230(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1230,NULL,4,t0,t1,t2,t3);}
/* body178184 */
t4=((C_word*)t0)[2];
f_1185(t4,t1,t2,t3,C_SCHEME_TRUE);}

/* body178 in make-u8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1185(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1185,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_exact_2(((C_word*)t0)[5],lf[92]);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1229,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* srfi-4.scm: 298  alloc */
f_1140(t6,lf[92],((C_word*)t0)[5],t3);}

/* k1227 in body178 in make-u8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1229,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,2,lf[93],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1195,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[5])?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-4.scm: 299  set-finalizer! */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,((C_word*)t0)[2]);}
else{
t5=t3;
f_1195(2,t5,C_SCHEME_UNDEFINED);}}

/* k1193 in k1227 in body178 in make-u8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1195,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 303  ##sys#check-exact-interval */
t4=*((C_word*)lf[2]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[5],C_fix(0),C_fix(255),lf[92]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}}

/* k1202 in k1193 in k1227 in body178 in make-u8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1204,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1209,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[94],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1209(t5,((C_word*)t0)[2],C_fix(0));}

/* do189 in k1202 in k1193 in k1227 in body178 in make-u8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1209(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1209,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1216,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm: 306  ##sys#u8vector-set! */
t4=lf[26];
f_858(5,t4,t3,((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* k1214 in do189 in k1202 in k1193 in k1227 in body178 in make-u8vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_1209(t2,((C_word*)t0)[3],(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* release-number-vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1158(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1158,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1165,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_structurep(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=t3;
f_1165(t5,(C_word)C_i_memq(t4,lf[90]));}
else{
t4=t3;
f_1165(t4,C_SCHEME_FALSE);}}

/* k1163 in release-number-vector in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1165(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-4.scm: 292  ext-free */
t2=((C_word*)t0)[4];
f_1138(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-4.scm: 293  ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[88],lf[89],((C_word*)t0)[2]);}}

/* alloc in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1140(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1140,NULL,4,t1,t2,t3,t4);}
if(C_truep(t4)){
t5=t3;
t6=(C_word)C_i_foreign_fixnum_argumentp(t5);
t7=(C_word)stub153(C_SCHEME_UNDEFINED,t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* srfi-4.scm: 283  ##sys#error */
t8=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t1,t2,lf[85],t3);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1156,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm: 284  ##sys#allocate-vector */
t6=*((C_word*)lf[86]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,t3,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}}

/* k1154 in alloc in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_string_to_bytevector(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* ext-free in k1129 in k1125 in k1121 in k1117 in k1113 in k1109 in k1105 in k1101 in k1097 in k1093 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1138(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1138,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub158(C_SCHEME_UNDEFINED,t2));}

/* f_984 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_984(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_984,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_988,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 201  length */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k986 */
static void C_ccall f_988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_991,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fits_in_int_p(((C_word*)t0)[2]))){
t3=t2;
f_991(2,t3,C_SCHEME_UNDEFINED);}
else{
/* srfi-4.scm: 203  ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[70],lf[71],((C_word*)t0)[2]);}}

/* k989 in k986 */
static void C_ccall f_991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_991,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_994,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 204  ##sys#check-range */
t3=*((C_word*)lf[52]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2],lf[70]);}

/* k992 in k989 in k986 */
static void C_ccall f_994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 205  upd */
t2=((C_word*)t0)[5];
((C_proc2)C_retrieve_proc(t2))(2,t2,f_873(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* f_1011 in k1081 in k1077 in k1073 in k1069 in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1011,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1015,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 209  length */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1013 */
static void C_ccall f_1015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1015,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1018,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_negativep(((C_word*)t0)[2]))){
/* srfi-4.scm: 211  ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[66],lf[67],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_fits_in_unsigned_int_p(((C_word*)t0)[2]))){
t3=t2;
f_1018(2,t3,C_SCHEME_UNDEFINED);}
else{
/* srfi-4.scm: 213  ##sys#error */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[66],lf[68],((C_word*)t0)[2]);}}}

/* k1016 in k1013 */
static void C_ccall f_1018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1018,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1021,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 214  ##sys#check-range */
t3=*((C_word*)lf[52]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[2],lf[66]);}

/* k1019 in k1016 in k1013 */
static void C_ccall f_1021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 215  upd */
t2=((C_word*)t0)[5];
((C_proc2)C_retrieve_proc(t2))(2,t2,f_870(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* setf in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_1045(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1045,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1047,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=lf[60],tmp=(C_word)a,a+=6,tmp));}

/* f_1047 in setf in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1047,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1051,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 219  length */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1049 */
static void C_ccall f_1051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1051,2,t0,t1);}
t2=(C_word)C_i_check_number_2(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1057,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 221  ##sys#check-range */
t4=*((C_word*)lf[52]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[2],C_fix(0),t1,((C_word*)t0)[6]);}

/* k1055 in k1049 */
static void C_ccall f_1057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1057,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1064,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(((C_word*)t0)[2]))){
t3=t2;
f_1064(2,t3,((C_word*)t0)[2]);}
else{
/* srfi-4.scm: 224  exact->inexact */
C_exact_to_inexact(3,0,t2,((C_word*)t0)[2]);}}

/* k1062 in k1055 in k1049 */
static void C_ccall f_1064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 222  upd */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* setu in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_956(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_956,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_958,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=lf[58],tmp=(C_word)a,a+=6,tmp));}

/* f_958 in setu in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_958(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_958,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_962,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 192  length */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k960 */
static void C_ccall f_962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_962,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_968,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[7],C_fix(0)))){
/* srfi-4.scm: 195  ##sys#error */
t4=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[6],lf[57],((C_word*)t0)[7]);}
else{
t4=t3;
f_968(2,t4,C_SCHEME_UNDEFINED);}}

/* k966 in k960 */
static void C_ccall f_968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_971,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 196  ##sys#check-range */
t3=*((C_word*)lf[52]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[5],C_fix(0),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k969 in k966 in k960 */
static void C_ccall f_971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 197  upd */
t2=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_939(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_939,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_941,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=lf[55],tmp=(C_word)a,a+=6,tmp));}

/* f_941 in set in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_941(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_941,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_945,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm: 185  length */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k943 */
static void C_ccall f_945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_945,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_951,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 187  ##sys#check-range */
t4=*((C_word*)lf[52]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[2],C_fix(0),t1,((C_word*)t0)[6]);}

/* k949 in k943 */
static void C_ccall f_951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 188  upd */
t2=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* get in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_fcall f_925(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_925,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_927,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=lf[53],tmp=(C_word)a,a+=6,tmp));}

/* f_927 in get in k921 in k917 in k913 in k909 in k905 in k901 in k897 in k893 */
static void C_ccall f_927(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_927,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_931,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm: 179  length */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k929 */
static void C_ccall f_931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_931,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_934,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm: 180  ##sys#check-range */
t3=*((C_word*)lf[52]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[3],C_fix(0),t1,((C_word*)t0)[2]);}

/* k932 in k929 */
static void C_ccall f_934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-4.scm: 181  acc */
t2=((C_word*)t0)[5];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* len */
static void C_fcall f_882(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_882,NULL,4,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_884,a[2]=t3,a[3]=t4,a[4]=t2,a[5]=lf[42],tmp=(C_word)a,a+=6,tmp));}

/* f_884 in len */
static void C_ccall f_884(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_884,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,((C_word*)t0)[4],((C_word*)t0)[3]);
t4=(C_word)C_block_size((C_word)C_slot(t2,C_fix(1)));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(((C_word*)t0)[2])?(C_word)C_fixnum_shift_right(t4,((C_word*)t0)[2]):t4));}

/* ##sys#f64vector-set! */
static void C_ccall f_879(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_879,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_f64poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#f32vector-set! */
static void C_ccall f_876(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_876,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_f32poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#s32vector-set! */
static C_word C_fcall f_873(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_stack_check;
return((C_word)C_s32poke((C_word)C_slot(t1,C_fix(1)),t2,t3));}

/* ##sys#u32vector-set! */
static C_word C_fcall f_870(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_stack_check;
return((C_word)C_u32poke((C_word)C_slot(t1,C_fix(1)),t2,t3));}

/* ##sys#s16vector-set! */
static void C_ccall f_867(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_867,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_s16poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#u16vector-set! */
static void C_ccall f_864(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_864,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u16poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#s8vector-set! */
static void C_ccall f_861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_861,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_s8poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#u8vector-set! */
static void C_ccall f_858(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_858,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_u8poke((C_word)C_slot(t2,C_fix(1)),t3,t4));}

/* ##sys#f64vector-ref */
static void C_ccall f_852(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_852,4,t0,t1,t2,t3);}
t4=(C_word)C_f64peek((C_word)C_slot(t2,C_fix(1)),t3);
/* srfi-4.scm: 139  ##sys#cons-flonum */
t5=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* ##sys#f32vector-ref */
static void C_ccall f_846(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_846,4,t0,t1,t2,t3);}
t4=(C_word)C_f32peek((C_word)C_slot(t2,C_fix(1)),t3);
/* srfi-4.scm: 135  ##sys#cons-flonum */
t5=*((C_word*)lf[22]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* ##sys#s32vector-ref */
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_843,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_s32peek(&a,2,(C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#u32vector-ref */
static void C_ccall f_840(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_840,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_u32peek(&a,2,(C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#s16vector-ref */
static void C_ccall f_837(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_837,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_s16peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#u16vector-ref */
static void C_ccall f_834(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_834,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u16peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#s8vector-ref */
static void C_ccall f_831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_831,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_s8peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#u8vector-ref */
static void C_ccall f_828(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_828,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u8peek((C_word)C_slot(t2,C_fix(1)),t3));}

/* ##sys#check-inexact-interval */
static void C_ccall f_807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_807,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_check_number_2(t2,t5);
t7=(C_word)C_i_lessp(t2,t3);
t8=(C_truep(t7)?t7:(C_word)C_i_greaterp(t2,t4));
if(C_truep(t8)){
/* srfi-4.scm: 121  ##sys#error */
t9=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t1,lf[7],t2,t3,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_UNDEFINED);}}

/* ##sys#check-exact-interval */
static void C_ccall f_792(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_792,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_check_exact_2(t2,t5);
t7=(C_word)C_fixnum_lessp(t2,t3);
t8=(C_truep(t7)?t7:(C_word)C_fixnum_greaterp(t2,t4));
if(C_truep(t8)){
/* srfi-4.scm: 115  ##sys#error */
t9=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t9+1)))(7,t9,t1,t5,lf[4],t2,t3,t4);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_UNDEFINED);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[273] = {
{"toplevelsrfi-4.scm",(void*)C_srfi_4_toplevel},
{"f_895srfi-4.scm",(void*)f_895},
{"f_899srfi-4.scm",(void*)f_899},
{"f_903srfi-4.scm",(void*)f_903},
{"f_907srfi-4.scm",(void*)f_907},
{"f_911srfi-4.scm",(void*)f_911},
{"f_915srfi-4.scm",(void*)f_915},
{"f_919srfi-4.scm",(void*)f_919},
{"f_923srfi-4.scm",(void*)f_923},
{"f_1071srfi-4.scm",(void*)f_1071},
{"f_1075srfi-4.scm",(void*)f_1075},
{"f_1079srfi-4.scm",(void*)f_1079},
{"f_1083srfi-4.scm",(void*)f_1083},
{"f_1095srfi-4.scm",(void*)f_1095},
{"f_1099srfi-4.scm",(void*)f_1099},
{"f_3083srfi-4.scm",(void*)f_3083},
{"f_1103srfi-4.scm",(void*)f_1103},
{"f_3079srfi-4.scm",(void*)f_3079},
{"f_1107srfi-4.scm",(void*)f_1107},
{"f_3075srfi-4.scm",(void*)f_3075},
{"f_1111srfi-4.scm",(void*)f_1111},
{"f_3071srfi-4.scm",(void*)f_3071},
{"f_1115srfi-4.scm",(void*)f_1115},
{"f_3067srfi-4.scm",(void*)f_3067},
{"f_1119srfi-4.scm",(void*)f_1119},
{"f_3063srfi-4.scm",(void*)f_3063},
{"f_1123srfi-4.scm",(void*)f_1123},
{"f_3059srfi-4.scm",(void*)f_3059},
{"f_1127srfi-4.scm",(void*)f_1127},
{"f_3055srfi-4.scm",(void*)f_3055},
{"f_1131srfi-4.scm",(void*)f_1131},
{"f_2197srfi-4.scm",(void*)f_2197},
{"f_2201srfi-4.scm",(void*)f_2201},
{"f_2205srfi-4.scm",(void*)f_2205},
{"f_2209srfi-4.scm",(void*)f_2209},
{"f_2213srfi-4.scm",(void*)f_2213},
{"f_2217srfi-4.scm",(void*)f_2217},
{"f_2221srfi-4.scm",(void*)f_2221},
{"f_2225srfi-4.scm",(void*)f_2225},
{"f_2312srfi-4.scm",(void*)f_2312},
{"f_2316srfi-4.scm",(void*)f_2316},
{"f_2320srfi-4.scm",(void*)f_2320},
{"f_2324srfi-4.scm",(void*)f_2324},
{"f_2328srfi-4.scm",(void*)f_2328},
{"f_2332srfi-4.scm",(void*)f_2332},
{"f_2336srfi-4.scm",(void*)f_2336},
{"f_2340srfi-4.scm",(void*)f_2340},
{"f_2423srfi-4.scm",(void*)f_2423},
{"f_2427srfi-4.scm",(void*)f_2427},
{"f_2431srfi-4.scm",(void*)f_2431},
{"f_2435srfi-4.scm",(void*)f_2435},
{"f_2439srfi-4.scm",(void*)f_2439},
{"f_2443srfi-4.scm",(void*)f_2443},
{"f_2447srfi-4.scm",(void*)f_2447},
{"f_2451srfi-4.scm",(void*)f_2451},
{"f_2455srfi-4.scm",(void*)f_2455},
{"f_2459srfi-4.scm",(void*)f_2459},
{"f_2463srfi-4.scm",(void*)f_2463},
{"f_2467srfi-4.scm",(void*)f_2467},
{"f_2471srfi-4.scm",(void*)f_2471},
{"f_2475srfi-4.scm",(void*)f_2475},
{"f_2479srfi-4.scm",(void*)f_2479},
{"f_2483srfi-4.scm",(void*)f_2483},
{"f_3051srfi-4.scm",(void*)f_3051},
{"f_2919srfi-4.scm",(void*)f_2919},
{"f_3002srfi-4.scm",(void*)f_3002},
{"f_2997srfi-4.scm",(void*)f_2997},
{"f_2921srfi-4.scm",(void*)f_2921},
{"f_2925srfi-4.scm",(void*)f_2925},
{"f_2953srfi-4.scm",(void*)f_2953},
{"f_2958srfi-4.scm",(void*)f_2958},
{"f_2962srfi-4.scm",(void*)f_2962},
{"f_2968srfi-4.scm",(void*)f_2968},
{"f_2980srfi-4.scm",(void*)f_2980},
{"f_2934srfi-4.scm",(void*)f_2934},
{"f_2937srfi-4.scm",(void*)f_2937},
{"f_2950srfi-4.scm",(void*)f_2950},
{"f_2944srfi-4.scm",(void*)f_2944},
{"f_2819srfi-4.scm",(void*)f_2819},
{"f_2871srfi-4.scm",(void*)f_2871},
{"f_2866srfi-4.scm",(void*)f_2866},
{"f_2821srfi-4.scm",(void*)f_2821},
{"f_2825srfi-4.scm",(void*)f_2825},
{"f_2837srfi-4.scm",(void*)f_2837},
{"f_2703srfi-4.scm",(void*)f_2703},
{"f_2756srfi-4.scm",(void*)f_2756},
{"f_2751srfi-4.scm",(void*)f_2751},
{"f_2742srfi-4.scm",(void*)f_2742},
{"f_2750srfi-4.scm",(void*)f_2750},
{"f_2705srfi-4.scm",(void*)f_2705},
{"f_2712srfi-4.scm",(void*)f_2712},
{"f_2720srfi-4.scm",(void*)f_2720},
{"f_2730srfi-4.scm",(void*)f_2730},
{"f_2697srfi-4.scm",(void*)f_2697},
{"f_2691srfi-4.scm",(void*)f_2691},
{"f_2685srfi-4.scm",(void*)f_2685},
{"f_2679srfi-4.scm",(void*)f_2679},
{"f_2673srfi-4.scm",(void*)f_2673},
{"f_2667srfi-4.scm",(void*)f_2667},
{"f_2661srfi-4.scm",(void*)f_2661},
{"f_2655srfi-4.scm",(void*)f_2655},
{"f_2612srfi-4.scm",(void*)f_2612},
{"f_2625srfi-4.scm",(void*)f_2625},
{"f_2628srfi-4.scm",(void*)f_2628},
{"f_2634srfi-4.scm",(void*)f_2634},
{"f_2544srfi-4.scm",(void*)f_2544},
{"f_2554srfi-4.scm",(void*)f_2554},
{"f_2557srfi-4.scm",(void*)f_2557},
{"f_2564srfi-4.scm",(void*)f_2564},
{"f_2488srfi-4.scm",(void*)f_2488},
{"f_2498srfi-4.scm",(void*)f_2498},
{"f_2523srfi-4.scm",(void*)f_2523},
{"f_2398srfi-4.scm",(void*)f_2398},
{"f_2400srfi-4.scm",(void*)f_2400},
{"f_2390srfi-4.scm",(void*)f_2390},
{"f_2392srfi-4.scm",(void*)f_2392},
{"f_2384srfi-4.scm",(void*)f_2384},
{"f_2378srfi-4.scm",(void*)f_2378},
{"f_2372srfi-4.scm",(void*)f_2372},
{"f_2366srfi-4.scm",(void*)f_2366},
{"f_2360srfi-4.scm",(void*)f_2360},
{"f_2354srfi-4.scm",(void*)f_2354},
{"f_2348srfi-4.scm",(void*)f_2348},
{"f_2342srfi-4.scm",(void*)f_2342},
{"f_2275srfi-4.scm",(void*)f_2275},
{"f_2277srfi-4.scm",(void*)f_2277},
{"f_2281srfi-4.scm",(void*)f_2281},
{"f_2286srfi-4.scm",(void*)f_2286},
{"f_2300srfi-4.scm",(void*)f_2300},
{"f_2304srfi-4.scm",(void*)f_2304},
{"f_2269srfi-4.scm",(void*)f_2269},
{"f_2263srfi-4.scm",(void*)f_2263},
{"f_2257srfi-4.scm",(void*)f_2257},
{"f_2251srfi-4.scm",(void*)f_2251},
{"f_2245srfi-4.scm",(void*)f_2245},
{"f_2239srfi-4.scm",(void*)f_2239},
{"f_2233srfi-4.scm",(void*)f_2233},
{"f_2227srfi-4.scm",(void*)f_2227},
{"f_2157srfi-4.scm",(void*)f_2157},
{"f_2159srfi-4.scm",(void*)f_2159},
{"f_2169srfi-4.scm",(void*)f_2169},
{"f_2174srfi-4.scm",(void*)f_2174},
{"f_2181srfi-4.scm",(void*)f_2181},
{"f_2030srfi-4.scm",(void*)f_2030},
{"f_2094srfi-4.scm",(void*)f_2094},
{"f_2089srfi-4.scm",(void*)f_2089},
{"f_2084srfi-4.scm",(void*)f_2084},
{"f_2032srfi-4.scm",(void*)f_2032},
{"f_2083srfi-4.scm",(void*)f_2083},
{"f_2042srfi-4.scm",(void*)f_2042},
{"f_2073srfi-4.scm",(void*)f_2073},
{"f_2054srfi-4.scm",(void*)f_2054},
{"f_2059srfi-4.scm",(void*)f_2059},
{"f_2066srfi-4.scm",(void*)f_2066},
{"f_1903srfi-4.scm",(void*)f_1903},
{"f_1967srfi-4.scm",(void*)f_1967},
{"f_1962srfi-4.scm",(void*)f_1962},
{"f_1957srfi-4.scm",(void*)f_1957},
{"f_1905srfi-4.scm",(void*)f_1905},
{"f_1956srfi-4.scm",(void*)f_1956},
{"f_1915srfi-4.scm",(void*)f_1915},
{"f_1946srfi-4.scm",(void*)f_1946},
{"f_1927srfi-4.scm",(void*)f_1927},
{"f_1932srfi-4.scm",(void*)f_1932},
{"f_1939srfi-4.scm",(void*)f_1939},
{"f_1783srfi-4.scm",(void*)f_1783},
{"f_1840srfi-4.scm",(void*)f_1840},
{"f_1835srfi-4.scm",(void*)f_1835},
{"f_1830srfi-4.scm",(void*)f_1830},
{"f_1785srfi-4.scm",(void*)f_1785},
{"f_1829srfi-4.scm",(void*)f_1829},
{"f_1795srfi-4.scm",(void*)f_1795},
{"f_1809srfi-4.scm",(void*)f_1809},
{"f_1663srfi-4.scm",(void*)f_1663},
{"f_1720srfi-4.scm",(void*)f_1720},
{"f_1715srfi-4.scm",(void*)f_1715},
{"f_1710srfi-4.scm",(void*)f_1710},
{"f_1665srfi-4.scm",(void*)f_1665},
{"f_1709srfi-4.scm",(void*)f_1709},
{"f_1675srfi-4.scm",(void*)f_1675},
{"f_1689srfi-4.scm",(void*)f_1689},
{"f_1543srfi-4.scm",(void*)f_1543},
{"f_1600srfi-4.scm",(void*)f_1600},
{"f_1595srfi-4.scm",(void*)f_1595},
{"f_1590srfi-4.scm",(void*)f_1590},
{"f_1545srfi-4.scm",(void*)f_1545},
{"f_1589srfi-4.scm",(void*)f_1589},
{"f_1555srfi-4.scm",(void*)f_1555},
{"f_1564srfi-4.scm",(void*)f_1564},
{"f_1569srfi-4.scm",(void*)f_1569},
{"f_1576srfi-4.scm",(void*)f_1576},
{"f_1423srfi-4.scm",(void*)f_1423},
{"f_1480srfi-4.scm",(void*)f_1480},
{"f_1475srfi-4.scm",(void*)f_1475},
{"f_1470srfi-4.scm",(void*)f_1470},
{"f_1425srfi-4.scm",(void*)f_1425},
{"f_1469srfi-4.scm",(void*)f_1469},
{"f_1435srfi-4.scm",(void*)f_1435},
{"f_1444srfi-4.scm",(void*)f_1444},
{"f_1449srfi-4.scm",(void*)f_1449},
{"f_1456srfi-4.scm",(void*)f_1456},
{"f_1303srfi-4.scm",(void*)f_1303},
{"f_1360srfi-4.scm",(void*)f_1360},
{"f_1355srfi-4.scm",(void*)f_1355},
{"f_1350srfi-4.scm",(void*)f_1350},
{"f_1305srfi-4.scm",(void*)f_1305},
{"f_1349srfi-4.scm",(void*)f_1349},
{"f_1315srfi-4.scm",(void*)f_1315},
{"f_1324srfi-4.scm",(void*)f_1324},
{"f_1329srfi-4.scm",(void*)f_1329},
{"f_1336srfi-4.scm",(void*)f_1336},
{"f_1183srfi-4.scm",(void*)f_1183},
{"f_1240srfi-4.scm",(void*)f_1240},
{"f_1235srfi-4.scm",(void*)f_1235},
{"f_1230srfi-4.scm",(void*)f_1230},
{"f_1185srfi-4.scm",(void*)f_1185},
{"f_1229srfi-4.scm",(void*)f_1229},
{"f_1195srfi-4.scm",(void*)f_1195},
{"f_1204srfi-4.scm",(void*)f_1204},
{"f_1209srfi-4.scm",(void*)f_1209},
{"f_1216srfi-4.scm",(void*)f_1216},
{"f_1158srfi-4.scm",(void*)f_1158},
{"f_1165srfi-4.scm",(void*)f_1165},
{"f_1140srfi-4.scm",(void*)f_1140},
{"f_1156srfi-4.scm",(void*)f_1156},
{"f_1138srfi-4.scm",(void*)f_1138},
{"f_984srfi-4.scm",(void*)f_984},
{"f_988srfi-4.scm",(void*)f_988},
{"f_991srfi-4.scm",(void*)f_991},
{"f_994srfi-4.scm",(void*)f_994},
{"f_1011srfi-4.scm",(void*)f_1011},
{"f_1015srfi-4.scm",(void*)f_1015},
{"f_1018srfi-4.scm",(void*)f_1018},
{"f_1021srfi-4.scm",(void*)f_1021},
{"f_1045srfi-4.scm",(void*)f_1045},
{"f_1047srfi-4.scm",(void*)f_1047},
{"f_1051srfi-4.scm",(void*)f_1051},
{"f_1057srfi-4.scm",(void*)f_1057},
{"f_1064srfi-4.scm",(void*)f_1064},
{"f_956srfi-4.scm",(void*)f_956},
{"f_958srfi-4.scm",(void*)f_958},
{"f_962srfi-4.scm",(void*)f_962},
{"f_968srfi-4.scm",(void*)f_968},
{"f_971srfi-4.scm",(void*)f_971},
{"f_939srfi-4.scm",(void*)f_939},
{"f_941srfi-4.scm",(void*)f_941},
{"f_945srfi-4.scm",(void*)f_945},
{"f_951srfi-4.scm",(void*)f_951},
{"f_925srfi-4.scm",(void*)f_925},
{"f_927srfi-4.scm",(void*)f_927},
{"f_931srfi-4.scm",(void*)f_931},
{"f_934srfi-4.scm",(void*)f_934},
{"f_882srfi-4.scm",(void*)f_882},
{"f_884srfi-4.scm",(void*)f_884},
{"f_879srfi-4.scm",(void*)f_879},
{"f_876srfi-4.scm",(void*)f_876},
{"f_873srfi-4.scm",(void*)f_873},
{"f_870srfi-4.scm",(void*)f_870},
{"f_867srfi-4.scm",(void*)f_867},
{"f_864srfi-4.scm",(void*)f_864},
{"f_861srfi-4.scm",(void*)f_861},
{"f_858srfi-4.scm",(void*)f_858},
{"f_852srfi-4.scm",(void*)f_852},
{"f_846srfi-4.scm",(void*)f_846},
{"f_843srfi-4.scm",(void*)f_843},
{"f_840srfi-4.scm",(void*)f_840},
{"f_837srfi-4.scm",(void*)f_837},
{"f_834srfi-4.scm",(void*)f_834},
{"f_831srfi-4.scm",(void*)f_831},
{"f_828srfi-4.scm",(void*)f_828},
{"f_807srfi-4.scm",(void*)f_807},
{"f_792srfi-4.scm",(void*)f_792},
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
