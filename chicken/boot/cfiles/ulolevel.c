/* Generated from lolevel.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:13
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: lolevel.scm -output-file ulolevel.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
   unit: lolevel
*/

#include "chicken.h"

#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
# include <sys/types.h>
#endif
#ifndef C_NONUNIX
# include <sys/mman.h>
#endif

#define C_pointer_to_object(ptr)   ((C_word*)C_block_item(ptr, 0))
#define C_w2b(x)                   C_fix(C_wordstobytes(C_unfix(x)))
#define C_pointer_eqp(x, y)        C_mk_bool(C_c_pointer_nn(x) == C_c_pointer_nn(y))

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[149];


/* from k2042 */
static C_word C_fcall stub434(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub434(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from f_1964 in object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static C_word C_fcall stub408(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub408(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from malloc in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub349(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub349(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int size=(int )C_unfix(C_a0);
char *bv;
           if((bv = (char *)C_malloc(size + 3 + sizeof(C_header))) == NULL) return(C_SCHEME_FALSE);
           bv = (char *)C_align((C_word)bv);
           ((C_SCHEME_BLOCK *)bv)->header = C_BYTEVECTOR_TYPE | size;
           return((C_word)bv);
C_return:
#undef return

return C_r;}

/* from k2567 */
#define return(x) C_cblock C_r = (C_flonum(&C_a,(x))); goto C_return; C_cblockend
static C_word C_fcall stub255(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub255(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((double *)p));
C_return:
#undef return

return C_r;}

/* from k2577 */
#define return(x) C_cblock C_r = (C_flonum(&C_a,(x))); goto C_return; C_cblockend
static C_word C_fcall stub248(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub248(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((float *)p));
C_return:
#undef return

return C_r;}

/* from k2587 */
#define return(x) C_cblock C_r = (C_int_to_num(&C_a,(x))); goto C_return; C_cblockend
static C_word C_fcall stub241(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub241(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((C_s32 *)p));
C_return:
#undef return

return C_r;}

/* from k2597 */
#define return(x) C_cblock C_r = (C_int_to_num(&C_a,(x))); goto C_return; C_cblockend
static C_word C_fcall stub234(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub234(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((C_u32 *)p));
C_return:
#undef return

return C_r;}

/* from k2607 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub228(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub228(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((short *)p));
C_return:
#undef return

return C_r;}

/* from k2617 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub222(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub222(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((unsigned short *)p));
C_return:
#undef return

return C_r;}

/* from k2627 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub216(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub216(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((char *)p));
C_return:
#undef return

return C_r;}

/* from k2637 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub210(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub210(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((unsigned char *)p));
C_return:
#undef return

return C_r;}

/* from k1180 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub203(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub203(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
float n=(float )C_c_double(C_a1);
*((double *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1170 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub195(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub195(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
double n=(double )C_c_double(C_a1);
*((float *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1160 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub187(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub187(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((C_s32 *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1150 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub179(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub179(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((C_u32 *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1140 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub171(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub171(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((short *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1130 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub163(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub163(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((unsigned short *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1120 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub155(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub155(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((char *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1110 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub147(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub147(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((unsigned char *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1100 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub138(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub138(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ptr=(void * )C_c_pointer_or_null(C_a0);
int off=(int )C_num_to_int(C_a1);
return((unsigned char *)ptr + off);
C_return:
#undef return

return C_r;}

/* from align in k647 in k644 */
static C_word C_fcall stub131(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub131(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_int_to_num(&C_a,C_align(t0));
return C_r;}

/* from k1056 */
static C_word C_fcall stub124(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub124(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from allocate in k647 in k644 */
static C_word C_fcall stub119(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub119(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from f_1038 in object->pointer in k647 in k644 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub110(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub110(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word x=(C_word )(C_a0);
return((void *)x);
C_return:
#undef return

return C_r;}

/* from k700 */
static C_word C_fcall stub44(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub44(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_memmove(t0,t1,t2);
return C_r;}

/* from k687 */
static C_word C_fcall stub32(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub32(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_memmove(t0,t1,t2);
return C_r;}

/* from k674 */
static C_word C_fcall stub20(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub20(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_memmove(t0,t1,t2);
return C_r;}

/* from k658 */
static C_word C_fcall stub8(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub8(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_memmove(t0,t1,t2);
return C_r;}

C_noret_decl(C_lolevel_toplevel)
C_externexport void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_646)
static void C_ccall f_646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_649)
static void C_ccall f_649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1189)
static void C_ccall f_1189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1193)
static void C_ccall f_1193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1201)
static void C_ccall f_1201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2594)
static void C_ccall f_2594(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1205)
static void C_ccall f_1205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1209)
static void C_ccall f_1209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1213)
static void C_ccall f_1213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1217)
static void C_ccall f_1217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1502)
static void C_ccall f_1502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1665)
static void C_ccall f_1665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_ccall f_2465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2502)
static void C_fcall f_2502(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2470)
static void C_ccall f_2470(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2467)
static void C_ccall f_2467(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2460)
static void C_ccall f_2460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2305)
static void C_fcall f_2305(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2376)
static void C_fcall f_2376(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2397)
static void C_ccall f_2397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2370)
static void C_ccall f_2370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2353)
static void C_ccall f_2353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2212)
static void C_fcall f_2212(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2246)
static void C_fcall f_2246(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2195)
static void C_ccall f_2195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2056)
static void C_ccall f_2056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_ccall f_2059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2067)
static void C_fcall f_2067(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2077)
static void C_ccall f_2077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_ccall f_2180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2089)
static void C_ccall f_2089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2098)
static void C_ccall f_2098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2110)
static void C_fcall f_2110(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2131)
static void C_ccall f_2131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2101)
static void C_ccall f_2101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2062)
static void C_ccall f_2062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1967)
static void C_ccall f_1967(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1967)
static void C_ccall f_1967r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1976)
static void C_fcall f_1976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2011)
static void C_fcall f_2011(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2021)
static void C_ccall f_2021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1872)
static void C_fcall f_1872(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1901)
static void C_ccall f_1901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1913)
static void C_fcall f_1913(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1782)
static void C_fcall f_1782(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1812)
static void C_ccall f_1812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static void C_fcall f_1827(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1740)
static C_word C_fcall f_1740(C_word t0,C_word t1);
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1688)
static void C_ccall f_1688(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1667)
static void C_ccall f_1667(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1680)
static void C_fcall f_1680(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1650)
static void C_ccall f_1650(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1657)
static void C_ccall f_1657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1610)
static void C_fcall f_1610(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1600)
static void C_ccall f_1600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1584)
static void C_ccall f_1584(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1591)
static void C_ccall f_1591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1544)
static void C_ccall f_1544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1549)
static void C_fcall f_1549(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1504)
static void C_ccall f_1504(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1513)
static void C_fcall f_1513(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1476)
static void C_ccall f_1476(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1437)
static void C_ccall f_1437(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1437)
static void C_ccall f_1437r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1449)
static C_word C_fcall f_1449(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1390)
static void C_ccall f_1390(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1399)
static C_word C_fcall f_1399(C_word t0,C_word t1);
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1369)
static void C_ccall f_1369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1373)
static void C_ccall f_1373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1353)
static void C_ccall f_1353(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1304)
static void C_ccall f_1304(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1319)
static void C_ccall f_1319(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1294)
static void C_ccall f_1294(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1234)
static void C_ccall f_1234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1177)
static void C_ccall f_1177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1167)
static void C_ccall f_1167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1157)
static void C_ccall f_1157(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1147)
static void C_ccall f_1147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1127)
static void C_ccall f_1127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1117)
static void C_ccall f_1117(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1107)
static void C_ccall f_1107(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1065)
static void C_ccall f_1065(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1092)
static void C_ccall f_1092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static C_word C_fcall f_1063(C_word *a,C_word t0);
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1050)
static void C_ccall f_1050(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1041)
static void C_ccall f_1041(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1030)
static void C_ccall f_1030(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1014)
static void C_ccall f_1014(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_987)
static void C_fcall f_987(C_word t0,C_word t1) C_noret;
C_noret_decl(f_703)
static void C_ccall f_703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_703)
static void C_ccall f_703r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_739)
static void C_fcall f_739(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_801)
static void C_ccall f_801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_886)
static void C_ccall f_886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static void C_ccall f_901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_810)
static void C_ccall f_810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_817)
static void C_ccall f_817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_718)
static C_word C_fcall f_718(C_word t0);
C_noret_decl(f_712)
static void C_fcall f_712(C_word t0,C_word t1) C_noret;
C_noret_decl(f_706)
static void C_fcall f_706(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2502)
static void C_fcall trf_2502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2502(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2502(t0,t1);}

