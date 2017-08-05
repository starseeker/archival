/* Generated from lolevel.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:15
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: lolevel.scm -output-file lolevel.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
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

static C_TLS C_word lf[267];


/* from k2279 */
static C_word C_fcall stub457(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub457(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k2200 */
static C_word C_fcall stub431(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub431(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1830 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub369(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub369(C_word C_buf,C_word C_a0){
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

/* from k2921 */
#define return(x) C_cblock C_r = (C_flonum(&C_a,(x))); goto C_return; C_cblockend
static C_word C_fcall stub260(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub260(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((double *)p));
C_return:
#undef return

return C_r;}

/* from k2931 */
#define return(x) C_cblock C_r = (C_flonum(&C_a,(x))); goto C_return; C_cblockend
static C_word C_fcall stub253(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub253(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((float *)p));
C_return:
#undef return

return C_r;}

/* from k2941 */
#define return(x) C_cblock C_r = (C_int_to_num(&C_a,(x))); goto C_return; C_cblockend
static C_word C_fcall stub246(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub246(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((C_s32 *)p));
C_return:
#undef return

return C_r;}

/* from k2951 */
#define return(x) C_cblock C_r = (C_int_to_num(&C_a,(x))); goto C_return; C_cblockend
static C_word C_fcall stub239(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub239(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((C_u32 *)p));
C_return:
#undef return

return C_r;}

/* from k2961 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub233(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub233(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((short *)p));
C_return:
#undef return

return C_r;}

/* from k2971 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub227(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub227(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((unsigned short *)p));
C_return:
#undef return

return C_r;}

/* from k2981 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub221(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub221(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((char *)p));
C_return:
#undef return

return C_r;}

/* from k2991 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub215(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub215(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((unsigned char *)p));
C_return:
#undef return

return C_r;}

/* from k1358 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub208(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub208(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
float n=(float )C_c_double(C_a1);
*((double *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1344 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub200(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub200(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
double n=(double )C_c_double(C_a1);
*((float *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1330 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub192(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub192(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((C_s32 *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1316 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub184(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub184(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((C_u32 *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1302 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub176(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub176(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((short *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1288 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub168(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub168(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((unsigned short *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1274 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub160(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub160(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((char *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1260 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub152(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub152(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((unsigned char *)p) = n;
C_return:
#undef return

return C_r;}

/* from k1246 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub143(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub143(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ptr=(void * )C_c_pointer_or_null(C_a0);
int off=(int )C_num_to_int(C_a1);
return((unsigned char *)ptr + off);
C_return:
#undef return

return C_r;}

/* from k1204 */
static C_word C_fcall stub136(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub136(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_int_to_num(&C_a,C_align(t0));
return C_r;}

/* from k1194 */
static C_word C_fcall stub129(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub129(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k1187 */
static C_word C_fcall stub124(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub124(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from f_1166 in object->pointer in k688 in k685 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub113(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub113(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word x=(C_word )(C_a0);
return((void *)x);
C_return:
#undef return

return C_r;}

/* from k763 */
static C_word C_fcall stub44(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub44(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_memmove(t0,t1,t2);
return C_r;}

/* from k743 */
static C_word C_fcall stub32(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub32(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_memmove(t0,t1,t2);
return C_r;}

/* from k723 */
static C_word C_fcall stub20(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub20(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_memmove(t0,t1,t2);
return C_r;}

/* from k703 */
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
C_noret_decl(f_687)
static void C_ccall f_687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2978)
static void C_ccall f_2978(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1371)
static void C_ccall f_1371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2958)
static void C_ccall f_2958(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1383)
static void C_ccall f_1383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1387)
static void C_ccall f_1387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1391)
static void C_ccall f_1391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2850)
static void C_ccall f_2850(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2838)
static void C_fcall f_2838(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2813)
static void C_ccall f_2813(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2806)
static void C_ccall f_2806(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2775)
static void C_ccall f_2775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2675)
static void C_ccall f_2675(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2687)
static void C_fcall f_2687(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2558)
static void C_fcall f_2558(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2617)
static void C_ccall f_2617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_fcall f_2629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2603)
static void C_ccall f_2603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2460)
static void C_ccall f_2460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_fcall f_2465(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2499)
static void C_fcall f_2499(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2293)
static void C_fcall f_2293(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2299)
static void C_ccall f_2299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2307)
static void C_fcall f_2307(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2428)
static void C_ccall f_2428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2412)
static void C_ccall f_2412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2350)
static void C_fcall f_2350(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2341)
static void C_ccall f_2341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2204)
static void C_ccall f_2204(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2204)
static void C_ccall f_2204r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2213)
static void C_fcall f_2213(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2248)
static void C_fcall f_2248(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2276)
static void C_ccall f_2276(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2100)
static void C_ccall f_2100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2105)
static void C_fcall f_2105(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2124)
static void C_ccall f_2124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2134)
static void C_ccall f_2134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_fcall f_2146(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2137)
static void C_ccall f_2137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2090)
static void C_ccall f_2090(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2015)
static void C_fcall f_2015(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2045)
static void C_ccall f_2045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2060)
static void C_fcall f_2060(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2081)
static void C_ccall f_2081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2048)
static void C_ccall f_2048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1968)
static void C_ccall f_1968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1973)
static C_word C_fcall f_1973(C_word t0,C_word t1);
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1940)
static void C_ccall f_1940(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1940)
static void C_ccall f_1940r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1897)
static void C_ccall f_1897(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1910)
static void C_fcall f_1910(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1901)
static void C_ccall f_1901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1834)
static void C_fcall f_1834(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1807)
static void C_ccall f_1807(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1742)
static void C_ccall f_1742(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1757)
static void C_fcall f_1757(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1706)
static void C_ccall f_1706(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1718)
static void C_fcall f_1718(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1637)
static void C_ccall f_1637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1642)
static C_word C_fcall f_1642(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_1608)
static void C_ccall f_1608(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1608)
static void C_ccall f_1608r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1615)
static void C_ccall f_1615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1618)
static void C_ccall f_1618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1589)
static C_word C_fcall f_1589(C_word t0,C_word t1);
C_noret_decl(f_1568)
static void C_ccall f_1568(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1529)
static void C_ccall f_1529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1454)
static void C_ccall f_1454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1459)
static void C_ccall f_1459(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1412)
static void C_ccall f_1412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1397)
static void C_ccall f_1397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1401)
static void C_ccall f_1401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1351)
static void C_ccall f_1351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1337)
static void C_ccall f_1337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1309)
static void C_ccall f_1309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1253)
static void C_ccall f_1253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1239)
static void C_ccall f_1239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1207)
static void C_ccall f_1207(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1234)
static void C_ccall f_1234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1201)
static C_word C_fcall f_1201(C_word *a,C_word t0);
C_noret_decl(f_1191)
static void C_ccall f_1191(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1184)
static void C_ccall f_1184(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1169)
static void C_ccall f_1169(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1166)
static void C_ccall f_1166(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1145)
static void C_ccall f_1145(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1117)
static void C_ccall f_1117(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1121)
static void C_ccall f_1121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1108)
static void C_ccall f_1108(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1089)
static void C_ccall f_1089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1096)
static void C_fcall f_1096(C_word t0,C_word t1) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_820)
static void C_fcall f_820(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_882)
static void C_ccall f_882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1032)
static void C_ccall f_1032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1046)
static void C_ccall f_1046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1007)
static void C_ccall f_1007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1003)
static void C_ccall f_1003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_891)
static void C_ccall f_891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_940)
static void C_ccall f_940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_936)
static void C_ccall f_936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_898)
static void C_ccall f_898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_799)
static void C_fcall f_799(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_787)
static void C_fcall f_787(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_781)
static void C_fcall f_781(C_word t0,C_word t1) C_noret;
C_noret_decl(f_775)
static void C_fcall f_775(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2838)
static void C_fcall trf_2838(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2838(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2838(t0,t1);}

C_noret_decl(trf_2687)
static void C_fcall trf_2687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2687(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2687(t0,t1,t2);}

C_noret_decl(trf_2558)
static void C_fcall trf_2558(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2558(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2558(t0,t1,t2);}

C_noret_decl(trf_2629)
static void C_fcall trf_2629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2629(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2629(t0,t1,t2);}

C_noret_decl(trf_2465)
static void C_fcall trf_2465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2465(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2465(t0,t1,t2);}

C_noret_decl(trf_2499)
static void C_fcall trf_2499(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2499(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2499(t0,t1,t2);}

C_noret_decl(trf_2293)
static void C_fcall trf_2293(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2293(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2293(t0,t1);}

C_noret_decl(trf_2307)
static void C_fcall trf_2307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2307(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2307(t0,t1,t2);}

C_noret_decl(trf_2350)
static void C_fcall trf_2350(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2350(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2350(t0,t1,t2);}

C_noret_decl(trf_2213)
static void C_fcall trf_2213(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2213(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2213(t0,t1,t2);}

C_noret_decl(trf_2248)
static void C_fcall trf_2248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2248(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2248(t0,t1,t2);}

C_noret_decl(trf_2105)
static void C_fcall trf_2105(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2105(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2105(t0,t1,t2);}

C_noret_decl(trf_2146)
static void C_fcall trf_2146(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2146(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2146(t0,t1,t2);}

C_noret_decl(trf_2015)
static void C_fcall trf_2015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2015(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2015(t0,t1,t2);}

C_noret_decl(trf_2060)
static void C_fcall trf_2060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2060(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2060(t0,t1,t2);}

C_noret_decl(trf_1910)
static void C_fcall trf_1910(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1910(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1910(t0,t1);}

C_noret_decl(trf_1834)
static void C_fcall trf_1834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1834(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1834(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1757)
static void C_fcall trf_1757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1757(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1757(t0,t1,t2,t3);}

C_noret_decl(trf_1718)
static void C_fcall trf_1718(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1718(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1718(t0,t1,t2);}

C_noret_decl(trf_1096)
static void C_fcall trf_1096(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1096(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1096(t0,t1);}

C_noret_decl(trf_820)
static void C_fcall trf_820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_820(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_820(t0,t1,t2,t3);}

C_noret_decl(trf_799)
static void C_fcall trf_799(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_799(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_799(t0,t1,t2,t3,t4);}

C_noret_decl(trf_787)
static void C_fcall trf_787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_787(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_787(t0,t1,t2,t3);}

C_noret_decl(trf_781)
static void C_fcall trf_781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_781(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_781(t0,t1);}

C_noret_decl(trf_775)
static void C_fcall trf_775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_775(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_775(t0,t1);}

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
if(!C_demand_2(1397)){
C_save(t1);
C_rereclaim2(1397*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,267);
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
lf[6]=C_static_lambda_info(C_heaptop,5,"(err)");
lf[7]=C_h_intern(&lf[7],15,"\003syssignal-hook");
lf[8]=C_h_intern(&lf[8],11,"\000type-error");
lf[9]=C_static_string(C_heaptop,21,"invalid argument type");
lf[10]=C_static_lambda_info(C_heaptop,10,"(xerr x60)");
lf[11]=C_static_string(C_heaptop,33,"number of bytes to move too large");
lf[12]=C_static_lambda_info(C_heaptop,19,"(checkn n61 nmax62)");
lf[13]=C_static_string(C_heaptop,33,"number of bytes to move too large");
lf[14]=C_static_lambda_info(C_heaptop,28,"(checkn2 n63 nmax64 nmax265)");
lf[15]=C_h_intern(&lf[15],15,"\003sysbytevector\077");
lf[16]=C_h_intern(&lf[16],13,"\003syslocative\077");
lf[17]=C_static_lambda_info(C_heaptop,18,"(move from67 to68)");
lf[18]=C_static_lambda_info(C_heaptop,32,"(move-memory! from53 to54 . n55)");
lf[19]=C_h_intern(&lf[19],17,"\003syscheck-pointer");
lf[20]=C_static_string(C_heaptop,33,"bad argument type - not a pointer");
lf[21]=C_static_lambda_info(C_heaptop,33,"(##sys#check-pointer ptr96 loc97)");
lf[22]=C_h_intern(&lf[22],12,"null-pointer");
lf[23]=C_h_intern(&lf[23],16,"\003sysnull-pointer");
lf[24]=C_h_intern(&lf[24],8,"pointer\077");
lf[25]=C_static_lambda_info(C_heaptop,15,"(pointer\077 x102)");
lf[26]=C_h_intern(&lf[26],16,"address->pointer");
lf[27]=C_h_intern(&lf[27],20,"\003sysaddress->pointer");
lf[28]=C_static_string(C_heaptop,34,"bad argument type - not an integer");
lf[29]=C_static_lambda_info(C_heaptop,26,"(address->pointer addr105)");
lf[30]=C_h_intern(&lf[30],16,"pointer->address");
lf[31]=C_h_intern(&lf[31],20,"\003syspointer->address");
lf[32]=C_h_intern(&lf[32],17,"\003syscheck-special");
lf[33]=C_static_lambda_info(C_heaptop,25,"(pointer->address ptr107)");
lf[34]=C_h_intern(&lf[34],13,"null-pointer\077");
lf[35]=C_static_lambda_info(C_heaptop,22,"(null-pointer\077 ptr109)");
lf[36]=C_h_intern(&lf[36],15,"object->pointer");
lf[37]=C_static_lambda_info(C_heaptop,16,"(f_1166 a112115)");
lf[38]=C_static_lambda_info(C_heaptop,22,"(object->pointer x111)");
lf[39]=C_h_intern(&lf[39],15,"pointer->object");
lf[40]=C_static_lambda_info(C_heaptop,24,"(pointer->object ptr117)");
lf[41]=C_h_intern(&lf[41],9,"pointer=\077");
lf[42]=C_static_lambda_info(C_heaptop,23,"(pointer=\077 p1119 p2120)");
lf[43]=C_h_intern(&lf[43],8,"allocate");
lf[44]=C_static_lambda_info(C_heaptop,18,"(allocate a123126)");
lf[45]=C_h_intern(&lf[45],4,"free");
lf[46]=C_static_lambda_info(C_heaptop,14,"(free a128132)");
lf[47]=C_static_lambda_info(C_heaptop,7,"(align)");
lf[48]=C_h_intern(&lf[48],13,"align-to-word");
lf[49]=C_static_string(C_heaptop,43,"bad argument type - not a pointer or fixnum");
lf[50]=C_static_lambda_info(C_heaptop,20,"(align-to-word x140)");
lf[51]=C_h_intern(&lf[51],14,"pointer-offset");
lf[52]=C_static_lambda_info(C_heaptop,32,"(pointer-offset a142146 a141147)");
lf[53]=C_h_intern(&lf[53],15,"pointer-u8-set!");
lf[54]=C_static_lambda_info(C_heaptop,33,"(pointer-u8-set! a151155 a150156)");
lf[55]=C_h_intern(&lf[55],15,"pointer-s8-set!");
lf[56]=C_static_lambda_info(C_heaptop,33,"(pointer-s8-set! a159163 a158164)");
lf[57]=C_h_intern(&lf[57],16,"pointer-u16-set!");
lf[58]=C_static_lambda_info(C_heaptop,34,"(pointer-u16-set! a167171 a166172)");
lf[59]=C_h_intern(&lf[59],16,"pointer-s16-set!");
lf[60]=C_static_lambda_info(C_heaptop,34,"(pointer-s16-set! a175179 a174180)");
lf[61]=C_h_intern(&lf[61],16,"pointer-u32-set!");
lf[62]=C_static_lambda_info(C_heaptop,34,"(pointer-u32-set! a183187 a182188)");
lf[63]=C_h_intern(&lf[63],16,"pointer-s32-set!");
lf[64]=C_static_lambda_info(C_heaptop,34,"(pointer-s32-set! a191195 a190196)");
lf[65]=C_h_intern(&lf[65],16,"pointer-f32-set!");
lf[66]=C_static_lambda_info(C_heaptop,34,"(pointer-f32-set! a199203 a198204)");
lf[67]=C_h_intern(&lf[67],16,"pointer-f64-set!");
lf[68]=C_static_lambda_info(C_heaptop,34,"(pointer-f64-set! a207211 a206212)");
lf[69]=C_h_intern(&lf[69],14,"pointer-u8-ref");
lf[70]=C_h_intern(&lf[70],14,"pointer-s8-ref");
lf[71]=C_h_intern(&lf[71],15,"pointer-u16-ref");
lf[72]=C_h_intern(&lf[72],15,"pointer-s16-ref");
lf[73]=C_h_intern(&lf[73],15,"pointer-u32-ref");
lf[74]=C_h_intern(&lf[74],15,"pointer-s32-ref");
lf[75]=C_h_intern(&lf[75],15,"pointer-f32-ref");
lf[76]=C_h_intern(&lf[76],15,"pointer-f64-ref");
lf[77]=C_h_intern(&lf[77],11,"tag-pointer");
lf[78]=C_static_string(C_heaptop,33,"bad argument type - not a pointer");
lf[79]=C_h_intern(&lf[79],23,"\003sysmake-tagged-pointer");
lf[80]=C_static_lambda_info(C_heaptop,27,"(tag-pointer ptr266 tag267)");
lf[81]=C_h_intern(&lf[81],15,"tagged-pointer\077");
lf[82]=C_static_lambda_info(C_heaptop,29,"(tagged-pointer\077 x270 tag271)");
lf[83]=C_h_intern(&lf[83],11,"pointer-tag");
lf[84]=C_static_string(C_heaptop,33,"bad argument type - not a pointer");
lf[85]=C_static_lambda_info(C_heaptop,18,"(pointer-tag x272)");
lf[86]=C_h_intern(&lf[86],8,"extended");
lf[88]=C_h_intern(&lf[88],16,"extend-procedure");
lf[89]=C_static_lambda_info(C_heaptop,12,"(a1458 x275)");
lf[90]=C_static_lambda_info(C_heaptop,17,"(a1474 x276 i277)");
lf[91]=C_h_intern(&lf[91],19,"\003sysdecorate-lambda");
lf[92]=C_static_string(C_heaptop,35,"bad argument type - not a procedure");
lf[93]=C_static_lambda_info(C_heaptop,34,"(extend-procedure proc273 data274)");
lf[94]=C_h_intern(&lf[94],19,"extended-procedure\077");
lf[95]=C_static_lambda_info(C_heaptop,12,"(a1502 x281)");
lf[96]=C_h_intern(&lf[96],21,"\003syslambda-decoration");
lf[97]=C_static_lambda_info(C_heaptop,26,"(extended-procedure\077 x280)");
lf[98]=C_h_intern(&lf[98],14,"procedure-data");
lf[99]=C_static_lambda_info(C_heaptop,12,"(a1536 x284)");
lf[100]=C_static_lambda_info(C_heaptop,21,"(procedure-data x282)");
lf[101]=C_h_intern(&lf[101],19,"set-procedure-data!");
lf[102]=C_static_string(C_heaptop,45,"bad argument type - not an extended procedure");
lf[103]=C_static_lambda_info(C_heaptop,34,"(set-procedure-data! proc286 x287)");
lf[104]=C_h_intern(&lf[104],12,"byte-vector\077");
lf[105]=C_static_lambda_info(C_heaptop,19,"(byte-vector\077 x289)");
lf[106]=C_h_intern(&lf[106],17,"byte-vector-fill!");
lf[107]=C_static_lambda_info(C_heaptop,7,"(do293)");
lf[108]=C_static_lambda_info(C_heaptop,30,"(byte-vector-fill! bv290 n291)");
lf[109]=C_h_intern(&lf[109],16,"make-byte-vector");
lf[110]=C_h_intern(&lf[110],19,"\003sysallocate-vector");
lf[111]=C_static_lambda_info(C_heaptop,36,"(make-byte-vector size301 . init302)");
lf[112]=C_h_intern(&lf[112],11,"byte-vector");
lf[113]=C_static_lambda_info(C_heaptop,16,"(do311 bytes314)");
lf[114]=C_static_lambda_info(C_heaptop,24,"(byte-vector . bytes308)");
lf[115]=C_h_intern(&lf[115],16,"byte-vector-set!");
lf[116]=C_static_string(C_heaptop,12,"out of range");
lf[117]=C_static_lambda_info(C_heaptop,34,"(byte-vector-set! bv317 i318 x319)");
lf[118]=C_h_intern(&lf[118],15,"byte-vector-ref");
lf[119]=C_h_intern(&lf[119],17,"byte-vector->list");
lf[120]=C_static_lambda_info(C_heaptop,11,"(loop i336)");
lf[121]=C_static_lambda_info(C_heaptop,25,"(byte-vector->list bv333)");
lf[122]=C_h_intern(&lf[122],17,"list->byte-vector");
lf[123]=C_h_intern(&lf[123],27,"\003sysnot-a-proper-list-error");
lf[124]=C_static_lambda_info(C_heaptop,17,"(do343 p345 i346)");
lf[125]=C_static_lambda_info(C_heaptop,26,"(list->byte-vector lst340)");
lf[126]=C_h_intern(&lf[126],19,"string->byte-vector");
lf[127]=C_static_lambda_info(C_heaptop,26,"(string->byte-vector s353)");
lf[128]=C_h_intern(&lf[128],11,"make-string");
lf[129]=C_h_intern(&lf[129],19,"byte-vector->string");
lf[130]=C_static_lambda_info(C_heaptop,27,"(byte-vector->string bv359)");
lf[131]=C_h_intern(&lf[131],18,"byte-vector-length");
lf[132]=C_static_lambda_info(C_heaptop,26,"(byte-vector-length bv364)");
lf[133]=C_static_lambda_info(C_heaptop,16,"(malloc a368371)");
lf[134]=C_h_intern(&lf[134],13,"\000bounds-error");
lf[135]=C_static_string(C_heaptop,12,"out of range");
lf[136]=C_h_intern(&lf[136],14,"\000runtime-error");
lf[137]=C_static_string(C_heaptop,48,"can not allocate statically allocated bytevector");
lf[138]=C_static_lambda_info(C_heaptop,38,"(make size373 init374 alloc375 loc376)");
lf[139]=C_h_intern(&lf[139],23,"make-static-byte-vector");
lf[140]=C_static_lambda_info(C_heaptop,43,"(make-static-byte-vector size380 . init381)");
lf[141]=C_h_intern(&lf[141],27,"static-byte-vector->pointer");
lf[142]=C_h_intern(&lf[142],16,"\003sysmake-pointer");
lf[143]=C_static_string(C_heaptop,36,"can not coerce non-static bytevector");
lf[144]=C_static_lambda_info(C_heaptop,35,"(static-byte-vector->pointer bv383)");
lf[145]=C_h_intern(&lf[145],10,"block-set!");
lf[146]=C_h_intern(&lf[146],14,"\003sysblock-set!");
lf[147]=C_h_intern(&lf[147],9,"block-ref");
lf[148]=C_h_intern(&lf[148],15,"number-of-slots");
lf[149]=C_static_string(C_heaptop,20,"slots not accessible");
lf[150]=C_static_lambda_info(C_heaptop,22,"(number-of-slots x387)");
lf[151]=C_h_intern(&lf[151],15,"number-of-bytes");
lf[152]=C_static_string(C_heaptop,51,"can not compute number of bytes of immediate object");
lf[153]=C_static_lambda_info(C_heaptop,22,"(number-of-bytes x393)");
lf[154]=C_h_intern(&lf[154],20,"make-record-instance");
lf[155]=C_h_intern(&lf[155],18,"\003sysmake-structure");
lf[156]=C_static_lambda_info(C_heaptop,40,"(make-record-instance type394 . args395)");
lf[157]=C_h_intern(&lf[157],16,"record-instance\077");
lf[158]=C_static_lambda_info(C_heaptop,23,"(record-instance\077 x397)");
lf[159]=C_h_intern(&lf[159],14,"record->vector");
lf[160]=C_static_lambda_info(C_heaptop,7,"(do401)");
lf[161]=C_h_intern(&lf[161],15,"\003sysmake-vector");
lf[162]=C_static_string(C_heaptop,42,"bad argument type - not a record structure");
lf[163]=C_static_lambda_info(C_heaptop,21,"(record->vector x398)");
lf[164]=C_h_intern(&lf[164],11,"make-vector");
lf[165]=C_h_intern(&lf[165],11,"object-copy");
lf[166]=C_static_lambda_info(C_heaptop,12,"(do415 i417)");
lf[167]=C_static_lambda_info(C_heaptop,11,"(copy x409)");
lf[168]=C_static_lambda_info(C_heaptop,18,"(object-copy x407)");
lf[169]=C_h_intern(&lf[169],15,"object-evicted\077");
lf[170]=C_static_lambda_info(C_heaptop,22,"(object-evicted\077 x422)");
lf[171]=C_h_intern(&lf[171],15,"make-hash-table");
lf[172]=C_h_intern(&lf[172],22,"hash-table-ref/default");
lf[173]=C_h_intern(&lf[173],15,"hash-table-set!");
lf[174]=C_h_intern(&lf[174],12,"object-evict");
lf[175]=C_static_lambda_info(C_heaptop,16,"(f_2197 a430433)");
lf[176]=C_static_lambda_info(C_heaptop,12,"(do442 i444)");
lf[177]=C_static_lambda_info(C_heaptop,12,"(evict x436)");
lf[178]=C_h_intern(&lf[178],3,"eq\077");
lf[179]=C_static_lambda_info(C_heaptop,34,"(object-evict x426 . allocator427)");
lf[180]=C_h_intern(&lf[180],14,"object-release");
lf[181]=C_static_lambda_info(C_heaptop,16,"(f_2276 a456460)");
lf[182]=C_static_lambda_info(C_heaptop,12,"(do465 i467)");
lf[183]=C_static_lambda_info(C_heaptop,14,"(release x463)");
lf[184]=C_static_lambda_info(C_heaptop,35,"(object-release x453 . releaser454)");
lf[185]=C_h_intern(&lf[185],24,"object-evict-to-location");
lf[186]=C_static_lambda_info(C_heaptop,12,"(do493 i495)");
lf[187]=C_h_intern(&lf[187],24,"\003sysset-pointer-address!");
lf[188]=C_h_intern(&lf[188],6,"signal");
lf[189]=C_h_intern(&lf[189],24,"make-composite-condition");
lf[190]=C_h_intern(&lf[190],23,"make-property-condition");
lf[191]=C_h_intern(&lf[191],5,"evict");
lf[192]=C_h_intern(&lf[192],5,"limit");
lf[193]=C_h_intern(&lf[193],3,"exn");
lf[194]=C_h_intern(&lf[194],8,"location");
lf[195]=C_h_intern(&lf[195],7,"message");
lf[196]=C_static_string(C_heaptop,37,"can not evict object - limit exceeded");
lf[197]=C_h_intern(&lf[197],9,"arguments");
lf[198]=C_static_lambda_info(C_heaptop,12,"(evict x486)");
lf[199]=C_static_string(C_heaptop,33,"bad argument type - not a pointer");
lf[200]=C_static_lambda_info(C_heaptop,49,"(object-evict-to-location x476 ptr477 . limit478)");
lf[201]=C_h_intern(&lf[201],11,"object-size");
lf[202]=C_static_lambda_info(C_heaptop,12,"(do517 i519)");
lf[203]=C_static_lambda_info(C_heaptop,12,"(evict x514)");
lf[204]=C_static_lambda_info(C_heaptop,18,"(object-size x511)");
lf[205]=C_h_intern(&lf[205],14,"object-unevict");
lf[206]=C_h_intern(&lf[206],15,"\003sysmake-string");
lf[207]=C_static_lambda_info(C_heaptop,12,"(do550 i552)");
lf[208]=C_static_lambda_info(C_heaptop,11,"(copy x541)");
lf[209]=C_static_lambda_info(C_heaptop,31,"(object-unevict x532 . g531533)");
lf[210]=C_h_intern(&lf[210],14,"object-become!");
lf[211]=C_h_intern(&lf[211],11,"\003sysbecome!");
lf[212]=C_static_string(C_heaptop,41,"bad argument type - new item is immediate");
lf[213]=C_static_string(C_heaptop,41,"bad argument type - old item is immediate");
lf[214]=C_static_string(C_heaptop,33,"bad argument type - not an a-list");
lf[215]=C_static_lambda_info(C_heaptop,13,"(loop lst561)");
lf[216]=C_static_lambda_info(C_heaptop,23,"(object-become! lst559)");
lf[217]=C_h_intern(&lf[217],13,"make-locative");
lf[218]=C_h_intern(&lf[218],17,"\003sysmake-locative");
lf[219]=C_static_lambda_info(C_heaptop,33,"(make-locative obj571 . index572)");
lf[220]=C_h_intern(&lf[220],18,"make-weak-locative");
lf[221]=C_static_lambda_info(C_heaptop,38,"(make-weak-locative obj575 . index576)");
lf[222]=C_h_intern(&lf[222],13,"locative-set!");
lf[223]=C_static_lambda_info(C_heaptop,25,"(locative-set! x579 y580)");
lf[224]=C_h_intern(&lf[224],12,"locative-ref");
lf[225]=C_h_intern(&lf[225],16,"locative->object");
lf[226]=C_static_lambda_info(C_heaptop,23,"(locative->object x581)");
lf[227]=C_h_intern(&lf[227],9,"locative\077");
lf[228]=C_static_lambda_info(C_heaptop,16,"(locative\077 x582)");
lf[230]=C_h_intern(&lf[230],35,"set-invalid-procedure-call-handler!");
lf[231]=C_h_intern(&lf[231],31,"\003sysinvalid-procedure-call-hook");
lf[232]=C_h_intern(&lf[232],26,"\003syslast-invalid-procedure");
lf[233]=C_static_lambda_info(C_heaptop,45,"(##sys#invalid-procedure-call-hook . args584)");
lf[234]=C_static_string(C_heaptop,35,"bad argument type - not a procedure");
lf[235]=C_static_lambda_info(C_heaptop,45,"(set-invalid-procedure-call-handler! proc583)");
lf[236]=C_h_intern(&lf[236],30,"invalid-procedure-call-handler");
lf[237]=C_h_intern(&lf[237],22,"unbound-variable-value");
lf[238]=C_h_intern(&lf[238],31,"\003sysunbound-variable-value-hook");
lf[239]=C_static_lambda_info(C_heaptop,33,"(unbound-variable-value . val587)");
lf[240]=C_h_intern(&lf[240],10,"global-ref");
lf[241]=C_static_lambda_info(C_heaptop,19,"(global-ref sym588)");
lf[242]=C_h_intern(&lf[242],11,"global-set!");
lf[243]=C_static_lambda_info(C_heaptop,25,"(global-set! sym590 x591)");
lf[244]=C_h_intern(&lf[244],13,"global-bound\077");
lf[245]=C_h_intern(&lf[245],32,"\003syssymbol-has-toplevel-binding\077");
lf[246]=C_static_lambda_info(C_heaptop,22,"(global-bound\077 sym593)");
lf[247]=C_h_intern(&lf[247],20,"global-make-unbound!");
lf[248]=C_h_intern(&lf[248],28,"\003sysarbitrary-unbound-symbol");
lf[249]=C_static_lambda_info(C_heaptop,29,"(global-make-unbound! sym595)");
lf[250]=C_static_lambda_info(C_heaptop,14,"C_locative_ref");
lf[251]=C_h_intern(&lf[251],18,"getter-with-setter");
lf[252]=C_h_intern(&lf[252],13,"\003sysblock-ref");
lf[253]=C_static_string(C_heaptop,12,"out of range");
lf[254]=C_static_lambda_info(C_heaptop,18,"(a2887 bv326 i327)");
lf[255]=C_static_lambda_info(C_heaptop,15,"(a2917 a259263)");
lf[256]=C_static_lambda_info(C_heaptop,15,"(a2927 a252256)");
lf[257]=C_static_lambda_info(C_heaptop,15,"(a2937 a245249)");
lf[258]=C_static_lambda_info(C_heaptop,15,"(a2947 a238242)");
lf[259]=C_static_lambda_info(C_heaptop,15,"(a2957 a232236)");
lf[260]=C_h_intern(&lf[260],15,"pointer-s6-set!");
lf[261]=C_static_lambda_info(C_heaptop,15,"(a2967 a226230)");
lf[262]=C_static_lambda_info(C_heaptop,15,"(a2977 a220224)");
lf[263]=C_static_lambda_info(C_heaptop,15,"(a2987 a214218)");
lf[264]=C_h_intern(&lf[264],17,"register-feature!");
lf[265]=C_h_intern(&lf[265],7,"lolevel");
lf[266]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,267,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_687,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k685 */
static void C_ccall f_687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_690,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 90   register-feature! */
t3=*((C_word*)lf[264]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[265]);}

/* k688 in k685 */
static void C_ccall f_690(C_word c,C_word t0,C_word t1){
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
C_word ab[74],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_690,2,t0,t1);}
t2=lf[2];
t3=C_mutate((C_word*)lf[3]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_772,a[2]=t2,a[3]=lf[18],tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[19]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1089,a[2]=lf[21],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[22]+1,*((C_word*)lf[23]+1));
t6=C_mutate((C_word*)lf[24]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1108,a[2]=lf[25],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[26]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1117,a[2]=lf[29],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[30]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1136,a[2]=lf[33],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[34]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1145,a[2]=lf[35],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[36]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1158,a[2]=lf[38],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[39]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1169,a[2]=lf[40],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[41]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1175,a[2]=lf[42],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[43]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1184,a[2]=lf[44],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[45]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1191,a[2]=lf[46],tmp=(C_word)a,a+=3,tmp));
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1201,a[2]=lf[47],tmp=(C_word)a,a+=3,tmp);
t16=C_mutate((C_word*)lf[48]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1207,a[2]=t15,a[3]=lf[50],tmp=(C_word)a,a+=4,tmp));
t17=C_mutate((C_word*)lf[51]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1239,a[2]=lf[52],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[53]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1253,a[2]=lf[54],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[55]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1267,a[2]=lf[56],tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[57]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1281,a[2]=lf[58],tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[59]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1295,a[2]=lf[60],tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1309,a[2]=lf[62],tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[63]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1323,a[2]=lf[64],tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[65]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1337,a[2]=lf[66],tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1351,a[2]=lf[68],tmp=(C_word)a,a+=3,tmp));
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1367,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2988,a[2]=lf[263],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 208  getter-with-setter */
t28=*((C_word*)lf[251]+1);
((C_proc4)C_retrieve_proc(t28))(4,t28,t26,t27,*((C_word*)lf[53]+1));}

/* a2987 in k688 in k685 */
static void C_ccall f_2988(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2988,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub215(C_SCHEME_UNDEFINED,t3));}

/* k1365 in k688 in k685 */
static void C_ccall f_1367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1367,2,t0,t1);}
t2=C_mutate((C_word*)lf[69]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1371,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2978,a[2]=lf[262],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 213  getter-with-setter */
t5=*((C_word*)lf[251]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,*((C_word*)lf[55]+1));}

/* a2977 in k1365 in k688 in k685 */
static void C_ccall f_2978(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2978,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub221(C_SCHEME_UNDEFINED,t3));}

/* k1369 in k1365 in k688 in k685 */
static void C_ccall f_1371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1371,2,t0,t1);}
t2=C_mutate((C_word*)lf[70]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2968,a[2]=lf[261],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 218  getter-with-setter */
t5=*((C_word*)lf[251]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,*((C_word*)lf[57]+1));}

/* a2967 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2968(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2968,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub227(C_SCHEME_UNDEFINED,t3));}

/* k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1375,2,t0,t1);}
t2=C_mutate((C_word*)lf[71]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1379,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2958,a[2]=lf[259],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 223  getter-with-setter */
t5=*((C_word*)lf[251]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,*((C_word*)lf[260]+1));}

