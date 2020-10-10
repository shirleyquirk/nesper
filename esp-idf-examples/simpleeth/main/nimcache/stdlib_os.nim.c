/* Generated by Nim Compiler v1.3.7 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <errno.h>
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  
/* section: NIM_merge_FORWARD_TYPES */
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
};
struct NimStrPayload {NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {NI len;
NimStrPayload* p;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {NI rc;
NI rootIdx;
};
struct TNimTypeV2 {void* destructor;
NI size;
NI align;
NCSTRING name;
void* traceImpl;
void* disposeImpl;
void* typeInfoV1;
};
struct RootObj {TNimTypeV2* m_type;};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {  RootObj Sup;Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {  Exception Sup;};
struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA {  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;NI32 errorCode;
};


#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      
/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, eqsink___aBBXmHFBEivKqERloP6zmA_2)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*, newOSError__JXEuze9ctNbkn51HYBflQLg)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___UZ66vRTZhSc7gx3IAuMd6Q)(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA** dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p);
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__LoYD9cYK9aJvrcDizBN64qaQ)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, osErrorMsg__33xViSVWAmDrexoKkLfMhg)(NI32 errorCode);
static N_INLINE(NIM_CHAR, X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringV2 s, NI i);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__45fPtFhY4FavRaYwDhRfuA)(NimStringV2* s, NimStringV2 x);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);