C_noret_decl(trf_2305)
static void C_fcall trf_2305(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2305(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2305(t0,t1,t2);}

C_noret_decl(trf_2376)
static void C_fcall trf_2376(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2376(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2376(t0,t1,t2);}

C_noret_decl(trf_2212)
static void C_fcall trf_2212(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2212(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2212(t0,t1,t2);}

C_noret_decl(trf_2246)
static void C_fcall trf_2246(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2246(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2246(t0,t1,t2);}

C_noret_decl(trf_2067)
static void C_fcall trf_2067(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2067(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2067(t0,t1,t2);}

C_noret_decl(trf_2110)
static void C_fcall trf_2110(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2110(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2110(t0,t1,t2);}

C_noret_decl(trf_1976)
static void C_fcall trf_1976(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1976(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1976(t0,t1,t2);}

C_noret_decl(trf_2011)
static void C_fcall trf_2011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2011(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2011(t0,t1,t2);}

C_noret_decl(trf_1872)
static void C_fcall trf_1872(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1872(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1872(t0,t1,t2);}

C_noret_decl(trf_1913)
static void C_fcall trf_1913(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1913(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1913(t0,t1,t2);}

C_noret_decl(trf_1782)
static void C_fcall trf_1782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1782(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1782(t0,t1,t2);}

C_noret_decl(trf_1827)
static void C_fcall trf_1827(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1827(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1827(t0,t1,t2);}

C_noret_decl(trf_1680)
static void C_fcall trf_1680(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1680(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1680(t0,t1);}

C_noret_decl(trf_1610)
static void C_fcall trf_1610(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1610(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1610(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1549)
static void C_fcall trf_1549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1549(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1549(t0,t1,t2,t3);}

C_noret_decl(trf_1513)
static void C_fcall trf_1513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1513(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1513(t0,t1,t2);}

C_noret_decl(trf_987)
static void C_fcall trf_987(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_987(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_987(t0,t1);}

C_noret_decl(trf_739)
static void C_fcall trf_739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_739(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_739(t0,t1,t2,t3);}

C_noret_decl(trf_712)
static void C_fcall trf_712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_712(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_712(t0,t1);}

C_noret_decl(trf_706)
static void C_fcall trf_706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_706(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_706(t0,t1);}

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
C_lolevel_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("lolevel_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1387)){
C_save(t1);
C_rereclaim2(1387*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,149);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
tmp=C_intern(C_heaptop,4,"mmap");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"u8vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"u16vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"u32vector");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"s8vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"s16vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"s32vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"f32vector");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"f64vector");
C_save(tmp);
lf[2]=C_h_list(9,C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(9);
lf[3]=C_h_intern(&lf[3],12,"move-memory!");
lf[4]=C_h_intern(&lf[4],9,"\003syserror");
lf[5]=C_static_string(C_heaptop,28,"need number of bytes to move");
lf[6]=C_h_intern(&lf[6],15,"\003syssignal-hook");
lf[7]=C_h_intern(&lf[7],11,"\000type-error");
lf[8]=C_static_string(C_heaptop,21,"invalid argument type");
lf[9]=C_h_intern(&lf[9],15,"\003sysbytevector\077");
lf[10]=C_h_intern(&lf[10],13,"\003syslocative\077");
lf[11]=C_h_intern(&lf[11],17,"\003syscheck-pointer");
lf[12]=C_static_string(C_heaptop,33,"bad argument type - not a pointer");
lf[13]=C_h_intern(&lf[13],12,"null-pointer");
lf[14]=C_h_intern(&lf[14],16,"\003sysnull-pointer");
lf[15]=C_h_intern(&lf[15],8,"pointer\077");
lf[16]=C_h_intern(&lf[16],16,"address->pointer");
lf[17]=C_h_intern(&lf[17],20,"\003sysaddress->pointer");
lf[18]=C_h_intern(&lf[18],16,"pointer->address");
lf[19]=C_h_intern(&lf[19],20,"\003syspointer->address");
lf[20]=C_h_intern(&lf[20],13,"null-pointer\077");
lf[21]=C_h_intern(&lf[21],15,"object->pointer");
lf[22]=C_h_intern(&lf[22],15,"pointer->object");
lf[23]=C_h_intern(&lf[23],9,"pointer=\077");
lf[24]=C_h_intern(&lf[24],8,"allocate");
lf[25]=C_h_intern(&lf[25],4,"free");
lf[26]=C_h_intern(&lf[26],13,"align-to-word");
lf[27]=C_static_string(C_heaptop,43,"bad argument type - not a pointer or fixnum");
lf[28]=C_h_intern(&lf[28],14,"pointer-offset");
lf[29]=C_h_intern(&lf[29],15,"pointer-u8-set!");
lf[30]=C_h_intern(&lf[30],15,"pointer-s8-set!");
lf[31]=C_h_intern(&lf[31],16,"pointer-u16-set!");
lf[32]=C_h_intern(&lf[32],16,"pointer-s16-set!");
lf[33]=C_h_intern(&lf[33],16,"pointer-u32-set!");
lf[34]=C_h_intern(&lf[34],16,"pointer-s32-set!");
lf[35]=C_h_intern(&lf[35],16,"pointer-f32-set!");
lf[36]=C_h_intern(&lf[36],16,"pointer-f64-set!");
lf[37]=C_h_intern(&lf[37],14,"pointer-u8-ref");
lf[38]=C_h_intern(&lf[38],14,"pointer-s8-ref");
lf[39]=C_h_intern(&lf[39],15,"pointer-u16-ref");
lf[40]=C_h_intern(&lf[40],15,"pointer-s16-ref");
lf[41]=C_h_intern(&lf[41],15,"pointer-u32-ref");
lf[42]=C_h_intern(&lf[42],15,"pointer-s32-ref");
lf[43]=C_h_intern(&lf[43],15,"pointer-f32-ref");
lf[44]=C_h_intern(&lf[44],15,"pointer-f64-ref");
lf[45]=C_h_intern(&lf[45],11,"tag-pointer");
lf[46]=C_static_string(C_heaptop,33,"bad argument type - not a pointer");
lf[47]=C_h_intern(&lf[47],23,"\003sysmake-tagged-pointer");
lf[48]=C_h_intern(&lf[48],15,"tagged-pointer\077");
lf[49]=C_h_intern(&lf[49],11,"pointer-tag");
lf[50]=C_static_string(C_heaptop,33,"bad argument type - not a pointer");
lf[51]=C_h_intern(&lf[51],8,"extended");
lf[53]=C_h_intern(&lf[53],16,"extend-procedure");
lf[54]=C_h_intern(&lf[54],19,"\003sysdecorate-lambda");
lf[55]=C_h_intern(&lf[55],19,"extended-procedure\077");
lf[56]=C_h_intern(&lf[56],21,"\003syslambda-decoration");
lf[57]=C_h_intern(&lf[57],14,"procedure-data");
lf[58]=C_h_intern(&lf[58],19,"set-procedure-data!");
lf[59]=C_static_string(C_heaptop,45,"bad argument type - not an extended procedure");
lf[60]=C_h_intern(&lf[60],12,"byte-vector\077");
lf[61]=C_h_intern(&lf[61],17,"byte-vector-fill!");
lf[62]=C_h_intern(&lf[62],16,"make-byte-vector");
lf[63]=C_h_intern(&lf[63],19,"\003sysallocate-vector");
lf[64]=C_h_intern(&lf[64],11,"byte-vector");
lf[65]=C_h_intern(&lf[65],16,"byte-vector-set!");
lf[66]=C_static_string(C_heaptop,12,"out of range");
lf[67]=C_h_intern(&lf[67],15,"byte-vector-ref");
lf[68]=C_h_intern(&lf[68],17,"byte-vector->list");
lf[69]=C_h_intern(&lf[69],17,"list->byte-vector");
lf[70]=C_h_intern(&lf[70],27,"\003sysnot-a-proper-list-error");
lf[71]=C_h_intern(&lf[71],19,"string->byte-vector");
lf[72]=C_h_intern(&lf[72],11,"make-string");
lf[73]=C_h_intern(&lf[73],19,"byte-vector->string");
lf[74]=C_h_intern(&lf[74],18,"byte-vector-length");
lf[75]=C_h_intern(&lf[75],13,"\000bounds-error");
lf[76]=C_static_string(C_heaptop,12,"out of range");
lf[77]=C_h_intern(&lf[77],14,"\000runtime-error");
lf[78]=C_static_string(C_heaptop,48,"can not allocate statically allocated bytevector");
lf[79]=C_h_intern(&lf[79],23,"make-static-byte-vector");
lf[80]=C_h_intern(&lf[80],27,"static-byte-vector->pointer");
lf[81]=C_h_intern(&lf[81],16,"\003sysmake-pointer");
lf[82]=C_static_string(C_heaptop,36,"can not coerce non-static bytevector");
lf[83]=C_h_intern(&lf[83],10,"block-set!");
lf[84]=C_h_intern(&lf[84],14,"\003sysblock-set!");
lf[85]=C_h_intern(&lf[85],9,"block-ref");
lf[86]=C_h_intern(&lf[86],15,"number-of-slots");
lf[87]=C_static_string(C_heaptop,20,"slots not accessible");
lf[88]=C_h_intern(&lf[88],15,"number-of-bytes");
lf[89]=C_static_string(C_heaptop,51,"can not compute number of bytes of immediate object");
lf[90]=C_h_intern(&lf[90],20,"make-record-instance");
lf[91]=C_h_intern(&lf[91],18,"\003sysmake-structure");
lf[92]=C_h_intern(&lf[92],16,"record-instance\077");
lf[93]=C_h_intern(&lf[93],14,"record->vector");
lf[94]=C_h_intern(&lf[94],15,"\003sysmake-vector");
lf[95]=C_static_string(C_heaptop,42,"bad argument type - not a record structure");
lf[96]=C_h_intern(&lf[96],11,"make-vector");
lf[97]=C_h_intern(&lf[97],11,"object-copy");
lf[98]=C_h_intern(&lf[98],15,"object-evicted\077");
lf[99]=C_h_intern(&lf[99],15,"make-hash-table");
lf[100]=C_h_intern(&lf[100],22,"hash-table-ref/default");
lf[101]=C_h_intern(&lf[101],15,"hash-table-set!");
lf[102]=C_h_intern(&lf[102],12,"object-evict");
lf[103]=C_h_intern(&lf[103],3,"eq\077");
lf[104]=C_h_intern(&lf[104],14,"object-release");
lf[105]=C_h_intern(&lf[105],24,"object-evict-to-location");
lf[106]=C_h_intern(&lf[106],24,"\003sysset-pointer-address!");
lf[107]=C_h_intern(&lf[107],6,"signal");
lf[108]=C_h_intern(&lf[108],24,"make-composite-condition");
lf[109]=C_h_intern(&lf[109],23,"make-property-condition");
lf[110]=C_h_intern(&lf[110],5,"evict");
lf[111]=C_h_intern(&lf[111],5,"limit");
lf[112]=C_h_intern(&lf[112],3,"exn");
lf[113]=C_h_intern(&lf[113],8,"location");
lf[114]=C_h_intern(&lf[114],7,"message");
lf[115]=C_static_string(C_heaptop,37,"can not evict object - limit exceeded");
lf[116]=C_h_intern(&lf[116],9,"arguments");
lf[117]=C_h_intern(&lf[117],11,"object-size");
lf[118]=C_h_intern(&lf[118],14,"object-unevict");
lf[119]=C_h_intern(&lf[119],15,"\003sysmake-string");
lf[120]=C_h_intern(&lf[120],14,"object-become!");
lf[121]=C_h_intern(&lf[121],11,"\003sysbecome!");
lf[122]=C_h_intern(&lf[122],13,"make-locative");
lf[123]=C_h_intern(&lf[123],17,"\003sysmake-locative");
lf[124]=C_h_intern(&lf[124],18,"make-weak-locative");
lf[125]=C_h_intern(&lf[125],13,"locative-set!");
lf[126]=C_h_intern(&lf[126],12,"locative-ref");
lf[127]=C_h_intern(&lf[127],16,"locative->object");
lf[128]=C_h_intern(&lf[128],9,"locative\077");
lf[130]=C_h_intern(&lf[130],35,"set-invalid-procedure-call-handler!");
lf[131]=C_h_intern(&lf[131],31,"\003sysinvalid-procedure-call-hook");
lf[132]=C_h_intern(&lf[132],26,"\003syslast-invalid-procedure");
lf[133]=C_static_string(C_heaptop,35,"bad argument type - not a procedure");
lf[134]=C_h_intern(&lf[134],30,"invalid-procedure-call-handler");
lf[135]=C_h_intern(&lf[135],22,"unbound-variable-value");
lf[136]=C_h_intern(&lf[136],31,"\003sysunbound-variable-value-hook");
lf[137]=C_h_intern(&lf[137],10,"global-ref");
lf[138]=C_h_intern(&lf[138],11,"global-set!");
lf[139]=C_h_intern(&lf[139],13,"global-bound\077");
lf[140]=C_h_intern(&lf[140],32,"\003syssymbol-has-toplevel-binding\077");
lf[141]=C_h_intern(&lf[141],20,"global-make-unbound!");
lf[142]=C_h_intern(&lf[142],28,"\003sysarbitrary-unbound-symbol");
lf[143]=C_h_intern(&lf[143],18,"getter-with-setter");
lf[144]=C_h_intern(&lf[144],13,"\003sysblock-ref");
lf[145]=C_static_string(C_heaptop,12,"out of range");
lf[146]=C_h_intern(&lf[146],15,"pointer-s6-set!");
lf[147]=C_h_intern(&lf[147],17,"register-feature!");
lf[148]=C_h_intern(&lf[148],7,"lolevel");
C_register_lf2(lf,149,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_646,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k644 */
static void C_ccall f_646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_649,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 90   register-feature! */
t3=*((C_word*)lf[147]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[148]);}

/* k647 in k644 */
static void C_ccall f_649(C_word c,C_word t0,C_word t1){
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
C_word ab[51],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_649,2,t0,t1);}
t2=lf[2];
t3=C_mutate((C_word*)lf[3]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_703,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[11]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_980,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[13]+1,*((C_word*)lf[14]+1));
t6=C_mutate((C_word*)lf[15]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_999,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[16]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1008,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[18]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1014,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[20]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1020,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[21]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1030,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[22]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1041,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[23]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1047,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[24]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1050,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[25]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1053,tmp=(C_word)a,a+=2,tmp));
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1063,tmp=(C_word)a,a+=2,tmp);
t16=C_mutate((C_word*)lf[26]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1065,a[2]=t15,tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[28]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1097,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[29]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1107,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[30]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1117,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[31]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1127,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[32]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1137,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[33]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1147,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[34]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1157,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[35]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1167,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[36]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1177,tmp=(C_word)a,a+=2,tmp));
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t27=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2634,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 208  getter-with-setter */
t28=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t28+1)))(4,t28,t26,t27,*((C_word*)lf[29]+1));}

/* a2633 in k647 in k644 */
static void C_ccall f_2634(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2634,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub210(C_SCHEME_UNDEFINED,t3));}

/* k1187 in k647 in k644 */
static void C_ccall f_1189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1189,2,t0,t1);}
t2=C_mutate((C_word*)lf[37]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1193,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2624,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 213  getter-with-setter */
t5=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,*((C_word*)lf[30]+1));}

/* a2623 in k1187 in k647 in k644 */
static void C_ccall f_2624(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2624,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub216(C_SCHEME_UNDEFINED,t3));}

/* k1191 in k1187 in k647 in k644 */
static void C_ccall f_1193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1193,2,t0,t1);}
t2=C_mutate((C_word*)lf[38]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1197,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2614,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 218  getter-with-setter */
t5=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,*((C_word*)lf[31]+1));}