/* a2957 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2958(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2958,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub233(C_SCHEME_UNDEFINED,t3));}

/* k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1379,2,t0,t1);}
t2=C_mutate((C_word*)lf[72]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1383,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2948,a[2]=lf[258],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 228  getter-with-setter */
t5=*((C_word*)lf[251]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,*((C_word*)lf[61]+1));}

/* a2947 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2948(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2948,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub239(t3,t4));}

/* k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1383,2,t0,t1);}
t2=C_mutate((C_word*)lf[73]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1387,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2938,a[2]=lf[257],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 233  getter-with-setter */
t5=*((C_word*)lf[251]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,*((C_word*)lf[63]+1));}

/* a2937 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2938(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2938,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub246(t3,t4));}

/* k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1387,2,t0,t1);}
t2=C_mutate((C_word*)lf[74]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1391,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2928,a[2]=lf[256],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 238  getter-with-setter */
t5=*((C_word*)lf[251]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,*((C_word*)lf[65]+1));}

/* a2927 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2928,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub253(t3,t4));}

/* k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1391,2,t0,t1);}
t2=C_mutate((C_word*)lf[75]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1395,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2918,a[2]=lf[255],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 243  getter-with-setter */
t5=*((C_word*)lf[251]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,*((C_word*)lf[67]+1));}