/* section: NIM_merge_DATA */
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_2 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_3 = {0, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_2};
extern TNimTypeV2 NTIv2__BeJgrOdDsczOwEWOZbRfKA_;
static const struct {
  NI cap; NIM_CHAR data[17+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_8 = { 17 | NIM_STRLIT_FLAG, "Additional info: " };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_9 = {17, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_8};
static const struct {
  NI cap; NIM_CHAR data[16+1];
} TM__yu6cxgKBBXbNsTkT9cyMd4g_12 = { 16 | NIM_STRLIT_FLAG, "unknown OS error" };
static const NimStringV2 TM__yu6cxgKBBXbNsTkT9cyMd4g_13 = {16, (NimStrPayload*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_12};

/* section: NIM_merge_VARS */
N_LIB_PRIVATE NIM_THREADVAR tySequence__sM4lkSb7zS6F7OVMvW9cffQ environment__mlhK49b6YMgc9cgrcYkKq9a3g;
N_LIB_PRIVATE NIM_THREADVAR NIM_BOOL envComputed__LLyFo9bsdu1ZXMDvAe8DhrQ;
extern NCSTRING* environ;
extern int cmdCount;
extern NCSTRING* cmdLine;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */

#line 97 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void) {	NI32 result;	result = (NI32)0;
#line 119 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	result = errno;	return result;}

#line 544 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, nimFrame)(TFrame* s) {
#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 545 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA3_;

#line 546 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = ((NI16) 0);	}
	goto LA1_;
	LA3_: ;
	{
#line 549 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 549 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		(*s).calldepth = (NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1));	}
	LA1_: ;

#line 551 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
#line 552 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	{
#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;

#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"

#line 553 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA8_: ;
}

#line 86 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(void, popFrame)(void) {
#line 87 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;}

#line 18 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
N_LIB_PRIVATE N_NIMCALL(NimStringV2, osErrorMsg__33xViSVWAmDrexoKkLfMhg)(NI32 errorCode) {	NimStringV2 result;	nimfr_("osErrorMsg", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");	result.len = 0; result.p = NIM_NIL;
#line 39 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(39, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");	result = TM__yu6cxgKBBXbNsTkT9cyMd4g_3;
#line 57 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(57, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");	{		NCSTRING T5_;		NimStringV2 T6_;
#line 57 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 57 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		if (!!((errorCode == ((NI32) 0)))) goto LA3_;

#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
		nimln_(49, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");
#line 58 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		nimln_(58, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");
#line 58 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 58 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		T5_ = (NCSTRING)0;		T5_ = strerror(errorCode);		T6_.len = 0; T6_.p = NIM_NIL;		T6_ = cstrToNimstr(T5_);
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
		nimln_(49, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");		eqsink___aBBXmHFBEivKqERloP6zmA_2((&result), T6_);
	}
	LA3_: ;
	popFrame();	return result;}

#line 436 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics.nim"
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y) {	NI result;	nimfr_("-%", "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics"
".nim");	result = (NI)0;
#line 437 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics.nim"
	nimln_(437, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics"
".nim");
#line 441 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics.nim"
	nimln_(441, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arithmetics"
".nim");	result = ((NI) ((NU)((NU32)(((NU) (x))) - (NU32)(((NU) (y))))));	popFrame();	return result;}

#line 414 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {	NIM_BOOL* result;	result = (NIM_BOOL*)0;
#line 415 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/excpt.nim"
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);	return result;}

#line 372 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p) {	NIM_BOOL result;NIM_BOOL* nimErr_;	nimfr_("nimDecRefIsLastCyclicDyn", "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");{nimErr_ = nimErrorFlag();	result = (NIM_BOOL)0;
#line 373 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
	nimln_(373, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");	{		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;		NI T5_;
#line 373 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"

#line 373 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
		if (!!((p == NIM_NIL))) goto LA3_;

#line 374 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
		nimln_(374, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");
#line 63 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arc.nim"
		nimln_(63, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arc.nim");
#line 63 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arc.nim"
		T5_ = (NI)0;		T5_ = minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem(((NI) (ptrdiff_t) (p)), ((NI) 8));		cell = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T5_));
#line 375 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
		nimln_(375, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");		{
#line 375 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"

#line 375 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
			if (!((NI)((*cell).rc & ((NI) -16)) == ((NI) 0))) goto LA8_;

#line 376 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
			nimln_(376, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");			result = NIM_TRUE;		}
		goto LA6_;
		LA8_: ;
		{			NI TM__yu6cxgKBBXbNsTkT9cyMd4g_4;
#line 379 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
			nimln_(379, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");			if (nimSubInt((*cell).rc, ((NI) 16), &TM__yu6cxgKBBXbNsTkT9cyMd4g_4)) { raiseOverflow(); goto BeforeRet_;};			(*cell).rc = (NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_4);		}
		LA6_: ;

#line 381 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
		nimln_(381, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");
#line 381 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
		rememberCycle__LoYD9cYK9aJvrcDizBN64qaQ(result, cell, (*((TNimTypeV2**) (p))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}
	LA3_: ;
	}BeforeRet_: ;
	popFrame();	return result;}

#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___UZ66vRTZhSc7gx3IAuMd6Q)(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA** dest) {
#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	{		NIM_BOOL T3_;
#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		T3_ = (NIM_BOOL)0;		T3_ = nimDecRefIsLastCyclicDyn((*dest));		if (!T3_) goto LA4_;

#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		nimDestroyAndDispose((*dest));
	}
	LA4_: ;
}

#line 2581 "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim"
static N_INLINE(NIM_CHAR, X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringV2 s, NI i) {	NIM_CHAR result;	NI TM__yu6cxgKBBXbNsTkT9cyMd4g_5;	nimfr_("[]", "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim");{	result = (NIM_CHAR)0;
#line 2581 "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim"
	nimln_(2581, "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim");
#line 2581 "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim"

#line 2581 "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim"
	if (nimSubInt(s.len, i, &TM__yu6cxgKBBXbNsTkT9cyMd4g_5)) { raiseOverflow(); goto BeforeRet_;};	if ((NU)((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_5)) >= (NU)s.len){ raiseIndexError2((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_5),s.len-1); goto BeforeRet_;}	result = s.p->data[(NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_5)];	}BeforeRet_: ;
	popFrame();	return result;}

#line 55 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {	NI TM__yu6cxgKBBXbNsTkT9cyMd4g_6;	NI TM__yu6cxgKBBXbNsTkT9cyMd4g_7;{
#line 57 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"

#line 57 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
	prepareAdd(s, ((NI) 1));

#line 58 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
	(*(*s).p).data[(*s).len] = c;
#line 59 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
	if (nimAddInt((*s).len, ((NI) 1), &TM__yu6cxgKBBXbNsTkT9cyMd4g_6)) { raiseOverflow(); goto BeforeRet_;};
#line 59 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
	(*(*s).p).data[(NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_6)] = 0;
#line 60 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
	if (nimAddInt((*s).len, ((NI) 1), &TM__yu6cxgKBBXbNsTkT9cyMd4g_7)) { raiseOverflow(); goto BeforeRet_;};	(*s).len = (NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_7);	}BeforeRet_: ;
}

#line 11 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
#line 13 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"

#line 13 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/memory.nim"
	T1_ = (void*)0;	T1_ = memcpy(dest, source, ((size_t) (size)));}

#line 2177 "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim"
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size) {
#line 2178 "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim"

#line 2178 "/Users/elcritch/.asdf/installs/nim/devel/lib/system.nim"
	nimCopyMem(dest, source, size);
}

#line 81 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src) {{
#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
	{		void* T5_;		void* T6_;		NI TM__yu6cxgKBBXbNsTkT9cyMd4g_10;		NI TM__yu6cxgKBBXbNsTkT9cyMd4g_11;
#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		if (!(((NI) 0) < src.len)) goto LA3_;

#line 84 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		T5_ = (void*)0;		T5_ = ((void*) ((&(*(*dest).p).data[(*dest).len])));		T6_ = (void*)0;		T6_ = ((void*) ((&(*src.p).data[((NI) 0)])));
#line 84 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		if (nimAddInt(src.len, ((NI) 1), &TM__yu6cxgKBBXbNsTkT9cyMd4g_10)) { raiseOverflow(); goto BeforeRet_;};		if (((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_10)) < ((NI) 0) || ((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_10)) > ((NI) 2147483647)){ raiseRangeErrorI((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_10), ((NI) 0), ((NI) 2147483647)); goto BeforeRet_;}
#line 84 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		copyMem__M04YC71iJg1N7gBF3HZTngsystem(T5_, T6_, ((NI) ((NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_10))));

#line 85 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/strs_v2.nim"
		if (nimAddInt((*dest).len, src.len, &TM__yu6cxgKBBXbNsTkT9cyMd4g_11)) { raiseOverflow(); goto BeforeRet_;};		(*dest).len = (NI)(TM__yu6cxgKBBXbNsTkT9cyMd4g_11);	}
	LA3_: ;
	}BeforeRet_: ;
}