/* a2613 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2614,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub222(C_SCHEME_UNDEFINED,t3));}

/* k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1197,2,t0,t1);}
t2=C_mutate((C_word*)lf[39]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1201,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2604,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 223  getter-with-setter */
t5=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,*((C_word*)lf[146]+1));}

/* a2603 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2604(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2604,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub228(C_SCHEME_UNDEFINED,t3));}

/* k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1201,2,t0,t1);}
t2=C_mutate((C_word*)lf[40]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1205,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2594,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 228  getter-with-setter */
t5=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,*((C_word*)lf[33]+1));}

/* a2593 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2594(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2594,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub234(t3,t4));}

/* k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1205,2,t0,t1);}
t2=C_mutate((C_word*)lf[41]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1209,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2584,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 233  getter-with-setter */
t5=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,*((C_word*)lf[34]+1));}

/* a2583 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2584,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub241(t3,t4));}

/* k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1209,2,t0,t1);}
t2=C_mutate((C_word*)lf[42]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1213,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2574,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 238  getter-with-setter */
t5=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,*((C_word*)lf[35]+1));}

/* a2573 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2574(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2574,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub248(t3,t4));}

/* k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1213,2,t0,t1);}
t2=C_mutate((C_word*)lf[43]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1217,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2564,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 243  getter-with-setter */
t5=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,*((C_word*)lf[36]+1));}

/* a2563 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2564(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2564,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub255(t3,t4));}

/* k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1217(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1217,2,t0,t1);}
t2=C_mutate((C_word*)lf[44]+1,t1);
t3=C_mutate((C_word*)lf[45]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1219,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[48]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1234,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1250,tmp=(C_word)a,a+=2,tmp));
t6=(C_word)C_a_i_vector(&a,1,lf[51]);
t7=C_mutate(&lf[52],t6);
t8=C_mutate((C_word*)lf[53]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1272,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[55]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1304,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[57]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1335,tmp=(C_word)a,a+=2,tmp));
t11=*((C_word*)lf[53]+1);
t12=C_mutate((C_word*)lf[58]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1369,a[2]=t11,tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[60]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1384,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1390,tmp=(C_word)a,a+=2,tmp));
t15=*((C_word*)lf[61]+1);
t16=C_mutate((C_word*)lf[62]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1418,a[2]=t15,tmp=(C_word)a,a+=3,tmp));
t17=*((C_word*)lf[62]+1);
t18=C_mutate((C_word*)lf[64]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1437,a[2]=t17,tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[65]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1476,tmp=(C_word)a,a+=2,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2540,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 346  getter-with-setter */
t22=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t20,t21,*((C_word*)lf[65]+1));}

/* a2539 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2540,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t2);
t5=(C_word)C_fixnum_lessp(t3,C_fix(0));
t6=(C_truep(t5)?t5:(C_word)C_fixnum_greater_or_equal_p(t3,t4));
if(C_truep(t6)){
/* lolevel.scm: 352  ##sys#error */
t7=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t1,lf[67],lf[145],t2,t3);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_subbyte(t2,t3));}}

/* k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1502(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1502,2,t0,t1);}
t2=C_mutate((C_word*)lf[67]+1,t1);
t3=C_mutate((C_word*)lf[68]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1504,tmp=(C_word)a,a+=2,tmp));
t4=*((C_word*)lf[62]+1);
t5=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1537,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[62]+1);
t7=C_mutate((C_word*)lf[71]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1584,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[72]+1);
t9=C_mutate((C_word*)lf[73]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1593,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1602,tmp=(C_word)a,a+=2,tmp));
t11=*((C_word*)lf[61]+1);
t12=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1607,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1610,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t14=C_mutate((C_word*)lf[79]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1644,a[2]=t12,a[3]=t13,tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[80]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1650,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[83]+1,*((C_word*)lf[84]+1));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1665,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 436  getter-with-setter */
t18=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t17,*((C_word*)lf[144]+1),*((C_word*)lf[84]+1));}