/* a2917 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2918(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2918,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub260(t3,t4));}

/* k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1395(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1395,2,t0,t1);}
t2=C_mutate((C_word*)lf[76]+1,t1);
t3=C_mutate((C_word*)lf[77]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1397,a[2]=lf[80],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[81]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1412,a[2]=lf[82],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[83]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1428,a[2]=lf[85],tmp=(C_word)a,a+=3,tmp));
t6=(C_word)C_a_i_vector(&a,1,lf[86]);
t7=C_mutate(&lf[87],t6);
t8=C_mutate((C_word*)lf[88]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1450,a[2]=lf[93],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[94]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1488,a[2]=lf[97],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[98]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1519,a[2]=lf[100],tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[88]+1);
t12=C_mutate((C_word*)lf[101]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1553,a[2]=t11,a[3]=lf[103],tmp=(C_word)a,a+=4,tmp));
t13=C_mutate((C_word*)lf[104]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1568,a[2]=lf[105],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[106]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1574,a[2]=lf[108],tmp=(C_word)a,a+=3,tmp));
t15=*((C_word*)lf[106]+1);
t16=C_mutate((C_word*)lf[109]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1608,a[2]=t15,a[3]=lf[111],tmp=(C_word)a,a+=4,tmp));
t17=*((C_word*)lf[109]+1);
t18=C_mutate((C_word*)lf[112]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1630,a[2]=t17,a[3]=lf[114],tmp=(C_word)a,a+=4,tmp));
t19=C_mutate((C_word*)lf[115]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1669,a[2]=lf[117],tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1704,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2888,a[2]=lf[254],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 346  getter-with-setter */
t22=*((C_word*)lf[251]+1);
((C_proc4)C_retrieve_proc(t22))(4,t22,t20,t21,*((C_word*)lf[115]+1));}