#line 60 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*, newOSError__JXEuze9ctNbkn51HYBflQLg)(NI32 errorCode, NimStringV2 additionalInfo) {	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* result;	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* e;	NimStringV2 T2_;NIM_BOOL oldNimErrFin1_;NIM_BOOL* nimErr_;	nimfr_("newOSError", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");{nimErr_ = nimErrorFlag();	result = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;	e = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;
#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(78, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");
#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	eqdestroy___UZ66vRTZhSc7gx3IAuMd6Q(&e);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	e = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*) nimNewObj(sizeof(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA));	(*e).Sup.Sup.Sup.m_type = (&NTIv2__BeJgrOdDsczOwEWOZbRfKA_);	(*e).Sup.Sup.name = "OSError";
#line 79 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(79, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");	(*e).errorCode = errorCode;
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
	nimln_(49, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");
#line 80 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(80, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");
#line 80 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	T2_.len = 0; T2_.p = NIM_NIL;	T2_ = osErrorMsg__33xViSVWAmDrexoKkLfMhg(errorCode);	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
	nimln_(49, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");	eqsink___aBBXmHFBEivKqERloP6zmA_2((&(*e).Sup.Sup.message), T2_);

#line 81 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(81, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");	{
#line 81 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 81 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		if (!(((NI) 0) < additionalInfo.len)) goto LA5_;

#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		nimln_(82, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");		{			NIM_BOOL T9_;			NIM_CHAR T11_;
#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
			T9_ = (NIM_BOOL)0;
#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
			T9_ = (((NI) 0) < (*e).Sup.Sup.message.len);			if (!(T9_)) goto LA10_;

#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
			T11_ = (NIM_CHAR)0;			T11_ = X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem((*e).Sup.Sup.message, ((NI) 1));			T9_ = !(((NU8)(T11_) == (NU8)(10)));			LA10_: ;
			if (!T9_) goto LA12_;

#line 82 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
			nimAddCharV1((&(*e).Sup.Sup.message), 10);		}
		LA12_: ;

#line 83 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		nimln_(83, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");		prepareAdd((&(*e).Sup.Sup.message), 17);appendString((&(*e).Sup.Sup.message), TM__yu6cxgKBBXbNsTkT9cyMd4g_9);
#line 84 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		nimln_(84, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");
#line 84 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		addQuoted__45fPtFhY4FavRaYwDhRfuA((&(*e).Sup.Sup.message), additionalInfo);
	}
	LA5_: ;

#line 85 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(85, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");	{
#line 85 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		if (!((*e).Sup.Sup.message.len == 0)) goto LA16_;

#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
		nimln_(49, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim");
#line 49 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/fatal.nim"
		eqsink___aBBXmHFBEivKqERloP6zmA_2((&(*e).Sup.Sup.message), TM__yu6cxgKBBXbNsTkT9cyMd4g_13);
	}
	LA16_: ;

#line 87 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(87, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");
#line 87 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	result = e;
#line 87 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	e = 0;
#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(78, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");
#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	eqdestroy___UZ66vRTZhSc7gx3IAuMd6Q(&e);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	goto BeforeRet_;
	{		LA1_:;	}
	{		oldNimErrFin1_ = *nimErr_; *nimErr_ = NIM_FALSE;
#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"

#line 78 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
		eqdestroy___UZ66vRTZhSc7gx3IAuMd6Q(&e);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;		*nimErr_ = oldNimErrFin1_;	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}BeforeRet_: ;
	popFrame();	return result;}

#line 89 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode, NimStringV2 additionalInfo) {	tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* T1_;NIM_BOOL* nimErr_;	nimfr_("raiseOSError", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");{nimErr_ = nimErrorFlag();
#line 94 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	nimln_(94, "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim");
#line 94 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	T1_ = (tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;	T1_ = newOSError__JXEuze9ctNbkn51HYBflQLg(errorCode, additionalInfo);	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
#line 94 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oserr.nim"
	raiseExceptionEx((Exception*)T1_, "OSError", "raiseOSError", "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/includes/oser"
"r.nim", 94);	goto BeforeRet_;	}BeforeRet_: ;
	popFrame();}