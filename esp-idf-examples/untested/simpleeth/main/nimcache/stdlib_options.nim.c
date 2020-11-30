/* Generated by Nim Compiler v1.3.7 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <stdlib.h>
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
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ;
typedef struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w;
typedef struct tyTuple__0F3Kz25HWtRatQmCDVHWEA tyTuple__0F3Kz25HWtRatQmCDVHWEA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct TNimTypeV2 {void* destructor;
NI size;
NI align;
NCSTRING name;
void* traceImpl;
void* disposeImpl;
void* typeInfoV1;
};
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {NI rc;
NI rootIdx;
};
struct RootObj {TNimTypeV2* m_type;};
struct NimStrPayload {NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {NI len;
NimStrPayload* p;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {  RootObj Sup;Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
struct tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA {  Exception Sup;};
struct tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ {  tyObject_Defect__LbeSGvgPzGzXnW9caIkJqMA Sup;};
struct tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w {NI len;
NI cap;
tyTuple__0F3Kz25HWtRatQmCDVHWEA* d;
};
struct tyTuple__0F3Kz25HWtRatQmCDVHWEA {
tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* Field0;
TNimTypeV2* Field1;
};
typedef tyTuple__0F3Kz25HWtRatQmCDVHWEA tyUncheckedArray__JDjQWOF6l7jz1gUppkfhwA[1];
struct tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ {tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w traceStack;
tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w toFree;
NI freed;
NI touched;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      
/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___A0WfCorq86FTzHcRt3nkKw)(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ* dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLastCyclicDyn)(void* p);
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem)(NI x, NI y);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, rememberCycle__LoYD9cYK9aJvrcDizBN64qaQ)(NIM_BOOL isDestroyAction, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* s, TNimTypeV2* desc);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___4fQQqvAqifkWGVa4g39cI5A)(tySequence__uB9b75OUPRENsBAu4AnoePA* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___umVFJaf5SzQNp0Wwgc2bRw)(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ* dest, void* env);
static N_INLINE(void, nimTraceRefDyn)(void* q, void* env);
static N_INLINE(void, add__A2hu7ps9a7fQ6dTDoPajZ5gsystem)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* c, TNimTypeV2* t);
N_LIB_PRIVATE N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res);
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___kDvIcrGphqE2lmGa3RNr5A)(NimStringV2* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___9cqRrToT354sdOysDOB1O2A)(tySequence__uB9b75OUPRENsBAu4AnoePA* dest, void* env);
N_LIB_PRIVATE N_NIMCALL(void, eqdispose___A0WfCorq86FTzHcRt3nkKw_2)(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdispose___dS1BF3Vxjg9aJMmmhVJKSpQ_2)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdispose___4fQQqvAqifkWGVa4g39cI5A_2)(tySequence__uB9b75OUPRENsBAu4AnoePA* dest);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimTypeV2 NTIv2__bq5YFIFutDsA2ou9cpZuWAQ_;

/* section: NIM_merge_VARS */
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */

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
		{			NI TM__4DNs4bMUkswhWc4o4dM9bbg_2;
#line 379 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
			nimln_(379, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");			if (nimSubInt((*cell).rc, ((NI) 16), &TM__4DNs4bMUkswhWc4o4dM9bbg_2)) { raiseOverflow(); goto BeforeRet_;};			(*cell).rc = (NI)(TM__4DNs4bMUkswhWc4o4dM9bbg_2);		}
		LA6_: ;

#line 381 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
		nimln_(381, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");
#line 381 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
		rememberCycle__LoYD9cYK9aJvrcDizBN64qaQ(result, cell, (*((TNimTypeV2**) (p))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;	}
	LA3_: ;
	}BeforeRet_: ;
	popFrame();	return result;}

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___A0WfCorq86FTzHcRt3nkKw)(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ* dest) {
#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
	{		NIM_BOOL T3_;
#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
		T3_ = (NIM_BOOL)0;		T3_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.parent);		if (!T3_) goto LA4_;

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
		nimDestroyAndDispose((*dest).Sup.Sup.parent);
	}
	LA4_: ;

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
	eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&(*dest).Sup.Sup.message));

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
	eqdestroy___4fQQqvAqifkWGVa4g39cI5A((&(*dest).Sup.Sup.trace));

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
	{		NIM_BOOL T8_;
#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
		T8_ = (NIM_BOOL)0;		T8_ = nimDecRefIsLastCyclicDyn((*dest).Sup.Sup.up);		if (!T8_) goto LA9_;

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
		nimDestroyAndDispose((*dest).Sup.Sup.up);
	}
	LA9_: ;
}