/* a2887 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2888,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_bytevector_2(t2,lf[118]);
t5=(C_word)C_i_check_exact_2(t3,lf[118]);
t6=(C_word)C_block_size(t2);
t7=(C_word)C_fixnum_lessp(t3,C_fix(0));
t8=(C_truep(t7)?t7:(C_word)C_fixnum_greater_or_equal_p(t3,t6));
if(C_truep(t8)){
/* lolevel.scm: 352  ##sys#error */
t9=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t1,lf[118],lf[253],t2,t3);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_subbyte(t2,t3));}}

/* k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1704(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1704,2,t0,t1);}
t2=C_mutate((C_word*)lf[118]+1,t1);
t3=C_mutate((C_word*)lf[119]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1706,a[2]=lf[121],tmp=(C_word)a,a+=3,tmp));
t4=*((C_word*)lf[109]+1);
t5=C_mutate((C_word*)lf[122]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1742,a[2]=t4,a[3]=lf[125],tmp=(C_word)a,a+=4,tmp));
t6=*((C_word*)lf[109]+1);
t7=C_mutate((C_word*)lf[126]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1795,a[2]=t6,a[3]=lf[127],tmp=(C_word)a,a+=4,tmp));
t8=*((C_word*)lf[128]+1);
t9=C_mutate((C_word*)lf[129]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1807,a[2]=t8,a[3]=lf[130],tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[131]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1819,a[2]=lf[132],tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[106]+1);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1827,a[2]=lf[133],tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1834,a[2]=t11,a[3]=lf[138],tmp=(C_word)a,a+=4,tmp);
t14=C_mutate((C_word*)lf[139]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1871,a[2]=t12,a[3]=t13,a[4]=lf[140],tmp=(C_word)a,a+=5,tmp));
t15=C_mutate((C_word*)lf[141]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1877,a[2]=lf[144],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[145]+1,*((C_word*)lf[146]+1));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 436  getter-with-setter */
t18=*((C_word*)lf[251]+1);
((C_proc4)C_retrieve_proc(t18))(4,t18,t17,*((C_word*)lf[252]+1),*((C_word*)lf[146]+1));}

/* k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1895(C_word c,C_word t0,C_word t1){
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
C_word ab[70],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1895,2,t0,t1);}
t2=C_mutate((C_word*)lf[147]+1,t1);
t3=C_mutate((C_word*)lf[148]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1897,a[2]=lf[150],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[151]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1918,a[2]=lf[153],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[154]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1940,a[2]=lf[156],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[157]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1949,a[2]=lf[158],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[159]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1955,a[2]=lf[163],tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[164]+1);
t9=C_mutate((C_word*)lf[165]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2009,a[2]=t8,a[3]=lf[168],tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[169]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2090,a[2]=lf[170],tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[171]+1);
t12=*((C_word*)lf[172]+1);
t13=*((C_word*)lf[173]+1);
t14=C_mutate((C_word*)lf[174]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2093,a[2]=t11,a[3]=t12,a[4]=t13,a[5]=lf[179],tmp=(C_word)a,a+=6,tmp));
t15=C_mutate((C_word*)lf[180]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2204,a[2]=lf[184],tmp=(C_word)a,a+=3,tmp));
t16=*((C_word*)lf[171]+1);
t17=*((C_word*)lf[172]+1);
t18=*((C_word*)lf[48]+1);
t19=*((C_word*)lf[173]+1);
t20=C_mutate((C_word*)lf[185]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2286,a[2]=t16,a[3]=t17,a[4]=t18,a[5]=t19,a[6]=lf[200],tmp=(C_word)a,a+=7,tmp));
t21=*((C_word*)lf[171]+1);
t22=*((C_word*)lf[172]+1);
t23=*((C_word*)lf[48]+1);
t24=*((C_word*)lf[173]+1);
t25=C_mutate((C_word*)lf[201]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2456,a[2]=t21,a[3]=t22,a[4]=t23,a[5]=t24,a[6]=lf[204],tmp=(C_word)a,a+=7,tmp));
t26=*((C_word*)lf[164]+1);
t27=*((C_word*)lf[171]+1);
t28=*((C_word*)lf[173]+1);
t29=*((C_word*)lf[172]+1);
t30=C_mutate((C_word*)lf[205]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2540,a[2]=t27,a[3]=t29,a[4]=t26,a[5]=t28,a[6]=lf[209],tmp=(C_word)a,a+=7,tmp));
t31=C_mutate((C_word*)lf[210]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2675,a[2]=lf[216],tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[217]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2738,a[2]=lf[219],tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[220]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2767,a[2]=lf[221],tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[222]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2796,a[2]=lf[223],tmp=(C_word)a,a+=3,tmp));
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2801,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t36=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_locative_ref,a[2]=lf[250],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 679  getter-with-setter */
t37=*((C_word*)lf[251]+1);
((C_proc4)C_retrieve_proc(t37))(4,t37,t35,t36,*((C_word*)lf[222]+1));}

/* k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2801(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2801,2,t0,t1);}
t2=C_mutate((C_word*)lf[224]+1,t1);
t3=C_mutate((C_word*)lf[225]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2803,a[2]=lf[226],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[227]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2806,a[2]=lf[228],tmp=(C_word)a,a+=3,tmp));
t5=lf[229]=C_SCHEME_FALSE;;
t6=C_mutate((C_word*)lf[230]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2813,a[2]=lf[235],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[236]+1,*((C_word*)lf[230]+1));
t8=C_mutate((C_word*)lf[237]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2833,a[2]=lf[239],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[240]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2850,a[2]=lf[241],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[242]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=lf[243],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[244]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2865,a[2]=lf[246],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[247]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2874,a[2]=lf[249],tmp=(C_word)a,a+=3,tmp));
t13=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_UNDEFINED);}

/* global-make-unbound! in k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2874(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2874,3,t0,t1,t2);}
t3=(C_word)C_i_check_symbol_2(t2,lf[247]);
t4=(C_word)C_slot(lf[248],C_fix(0));
t5=(C_word)C_i_setslot(t2,C_fix(0),t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}

/* global-bound? in k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2865(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2865,3,t0,t1,t2);}
t3=(C_word)C_i_check_symbol_2(t2,lf[244]);
/* lolevel.scm: 716  ##sys#symbol-has-toplevel-binding? */
t4=*((C_word*)lf[245]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t2);}

/* global-set! in k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2856(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2856,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_symbol_2(t2,lf[242]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(t2,C_fix(0),t3));}

/* global-ref in k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2850(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2850,3,t0,t1,t2);}
t3=(C_word)C_i_check_symbol_2(t2,lf[240]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_retrieve(t2));}

/* unbound-variable-value in k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2833(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2rv,(void*)f_2833r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_2833r(t0,t1,t2);}}

static void C_ccall f_2833r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2838,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_notvemptyp(t2))){
t4=(C_word)C_i_vector_ref(t2,C_fix(0));
t5=t3;
f_2838(t5,(C_word)C_a_i_vector(&a,1,t4));}
else{
t4=t3;
f_2838(t4,C_SCHEME_FALSE);}}

/* k2836 in unbound-variable-value in k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2838(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[238]+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* set-invalid-procedure-call-handler! in k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2813(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2813,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2817,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_closurep(t2))){
t4=t3;
f_2817(2,t4,C_SCHEME_UNDEFINED);}
else{
/* lolevel.scm: 690  ##sys#signal-hook */
t4=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[8],lf[230],lf[234],t2);}}

/* k2815 in set-invalid-procedure-call-handler! in k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2817,2,t0,t1);}
t2=C_mutate(&lf[229],((C_word*)t0)[3]);
t3=C_mutate((C_word*)lf[231]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2820,a[2]=lf[233],tmp=(C_word)a,a+=3,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* ##sys#invalid-procedure-call-hook in k2815 in set-invalid-procedure-call-handler! in k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_2820r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2820r(t0,t1,t2);}}

static void C_ccall f_2820r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* lolevel.scm: 694  ipc-hook-0 */
t3=lf[229];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,*((C_word*)lf[232]+1),t2);}

/* locative? in k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2806(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2806,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep((C_word)C_blockp(t2))?(C_word)C_locativep(t2):C_SCHEME_FALSE));}

/* locative->object in k2799 in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2803,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_locative_to_object(t2));}

/* locative-set! in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2796(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2796,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_locative_set(t2,t3));}

/* make-weak-locative in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2767(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2767r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2767r(t0,t1,t2,t3);}}

static void C_ccall f_2767r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2775,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2775(2,t5,C_fix(0));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2775(2,t6,(C_word)C_i_car(t3));}
else{
/* lolevel.scm: 676  ##sys#error */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2773 in make-weak-locative in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 676  ##sys#make-locative */
t2=*((C_word*)lf[218]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_TRUE,lf[220]);}

/* make-locative in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2738(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2738r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2738r(t0,t1,t2,t3);}}

static void C_ccall f_2738r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2746,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2746(2,t5,C_fix(0));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2746(2,t6,(C_word)C_i_car(t3));}
else{
/* lolevel.scm: 673  ##sys#error */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2744 in make-locative in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 673  ##sys#make-locative */
t2=*((C_word*)lf[218]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE,lf[217]);}

/* object-become! in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2675(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2675,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,lf[210]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2682,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2687,a[2]=t6,a[3]=lf[215],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2687(t8,t4,t2);}

/* loop in object-become! in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2687(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2687,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_i_check_pair_2(t4,lf[210]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2709,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_slot(t4,C_fix(0));
if(C_truep((C_word)C_blockp(t7))){
t8=t6;
f_2709(2,t8,C_SCHEME_UNDEFINED);}
else{
/* lolevel.scm: 662  ##sys#signal-hook */
t8=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t6,lf[8],lf[210],lf[213],t4);}}
else{
/* lolevel.scm: 666  ##sys#signal-hook */
t4=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[8],lf[210],lf[214]);}}}

/* k2707 in loop in object-become! in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
if(C_truep((C_word)C_blockp(t3))){
t4=t2;
f_2712(2,t4,C_SCHEME_UNDEFINED);}
else{
/* lolevel.scm: 664  ##sys#signal-hook */
t4=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[8],lf[210],lf[212],((C_word*)t0)[2]);}}

/* k2710 in k2707 in loop in object-become! in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* lolevel.scm: 665  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2687(t3,((C_word*)t0)[2],t2);}

/* k2680 in object-become! in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 667  ##sys#become! */
t2=*((C_word*)lf[211]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2540(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2540r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2540r(t0,t1,t2,t3);}}

static void C_ccall f_2540r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2544(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2544(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2544,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 623  make-hash-table */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,*((C_word*)lf[178]+1));}