/* k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1665(C_word c,C_word t0,C_word t1){
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
C_word ab[51],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1665,2,t0,t1);}
t2=C_mutate((C_word*)lf[85]+1,t1);
t3=C_mutate((C_word*)lf[86]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1667,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[88]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1688,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[90]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1710,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[92]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1716,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[93]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1722,tmp=(C_word)a,a+=2,tmp));
t8=*((C_word*)lf[96]+1);
t9=C_mutate((C_word*)lf[97]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1776,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[98]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1857,tmp=(C_word)a,a+=2,tmp));
t11=*((C_word*)lf[99]+1);
t12=*((C_word*)lf[100]+1);
t13=*((C_word*)lf[101]+1);
t14=C_mutate((C_word*)lf[102]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1860,a[2]=t11,a[3]=t12,a[4]=t13,tmp=(C_word)a,a+=5,tmp));
t15=C_mutate((C_word*)lf[104]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1967,tmp=(C_word)a,a+=2,tmp));
t16=*((C_word*)lf[99]+1);
t17=*((C_word*)lf[100]+1);
t18=*((C_word*)lf[26]+1);
t19=*((C_word*)lf[101]+1);
t20=C_mutate((C_word*)lf[105]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2049,a[2]=t16,a[3]=t17,a[4]=t18,a[5]=t19,tmp=(C_word)a,a+=6,tmp));
t21=*((C_word*)lf[99]+1);
t22=*((C_word*)lf[100]+1);
t23=*((C_word*)lf[26]+1);
t24=*((C_word*)lf[101]+1);
t25=C_mutate((C_word*)lf[117]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2203,a[2]=t21,a[3]=t22,a[4]=t23,a[5]=t24,tmp=(C_word)a,a+=6,tmp));
t26=*((C_word*)lf[96]+1);
t27=*((C_word*)lf[99]+1);
t28=*((C_word*)lf[101]+1);
t29=*((C_word*)lf[100]+1);
t30=C_mutate((C_word*)lf[118]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2287,a[2]=t27,a[3]=t29,a[4]=t26,a[5]=t28,tmp=(C_word)a,a+=6,tmp));
t31=C_mutate((C_word*)lf[120]+1,*((C_word*)lf[121]+1));
t32=C_mutate((C_word*)lf[122]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2416,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[124]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2438,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate((C_word*)lf[125]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2460,tmp=(C_word)a,a+=2,tmp));
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2465,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t36=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)C_locative_ref,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 679  getter-with-setter */
t37=*((C_word*)lf[143]+1);
((C_proc4)(void*)(*((C_word*)t37+1)))(4,t37,t35,t36,*((C_word*)lf[125]+1));}

/* k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2465(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2465,2,t0,t1);}
t2=C_mutate((C_word*)lf[126]+1,t1);
t3=C_mutate((C_word*)lf[127]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2467,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[128]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2470,tmp=(C_word)a,a+=2,tmp));
t5=lf[129]=C_SCHEME_FALSE;;
t6=C_mutate((C_word*)lf[130]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2477,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[134]+1,*((C_word*)lf[130]+1));
t8=C_mutate((C_word*)lf[135]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2497,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[137]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2514,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[138]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2517,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[139]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2523,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[141]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2529,tmp=(C_word)a,a+=2,tmp));
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_UNDEFINED);}

/* global-make-unbound! in k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2529,3,t0,t1,t2);}
t3=(C_word)C_slot(lf[142],C_fix(0));
t4=(C_word)C_i_setslot(t2,C_fix(0),t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* global-bound? in k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2523,3,t0,t1,t2);}
/* lolevel.scm: 716  ##sys#symbol-has-toplevel-binding? */
t3=*((C_word*)lf[140]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* global-set! in k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2517(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2517,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(t2,C_fix(0),t3));}

/* global-ref in k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2514,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_retrieve(t2));}

/* unbound-variable-value in k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2rv,(void*)f_2497r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_2497r(t0,t1,t2);}}

static void C_ccall f_2497r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2502,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_notvemptyp(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=t3;
f_2502(t5,(C_word)C_a_i_vector(&a,1,t4));}
else{
t4=t3;
f_2502(t4,C_SCHEME_FALSE);}}

/* k2500 in unbound-variable-value in k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_2502(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[136]+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* set-invalid-procedure-call-handler! in k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2477,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2481,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_closurep(t2))){
t4=t3;
f_2481(2,t4,C_SCHEME_UNDEFINED);}
else{
/* lolevel.scm: 690  ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[7],lf[130],lf[133],t2);}}

/* k2479 in set-invalid-procedure-call-handler! in k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2481,2,t0,t1);}
t2=C_mutate(&lf[129],((C_word*)t0)[3]);
t3=C_mutate((C_word*)lf[131]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2484,tmp=(C_word)a,a+=2,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* ##sys#invalid-procedure-call-hook in k2479 in set-invalid-procedure-call-handler! in k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2484r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2484r(t0,t1,t2);}}

static void C_ccall f_2484r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* lolevel.scm: 694  ipc-hook-0 */
t3=lf[129];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,*((C_word*)lf[132]+1),t2);}

/* locative? in k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2470(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2470,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep((C_word)C_blockp(t2))?(C_word)C_locativep(t2):C_SCHEME_FALSE));}

/* locative->object in k2463 in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2467(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2467,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_locative_to_object(t2));}

/* locative-set! in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2460,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_locative_set(t2,t3));}

/* make-weak-locative in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2438r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2438r(t0,t1,t2,t3);}}

static void C_ccall f_2438r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?C_fix(0):(C_word)C_slot(t3,C_fix(0)));
/* lolevel.scm: 676  ##sys#make-locative */
t6=*((C_word*)lf[123]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t2,t5,C_SCHEME_TRUE,lf[124]);}

/* make-locative in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2416r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2416r(t0,t1,t2,t3);}}

static void C_ccall f_2416r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?C_fix(0):(C_word)C_slot(t3,C_fix(0)));
/* lolevel.scm: 673  ##sys#make-locative */
t6=*((C_word*)lf[123]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,t2,t5,C_SCHEME_FALSE,lf[122]);}

/* object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2287(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2287r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2287r(t0,t1,t2,t3);}}

static void C_ccall f_2287r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:(C_word)C_slot(t3,C_fix(0)));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2300,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 623  make-hash-table */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,*((C_word*)lf[103]+1));}

/* k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2300,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2305,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2305(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* copy in k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_2305(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2305,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_permanentp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2321,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* lolevel.scm: 627  hash-table-ref/default */
t4=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[5],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2319 in copy in k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2321,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[7]))){
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[7]);
/* lolevel.scm: 630  ##sys#make-string */
t4=*((C_word*)lf[119]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[7]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2350,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
/* lolevel.scm: 635  ##sys#intern-symbol */
C_string_to_symbol(3,0,t2,t3);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2364,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 640  make-vector */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}}}}

/* k2362 in k2319 in copy in k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2364,2,t0,t1);}
t2=(C_word)C_copy_block(((C_word*)t0)[7],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 641  hash-table-set! */
t4=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],((C_word*)t0)[7],t2);}

/* k2365 in k2362 in k2319 in copy in k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2370,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep((C_word)C_specialp(((C_word*)t0)[4]))?C_fix(1):C_fix(0));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2376,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2376(t7,t2,t3);}

/* do525 in k2365 in k2362 in k2319 in copy in k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_2376(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2376,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2397,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm: 644  copy */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2305(t5,t3,t4);}}

/* k2395 in do525 in k2365 in k2362 in k2319 in copy in k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2376(t4,((C_word*)t0)[2],t3);}

/* k2368 in k2365 in k2362 in k2319 in copy in k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2348 in k2319 in copy in k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2353,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 636  hash-table-set! */
t3=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2351 in k2348 in k2319 in copy in k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2332 in k2319 in copy in k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2334,2,t0,t1);}
t2=(C_word)C_copy_block(((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2337,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 631  hash-table-set! */
t4=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],((C_word*)t0)[5],t2);}

/* k2335 in k2332 in k2319 in copy in k2298 in object-unevict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* object-size in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2203(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2203,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2207,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 596  make-hash-table */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[103]+1));}

/* k2205 in object-size in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2207,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2212,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2212(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* evict in k2205 in object-size in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_2212(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2212,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2225,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 599  hash-table-ref/default */
t4=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fix(0));}}

/* k2223 in evict in k2205 in object-size in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2225,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(C_word)C_block_size(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2282,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[6]))){
/* lolevel.scm: 603  align-to-word */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
t4=t3;
f_2282(2,t4,(C_word)C_bytes(t2));}}}

/* k2280 in k2223 in evict in k2205 in object-size in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2282,2,t0,t1);}
t2=(C_word)C_u_fixnum_plus(t1,(C_word)C_bytes(C_fix(1)));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2234,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 605  hash-table-set! */
t6=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[2],((C_word*)t0)[6],C_SCHEME_TRUE);}

/* k2232 in k2280 in k2223 in evict in k2205 in object-size in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2234(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2237,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[4]))){
t3=t2;
f_2237(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_specialp(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:(C_word)C_i_symbolp(((C_word*)t0)[4]));
t5=(C_truep(t4)?C_fix(1):C_fix(0));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t7,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_2246(t9,t2,t5);}}

/* do492 in k2232 in k2280 in k2223 in evict in k2205 in object-size in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_2246(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2246,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2268,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 612  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2212(t5,t3,t4);}}

/* k2266 in do492 in k2232 in k2280 in k2223 in evict in k2205 in object-size in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_u_fixnum_plus(t1,((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_2246(t5,((C_word*)t0)[2],t4);}

/* k2235 in k2232 in k2280 in k2223 in evict in k2205 in object-size in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2049r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2049r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2049r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(14);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):C_SCHEME_FALSE);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2056,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t8,a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2195,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 555  ##sys#pointer->address */
t11=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t3);}

/* k2193 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 555  ##sys#address->pointer */
t2=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2056,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2059,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* lolevel.scm: 556  make-hash-table */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[103]+1));}

/* k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2062,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2067,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_2067(t6,t2,((C_word*)t0)[2]);}

/* evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_2067(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2067,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2077,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm: 560  hash-table-ref/default */
t4=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[5],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2077,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[8]))){
/* lolevel.scm: 564  align-to-word */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
t4=t3;
f_2188(2,t4,(C_word)C_bytes(t2));}}}