#line 122 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
static N_INLINE(NIM_BOOL, nimDivInt)(NI a, NI b, NI* res) {	NIM_BOOL result;	result = (NIM_BOOL)0;
#line 117 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
	{		NIM_BOOL T3_;
#line 117 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (NIM_BOOL)0;
#line 117 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (a == ((NI) (-2147483647 -1)));		if (!(T3_)) goto LA4_;

#line 117 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		T3_ = (b == ((NI) -1));		LA4_: ;
		if (!T3_) goto LA5_;

#line 118 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		result = NIM_TRUE;	}
	goto LA1_;
	LA5_: ;
	{
#line 120 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"

#line 120 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/integerops.nim"
		(*res) = (NI)(a / b);	}
	LA1_: ;
	return result;}

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

#line 19 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
static N_INLINE(void, add__A2hu7ps9a7fQ6dTDoPajZ5gsystem)(tyObject_CellSeq__Axo1XVm9aaQueTOldv8le5w* s, tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* c, TNimTypeV2* t) {	tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* colontmp_;	TNimTypeV2* colontmp__2;	NI TM__4DNs4bMUkswhWc4o4dM9bbg_7;	nimfr_("add", "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2"
".nim");{
#line 20 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
	nimln_(20, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2"
".nim");	{		NI TM__4DNs4bMUkswhWc4o4dM9bbg_3;		NI TM__4DNs4bMUkswhWc4o4dM9bbg_4;		tyTuple__0F3Kz25HWtRatQmCDVHWEA* d;		NI TM__4DNs4bMUkswhWc4o4dM9bbg_5;		void* T5_;		void* T6_;		NI TM__4DNs4bMUkswhWc4o4dM9bbg_6;
#line 20 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		if (!((*s).cap <= (*s).len)) goto LA3_;

#line 21 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		nimln_(21, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2"
".nim");
#line 21 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"

#line 21 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		if (nimMulInt((*s).cap, ((NI) 3), &TM__4DNs4bMUkswhWc4o4dM9bbg_3)) { raiseOverflow(); goto BeforeRet_;};		if (((NI) 2) == 0){ raiseDivByZero(); goto BeforeRet_;}		if (nimDivInt((NI)(TM__4DNs4bMUkswhWc4o4dM9bbg_3), ((NI) 2), &TM__4DNs4bMUkswhWc4o4dM9bbg_4)) { raiseOverflow(); goto BeforeRet_;};		(*s).cap = (NI)(TM__4DNs4bMUkswhWc4o4dM9bbg_4);
#line 23 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		nimln_(23, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2"
".nim");
#line 23 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"

#line 23 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		if (nimMulInt((*s).cap, ((NI) 8), &TM__4DNs4bMUkswhWc4o4dM9bbg_5)) { raiseOverflow(); goto BeforeRet_;};
#line 23 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		T5_ = (void*)0;		T5_ = malloc(((NU) ((NI)(TM__4DNs4bMUkswhWc4o4dM9bbg_5))));		d = ((tyTuple__0F3Kz25HWtRatQmCDVHWEA*) (T5_));
#line 26 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		nimln_(26, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2"
".nim");		T6_ = (void*)0;		T6_ = ((void*) ((*s).d));
#line 26 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		if (nimMulInt((*s).len, ((NI) 8), &TM__4DNs4bMUkswhWc4o4dM9bbg_6)) { raiseOverflow(); goto BeforeRet_;};		if (((NI)(TM__4DNs4bMUkswhWc4o4dM9bbg_6)) < ((NI) 0) || ((NI)(TM__4DNs4bMUkswhWc4o4dM9bbg_6)) > ((NI) 2147483647)){ raiseRangeErrorI((NI)(TM__4DNs4bMUkswhWc4o4dM9bbg_6), ((NI) 0), ((NI) 2147483647)); goto BeforeRet_;}
#line 26 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		copyMem__M04YC71iJg1N7gBF3HZTngsystem(((void*) (d)), T6_, ((NI) ((NI)(TM__4DNs4bMUkswhWc4o4dM9bbg_6))));

#line 28 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		nimln_(28, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2"
".nim");
#line 28 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		free(((void*) ((*s).d)));