/* k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2553,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2558,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=lf[208],tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_2558(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* copy in k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2558(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2558,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_permanentp(t2))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2574,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* lolevel.scm: 627  hash-table-ref/default */
t4=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[5],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2572 in copy in k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2574(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2574,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[7]))){
if(C_truep(((C_word*)t0)[6])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[7]);
/* lolevel.scm: 630  ##sys#make-string */
t4=*((C_word*)lf[206]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[7]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2603,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
/* lolevel.scm: 635  ##sys#intern-symbol */
C_string_to_symbol(3,0,t2,t3);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2617,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 640  make-vector */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}}}}

/* k2615 in k2572 in copy in k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2617,2,t0,t1);}
t2=(C_word)C_copy_block(((C_word*)t0)[7],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2620,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 641  hash-table-set! */
t4=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[2],((C_word*)t0)[7],t2);}

/* k2618 in k2615 in k2572 in copy in k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2620,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2623,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep((C_word)C_specialp(((C_word*)t0)[4]))?C_fix(1):C_fix(0));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2629,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=lf[207],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2629(t7,t2,t3);}

/* do550 in k2618 in k2615 in k2572 in copy in k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2629(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2629,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2650,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm: 644  copy */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2558(t5,t3,t4);}}

/* k2648 in do550 in k2618 in k2615 in k2572 in copy in k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2629(t4,((C_word*)t0)[2],t3);}

/* k2621 in k2618 in k2615 in k2572 in copy in k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2601 in k2572 in copy in k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2606,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 636  hash-table-set! */
t3=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2604 in k2601 in k2572 in copy in k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2585 in k2572 in copy in k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2587,2,t0,t1);}
t2=(C_word)C_copy_block(((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2590,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 631  hash-table-set! */
t4=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[2],((C_word*)t0)[5],t2);}

/* k2588 in k2585 in k2572 in copy in k2551 in k2542 in object-unevict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* object-size in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2456,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2460,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 596  make-hash-table */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,*((C_word*)lf[178]+1));}

/* k2458 in object-size in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2460,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2465,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=lf[203],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2465(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* evict in k2458 in object-size in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2465(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2465,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2478,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 599  hash-table-ref/default */
t4=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[4],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fix(0));}}

/* k2476 in evict in k2458 in object-size in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2478,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(C_word)C_block_size(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[6]))){
/* lolevel.scm: 603  align-to-word */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}
else{
t4=t3;
f_2535(2,t4,(C_word)C_bytes(t2));}}}

/* k2533 in k2476 in evict in k2458 in object-size in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2535,2,t0,t1);}
t2=(C_word)C_fixnum_plus(t1,(C_word)C_bytes(C_fix(1)));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 605  hash-table-set! */
t6=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,((C_word*)t0)[2],((C_word*)t0)[6],C_SCHEME_TRUE);}

/* k2485 in k2533 in k2476 in evict in k2458 in object-size in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2487,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2490,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[4]))){
t3=t2;
f_2490(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_specialp(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:(C_word)C_i_symbolp(((C_word*)t0)[4]));
t5=(C_truep(t4)?C_fix(1):C_fix(0));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t7,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=lf[202],tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_2499(t9,t2,t5);}}

/* do517 in k2485 in k2533 in k2476 in evict in k2458 in object-size in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2499(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2499,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2521,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 612  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2465(t5,t3,t4);}}

/* k2519 in do517 in k2485 in k2533 in k2476 in evict in k2458 in object-size in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_fixnum_plus(t1,((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_2499(t5,((C_word*)t0)[2],t4);}

/* k2488 in k2485 in k2533 in k2476 in evict in k2458 in object-size in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2286(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2286r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2286r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2286r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2290,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t6=(C_truep((C_word)C_blockp(t3))?(C_word)C_specialp(t3):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=t5;
f_2290(2,t7,C_SCHEME_UNDEFINED);}
else{
/* lolevel.scm: 547  ##sys#signal-hook */
t7=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t5,lf[8],lf[185],lf[199],t3);}}

/* k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2290,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_notvemptyp(((C_word*)t0)[2]))){
t3=(C_word)C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
t4=(C_word)C_i_check_exact_2(t3,lf[185]);
t5=t2;
f_2293(t5,t3);}
else{
t3=t2;
f_2293(t3,C_SCHEME_FALSE);}}

/* k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2293(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2293,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2435,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 555  ##sys#pointer->address */
t6=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k2433 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 555  ##sys#address->pointer */
t2=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2296,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2299,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* lolevel.scm: 556  make-hash-table */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,*((C_word*)lf[178]+1));}

/* k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2302,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2307,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word*)t0)[7],a[9]=lf[198],tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_2307(t6,t2,((C_word*)t0)[2]);}

/* evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2307(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2307,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2317,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm: 560  hash-table-ref/default */
t4=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[5],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2317,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2428,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[8]))){
/* lolevel.scm: 564  align-to-word */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}
else{
t4=t3;
f_2428(2,t4,(C_word)C_bytes(t2));}}}

/* k2426 in k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2428(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2428,2,t0,t1);}
t2=(C_word)C_fixnum_plus(t1,(C_word)C_bytes(C_fix(1)));
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2329,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=(C_word)C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2412,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_a_i_list(&a,2,((C_word*)t0)[9],((C_word*)((C_word*)t0)[2])[1]);
/* lolevel.scm: 571  make-property-condition */
t9=*((C_word*)lf[190]+1);
((C_proc9)(void*)(*((C_word*)t9+1)))(9,t9,t7,lf[193],lf[194],lf[185],lf[195],lf[196],lf[197],t8);}
else{
t6=t3;
f_2329(2,t6,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2329(2,t4,C_SCHEME_UNDEFINED);}}

/* k2414 in k2426 in k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2420,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 575  make-property-condition */
t3=*((C_word*)lf[190]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[191],lf[192],((C_word*)((C_word*)t0)[2])[1]);}

/* k2418 in k2414 in k2426 in k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 570  make-composite-condition */
t2=*((C_word*)lf[189]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2410 in k2426 in k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 569  signal */
t2=*((C_word*)lf[188]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2327 in k2426 in k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2329(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2329,2,t0,t1);}
t2=(C_word)C_evict_block(((C_word*)t0)[9],((C_word*)t0)[8]);
t3=(C_word)C_i_symbolp(((C_word*)t0)[9]);
t4=(C_truep(t3)?(C_word)C_i_set_i_slot(t2,C_fix(0),C_SCHEME_UNDEFINED):C_SCHEME_UNDEFINED);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2335,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2389,a[2]=((C_word*)t0)[8],a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 578  ##sys#pointer->address */
t7=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[8]);}

/* k2387 in k2327 in k2426 in k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2389,2,t0,t1);}
t2=(C_word)C_a_i_plus(&a,2,t1,((C_word*)t0)[4]);
/* lolevel.scm: 578  ##sys#set-pointer-address! */
t3=*((C_word*)lf[187]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2333 in k2327 in k2426 in k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2338,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 579  hash-table-set! */
t3=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k2336 in k2333 in k2327 in k2426 in k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2341,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[4]))){
t3=t2;
f_2341(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_specialp(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:(C_word)C_i_symbolp(((C_word*)t0)[4]));
t5=(C_truep(t4)?C_fix(1):C_fix(0));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2350,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t7,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=lf[186],tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_2350(t9,t2,t5);}}

/* do493 in k2336 in k2333 in k2327 in k2426 in k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2350(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2350,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2371,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 586  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2307(t5,t3,t4);}}

/* k2369 in do493 in k2336 in k2333 in k2327 in k2426 in k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2350(t4,((C_word*)t0)[2],t3);}

/* k2339 in k2336 in k2333 in k2327 in k2426 in k2315 in evict in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2300 in k2297 in k2294 in k2291 in k2288 in object-evict-to-location in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 588  values */
C_values(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* object-release in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2204(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2204r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2204r(t0,t1,t2,t3);}}

static void C_ccall f_2204r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(10);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2276,a[2]=lf[181],tmp=(C_word)a,a+=3,tmp));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2213,a[2]=t7,a[3]=t5,a[4]=lf[183],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2213(t9,t1,t2);}

/* release in object-release in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2213(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2213,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_permanentp(t2))){
t3=(C_word)C_block_size(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2232,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_byteblockp(t2))){
t5=t4;
f_2232(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(C_truep((C_word)C_specialp(t2))?C_fix(1):C_fix(0));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2248,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t7,a[5]=t3,a[6]=lf[182],tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_2248(t9,t4,t5);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* do465 in release in object-release in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2248(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2248,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2258,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 535  release */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2213(t5,t3,t4);}}

/* k2256 in do465 in release in object-release in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2248(t3,((C_word*)t0)[2],t2);}

/* k2230 in release in object-release in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2239,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 536  ##sys#address->pointer */
t3=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,(C_word)C_block_address(&a,1,((C_word*)t0)[2]));}

/* k2237 in k2230 in release in object-release in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 536  free */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* f_2276 in object-release in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2276(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2276,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub457(C_SCHEME_UNDEFINED,t3));}

/* object-evict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2093(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2093r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2093r(t0,t1,t2,t3);}}

static void C_ccall f_2093r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2197,a[2]=lf[175],tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2100,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 505  make-hash-table */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,*((C_word*)lf[178]+1));}

/* k2098 in object-evict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2100,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2105,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=lf[177],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2105(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* evict in k2098 in object-evict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2105(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2105,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2115,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 508  hash-table-ref/default */
t4=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[4],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2113 in evict in k2098 in object-evict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2115,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2124,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[6]))){
/* lolevel.scm: 511  align-to-word */
t4=*((C_word*)lf[48]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}
else{
t4=t3;
f_2124(2,t4,(C_word)C_bytes(t2));}}}

/* k2122 in k2113 in evict in k2098 in object-evict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2124,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_fixnum_plus(t1,(C_word)C_bytes(C_fix(1)));
/* lolevel.scm: 512  allocator */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k2126 in k2122 in k2113 in evict in k2098 in object-evict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2128,2,t0,t1);}
t2=(C_word)C_evict_block(((C_word*)t0)[7],t1);
t3=(C_word)C_i_symbolp(((C_word*)t0)[7]);
t4=(C_truep(t3)?(C_word)C_i_set_i_slot(t2,C_fix(0),C_SCHEME_UNDEFINED):C_SCHEME_UNDEFINED);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2134,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 514  hash-table-set! */
t6=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,((C_word*)t0)[2],((C_word*)t0)[7],t2);}

/* k2132 in k2126 in k2122 in k2113 in evict in k2098 in object-evict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2137,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_byteblockp(((C_word*)t0)[4]))){
t3=t2;
f_2137(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_specialp(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:(C_word)C_i_symbolp(((C_word*)t0)[4]));
t5=(C_truep(t4)?C_fix(1):C_fix(0));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t7,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=lf[176],tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_2146(t9,t2,t5);}}

/* do442 in k2132 in k2126 in k2122 in k2113 in evict in k2098 in object-evict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2146(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2146,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2167,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 519  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2105(t5,t3,t4);}}

/* k2165 in do442 in k2132 in k2126 in k2122 in k2113 in evict in k2098 in object-evict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2146(t4,((C_word*)t0)[2],t3);}

/* k2135 in k2132 in k2126 in k2122 in k2113 in evict in k2098 in object-evict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2197 in object-evict in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2197(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2197,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub431(t3,t4));}

/* object-evicted? in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2090(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2090,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_permanentp(t2));}

/* object-copy in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2009(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2009,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2015,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=lf[167],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2015(t6,t1,t2);}

/* copy in object-copy in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2015(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2015,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(C_word)C_slot(t2,C_fix(1));
/* lolevel.scm: 480  ##sys#intern-symbol */
C_string_to_symbol(3,0,t1,t3);}
else{
t3=(C_word)C_block_size(t2);
t4=(C_truep((C_word)C_byteblockp(t2))?(C_word)C_words(t3):t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2045,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 484  make-vector */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2043 in copy in object-copy in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2045(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2045,2,t0,t1);}
t2=(C_word)C_copy_block(((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2048,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_byteblockp(((C_word*)t0)[5]);
t5=(C_truep(t4)?t4:(C_word)C_i_symbolp(((C_word*)t0)[5]));
if(C_truep(t5)){
t6=t3;
f_2048(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(C_truep((C_word)C_specialp(((C_word*)t0)[5]))?C_fix(1):C_fix(0));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2060,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=lf[166],tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_2060(t10,t3,t6);}}

/* do415 in k2043 in copy in object-copy in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_2060(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2060,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2081,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm: 488  copy */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2015(t5,t3,t4);}}

/* k2079 in do415 in k2043 in copy in object-copy in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2060(t4,((C_word*)t0)[2],t3);}

/* k2046 in k2043 in copy in object-copy in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_2048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* record->vector in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1955(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1955,3,t0,t1,t2);}
t3=(C_word)C_immp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_structurep(t2));
if(C_truep(t4)){
t5=(C_word)C_block_size(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1968,a[2]=t1,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 466  ##sys#make-vector */
t7=*((C_word*)lf[161]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
/* lolevel.scm: 470  ##sys#signal-hook */
t5=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,lf[8],lf[159],lf[162],t2);}}