/* k2186 in k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2188,2,t0,t1);}
t2=(C_word)C_u_fixnum_plus(t1,(C_word)C_bytes(C_fix(1)));
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2089,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=(C_word)C_u_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2172,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2176,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_a_i_list(&a,2,((C_word*)t0)[9],((C_word*)((C_word*)t0)[2])[1]);
/* lolevel.scm: 571  make-property-condition */
t9=*((C_word*)lf[109]+1);
((C_proc9)(void*)(*((C_word*)t9+1)))(9,t9,t7,lf[112],lf[113],lf[105],lf[114],lf[115],lf[116],t8);}
else{
t6=t3;
f_2089(2,t6,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2089(2,t4,C_SCHEME_UNDEFINED);}}

/* k2174 in k2186 in k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2180,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 575  make-property-condition */
t3=*((C_word*)lf[109]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[110],lf[111],((C_word*)((C_word*)t0)[2])[1]);}

/* k2178 in k2174 in k2186 in k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 570  make-composite-condition */
t2=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2170 in k2186 in k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 569  signal */
t2=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2087 in k2186 in k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2089(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2089,2,t0,t1);}
t2=(C_word)C_evict_block(((C_word*)t0)[9],((C_word*)t0)[8]);
t3=(C_word)C_i_symbolp(((C_word*)t0)[9]);
t4=(C_truep(t3)?(C_word)C_i_set_i_slot(t2,C_fix(0),C_SCHEME_UNDEFINED):C_SCHEME_UNDEFINED);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2095,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2149,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 578  ##sys#pointer->address */
t7=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[8]);}

/* k2147 in k2087 in k2186 in k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2149,2,t0,t1);}
t2=(C_word)C_a_i_plus(&a,2,t1,((C_word*)t0)[4]);
/* lolevel.scm: 578  ##sys#set-pointer-address! */
t3=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2093 in k2087 in k2186 in k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2098,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 579  hash-table-set! */
t3=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k2096 in k2093 in k2087 in k2186 in k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2098(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2101,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[4]))){
t3=t2;
f_2101(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_specialp(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:(C_word)C_i_symbolp(((C_word*)t0)[4]));
t5=(C_truep(t4)?C_fix(1):C_fix(0));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t7,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_2110(t9,t2,t5);}}

/* do469 in k2096 in k2093 in k2087 in k2186 in k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_2110(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2110,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2131,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 586  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2067(t5,t3,t4);}}

/* k2129 in do469 in k2096 in k2093 in k2087 in k2186 in k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2110(t4,((C_word*)t0)[2],t3);}

/* k2099 in k2096 in k2093 in k2087 in k2186 in k2075 in evict in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2060 in k2057 in k2054 in object-evict-to-location in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 588  values */
C_values(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* object-release in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1967(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1967r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1967r(t0,t1,t2,t3);}}

static void C_ccall f_1967r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(8);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2039,tmp=(C_word)a,a+=2,tmp));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1976,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1976(t9,t1,t2);}

/* release in object-release in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_1976(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1976,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_permanentp(t2))){
t3=(C_word)C_block_size(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1995,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_byteblockp(t2))){
t5=t4;
f_1995(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(C_truep((C_word)C_specialp(t2))?C_fix(1):C_fix(0));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2011,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t7,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_2011(t9,t4,t5);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* do442 in release in object-release in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_2011(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2011,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2021,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 535  release */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1976(t5,t3,t4);}}

/* k2019 in do442 in release in object-release in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2011(t3,((C_word*)t0)[2],t2);}

/* k1993 in release in object-release in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1995,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2002,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 536  ##sys#address->pointer */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,(C_word)C_block_address(&a,1,((C_word*)t0)[2]));}

/* k2000 in k1993 in release in object-release in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 536  free */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* f_2039 in object-release in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_2039(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2039,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub434(C_SCHEME_UNDEFINED,t3));}

/* object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1860(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1860r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1860r(t0,t1,t2,t3);}}

static void C_ccall f_1860r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(9);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1964,tmp=(C_word)a,a+=2,tmp));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1867,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 505  make-hash-table */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,*((C_word*)lf[103]+1));}

/* k1865 in object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1867,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1872,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1872(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* evict in k1865 in object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_1872(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1872,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 508  hash-table-ref/default */
t4=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[4],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1880 in evict in k1865 in object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1882,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[6]))){
/* lolevel.scm: 511  align-to-word */
t4=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}
else{
t4=t3;
f_1891(2,t4,(C_word)C_bytes(t2));}}}

/* k1889 in k1880 in evict in k1865 in object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1895,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_u_fixnum_plus(t1,(C_word)C_bytes(C_fix(1)));
/* lolevel.scm: 512  allocator */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k1893 in k1889 in k1880 in evict in k1865 in object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1895,2,t0,t1);}
t2=(C_word)C_evict_block(((C_word*)t0)[7],t1);
t3=(C_word)C_i_symbolp(((C_word*)t0)[7]);
t4=(C_truep(t3)?(C_word)C_i_set_i_slot(t2,C_fix(0),C_SCHEME_UNDEFINED):C_SCHEME_UNDEFINED);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1901,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 514  hash-table-set! */
t6=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,((C_word*)t0)[2],((C_word*)t0)[7],t2);}

/* k1899 in k1893 in k1889 in k1880 in evict in k1865 in object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1901(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1904,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[4]))){
t3=t2;
f_1904(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_specialp(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:(C_word)C_i_symbolp(((C_word*)t0)[4]));
t5=(C_truep(t4)?C_fix(1):C_fix(0));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t7,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_1913(t9,t2,t5);}}

/* do419 in k1899 in k1893 in k1889 in k1880 in evict in k1865 in object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_1913(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1913,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1934,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 519  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1872(t5,t3,t4);}}

/* k1932 in do419 in k1899 in k1893 in k1889 in k1880 in evict in k1865 in object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1913(t4,((C_word*)t0)[2],t3);}

/* k1902 in k1899 in k1893 in k1889 in k1880 in evict in k1865 in object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_1964 in object-evict in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1964(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1964,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub408(t3,t2));}

/* object-evicted? in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1857,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_permanentp(t2));}

/* object-copy in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1776(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1776,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1782,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1782(t6,t1,t2);}

/* copy in object-copy in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_1782(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1782,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(C_word)C_slot(t2,C_fix(1));
/* lolevel.scm: 480  ##sys#intern-symbol */
C_string_to_symbol(3,0,t1,t3);}
else{
t3=(C_word)C_block_size(t2);
t4=(C_truep((C_word)C_byteblockp(t2))?(C_word)C_words(t3):t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1812,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 484  make-vector */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1810 in copy in object-copy in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1812(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1812,2,t0,t1);}
t2=(C_word)C_copy_block(((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1815,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_byteblockp(((C_word*)t0)[5]);
t5=(C_truep(t4)?t4:(C_word)C_i_symbolp(((C_word*)t0)[5]));
if(C_truep(t5)){
t6=t3;
f_1815(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(C_truep((C_word)C_specialp(((C_word*)t0)[5]))?C_fix(1):C_fix(0));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1827,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_1827(t10,t3,t6);}}

/* do392 in k1810 in copy in object-copy in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_1827(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1827,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1848,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm: 488  copy */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1782(t5,t3,t4);}}

/* k1846 in do392 in k1810 in copy in object-copy in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1827(t4,((C_word*)t0)[2],t3);}

/* k1813 in k1810 in copy in object-copy in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* record->vector in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1722(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1722,3,t0,t1,t2);}
t3=(C_word)C_immp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_structurep(t2));
if(C_truep(t4)){
t5=(C_word)C_block_size(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1735,a[2]=t1,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 466  ##sys#make-vector */
t7=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
/* lolevel.scm: 470  ##sys#signal-hook */
t5=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,lf[7],lf[93],lf[95],t2);}}

/* k1733 in record->vector in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1740,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1740(t2,C_fix(0)));}

/* do378 in k1733 in record->vector in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static C_word C_fcall f_1740(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[2],t1);
t3=(C_word)C_i_setslot(((C_word*)t0)[3],t1,t2);
t4=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}

/* record-instance? in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1716(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1716,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep((C_word)C_blockp(t2))?(C_word)C_structurep(t2):C_SCHEME_FALSE));}

/* make-record-instance in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1710(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1710r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1710r(t0,t1,t2,t3);}}

static void C_ccall f_1710r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_apply(5,0,t1,*((C_word*)lf[91]+1),t2,t3);}

/* number-of-bytes in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1688(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1688,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_byteblockp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_block_size(t2));}
else{
t3=(C_word)C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_w2b(t3));}}
else{
/* lolevel.scm: 448  ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,lf[7],lf[88],lf[89],t2);}}

/* number-of-slots in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1667(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1667,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1671,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_not((C_word)C_blockp(t2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1680,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_1680(t6,t4);}
else{
t6=(C_word)C_specialp(t2);
t7=t5;
f_1680(t7,(C_truep(t6)?t6:(C_word)C_byteblockp(t2)));}}

/* k1678 in number-of-slots in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_1680(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* lolevel.scm: 443  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[7],lf[86],lf[87],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_1671(2,t2,C_SCHEME_UNDEFINED);}}

/* k1669 in number-of-slots in k1663 in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_block_size(((C_word*)t0)[2]));}

/* static-byte-vector->pointer in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1650(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1650,3,t0,t1,t2);}
if(C_truep((C_word)C_permanentp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1657,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 427  ##sys#make-pointer */
t4=*((C_word*)lf[81]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* lolevel.scm: 430  ##sys#error */
t3=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[80],lf[82],t2);}}

/* k1655 in static-byte-vector->pointer in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_pointer_to_block(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* make-static-byte-vector in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1644(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1644r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1644r(t0,t1,t2,t3);}}

static void C_ccall f_1644r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* lolevel.scm: 421  make */
t4=((C_word*)t0)[3];
f_1610(t4,t1,t2,t3,((C_word*)t0)[2],lf[79]);}