#line 31 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
		nimln_(31, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2"
".nim");		(*s).d = d;	}
	LA3_: ;

#line 33 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
	nimln_(33, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2"
".nim");	colontmp_ = c;
#line 33 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
	colontmp__2 = t;
#line 33 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
	(*s).d[(*s).len].Field0 = colontmp_;	(*s).d[(*s).len].Field1 = colontmp__2;
#line 34 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2.nim"
	nimln_(34, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/cellseqs_v2"
".nim");	if (nimAddInt((*s).len, ((NI) 1), &TM__4DNs4bMUkswhWc4o4dM9bbg_7)) { raiseOverflow(); goto BeforeRet_;};	(*s).len = (NI)(TM__4DNs4bMUkswhWc4o4dM9bbg_7);	}BeforeRet_: ;
	popFrame();}

#line 99 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
static N_INLINE(void, nimTraceRefDyn)(void* q, void* env) {	void** p;	nimfr_("nimTraceRefDyn", "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");
#line 100 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
	nimln_(100, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");	p = ((void**) (q));
#line 101 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
	nimln_(101, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");	{		tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ* j;		NI T5_;
#line 101 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"

#line 101 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
		if (!!(((*p) == NIM_NIL))) goto LA3_;

#line 102 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
		nimln_(102, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");		j = ((tyObject_GcEnv__g0b9ao2MXcYnUpu9b4I8eP9bQ*) (env));
#line 103 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
		nimln_(103, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");
#line 63 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arc.nim"
		nimln_(63, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arc.nim");
#line 63 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/arc.nim"
		T5_ = (NI)0;		T5_ = minuspercent___dgYAo7RfdUVVpvkfKDym8wsystem(((NI) (ptrdiff_t) ((*p))), ((NI) 8));
#line 103 "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim"
		nimln_(103, "/Users/elcritch/.asdf/installs/nim/devel/lib/system/orc.nim");		add__A2hu7ps9a7fQ6dTDoPajZ5gsystem((&(*j).traceStack), ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T5_)), (*((TNimTypeV2**) ((*p)))));
	}
	LA3_: ;
	popFrame();}

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
N_LIB_PRIVATE N_NIMCALL(void, eqtrace___umVFJaf5SzQNp0Wwgc2bRw)(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ* dest, void* env) {
#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
	nimTraceRefDyn(&(*dest).Sup.Sup.parent, env);

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
	eqtrace___kDvIcrGphqE2lmGa3RNr5A((&(*dest).Sup.Sup.message), env);

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
	eqtrace___9cqRrToT354sdOysDOB1O2A((&(*dest).Sup.Sup.trace), env);

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
	nimTraceRefDyn(&(*dest).Sup.Sup.up, env);
}

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
N_LIB_PRIVATE N_NIMCALL(void, eqdispose___A0WfCorq86FTzHcRt3nkKw_2)(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ* dest) {
#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
	eqdispose___dS1BF3Vxjg9aJMmmhVJKSpQ_2((&(*dest).Sup.Sup.message));

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"

#line 185 "/Users/elcritch/.asdf/installs/nim/devel/lib/pure/options.nim"
	eqdispose___4fQQqvAqifkWGVa4g39cI5A_2((&(*dest).Sup.Sup.trace));
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_optionsDatInit000)(void) {

#line 999999 "generated_not_to_break_here"

/* section: NIM_merge_TYPE_INIT3 */
NTIv2__bq5YFIFutDsA2ou9cpZuWAQ_.destructor = (void*)eqdestroy___A0WfCorq86FTzHcRt3nkKw; NTIv2__bq5YFIFutDsA2ou9cpZuWAQ_.size = sizeof(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ); NTIv2__bq5YFIFutDsA2ou9cpZuWAQ_.align = NIM_ALIGNOF(tyObject_UnpackDefect__bq5YFIFutDsA2ou9cpZuWAQ); NTIv2__bq5YFIFutDsA2ou9cpZuWAQ_.name = "|stdlib.options.UnpackDefect|Defect|Exception|RootObj|";
; NTIv2__bq5YFIFutDsA2ou9cpZuWAQ_.traceImpl = (void*)eqtrace___umVFJaf5SzQNp0Wwgc2bRw; NTIv2__bq5YFIFutDsA2ou9cpZuWAQ_.disposeImpl = (void*)eqdispose___A0WfCorq86FTzHcRt3nkKw_2;}