/* k1966 in record->vector in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1973,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=lf[160],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1973(t2,C_fix(0)));}

/* do401 in k1966 in record->vector in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static C_word C_fcall f_1973(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(((C_word*)t0)[3]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[2],t1);
t3=(C_word)C_i_setslot(((C_word*)t0)[3],t1,t2);
t4=(C_word)C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}

/* record-instance? in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1949(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1949,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep((C_word)C_blockp(t2))?(C_word)C_structurep(t2):C_SCHEME_FALSE));}

/* make-record-instance in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1940(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1940r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1940r(t0,t1,t2,t3);}}

static void C_ccall f_1940r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
t4=(C_word)C_i_check_symbol_2(t2,lf[154]);
C_apply(5,0,t1,*((C_word*)lf[155]+1),t2,t3);}

/* number-of-bytes in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1918(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1918,3,t0,t1,t2);}
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
t3=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,lf[8],lf[151],lf[152],t2);}}

/* number-of-slots in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1897(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1897,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1901,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_not((C_word)C_blockp(t2));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1910,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_1910(t6,t4);}
else{
t6=(C_word)C_specialp(t2);
t7=t5;
f_1910(t7,(C_truep(t6)?t6:(C_word)C_byteblockp(t2)));}}

/* k1908 in number-of-slots in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_1910(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* lolevel.scm: 443  ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[8],lf[148],lf[149],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_1901(2,t2,C_SCHEME_UNDEFINED);}}

/* k1899 in number-of-slots in k1893 in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_block_size(((C_word*)t0)[2]));}

/* static-byte-vector->pointer in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1877(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1877,3,t0,t1,t2);}
t3=(C_word)C_i_check_bytevector_2(t2,lf[141]);
if(C_truep((C_word)C_permanentp(t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1887,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 427  ##sys#make-pointer */
t5=*((C_word*)lf[142]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* lolevel.scm: 430  ##sys#error */
t4=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[141],lf[143],t2);}}

/* k1885 in static-byte-vector->pointer in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_pointer_to_block(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* make-static-byte-vector in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1871r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1871r(t0,t1,t2,t3);}}

static void C_ccall f_1871r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* lolevel.scm: 421  make */
t4=((C_word*)t0)[3];
f_1834(t4,t1,t2,t3,((C_word*)t0)[2],lf[139]);}

/* make in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_1834(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1834,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_check_exact_2(t2,t5);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix((C_word)C_HEADER_SIZE_MASK)))){
/* lolevel.scm: 415  ##sys#signal-hook */
t7=*((C_word*)lf[7]+1);
((C_proc7)(void*)(*((C_word*)t7+1)))(7,t7,t1,lf[134],t5,lf[135],t2,C_fix((C_word)C_HEADER_SIZE_MASK));}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1850,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 416  alloc */
t8=t4;
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t2);}}

/* k1848 in make in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1850,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1856,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(0));
/* lolevel.scm: 418  byte-vector-fill! */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t1,t3);}
else{
t3=t2;
f_1856(2,t3,C_SCHEME_UNDEFINED);}}
else{
/* lolevel.scm: 420  ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],lf[136],lf[137],((C_word*)t0)[2]);}}

/* k1854 in k1848 in make in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* malloc in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1827(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1827,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub369(C_SCHEME_UNDEFINED,t3));}

/* byte-vector-length in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1819,3,t0,t1,t2);}
t3=(C_word)C_i_check_bytevector_2(t2,lf[131]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_block_size(t2));}

/* byte-vector->string in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1807(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1807,3,t0,t1,t2);}
t3=(C_word)C_i_check_bytevector_2(t2,lf[129]);
t4=(C_word)C_block_size(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1817,a[2]=t1,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 394  make-string */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}

/* k1815 in byte-vector->string in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_copy_memory(t1,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* string->byte-vector in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1795(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1795,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[126]);
t4=(C_word)C_block_size(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1805,a[2]=t1,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 385  make-byte-vector */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}

/* k1803 in string->byte-vector in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_copy_memory(t1,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* list->byte-vector in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1742(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1742,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,lf[122]);
t4=(C_word)C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1752,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 370  make-byte-vector */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t4);}

/* k1750 in list->byte-vector in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1752,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1757,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=lf[124],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1757(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* do343 in k1750 in list->byte-vector in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_1757(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1757,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1767,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_slot(t2,C_fix(0));
t7=(C_word)C_i_check_exact_2(t6,lf[122]);
t8=t5;
f_1767(2,t8,(C_word)C_setbyte(((C_word*)t0)[4],t3,t6));}
else{
/* lolevel.scm: 378  ##sys#not-a-proper-list-error */
t6=*((C_word*)lf[123]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}}}

/* k1765 in do343 in k1750 in list->byte-vector in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1757(t4,((C_word*)t0)[2],t2,t3);}

/* byte-vector->list in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1706(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1706,3,t0,t1,t2);}
t3=(C_word)C_i_check_bytevector_2(t2,lf[119]);
t4=(C_word)C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1718,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=lf[120],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1718(t8,t1,C_fix(0));}

/* loop in byte-vector->list in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_fcall f_1718(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1718,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_subbyte(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1736,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_fixnum_plus(t2,C_fix(1));
/* lolevel.scm: 363  loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k1734 in loop in byte-vector->list in k1702 in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1736,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* byte-vector-set! in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1669(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1669,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_bytevector_2(t2,lf[115]);
t6=(C_word)C_i_check_exact_2(t3,lf[115]);
t7=(C_word)C_i_check_exact_2(t4,lf[115]);
t8=(C_word)C_block_size(t2);
t9=(C_word)C_fixnum_lessp(t3,C_fix(0));
t10=(C_truep(t9)?t9:(C_word)C_fixnum_greater_or_equal_p(t3,t8));
if(C_truep(t10)){
/* lolevel.scm: 342  ##sys#error */
t11=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t1,lf[115],lf[116],t2,t3);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_setbyte(t2,t3,t4));}}

/* byte-vector in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1630(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1630r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1630r(t0,t1,t2);}}

static void C_ccall f_1630r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t3=(C_word)C_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1637,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 329  make-byte-vector */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}

/* k1635 in byte-vector in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1637,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1642,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=lf[113],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_1642(t2,C_fix(0),((C_word*)t0)[2]));}

/* do311 in k1635 in byte-vector in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static C_word C_fcall f_1642(C_word t0,C_word t1,C_word t2){
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
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[3]))){
return(((C_word*)t0)[2]);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_setbyte(((C_word*)t0)[2],t1,t3);
t5=(C_word)C_fixnum_plus(t1,C_fix(1));
t6=(C_word)C_slot(t2,C_fix(1));
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}

/* make-byte-vector in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1608(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1608r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1608r(t0,t1,t2,t3);}}

static void C_ccall f_1608r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[109]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1615,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 320  ##sys#allocate-vector */
t6=*((C_word*)lf[110]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t5,t2,C_SCHEME_TRUE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k1613 in make-byte-vector in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1615,2,t0,t1);}
t2=(C_word)C_string_to_bytevector(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1618,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_notvemptyp(((C_word*)t0)[3]))){
t4=(C_word)C_i_vector_ref(((C_word*)t0)[3],C_fix(0));
/* lolevel.scm: 322  byte-vector-fill! */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t1,t4);}
else{
t4=t3;
f_1618(2,t4,C_SCHEME_UNDEFINED);}}

/* k1616 in k1613 in make-byte-vector in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* byte-vector-fill! in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1574(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1574,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_bytevector_2(t2,lf[106]);
t5=(C_word)C_i_check_exact_2(t3,lf[106]);
t6=(C_word)C_block_size(t2);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1589,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=lf[107],tmp=(C_word)a,a+=6,tmp);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,f_1589(t7,C_fix(0)));}

/* do293 in byte-vector-fill! in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static C_word C_fcall f_1589(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
return(C_SCHEME_UNDEFINED);}
else{
t2=(C_word)C_setbyte(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t3=(C_word)C_fixnum_plus(t1,C_fix(1));
t5=t3;
t1=t5;
goto loop;}}

/* byte-vector? in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1568(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1568,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep((C_word)C_blockp(t2))?(C_word)C_bytevectorp(t2):C_SCHEME_FALSE));}

/* set-procedure-data! in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1553(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1553,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1557,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 296  extend-procedure */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t2,t3);}

/* k1555 in set-procedure-data! in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1557(C_word c,C_word t0,C_word t1){
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
t3=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],lf[8],lf[101],lf[102],((C_word*)t0)[3]);}}

/* procedure-data in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1519,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1529,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1537,a[2]=lf[99],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 290  ##sys#lambda-decoration */
t5=*((C_word*)lf[96]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a1536 in procedure-data in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1537,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[87],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1527 in procedure-data in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_slot(t1,C_fix(1)):C_SCHEME_FALSE));}

/* extended-procedure? in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1488(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1488,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
if(C_truep((C_word)C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1501,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1503,a[2]=lf[95],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 284  ##sys#lambda-decoration */
t5=*((C_word*)lf[96]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t2,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a1502 in extended-procedure? in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1503(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1503,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[87],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1499 in extended-procedure? in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* extend-procedure in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1450,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1454,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_closurep(t2))){
t5=t4;
f_1454(2,t5,C_SCHEME_UNDEFINED);}
else{
/* lolevel.scm: 273  ##sys#signal-hook */
t5=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[8],lf[88],lf[92],t2);}}

/* k1452 in extend-procedure in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1459,a[2]=lf[89],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1475,a[2]=((C_word*)t0)[4],a[3]=lf[90],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 274  ##sys#decorate-lambda */
t4=*((C_word*)lf[91]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a1474 in k1452 in extend-procedure in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1475(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1475,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,lf[87],((C_word*)t0)[2]);
t5=(C_word)C_i_setslot(t2,t3,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}

/* a1458 in k1452 in extend-procedure in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1459(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1459,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[87],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* pointer-tag in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1428(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1428,3,t0,t1,t2);}
t3=(C_truep((C_word)C_blockp(t2))?(C_word)C_specialp(t2):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep((C_word)C_taggedpointerp(t2))?(C_word)C_slot(t2,C_fix(1)):C_SCHEME_FALSE));}
else{
/* lolevel.scm: 263  ##sys#signal-hook */
t4=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[8],lf[77],lf[84],t2);}}

/* tagged-pointer? in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1412,4,t0,t1,t2,t3);}
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

/* tag-pointer in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1397(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1397,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1401,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 248  ##sys#make-tagged-pointer */
t5=*((C_word*)lf[79]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k1399 in tag-pointer in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1404,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep((C_word)C_blockp(((C_word*)t0)[2]))?(C_word)C_specialp(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t2;
f_1404(2,t4,(C_word)C_copy_pointer(((C_word*)t0)[2],t1));}
else{
/* lolevel.scm: 251  ##sys#signal-hook */
t4=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[8],lf[77],lf[78],((C_word*)t0)[2]);}}

/* k1402 in k1399 in tag-pointer in k1393 in k1389 in k1385 in k1381 in k1377 in k1373 in k1369 in k1365 in k688 in k685 */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* pointer-f64-set! in k688 in k685 */
static void C_ccall f_1351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1351,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=(C_word)C_i_foreign_flonum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub208(C_SCHEME_UNDEFINED,t4,t5));}

/* pointer-f32-set! in k688 in k685 */
static void C_ccall f_1337(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1337,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=(C_word)C_i_foreign_flonum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub200(C_SCHEME_UNDEFINED,t4,t5));}

/* pointer-s32-set! in k688 in k685 */
static void C_ccall f_1323(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1323,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub192(C_SCHEME_UNDEFINED,t4,t5));}

/* pointer-u32-set! in k688 in k685 */
static void C_ccall f_1309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1309,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub184(C_SCHEME_UNDEFINED,t4,t5));}