/* make in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_1610(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1610,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix((C_word)C_HEADER_SIZE_MASK)))){
/* lolevel.scm: 415  ##sys#signal-hook */
t6=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,t1,lf[75],t5,lf[76],t2,C_fix((C_word)C_HEADER_SIZE_MASK));}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1623,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 416  alloc */
t7=t4;
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}}

/* k1621 in make in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1623,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1629,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(0));
/* lolevel.scm: 418  byte-vector-fill! */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t1,t3);}
else{
t3=t2;
f_1629(2,t3,C_SCHEME_UNDEFINED);}}
else{
/* lolevel.scm: 420  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],lf[77],lf[78],((C_word*)t0)[2]);}}

/* k1627 in k1621 in make in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* malloc in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1607(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1607,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub349(C_SCHEME_UNDEFINED,t2));}

/* byte-vector-length in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1602,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_block_size(t2));}

/* byte-vector->string in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1593(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1593,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1600,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 394  make-string */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k1598 in byte-vector->string in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_copy_memory(t1,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* string->byte-vector in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1584(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1584,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1591,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 385  make-byte-vector */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k1589 in string->byte-vector in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_copy_memory(t1,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* list->byte-vector in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1537,3,t0,t1,t2);}
t3=(C_word)C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1544,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 370  make-byte-vector */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k1542 in list->byte-vector in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1544,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1549,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1549(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* do328 in k1542 in list->byte-vector in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_1549(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1549,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1559,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_slot(t2,C_fix(0));
t7=t5;
f_1559(2,t7,(C_word)C_setbyte(((C_word*)t0)[4],t3,t6));}
else{
/* lolevel.scm: 378  ##sys#not-a-proper-list-error */
t6=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}}}

/* k1557 in do328 in k1542 in list->byte-vector in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1549(t4,((C_word*)t0)[2],t2,t3);}

/* byte-vector->list in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1504(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1504,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1513,a[2]=t5,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1513(t7,t1,C_fix(0));}

/* loop in byte-vector->list in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_fcall f_1513(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1513,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_subbyte(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1531,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_u_fixnum_plus(t2,C_fix(1));
/* lolevel.scm: 363  loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k1529 in loop in byte-vector->list in k1500 in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1531,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* byte-vector-set! in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1476(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1476,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_block_size(t2);
t6=(C_word)C_fixnum_lessp(t3,C_fix(0));
t7=(C_truep(t6)?t6:(C_word)C_fixnum_greater_or_equal_p(t3,t5));
if(C_truep(t7)){
/* lolevel.scm: 342  ##sys#error */
t8=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t1,lf[65],lf[66],t2,t3);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_setbyte(t2,t3,t4));}}

/* byte-vector in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1437(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1437r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1437r(t0,t1,t2);}}

static void C_ccall f_1437r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t3=(C_word)C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1444,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 329  make-byte-vector */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k1442 in byte-vector in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1449,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1449(t2,C_fix(0),((C_word*)t0)[2]));}

/* do302 in k1442 in byte-vector in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static C_word C_fcall f_1449(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
loop:
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[3]))){
return(((C_word*)t0)[2]);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_setbyte(((C_word*)t0)[2],t1,t3);
t5=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t6=(C_word)C_slot(t2,C_fix(1));
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}

/* make-byte-vector in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1418r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1418r(t0,t1,t2,t3);}}

static void C_ccall f_1418r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1422,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 320  ##sys#allocate-vector */
t5=*((C_word*)lf[63]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,t2,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k1420 in make-byte-vector in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1422,2,t0,t1);}
t2=(C_word)C_string_to_bytevector(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1425,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_notvemptyp(((C_word*)t0)[3]))){
t4=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
/* lolevel.scm: 322  byte-vector-fill! */
t5=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t1,t4);}
else{
t4=t3;
f_1425(2,t4,C_SCHEME_UNDEFINED);}}

/* k1423 in k1420 in make-byte-vector in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* byte-vector-fill! in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1390(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1390,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1399,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_1399(t5,C_fix(0)));}

/* do287 in byte-vector-fill! in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static C_word C_fcall f_1399(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
loop:
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(C_SCHEME_UNDEFINED);}
else{
t2=(C_word)C_setbyte(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t3=(C_word)C_u_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* byte-vector? in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1384,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep((C_word)C_blockp(t2))?(C_word)C_bytevectorp(t2):C_SCHEME_FALSE));}

/* set-procedure-data! in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1369,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1373,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 296  extend-procedure */
t5=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,t3);}

/* k1371 in set-procedure-data! in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(t1,((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[3]);}
else{
/* lolevel.scm: 299  ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],lf[7],lf[58],lf[59],((C_word*)t0)[3]);}}

/* procedure-data in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1335(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1335,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1345,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1353,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 290  ##sys#lambda-decoration */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a1352 in procedure-data in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1353(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1353,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[52],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1343 in procedure-data in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_slot(t1,C_fix(1)):C_SCHEME_FALSE));}

/* extended-procedure? in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1304(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1304,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1317,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1319,tmp=(C_word)a,a+=2,tmp);
/* lolevel.scm: 284  ##sys#lambda-decoration */
t5=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a1318 in extended-procedure? in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1319(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1319,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[52],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1315 in extended-procedure? in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* extend-procedure in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1272,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1278,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1294,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 274  ##sys#decorate-lambda */
t6=*((C_word*)lf[54]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,t4,t5);}

/* a1293 in extend-procedure in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1294(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1294,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,lf[52],((C_word*)t0)[2]);
t5=(C_word)C_i_setslot(t2,t3,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}

/* a1277 in extend-procedure in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1278(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1278,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[52],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* pointer-tag in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1250,3,t0,t1,t2);}
t3=(C_truep((C_word)C_blockp(t2))?(C_word)C_specialp(t2):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep((C_word)C_taggedpointerp(t2))?(C_word)C_slot(t2,C_fix(1)):C_SCHEME_FALSE));}
else{
/* lolevel.scm: 263  ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[7],lf[45],lf[50],t2);}}

/* tagged-pointer? in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1234,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_taggedpointerp(t2))){
t4=(C_word)C_slot(t2,C_fix(1));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_equalp(t3,t4));}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* tag-pointer in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1219,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1223,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 248  ##sys#make-tagged-pointer */
t5=*((C_word*)lf[47]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k1221 in tag-pointer in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1226,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep((C_word)C_blockp(((C_word*)t0)[2]))?(C_word)C_specialp(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t2;
f_1226(2,t4,(C_word)C_copy_pointer(((C_word*)t0)[2],t1));}
else{
/* lolevel.scm: 251  ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[7],lf[45],lf[46],((C_word*)t0)[2]);}}

/* k1224 in k1221 in tag-pointer in k1215 in k1211 in k1207 in k1203 in k1199 in k1195 in k1191 in k1187 in k647 in k644 */
static void C_ccall f_1226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* pointer-f64-set! in k647 in k644 */
static void C_ccall f_1177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1177,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub203(C_SCHEME_UNDEFINED,t4,t3));}

/* pointer-f32-set! in k647 in k644 */
static void C_ccall f_1167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1167,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub195(C_SCHEME_UNDEFINED,t4,t3));}

/* pointer-s32-set! in k647 in k644 */
static void C_ccall f_1157(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1157,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub187(C_SCHEME_UNDEFINED,t4,t3));}

/* pointer-u32-set! in k647 in k644 */
static void C_ccall f_1147(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1147,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub179(C_SCHEME_UNDEFINED,t4,t3));}

/* pointer-s16-set! in k647 in k644 */
static void C_ccall f_1137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1137,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub171(C_SCHEME_UNDEFINED,t4,t3));}

/* pointer-u16-set! in k647 in k644 */
static void C_ccall f_1127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1127,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub163(C_SCHEME_UNDEFINED,t4,t3));}

/* pointer-s8-set! in k647 in k644 */
static void C_ccall f_1117(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1117,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub155(C_SCHEME_UNDEFINED,t4,t3));}

/* pointer-u8-set! in k647 in k644 */
static void C_ccall f_1107(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1107,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub147(C_SCHEME_UNDEFINED,t4,t3));}

/* pointer-offset in k647 in k644 */
static void C_ccall f_1097(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1097,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub138(t4,t5,t3));}

/* align-to-word in k647 in k644 */
static void C_ccall f_1065(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1065,3,t0,t1,t2);}
if(C_truep((C_word)C_i_numberp(t2))){
/* lolevel.scm: 189  align */
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1063(C_a_i(&a,6),t2));}
else{
t3=(C_truep((C_word)C_blockp(t2))?(C_word)C_specialp(t2):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1092,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 191  ##sys#pointer->address */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
/* lolevel.scm: 192  ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[7],lf[26],lf[27],t2);}}}

/* k1090 in align-to-word in k647 in k644 */
static void C_ccall f_1092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1092,2,t0,t1);}
t2=f_1063(C_a_i(&a,6),t1);
/* lolevel.scm: 191  ##sys#address->pointer */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* align in k647 in k644 */
static C_word C_fcall f_1063(C_word *a,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
return((C_word)stub131(t2,t1));}

/* free in k647 in k644 */
static void C_ccall f_1053(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1053,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub124(C_SCHEME_UNDEFINED,t3));}

/* allocate in k647 in k644 */
static void C_ccall f_1050(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1050,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub119(t3,t2));}

/* pointer=? in k647 in k644 */
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1047,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_pointer_eqp(t2,t3));}

/* pointer->object in k647 in k644 */
static void C_ccall f_1041(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1041,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1045,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 175  ##sys#check-pointer */
t4=*((C_word*)lf[11]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[22]);}

/* k1043 in pointer->object in k647 in k644 */
static void C_ccall f_1045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_pointer_to_object(((C_word*)t0)[2]));}