/* pointer-s16-set! in k688 in k685 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1295,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub176(C_SCHEME_UNDEFINED,t4,t5));}

/* pointer-u16-set! in k688 in k685 */
static void C_ccall f_1281(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1281,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub168(C_SCHEME_UNDEFINED,t4,t5));}

/* pointer-s8-set! in k688 in k685 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1267,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub160(C_SCHEME_UNDEFINED,t4,t5));}

/* pointer-u8-set! in k688 in k685 */
static void C_ccall f_1253(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1253,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub152(C_SCHEME_UNDEFINED,t4,t5));}

/* pointer-offset in k688 in k685 */
static void C_ccall f_1239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1239,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_integer_argumentp(t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)stub143(t4,t5,t6));}

/* align-to-word in k688 in k685 */
static void C_ccall f_1207(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1207,3,t0,t1,t2);}
if(C_truep((C_word)C_i_numberp(t2))){
/* lolevel.scm: 189  align */
t3=t1;
((C_proc2)C_retrieve_proc(t3))(2,t3,f_1201(C_a_i(&a,6),t2));}
else{
t3=(C_truep((C_word)C_blockp(t2))?(C_word)C_specialp(t2):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1234,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 191  ##sys#pointer->address */
t5=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
/* lolevel.scm: 192  ##sys#signal-hook */
t4=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[8],lf[48],lf[49],t2);}}}

/* k1232 in align-to-word in k688 in k685 */
static void C_ccall f_1234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1234,2,t0,t1);}
t2=f_1201(C_a_i(&a,6),t1);
/* lolevel.scm: 191  ##sys#address->pointer */
t3=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* align in k688 in k685 */
static C_word C_fcall f_1201(C_word *a,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(4));
t3=(C_word)C_i_foreign_integer_argumentp(t1);
return((C_word)stub136(t2,t3));}

/* free in k688 in k685 */
static void C_ccall f_1191(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1191,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub129(C_SCHEME_UNDEFINED,t3));}

/* allocate in k688 in k685 */
static void C_ccall f_1184(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1184,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub124(t3,t4));}

/* pointer=? in k688 in k685 */
static void C_ccall f_1175(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1175,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1179,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 179  ##sys#check-special */
t5=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[41]);}

/* k1177 in pointer=? in k688 in k685 */
static void C_ccall f_1179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1179,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 180  ##sys#check-special */
t3=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[41]);}

/* k1180 in k1177 in pointer=? in k688 in k685 */
static void C_ccall f_1182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_pointer_eqp(((C_word*)t0)[3],((C_word*)t0)[2]));}

/* pointer->object in k688 in k685 */
static void C_ccall f_1169(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1169,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1173,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 175  ##sys#check-pointer */
t4=*((C_word*)lf[19]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[39]);}

/* k1171 in pointer->object in k688 in k685 */
static void C_ccall f_1173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_pointer_to_object(((C_word*)t0)[2]));}

/* object->pointer in k688 in k685 */
static void C_ccall f_1158(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1158,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1166,a[2]=lf[37],tmp=(C_word)a,a+=3,tmp);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* f_1166 in object->pointer in k688 in k685 */
static void C_ccall f_1166(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1166,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub113(t3,t2));}

/* null-pointer? in k688 in k685 */
static void C_ccall f_1145(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1145,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1149,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 165  ##sys#check-special */
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[34]);}

/* k1147 in null-pointer? in k688 in k685 */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1156,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 166  ##sys#pointer->address */
t3=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1154 in k1147 in null-pointer? in k688 in k685 */
static void C_ccall f_1156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(C_fix(0),t1));}

/* pointer->address in k688 in k685 */
static void C_ccall f_1136(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1136,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1140,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 161  ##sys#check-special */
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[30]);}

/* k1138 in pointer->address in k688 in k685 */
static void C_ccall f_1140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 162  ##sys#pointer->address */
t2=*((C_word*)lf[31]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* address->pointer in k688 in k685 */
static void C_ccall f_1117(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1117,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1121,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_integerp(t2))){
t4=t3;
f_1121(2,t4,C_SCHEME_UNDEFINED);}
else{
/* lolevel.scm: 156  ##sys#signal-hook */
t4=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[8],lf[26],lf[28],t2);}}

/* k1119 in address->pointer in k688 in k685 */
static void C_ccall f_1121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 158  ##sys#address->pointer */
t2=*((C_word*)lf[27]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pointer? in k688 in k685 */
static void C_ccall f_1108(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1108,3,t0,t1,t2);}
if(C_truep((C_word)C_blockp(t2))){
t3=(C_word)C_pointerp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:(C_word)C_taggedpointerp(t2)));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* ##sys#check-pointer in k688 in k685 */
static void C_ccall f_1089(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1089,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1096,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_blockp(t2))){
t5=(C_word)C_pointerp(t2);
if(C_truep(t5)){
t6=t4;
f_1096(t6,t5);}
else{
t6=(C_word)C_swigpointerp(t2);
t7=t4;
f_1096(t7,(C_truep(t6)?t6:(C_word)C_taggedpointerp(t2)));}}
else{
t5=t4;
f_1096(t5,C_SCHEME_FALSE);}}

/* k1094 in ##sys#check-pointer in k688 in k685 */
static void C_fcall f_1096(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* lolevel.scm: 143  ##sys#signal-hook */
t2=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[8],((C_word*)t0)[3],lf[20],((C_word*)t0)[2]);}}

/* move-memory! in k688 in k685 */
static void C_ccall f_772(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+30)){
C_save_and_reclaim((void*)tr4r,(void*)f_772r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_772r(t0,t1,t2,t3,t4);}}

static void C_ccall f_772r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(30);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_775,a[2]=t3,a[3]=t2,a[4]=lf[6],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_781,a[2]=lf[10],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_787,a[2]=t3,a[3]=t2,a[4]=lf[12],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_799,a[2]=t3,a[3]=t2,a[4]=lf[14],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_820,a[2]=t8,a[3]=t7,a[4]=t5,a[5]=t4,a[6]=t6,a[7]=t10,a[8]=((C_word*)t0)[2],a[9]=lf[17],tmp=(C_word)a,a+=10,tmp));
t12=((C_word*)t10)[1];
f_820(t12,t1,t2,t3);}

/* move in move-memory! in k688 in k685 */
static void C_fcall f_820(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(10);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_820,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_structurep(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
if(C_truep((C_word)C_i_memq(t4,((C_word*)t0)[8]))){
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
f_781(t1,t2);}}
else{
if(C_truep((C_word)C_structurep(t3))){
t4=(C_word)C_slot(t3,C_fix(0));
if(C_truep((C_word)C_i_memq(t4,((C_word*)t0)[8]))){
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
f_781(t1,t3);}}
else{
t4=(C_word)C_pointerp(t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[5],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t4)){
t6=t5;
f_882(2,t6,t4);}
else{
/* lolevel.scm: 121  ##sys#locative? */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}}}

/* k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_882,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_pointerp(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_891,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=t3;
f_891(2,t4,t2);}
else{
/* lolevel.scm: 122  ##sys#locative? */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[9]);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_981,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* lolevel.scm: 126  ##sys#bytevector? */
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}

/* k979 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_981,2,t0,t1);}
t2=(C_truep(t1)?t1:(C_word)C_i_stringp(((C_word*)t0)[8]));
if(C_truep(t2)){
t3=(C_word)C_block_size(((C_word*)t0)[8]);
t4=(C_word)C_pointerp(((C_word*)t0)[7]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_996,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t4)){
t6=t5;
f_996(2,t6,t4);}
else{
/* lolevel.scm: 128  ##sys#locative? */
t6=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[7]);}}
else{
/* lolevel.scm: 133  xerr */
f_781(((C_word*)t0)[6],((C_word*)t0)[8]);}}

/* k994 in k979 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_996,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1003,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[6];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1007,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1007(2,t5,((C_word*)t0)[4]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1007(2,t6,(C_word)C_i_car(t3));}
else{
/* lolevel.scm: 129  ##sys#error */
t6=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* lolevel.scm: 130  ##sys#bytevector? */
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[8]);}}