/* object->pointer in k647 in k644 */
static void C_ccall f_1030(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1030,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1038,tmp=(C_word)a,a+=2,tmp);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_1038 in object->pointer in k647 in k644 */
static void C_ccall f_1038(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1038,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub110(t3,t2));}

/* null-pointer? in k647 in k644 */
static void C_ccall f_1020(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1020,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1028,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 166  ##sys#pointer->address */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1026 in null-pointer? in k647 in k644 */
static void C_ccall f_1028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(C_fix(0),t1));}

/* pointer->address in k647 in k644 */
static void C_ccall f_1014(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1014,3,t0,t1,t2);}
/* lolevel.scm: 162  ##sys#pointer->address */
t3=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* address->pointer in k647 in k644 */
static void C_ccall f_1008(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1008,3,t0,t1,t2);}
/* lolevel.scm: 158  ##sys#address->pointer */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* pointer? in k647 in k644 */
static void C_ccall f_999(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_999,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(C_word)C_pointerp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:(C_word)C_taggedpointerp(t2)));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* ##sys#check-pointer in k647 in k644 */
static void C_ccall f_980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_980,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_987,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_blockp(t2))){
t5=(C_word)C_pointerp(t2);
if(C_truep(t5)){
t6=t4;
f_987(t6,t5);}
else{
t6=(C_word)C_swigpointerp(t2);
t7=t4;
f_987(t7,(C_truep(t6)?t6:(C_word)C_taggedpointerp(t2)));}}
else{
t5=t4;
f_987(t5,C_SCHEME_FALSE);}}

/* k985 in ##sys#check-pointer in k647 in k644 */
static void C_fcall f_987(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* lolevel.scm: 143  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[7],((C_word*)t0)[3],lf[12],((C_word*)t0)[2]);}}

/* move-memory! in k647 in k644 */
static void C_ccall f_703(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr4r,(void*)f_703r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_703r(t0,t1,t2,t3,t4);}}

static void C_ccall f_703r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(18);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_706,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_712,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_718,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_739,a[2]=t7,a[3]=t5,a[4]=t4,a[5]=t6,a[6]=t9,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_739(t11,t1,t2,t3);}

/* move in move-memory! in k647 in k644 */
static void C_fcall f_739(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(9);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_739,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_structurep(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
if(C_truep((C_word)C_u_i_memq(t4,((C_word*)t0)[7]))){
t5=(C_word)C_slot(t2,C_fix(1));
/* lolevel.scm: 115  move */
t11=t1;
t12=t5;
t13=t3;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
/* lolevel.scm: 116  xerr */
f_712(t1,t2);}}
else{
if(C_truep((C_word)C_structurep(t3))){
t4=(C_word)C_slot(t3,C_fix(0));
if(C_truep((C_word)C_u_i_memq(t4,((C_word*)t0)[7]))){
t5=(C_word)C_slot(t3,C_fix(1));
/* lolevel.scm: 119  move */
t11=t1;
t12=t2;
t13=t5;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
/* lolevel.scm: 120  xerr */
f_712(t1,t3);}}
else{
t4=(C_word)C_pointerp(t2);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_801,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=t5;
f_801(2,t6,t4);}
else{
/* lolevel.scm: 121  ##sys#locative? */
t6=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}}}

/* k799 in move in move-memory! in k647 in k644 */
static void C_ccall f_801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_801,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_pointerp(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_810,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=t3;
f_810(2,t4,t2);}
else{
/* lolevel.scm: 122  ##sys#locative? */
t4=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[8]);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 126  ##sys#bytevector? */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}}

/* k884 in k799 in move in move-memory! in k647 in k644 */
static void C_ccall f_886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_886,2,t0,t1);}
t2=(C_truep(t1)?t1:(C_word)C_i_stringp(((C_word*)t0)[7]));
if(C_truep(t2)){
t3=(C_word)C_block_size(((C_word*)t0)[7]);
t4=(C_word)C_pointerp(((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=t5;
f_901(2,t6,t4);}
else{
/* lolevel.scm: 128  ##sys#locative? */
t6=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[6]);}}
else{
/* lolevel.scm: 133  xerr */
f_712(((C_word*)t0)[3],((C_word*)t0)[7]);}}

/* k899 in k884 in k799 in move in move-memory! in k647 in k644 */
static void C_ccall f_901(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_901,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?((C_word*)t0)[7]:(C_word)C_u_i_car(t2));
t5=f_718(t4);
t6=((C_word*)t0)[5];
t7=((C_word*)t0)[4];
t8=((C_word*)t0)[3];
t9=(C_truep(t7)?(C_word)C_i_foreign_pointer_argumentp(t7):C_SCHEME_FALSE);
t10=(C_truep(t8)?t8:C_SCHEME_FALSE);
t11=t6;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)stub20(C_SCHEME_UNDEFINED,t9,t10,t5));}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 130  ##sys#bytevector? */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}}

/* k928 in k899 in k884 in k799 in move in move-memory! in k647 in k644 */
static void C_ccall f_930(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=(C_truep(t1)?t1:(C_word)C_i_stringp(((C_word*)t0)[7]));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?((C_word*)t0)[5]:(C_word)C_u_i_car(t3));
t6=(C_word)C_block_size(((C_word*)t0)[7]);
t7=((C_word*)t0)[4];
t8=((C_word*)t0)[7];
t9=((C_word*)t0)[3];
t10=(C_truep(t8)?t8:C_SCHEME_FALSE);
t11=(C_truep(t9)?t9:C_SCHEME_FALSE);
t12=t7;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)stub44(C_SCHEME_UNDEFINED,t10,t11,t5));}
else{
/* lolevel.scm: 132  xerr */
f_712(((C_word*)t0)[4],((C_word*)t0)[7]);}}

/* k808 in k799 in move in move-memory! in k647 in k644 */
static void C_ccall f_810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_810,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_817,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* lolevel.scm: 122  err */
t4=((C_word*)t0)[4];
f_706(t4,t3);}
else{
t4=t3;
f_817(2,t4,(C_word)C_u_i_car(t2));}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* lolevel.scm: 123  ##sys#bytevector? */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}

/* k836 in k808 in k799 in move in move-memory! in k647 in k644 */
static void C_ccall f_838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_838,2,t0,t1);}
t2=(C_truep(t1)?t1:(C_word)C_i_stringp(((C_word*)t0)[8]));
if(C_truep(t2)){
t3=((C_word*)t0)[7];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_852,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* lolevel.scm: 124  err */
t5=((C_word*)t0)[3];
f_706(t5,t4);}
else{
t5=t4;
f_852(2,t5,(C_word)C_u_i_car(t3));}}
else{
/* lolevel.scm: 125  xerr */
f_712(((C_word*)t0)[5],((C_word*)t0)[8]);}}

/* k850 in k836 in k808 in k799 in move in move-memory! in k647 in k644 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
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
t2=(C_word)C_block_size(((C_word*)t0)[5]);
t3=f_718(t1);
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[2];
t7=(C_truep(t5)?t5:C_SCHEME_FALSE);
t8=(C_truep(t6)?(C_word)C_i_foreign_pointer_argumentp(t6):C_SCHEME_FALSE);
t9=t4;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)stub32(C_SCHEME_UNDEFINED,t7,t8,t3));}

/* k815 in k808 in k799 in move in move-memory! in k647 in k644 */
static void C_ccall f_817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=(C_truep(t3)?(C_word)C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?(C_word)C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t7=t2;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)stub8(C_SCHEME_UNDEFINED,t5,t6,t1));}

/* checkn in move-memory! in k647 in k644 */
static C_word C_fcall f_718(C_word t1){
C_word tmp;
C_word t2;
return(t1);}

/* xerr in move-memory! in k647 in k644 */
static void C_fcall f_712(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_712,NULL,2,t1,t2);}
/* lolevel.scm: 103  ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,lf[7],lf[3],lf[8],t2);}

/* err in move-memory! in k647 in k644 */
static void C_fcall f_706(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_706,NULL,2,t0,t1);}
/* lolevel.scm: 102  ##sys#error */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,t1,lf[3],lf[5],((C_word*)t0)[3],((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[196] = {
{"toplevellolevel.scm",(void*)C_lolevel_toplevel},
{"f_646lolevel.scm",(void*)f_646},
{"f_649lolevel.scm",(void*)f_649},
{"f_2634lolevel.scm",(void*)f_2634},
{"f_1189lolevel.scm",(void*)f_1189},
{"f_2624lolevel.scm",(void*)f_2624},
{"f_1193lolevel.scm",(void*)f_1193},
{"f_2614lolevel.scm",(void*)f_2614},
{"f_1197lolevel.scm",(void*)f_1197},
{"f_2604lolevel.scm",(void*)f_2604},
{"f_1201lolevel.scm",(void*)f_1201},
{"f_2594lolevel.scm",(void*)f_2594},
{"f_1205lolevel.scm",(void*)f_1205},
{"f_2584lolevel.scm",(void*)f_2584},
{"f_1209lolevel.scm",(void*)f_1209},
{"f_2574lolevel.scm",(void*)f_2574},
{"f_1213lolevel.scm",(void*)f_1213},
{"f_2564lolevel.scm",(void*)f_2564},
{"f_1217lolevel.scm",(void*)f_1217},
{"f_2540lolevel.scm",(void*)f_2540},
{"f_1502lolevel.scm",(void*)f_1502},
{"f_1665lolevel.scm",(void*)f_1665},
{"f_2465lolevel.scm",(void*)f_2465},
{"f_2529lolevel.scm",(void*)f_2529},
{"f_2523lolevel.scm",(void*)f_2523},
{"f_2517lolevel.scm",(void*)f_2517},
{"f_2514lolevel.scm",(void*)f_2514},
{"f_2497lolevel.scm",(void*)f_2497},
{"f_2502lolevel.scm",(void*)f_2502},
{"f_2477lolevel.scm",(void*)f_2477},
{"f_2481lolevel.scm",(void*)f_2481},
{"f_2484lolevel.scm",(void*)f_2484},
{"f_2470lolevel.scm",(void*)f_2470},
{"f_2467lolevel.scm",(void*)f_2467},
{"f_2460lolevel.scm",(void*)f_2460},
{"f_2438lolevel.scm",(void*)f_2438},
{"f_2416lolevel.scm",(void*)f_2416},
{"f_2287lolevel.scm",(void*)f_2287},
{"f_2300lolevel.scm",(void*)f_2300},
{"f_2305lolevel.scm",(void*)f_2305},
{"f_2321lolevel.scm",(void*)f_2321},
{"f_2364lolevel.scm",(void*)f_2364},
{"f_2367lolevel.scm",(void*)f_2367},
{"f_2376lolevel.scm",(void*)f_2376},
{"f_2397lolevel.scm",(void*)f_2397},
{"f_2370lolevel.scm",(void*)f_2370},
{"f_2350lolevel.scm",(void*)f_2350},
{"f_2353lolevel.scm",(void*)f_2353},
{"f_2334lolevel.scm",(void*)f_2334},
{"f_2337lolevel.scm",(void*)f_2337},
{"f_2203lolevel.scm",(void*)f_2203},
{"f_2207lolevel.scm",(void*)f_2207},
{"f_2212lolevel.scm",(void*)f_2212},
{"f_2225lolevel.scm",(void*)f_2225},
{"f_2282lolevel.scm",(void*)f_2282},
{"f_2234lolevel.scm",(void*)f_2234},
{"f_2246lolevel.scm",(void*)f_2246},
{"f_2268lolevel.scm",(void*)f_2268},
{"f_2237lolevel.scm",(void*)f_2237},
{"f_2049lolevel.scm",(void*)f_2049},
{"f_2195lolevel.scm",(void*)f_2195},
{"f_2056lolevel.scm",(void*)f_2056},
{"f_2059lolevel.scm",(void*)f_2059},
{"f_2067lolevel.scm",(void*)f_2067},
{"f_2077lolevel.scm",(void*)f_2077},
{"f_2188lolevel.scm",(void*)f_2188},
{"f_2176lolevel.scm",(void*)f_2176},
{"f_2180lolevel.scm",(void*)f_2180},
{"f_2172lolevel.scm",(void*)f_2172},
{"f_2089lolevel.scm",(void*)f_2089},
{"f_2149lolevel.scm",(void*)f_2149},
{"f_2095lolevel.scm",(void*)f_2095},
{"f_2098lolevel.scm",(void*)f_2098},
{"f_2110lolevel.scm",(void*)f_2110},
{"f_2131lolevel.scm",(void*)f_2131},
{"f_2101lolevel.scm",(void*)f_2101},
{"f_2062lolevel.scm",(void*)f_2062},
{"f_1967lolevel.scm",(void*)f_1967},
{"f_1976lolevel.scm",(void*)f_1976},
{"f_2011lolevel.scm",(void*)f_2011},
{"f_2021lolevel.scm",(void*)f_2021},
{"f_1995lolevel.scm",(void*)f_1995},
{"f_2002lolevel.scm",(void*)f_2002},
{"f_2039lolevel.scm",(void*)f_2039},
{"f_1860lolevel.scm",(void*)f_1860},
{"f_1867lolevel.scm",(void*)f_1867},
{"f_1872lolevel.scm",(void*)f_1872},
{"f_1882lolevel.scm",(void*)f_1882},
{"f_1891lolevel.scm",(void*)f_1891},
{"f_1895lolevel.scm",(void*)f_1895},
{"f_1901lolevel.scm",(void*)f_1901},
{"f_1913lolevel.scm",(void*)f_1913},
{"f_1934lolevel.scm",(void*)f_1934},
{"f_1904lolevel.scm",(void*)f_1904},
{"f_1964lolevel.scm",(void*)f_1964},
{"f_1857lolevel.scm",(void*)f_1857},
{"f_1776lolevel.scm",(void*)f_1776},
{"f_1782lolevel.scm",(void*)f_1782},
{"f_1812lolevel.scm",(void*)f_1812},
{"f_1827lolevel.scm",(void*)f_1827},
{"f_1848lolevel.scm",(void*)f_1848},
{"f_1815lolevel.scm",(void*)f_1815},
{"f_1722lolevel.scm",(void*)f_1722},
{"f_1735lolevel.scm",(void*)f_1735},
{"f_1740lolevel.scm",(void*)f_1740},
{"f_1716lolevel.scm",(void*)f_1716},
{"f_1710lolevel.scm",(void*)f_1710},
{"f_1688lolevel.scm",(void*)f_1688},
{"f_1667lolevel.scm",(void*)f_1667},
{"f_1680lolevel.scm",(void*)f_1680},
{"f_1671lolevel.scm",(void*)f_1671},
{"f_1650lolevel.scm",(void*)f_1650},
{"f_1657lolevel.scm",(void*)f_1657},
{"f_1644lolevel.scm",(void*)f_1644},
{"f_1610lolevel.scm",(void*)f_1610},
{"f_1623lolevel.scm",(void*)f_1623},
{"f_1629lolevel.scm",(void*)f_1629},
{"f_1607lolevel.scm",(void*)f_1607},
{"f_1602lolevel.scm",(void*)f_1602},
{"f_1593lolevel.scm",(void*)f_1593},
{"f_1600lolevel.scm",(void*)f_1600},
{"f_1584lolevel.scm",(void*)f_1584},
{"f_1591lolevel.scm",(void*)f_1591},
{"f_1537lolevel.scm",(void*)f_1537},
{"f_1544lolevel.scm",(void*)f_1544},
{"f_1549lolevel.scm",(void*)f_1549},
{"f_1559lolevel.scm",(void*)f_1559},
{"f_1504lolevel.scm",(void*)f_1504},
{"f_1513lolevel.scm",(void*)f_1513},
{"f_1531lolevel.scm",(void*)f_1531},
{"f_1476lolevel.scm",(void*)f_1476},
{"f_1437lolevel.scm",(void*)f_1437},
{"f_1444lolevel.scm",(void*)f_1444},
{"f_1449lolevel.scm",(void*)f_1449},
{"f_1418lolevel.scm",(void*)f_1418},
{"f_1422lolevel.scm",(void*)f_1422},
{"f_1425lolevel.scm",(void*)f_1425},
{"f_1390lolevel.scm",(void*)f_1390},
{"f_1399lolevel.scm",(void*)f_1399},
{"f_1384lolevel.scm",(void*)f_1384},
{"f_1369lolevel.scm",(void*)f_1369},
{"f_1373lolevel.scm",(void*)f_1373},
{"f_1335lolevel.scm",(void*)f_1335},
{"f_1353lolevel.scm",(void*)f_1353},
{"f_1345lolevel.scm",(void*)f_1345},
{"f_1304lolevel.scm",(void*)f_1304},
{"f_1319lolevel.scm",(void*)f_1319},
{"f_1317lolevel.scm",(void*)f_1317},
{"f_1272lolevel.scm",(void*)f_1272},
{"f_1294lolevel.scm",(void*)f_1294},
{"f_1278lolevel.scm",(void*)f_1278},
{"f_1250lolevel.scm",(void*)f_1250},
{"f_1234lolevel.scm",(void*)f_1234},
{"f_1219lolevel.scm",(void*)f_1219},
{"f_1223lolevel.scm",(void*)f_1223},
{"f_1226lolevel.scm",(void*)f_1226},
{"f_1177lolevel.scm",(void*)f_1177},
{"f_1167lolevel.scm",(void*)f_1167},
{"f_1157lolevel.scm",(void*)f_1157},
{"f_1147lolevel.scm",(void*)f_1147},
{"f_1137lolevel.scm",(void*)f_1137},
{"f_1127lolevel.scm",(void*)f_1127},
{"f_1117lolevel.scm",(void*)f_1117},
{"f_1107lolevel.scm",(void*)f_1107},
{"f_1097lolevel.scm",(void*)f_1097},
{"f_1065lolevel.scm",(void*)f_1065},
{"f_1092lolevel.scm",(void*)f_1092},
{"f_1063lolevel.scm",(void*)f_1063},
{"f_1053lolevel.scm",(void*)f_1053},
{"f_1050lolevel.scm",(void*)f_1050},
{"f_1047lolevel.scm",(void*)f_1047},
{"f_1041lolevel.scm",(void*)f_1041},
{"f_1045lolevel.scm",(void*)f_1045},
{"f_1030lolevel.scm",(void*)f_1030},
{"f_1038lolevel.scm",(void*)f_1038},
{"f_1020lolevel.scm",(void*)f_1020},
{"f_1028lolevel.scm",(void*)f_1028},
{"f_1014lolevel.scm",(void*)f_1014},
{"f_1008lolevel.scm",(void*)f_1008},
{"f_999lolevel.scm",(void*)f_999},
{"f_980lolevel.scm",(void*)f_980},
{"f_987lolevel.scm",(void*)f_987},
{"f_703lolevel.scm",(void*)f_703},
{"f_739lolevel.scm",(void*)f_739},
{"f_801lolevel.scm",(void*)f_801},
{"f_886lolevel.scm",(void*)f_886},
{"f_901lolevel.scm",(void*)f_901},
{"f_930lolevel.scm",(void*)f_930},
{"f_810lolevel.scm",(void*)f_810},
{"f_838lolevel.scm",(void*)f_838},
{"f_852lolevel.scm",(void*)f_852},
{"f_817lolevel.scm",(void*)f_817},
{"f_718lolevel.scm",(void*)f_718},
{"f_712lolevel.scm",(void*)f_712},
{"f_706lolevel.scm",(void*)f_706},
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