/* k1030 in k994 in k979 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_1032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1032,2,t0,t1);}
t2=(C_truep(t1)?t1:(C_word)C_i_stringp(((C_word*)t0)[8]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1042,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[5];
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1046,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t6=t5;
f_1046(2,t6,((C_word*)t0)[3]);}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_1046(2,t7,(C_word)C_i_car(t4));}
else{
/* lolevel.scm: 131  ##sys#error */
t7=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}
else{
/* lolevel.scm: 132  xerr */
f_781(((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* k1044 in k1030 in k994 in k979 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_1046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_block_size(((C_word*)t0)[5]);
/* lolevel.scm: 131  checkn2 */
t3=((C_word*)t0)[4];
f_799(t3,((C_word*)t0)[3],t1,((C_word*)t0)[2],t2);}

/* k1040 in k1030 in k994 in k979 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_1042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?(C_word)C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t7=(C_word)C_i_foreign_fixnum_argumentp(t1);
t8=t2;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)stub44(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* k1005 in k994 in k979 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_1007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 129  checkn */
t2=((C_word*)t0)[4];
f_787(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1001 in k994 in k979 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_1003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=(C_truep(t3)?(C_word)C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?(C_word)C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t7=(C_word)C_i_foreign_fixnum_argumentp(t1);
t8=t2;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)stub20(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* k889 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_891,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_898,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* lolevel.scm: 122  err */
t4=((C_word*)t0)[4];
f_775(t4,t3);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_898(2,t5,(C_word)C_i_car(t2));}
else{
/* lolevel.scm: 122  ##sys#error */
t5=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_926,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* lolevel.scm: 123  ##sys#bytevector? */
t3=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}

/* k924 in k889 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_926,2,t0,t1);}
t2=(C_truep(t1)?t1:(C_word)C_i_stringp(((C_word*)t0)[8]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_936,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[5];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_940,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* lolevel.scm: 124  err */
t6=((C_word*)t0)[3];
f_775(t6,t5);}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_940(2,t7,(C_word)C_i_car(t4));}
else{
/* lolevel.scm: 124  ##sys#error */
t7=*((C_word*)lf[4]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}
else{
/* lolevel.scm: 125  xerr */
f_781(((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* k938 in k924 in k889 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_block_size(((C_word*)t0)[4]);
/* lolevel.scm: 124  checkn */
t3=((C_word*)t0)[3];
f_787(t3,((C_word*)t0)[2],t1,t2);}

/* k934 in k924 in k889 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?(C_word)C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t7=(C_word)C_i_foreign_fixnum_argumentp(t1);
t8=t2;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)stub32(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* k896 in k889 in k880 in move in move-memory! in k688 in k685 */
static void C_ccall f_898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=(C_truep(t3)?(C_word)C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t6=(C_truep(t4)?(C_word)C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t7=(C_word)C_i_foreign_fixnum_argumentp(t1);
t8=t2;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)stub8(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* checkn2 in move-memory! in k688 in k685 */
static void C_fcall f_799(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_799,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fixnum_less_or_equal_p(t2,t3);
t6=(C_truep(t5)?(C_word)C_fixnum_less_or_equal_p(t2,t4):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}
else{
/* lolevel.scm: 111  ##sys#error */
t7=*((C_word*)lf[4]+1);
((C_proc9)(void*)(*((C_word*)t7+1)))(9,t7,t1,lf[3],lf[13],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3,t4);}}

/* checkn in move-memory! in k688 in k685 */
static void C_fcall f_787(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_787,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
/* lolevel.scm: 107  ##sys#error */
t4=*((C_word*)lf[4]+1);
((C_proc8)(void*)(*((C_word*)t4+1)))(8,t4,t1,lf[3],lf[11],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}}

/* xerr in move-memory! in k688 in k685 */
static void C_fcall f_781(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_781,NULL,2,t1,t2);}
/* lolevel.scm: 103  ##sys#signal-hook */
t3=*((C_word*)lf[7]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,lf[8],lf[3],lf[9],t2);}

/* err in move-memory! in k688 in k685 */
static void C_fcall f_775(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_775,NULL,2,t0,t1);}
/* lolevel.scm: 102  ##sys#error */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,t1,lf[3],lf[5],((C_word*)t0)[3],((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[218] = {
{"toplevellolevel.scm",(void*)C_lolevel_toplevel},
{"f_687lolevel.scm",(void*)f_687},
{"f_690lolevel.scm",(void*)f_690},
{"f_2988lolevel.scm",(void*)f_2988},
{"f_1367lolevel.scm",(void*)f_1367},
{"f_2978lolevel.scm",(void*)f_2978},
{"f_1371lolevel.scm",(void*)f_1371},
{"f_2968lolevel.scm",(void*)f_2968},
{"f_1375lolevel.scm",(void*)f_1375},
{"f_2958lolevel.scm",(void*)f_2958},
{"f_1379lolevel.scm",(void*)f_1379},
{"f_2948lolevel.scm",(void*)f_2948},
{"f_1383lolevel.scm",(void*)f_1383},
{"f_2938lolevel.scm",(void*)f_2938},
{"f_1387lolevel.scm",(void*)f_1387},
{"f_2928lolevel.scm",(void*)f_2928},
{"f_1391lolevel.scm",(void*)f_1391},
{"f_2918lolevel.scm",(void*)f_2918},
{"f_1395lolevel.scm",(void*)f_1395},
{"f_2888lolevel.scm",(void*)f_2888},
{"f_1704lolevel.scm",(void*)f_1704},
{"f_1895lolevel.scm",(void*)f_1895},
{"f_2801lolevel.scm",(void*)f_2801},
{"f_2874lolevel.scm",(void*)f_2874},
{"f_2865lolevel.scm",(void*)f_2865},
{"f_2856lolevel.scm",(void*)f_2856},
{"f_2850lolevel.scm",(void*)f_2850},
{"f_2833lolevel.scm",(void*)f_2833},
{"f_2838lolevel.scm",(void*)f_2838},
{"f_2813lolevel.scm",(void*)f_2813},
{"f_2817lolevel.scm",(void*)f_2817},
{"f_2820lolevel.scm",(void*)f_2820},
{"f_2806lolevel.scm",(void*)f_2806},
{"f_2803lolevel.scm",(void*)f_2803},
{"f_2796lolevel.scm",(void*)f_2796},
{"f_2767lolevel.scm",(void*)f_2767},
{"f_2775lolevel.scm",(void*)f_2775},
{"f_2738lolevel.scm",(void*)f_2738},
{"f_2746lolevel.scm",(void*)f_2746},
{"f_2675lolevel.scm",(void*)f_2675},
{"f_2687lolevel.scm",(void*)f_2687},
{"f_2709lolevel.scm",(void*)f_2709},
{"f_2712lolevel.scm",(void*)f_2712},
{"f_2682lolevel.scm",(void*)f_2682},
{"f_2540lolevel.scm",(void*)f_2540},
{"f_2544lolevel.scm",(void*)f_2544},
{"f_2553lolevel.scm",(void*)f_2553},
{"f_2558lolevel.scm",(void*)f_2558},
{"f_2574lolevel.scm",(void*)f_2574},
{"f_2617lolevel.scm",(void*)f_2617},
{"f_2620lolevel.scm",(void*)f_2620},
{"f_2629lolevel.scm",(void*)f_2629},
{"f_2650lolevel.scm",(void*)f_2650},
{"f_2623lolevel.scm",(void*)f_2623},
{"f_2603lolevel.scm",(void*)f_2603},
{"f_2606lolevel.scm",(void*)f_2606},
{"f_2587lolevel.scm",(void*)f_2587},
{"f_2590lolevel.scm",(void*)f_2590},
{"f_2456lolevel.scm",(void*)f_2456},
{"f_2460lolevel.scm",(void*)f_2460},
{"f_2465lolevel.scm",(void*)f_2465},
{"f_2478lolevel.scm",(void*)f_2478},
{"f_2535lolevel.scm",(void*)f_2535},
{"f_2487lolevel.scm",(void*)f_2487},
{"f_2499lolevel.scm",(void*)f_2499},
{"f_2521lolevel.scm",(void*)f_2521},
{"f_2490lolevel.scm",(void*)f_2490},
{"f_2286lolevel.scm",(void*)f_2286},
{"f_2290lolevel.scm",(void*)f_2290},
{"f_2293lolevel.scm",(void*)f_2293},
{"f_2435lolevel.scm",(void*)f_2435},
{"f_2296lolevel.scm",(void*)f_2296},
{"f_2299lolevel.scm",(void*)f_2299},
{"f_2307lolevel.scm",(void*)f_2307},
{"f_2317lolevel.scm",(void*)f_2317},
{"f_2428lolevel.scm",(void*)f_2428},
{"f_2416lolevel.scm",(void*)f_2416},
{"f_2420lolevel.scm",(void*)f_2420},
{"f_2412lolevel.scm",(void*)f_2412},
{"f_2329lolevel.scm",(void*)f_2329},
{"f_2389lolevel.scm",(void*)f_2389},
{"f_2335lolevel.scm",(void*)f_2335},
{"f_2338lolevel.scm",(void*)f_2338},
{"f_2350lolevel.scm",(void*)f_2350},
{"f_2371lolevel.scm",(void*)f_2371},
{"f_2341lolevel.scm",(void*)f_2341},
{"f_2302lolevel.scm",(void*)f_2302},
{"f_2204lolevel.scm",(void*)f_2204},
{"f_2213lolevel.scm",(void*)f_2213},
{"f_2248lolevel.scm",(void*)f_2248},
{"f_2258lolevel.scm",(void*)f_2258},
{"f_2232lolevel.scm",(void*)f_2232},
{"f_2239lolevel.scm",(void*)f_2239},
{"f_2276lolevel.scm",(void*)f_2276},
{"f_2093lolevel.scm",(void*)f_2093},
{"f_2100lolevel.scm",(void*)f_2100},
{"f_2105lolevel.scm",(void*)f_2105},
{"f_2115lolevel.scm",(void*)f_2115},
{"f_2124lolevel.scm",(void*)f_2124},
{"f_2128lolevel.scm",(void*)f_2128},
{"f_2134lolevel.scm",(void*)f_2134},
{"f_2146lolevel.scm",(void*)f_2146},
{"f_2167lolevel.scm",(void*)f_2167},
{"f_2137lolevel.scm",(void*)f_2137},
{"f_2197lolevel.scm",(void*)f_2197},
{"f_2090lolevel.scm",(void*)f_2090},
{"f_2009lolevel.scm",(void*)f_2009},
{"f_2015lolevel.scm",(void*)f_2015},
{"f_2045lolevel.scm",(void*)f_2045},
{"f_2060lolevel.scm",(void*)f_2060},
{"f_2081lolevel.scm",(void*)f_2081},
{"f_2048lolevel.scm",(void*)f_2048},
{"f_1955lolevel.scm",(void*)f_1955},
{"f_1968lolevel.scm",(void*)f_1968},
{"f_1973lolevel.scm",(void*)f_1973},
{"f_1949lolevel.scm",(void*)f_1949},
{"f_1940lolevel.scm",(void*)f_1940},
{"f_1918lolevel.scm",(void*)f_1918},
{"f_1897lolevel.scm",(void*)f_1897},
{"f_1910lolevel.scm",(void*)f_1910},
{"f_1901lolevel.scm",(void*)f_1901},
{"f_1877lolevel.scm",(void*)f_1877},
{"f_1887lolevel.scm",(void*)f_1887},
{"f_1871lolevel.scm",(void*)f_1871},
{"f_1834lolevel.scm",(void*)f_1834},
{"f_1850lolevel.scm",(void*)f_1850},
{"f_1856lolevel.scm",(void*)f_1856},
{"f_1827lolevel.scm",(void*)f_1827},
{"f_1819lolevel.scm",(void*)f_1819},
{"f_1807lolevel.scm",(void*)f_1807},
{"f_1817lolevel.scm",(void*)f_1817},
{"f_1795lolevel.scm",(void*)f_1795},
{"f_1805lolevel.scm",(void*)f_1805},
{"f_1742lolevel.scm",(void*)f_1742},
{"f_1752lolevel.scm",(void*)f_1752},
{"f_1757lolevel.scm",(void*)f_1757},
{"f_1767lolevel.scm",(void*)f_1767},
{"f_1706lolevel.scm",(void*)f_1706},
{"f_1718lolevel.scm",(void*)f_1718},
{"f_1736lolevel.scm",(void*)f_1736},
{"f_1669lolevel.scm",(void*)f_1669},
{"f_1630lolevel.scm",(void*)f_1630},
{"f_1637lolevel.scm",(void*)f_1637},
{"f_1642lolevel.scm",(void*)f_1642},
{"f_1608lolevel.scm",(void*)f_1608},
{"f_1615lolevel.scm",(void*)f_1615},
{"f_1618lolevel.scm",(void*)f_1618},
{"f_1574lolevel.scm",(void*)f_1574},
{"f_1589lolevel.scm",(void*)f_1589},
{"f_1568lolevel.scm",(void*)f_1568},
{"f_1553lolevel.scm",(void*)f_1553},
{"f_1557lolevel.scm",(void*)f_1557},
{"f_1519lolevel.scm",(void*)f_1519},
{"f_1537lolevel.scm",(void*)f_1537},
{"f_1529lolevel.scm",(void*)f_1529},
{"f_1488lolevel.scm",(void*)f_1488},
{"f_1503lolevel.scm",(void*)f_1503},
{"f_1501lolevel.scm",(void*)f_1501},
{"f_1450lolevel.scm",(void*)f_1450},
{"f_1454lolevel.scm",(void*)f_1454},
{"f_1475lolevel.scm",(void*)f_1475},
{"f_1459lolevel.scm",(void*)f_1459},
{"f_1428lolevel.scm",(void*)f_1428},
{"f_1412lolevel.scm",(void*)f_1412},
{"f_1397lolevel.scm",(void*)f_1397},
{"f_1401lolevel.scm",(void*)f_1401},
{"f_1404lolevel.scm",(void*)f_1404},
{"f_1351lolevel.scm",(void*)f_1351},
{"f_1337lolevel.scm",(void*)f_1337},
{"f_1323lolevel.scm",(void*)f_1323},
{"f_1309lolevel.scm",(void*)f_1309},
{"f_1295lolevel.scm",(void*)f_1295},
{"f_1281lolevel.scm",(void*)f_1281},
{"f_1267lolevel.scm",(void*)f_1267},
{"f_1253lolevel.scm",(void*)f_1253},
{"f_1239lolevel.scm",(void*)f_1239},
{"f_1207lolevel.scm",(void*)f_1207},
{"f_1234lolevel.scm",(void*)f_1234},
{"f_1201lolevel.scm",(void*)f_1201},
{"f_1191lolevel.scm",(void*)f_1191},
{"f_1184lolevel.scm",(void*)f_1184},
{"f_1175lolevel.scm",(void*)f_1175},
{"f_1179lolevel.scm",(void*)f_1179},
{"f_1182lolevel.scm",(void*)f_1182},
{"f_1169lolevel.scm",(void*)f_1169},
{"f_1173lolevel.scm",(void*)f_1173},
{"f_1158lolevel.scm",(void*)f_1158},
{"f_1166lolevel.scm",(void*)f_1166},
{"f_1145lolevel.scm",(void*)f_1145},
{"f_1149lolevel.scm",(void*)f_1149},
{"f_1156lolevel.scm",(void*)f_1156},
{"f_1136lolevel.scm",(void*)f_1136},
{"f_1140lolevel.scm",(void*)f_1140},
{"f_1117lolevel.scm",(void*)f_1117},
{"f_1121lolevel.scm",(void*)f_1121},
{"f_1108lolevel.scm",(void*)f_1108},
{"f_1089lolevel.scm",(void*)f_1089},
{"f_1096lolevel.scm",(void*)f_1096},
{"f_772lolevel.scm",(void*)f_772},
{"f_820lolevel.scm",(void*)f_820},
{"f_882lolevel.scm",(void*)f_882},
{"f_981lolevel.scm",(void*)f_981},
{"f_996lolevel.scm",(void*)f_996},
{"f_1032lolevel.scm",(void*)f_1032},
{"f_1046lolevel.scm",(void*)f_1046},
{"f_1042lolevel.scm",(void*)f_1042},
{"f_1007lolevel.scm",(void*)f_1007},
{"f_1003lolevel.scm",(void*)f_1003},
{"f_891lolevel.scm",(void*)f_891},
{"f_926lolevel.scm",(void*)f_926},
{"f_940lolevel.scm",(void*)f_940},
{"f_936lolevel.scm",(void*)f_936},
{"f_898lolevel.scm",(void*)f_898},
{"f_799lolevel.scm",(void*)f_799},
{"f_787lolevel.scm",(void*)f_787},
{"f_781lolevel.scm",(void*)f_781},
{"f_775lolevel.scm",(void*)f_775},
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
