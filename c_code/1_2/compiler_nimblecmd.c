/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
#undef linux
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct Tlinkedlist_9aBiIjAa4z2zTLjp4yMUvLw Tlinkedlist_9aBiIjAa4z2zTLjp4yMUvLw;
typedef struct Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q;
typedef struct Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw;
typedef struct Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA;
typedef struct Filetime_bs4NMleDDVF7xsEK0SGLBw Filetime_bs4NMleDDVF7xsEK0SGLBw;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct TY_4eQHGndY6XBYpFOH09apV8Q TY_4eQHGndY6XBYpFOH09apV8Q;
typedef struct TY_UV3llMMYFckfui8YMBuUZA TY_UV3llMMYFckfui8YMBuUZA;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw  {
NI16 line;
NI16 col;
NI32 fileindex;
};
struct  Tlinkedlist_9aBiIjAa4z2zTLjp4yMUvLw  {
Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q* head;
Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q* tail;
NI counter;
};
typedef NU8 Stringtablemode_G9c4wVDFIzf0xHmQvxso9a9cQ;
typedef NU8 Pathcomponent_9c1SIU9cO1wHcl09b703A9cDrg;
struct  Filetime_bs4NMleDDVF7xsEK0SGLBw  {
NI32 dwlowdatetime;
NI32 dwhighdatetime;
};
typedef NI16 TY_EKfNt9b8uxndgFbu2Ky3XAQ[260];
typedef NI16 TY_Get9cpRTS5VjGKP6CDsI9bYA[14];
struct  Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA  {
NI32 dwfileattributes;
Filetime_bs4NMleDDVF7xsEK0SGLBw ftcreationtime;
Filetime_bs4NMleDDVF7xsEK0SGLBw ftlastaccesstime;
Filetime_bs4NMleDDVF7xsEK0SGLBw ftlastwritetime;
NI32 nfilesizehigh;
NI32 nfilesizelow;
NI32 dwreserved0;
NI32 dwreserved1;
TY_EKfNt9b8uxndgFbu2Ky3XAQ cfilename;
TY_Get9cpRTS5VjGKP6CDsI9bYA calternatefilename;
};
typedef NU8 Tnimkind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p0);
struct  TNimType  {
NI size;
Tnimkind_jIBKr1ejBgsfM33Kxw4j7A kind;
Tnimtypeflag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY_KeeAOYBd84Ofsw6Y7LizaQ;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
typedef N_STDCALL_PTR(NI32, TY_jwEWAkul5J6p6K0UfXa1tw) (NI hfindfile0, Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA* lpfindfiledata0);
typedef N_STDCALL_PTR(void, TY_ofoySXaAAlxxs9bQS9a1etlg) (NI hfindfile0);
struct  Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw  {
  TNimObject Sup;
NI counter;
TY_4eQHGndY6XBYpFOH09apV8Q* data;
Stringtablemode_G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct TY_UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
typedef NU16 Tmsgkind_IGAWgv9aR2KqPKJfPZPEWaw;
struct  Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q  {
  TNimObject Sup;
Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q* prev;
Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q* next;
};
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY_4eQHGndY6XBYpFOH09apV8Q {
  TGenericSeq Sup;
  TY_UV3llMMYFckfui8YMBuUZA data[SEQ_DECL_SIZE];
};
N_NIMCALL(NIM_BOOL, contains_3NRZAjGu9bLiJruVlzBLQAw)(Tlinkedlist_9aBiIjAa4z2zTLjp4yMUvLw* list0, NimStringDesc* data0);
N_NIMCALL(void, prependstr_owVv9bF5I9bEH2NNSvxvPOvQ)(Tlinkedlist_9aBiIjAa4z2zTLjp4yMUvLw* list0, NimStringDesc* data0);
N_NIMCALL(void, addpathrec_3JEODh79bt1SXwL9cUHI7lhw)(NimStringDesc* dir0, Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0);
N_NIMCALL(Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw*, nstnewStringTable)(Stringtablemode_G9c4wVDFIzf0xHmQvxso9a9cQ mode0);
N_NIMCALL(NI, findfirstfile_9cPKjuaUWDYlrzWunhDgNng)(NimStringDesc* a0, Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA* b0);
N_NIMCALL(NimStringDesc*, HEX2F_BsTQv9c9anbxt9bKmR0aN1elQ)(NimStringDesc* head0, NimStringDesc* tail0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
static N_INLINE(NIM_BOOL, skipfinddata_Paqclu9aSY8chOSEIvA5ZoAoptions)(Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA* f0);
N_NIMCALL(NimStringDesc*, nosextractFilename)(NimStringDesc* path0);
N_NIMCALL(NimStringDesc*, HEX24_QjWkJEdnPpNzR7KF7dYIoQ)(NI16* s0);
N_NIMCALL(void, addpackage_mPfTsfux8gBVeyQ8xwDYTQ)(Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw* packages0, NimStringDesc* p0);
N_NIMCALL(NI, versionsplitpos_0bw6GOnkbOdW19ciUnT3QEw)(NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI start_WPWyPKk58Cr5a6XFFviMjg, NI last0);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s0, NI first0, NI last0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI start0);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s0, NI first0);
N_NIMCALL(NIM_BOOL, HEX3CHEX2E_T3MrVNu6QdhxPeHWeI9a9bIg)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a0, void* b0, NI size0);
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s0, NI* number0, NI start0);
N_NIMCALL(NimStringDesc*, getordefault_puv5W0GXw9aUdLJI2i8WreQ)(Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw* t0, NimStringDesc* key0);
N_NIMCALL(void, nstPut)(Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw* t0, NimStringDesc* key0, NimStringDesc* val0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, addnimblepath_Io0tiMEKgDlbf67BdbC9cWw)(NimStringDesc* p0, Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0);
N_NIMCALL(void, message_VpilfPWbplGz6ny7O9cfr2g_2)(Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0, Tmsgkind_IGAWgv9aR2KqPKJfPZPEWaw msg0, NimStringDesc* arg0);
extern Tlinkedlist_9aBiIjAa4z2zTLjp4yMUvLw searchpaths_XRBeXIYowTeRSkTUFC0m2w;
extern TSafePoint* exchandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TY_jwEWAkul5J6p6K0UfXa1tw Dl_120437;
extern TY_ofoySXaAAlxxs9bQS9a1etlg Dl_120601;
extern Tlinkedlist_9aBiIjAa4z2zTLjp4yMUvLw lazypaths_uObU3TsEr9bGIxsNFEkim6Q;
STRING_LITERAL(T_asNQM9aynXXg9ccUABbReyew_2, "*", 1);
STRING_LITERAL(T_asNQM9aynXXg9ccUABbReyew_4, "head", 4);

N_NIMCALL(void, addpath_t70rbGc1vt9aCRgpPrT47WQ)(NimStringDesc* path0, Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0) {
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_3NRZAjGu9bLiJruVlzBLQAw((&searchpaths_XRBeXIYowTeRSkTUFC0m2w), path0);
		if (!!(LOC3)) goto LA4;
		prependstr_owVv9bF5I9bEH2NNSvxvPOvQ((&searchpaths_XRBeXIYowTeRSkTUFC0m2w), path0);
	}
	LA4: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_rqLlY5bs9atDw2OXYqJEn5g;
	exchandler_rqLlY5bs9atDw2OXYqJEn5g = s0;
}

static N_INLINE(NIM_BOOL, skipfinddata_Paqclu9aSY8chOSEIvA5ZoAoptions)(Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA* f0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	NIM_BOOL LOC3;
	NIM_BOOL LOC5;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = (((NI) ((*f0).cfilename[(((NI) 0))- 0])) == ((NI) 46));
	if (!(LOC1)) goto LA2;
	LOC3 = (NIM_BOOL)0;
	LOC3 = (((NI) ((*f0).cfilename[(((NI) 1))- 0])) == ((NI) 0));
	if (LOC3) goto LA4;
	LOC5 = (NIM_BOOL)0;
	LOC5 = (((NI) ((*f0).cfilename[(((NI) 1))- 0])) == ((NI) 46));
	if (!(LOC5)) goto LA6;
	LOC5 = (((NI) ((*f0).cfilename[(((NI) 2))- 0])) == ((NI) 0));
	LA6: ;
	LOC3 = LOC5;
	LA4: ;
	LOC1 = LOC3;
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(NI, versionsplitpos_0bw6GOnkbOdW19ciUnT3QEw)(NimStringDesc* s0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((s0 ? s0->Sup.len : 0) - ((NI) 2));
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = (NIM_BOOL)0;
			LOC3 = (((NI) 1) < result0);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(s0->data[result0])) >= ((NU8)(48)) && ((NU8)(s0->data[result0])) <= ((NU8)(57)) || ((NU8)(s0->data[result0])) == ((NU8)(46)));
			LA4: ;
			if (!LOC3) goto LA2;
			result0 -= ((NI) 1);
		} LA2: ;
	}
	{
		if (!!(((NU8)(s0->data[result0]) == (NU8)(45)))) goto LA7;
		result0 = (s0 ? s0->Sup.len : 0);
	}
	LA7: ;
	return result0;
}

static N_INLINE(NIM_BOOL, equalmem_fmeFeLBvgmAHG9bC8ETS9bYQropes)(void* a0, void* b0, NI size0) {
	NIM_BOOL result0;
	int LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = memcmp(a0, b0, ((size_t) (size0)));
	result0 = (LOC1 == ((NI32) 0));
	return result0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC11 = equalmem_fmeFeLBvgmAHG9bC8ETS9bYQropes(((void*) ((*a0).data)), ((void*) ((*b0).data)), ((NI) ((*a0).Sup.len)));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, HEX3CHEX2E_T3MrVNu6QdhxPeHWeI9a9bIg)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NI i0;
	NI j0;
	NI vera0;
	NI verb0;
{	result0 = (NIM_BOOL)0;
	{
		if (!eqStrings(a0, ((NimStringDesc*) &T_asNQM9aynXXg9ccUABbReyew_4))) goto LA3;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	i0 = ((NI) 0);
	j0 = ((NI) 0);
	vera0 = ((NI) 0);
	verb0 = ((NI) 0);
	{
		while (1) {
			NI ii0;
			NI jj0;
			ii0 = npuParseInt(a0, (&vera0), i0);
			jj0 = npuParseInt(b0, (&verb0), j0);
			{
				NIM_BOOL LOC9;
				LOC9 = (NIM_BOOL)0;
				LOC9 = (ii0 <= ((NI) 0));
				if (LOC9) goto LA10;
				LOC9 = (jj0 <= ((NI) 0));
				LA10: ;
				if (!LOC9) goto LA11;
				result0 = (((NI) 0) < jj0);
				goto BeforeRet;
			}
			LA11: ;
			{
				if (!(vera0 < verb0)) goto LA15;
				result0 = NIM_TRUE;
				goto BeforeRet;
			}
			goto LA13;
			LA15: ;
			{
				if (!(verb0 < vera0)) goto LA18;
				result0 = NIM_FALSE;
				goto BeforeRet;
			}
			goto LA13;
			LA18: ;
			LA13: ;
			i0 += ii0;
			j0 += jj0;
			{
				if (!((NU8)(a0->data[i0]) == (NU8)(46))) goto LA22;
				i0 += ((NI) 1);
			}
			LA22: ;
			{
				if (!((NU8)(b0->data[j0]) == (NU8)(46))) goto LA26;
				j0 += ((NI) 1);
			}
			LA26: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, addpackage_mPfTsfux8gBVeyQ8xwDYTQ)(Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw* packages0, NimStringDesc* p0) {
	NI x0;
	NimStringDesc* name0;
	x0 = versionsplitpos_0bw6GOnkbOdW19ciUnT3QEw(p0);
	name0 = copyStrLast(p0, ((NI) 0), (NI)(x0 - ((NI) 1)));
	{
		NimStringDesc* version0;
		if (!(x0 < (p0 ? p0->Sup.len : 0))) goto LA3;
		version0 = copyStr(p0, (NI)(x0 + ((NI) 1)));
		{
			NimStringDesc* LOC7;
			NIM_BOOL LOC8;
			LOC7 = (NimStringDesc*)0;
			LOC7 = getordefault_puv5W0GXw9aUdLJI2i8WreQ(packages0, name0);
			LOC8 = (NIM_BOOL)0;
			LOC8 = HEX3CHEX2E_T3MrVNu6QdhxPeHWeI9a9bIg(LOC7, version0);
			if (!LOC8) goto LA9;
			nstPut(packages0, name0, version0);
		}
		LA9: ;
	}
	goto LA1;
	LA3: ;
	{
		nstPut(packages0, name0, ((NimStringDesc*) &T_asNQM9aynXXg9ccUABbReyew_4));
	}
	LA1: ;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_rqLlY5bs9atDw2OXYqJEn5g = (*exchandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, addnimblepath_Io0tiMEKgDlbf67BdbC9cWw)(NimStringDesc* p0, Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0) {
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = contains_3NRZAjGu9bLiJruVlzBLQAw((&searchpaths_XRBeXIYowTeRSkTUFC0m2w), p0);
		if (!!(LOC3)) goto LA4;
		message_VpilfPWbplGz6ny7O9cfr2g_2(info0, ((Tmsgkind_IGAWgv9aR2KqPKJfPZPEWaw) 279), p0);
		prependstr_owVv9bF5I9bEH2NNSvxvPOvQ((&lazypaths_uObU3TsEr9bGIxsNFEkim6Q), p0);
	}
	LA4: ;
}

N_NIMCALL(void, addpathrec_3JEODh79bt1SXwL9cUHI7lhw)(NimStringDesc* dir0, Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0) {
	Stringtableobj_DKRIdH9c9cKI7YpQb9c0wKlEw* packages0;
	NI pos0;
	packages0 = nstnewStringTable(((Stringtablemode_G9c4wVDFIzf0xHmQvxso9a9cQ) 2));
	pos0 = (NI)((dir0 ? dir0->Sup.len : 0) - ((NI) 1));
	{
		if (!(((NU8)(dir0->data[pos0])) == ((NU8)(92)) || ((NU8)(dir0->data[pos0])) == ((NU8)(47)))) goto LA3;
		pos0 += ((NI) 1);
	}
	LA3: ;
	{
		Pathcomponent_9c1SIU9cO1wHcl09b703A9cDrg k_KeWeZHiyBnWbJ7NUxRxrzQ;
		NimStringDesc* p_dm2MlSSgl6QuA4g3oqnzug;
		Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA f_yneQFFyrNSt4aVInhReW9aA;
		NI h_0lk9afqbBF9cAQtskh16RYmQ;
		NimStringDesc* LOC6;
		k_KeWeZHiyBnWbJ7NUxRxrzQ = (Pathcomponent_9c1SIU9cO1wHcl09b703A9cDrg)0;
		p_dm2MlSSgl6QuA4g3oqnzug = (NimStringDesc*)0;
		memset((void*)(&f_yneQFFyrNSt4aVInhReW9aA), 0, sizeof(f_yneQFFyrNSt4aVInhReW9aA));
		LOC6 = (NimStringDesc*)0;
		LOC6 = HEX2F_BsTQv9c9anbxt9bKmR0aN1elQ(dir0, ((NimStringDesc*) &T_asNQM9aynXXg9ccUABbReyew_2));
		h_0lk9afqbBF9cAQtskh16RYmQ = findfirstfile_9cPKjuaUWDYlrzWunhDgNng(LOC6, (&f_yneQFFyrNSt4aVInhReW9aA));
		{
			TSafePoint T_asNQM9aynXXg9ccUABbReyew_3;
			if (!!((h_0lk9afqbBF9cAQtskh16RYmQ == ((NI) -1)))) goto LA9;
			pushSafePoint(&T_asNQM9aynXXg9ccUABbReyew_3);
			T_asNQM9aynXXg9ccUABbReyew_3.status = setjmp(T_asNQM9aynXXg9ccUABbReyew_3.context);
			if (T_asNQM9aynXXg9ccUABbReyew_3.status == 0) {
				{
					while (1) {
						Pathcomponent_9c1SIU9cO1wHcl09b703A9cDrg volatile k_KeWeZHiyBnWbJ7NUxRxrzQ_2;
						k_KeWeZHiyBnWbJ7NUxRxrzQ_2 = ((Pathcomponent_9c1SIU9cO1wHcl09b703A9cDrg) 0);
						{
							NIM_BOOL LOC16;
							NimStringDesc* xx_D6S9bE74YCnbt3gCAKHz9cNA;
							LOC16 = (NIM_BOOL)0;
							LOC16 = skipfinddata_Paqclu9aSY8chOSEIvA5ZoAoptions((&f_yneQFFyrNSt4aVInhReW9aA));
							if (!!(LOC16)) goto LA17;
							{
								if (!!(((NI32)(f_yneQFFyrNSt4aVInhReW9aA.dwfileattributes & ((NI32) 16)) == ((NI32) 0)))) goto LA21;
								k_KeWeZHiyBnWbJ7NUxRxrzQ_2 = ((Pathcomponent_9c1SIU9cO1wHcl09b703A9cDrg) 2);
							}
							LA21: ;
							{
								if (!!(((NI32)(f_yneQFFyrNSt4aVInhReW9aA.dwfileattributes & ((NI32) 1024)) == ((NI32) 0)))) goto LA25;
								k_KeWeZHiyBnWbJ7NUxRxrzQ_2 = (Pathcomponent_9c1SIU9cO1wHcl09b703A9cDrg)(k_KeWeZHiyBnWbJ7NUxRxrzQ_2 + ((NI) 1));
							}
							LA25: ;
							{
								NimStringDesc* LOC31;
								if (!NIM_FALSE) goto LA29;
								LOC31 = (NimStringDesc*)0;
								LOC31 = HEX24_QjWkJEdnPpNzR7KF7dYIoQ(((NI16*) ((&f_yneQFFyrNSt4aVInhReW9aA.cfilename[(((NI) 0))- 0]))));
								xx_D6S9bE74YCnbt3gCAKHz9cNA = nosextractFilename(LOC31);
							}
							goto LA27;
							LA29: ;
							{
								NimStringDesc* LOC33;
								NimStringDesc* LOC34;
								LOC33 = (NimStringDesc*)0;
								LOC33 = HEX24_QjWkJEdnPpNzR7KF7dYIoQ(((NI16*) ((&f_yneQFFyrNSt4aVInhReW9aA.cfilename[(((NI) 0))- 0]))));
								LOC34 = (NimStringDesc*)0;
								LOC34 = nosextractFilename(LOC33);
								xx_D6S9bE74YCnbt3gCAKHz9cNA = HEX2F_BsTQv9c9anbxt9bKmR0aN1elQ(dir0, LOC34);
							}
							LA27: ;
							k_KeWeZHiyBnWbJ7NUxRxrzQ = k_KeWeZHiyBnWbJ7NUxRxrzQ_2;
							p_dm2MlSSgl6QuA4g3oqnzug = xx_D6S9bE74YCnbt3gCAKHz9cNA;
							{
								NIM_BOOL LOC37;
								LOC37 = (NIM_BOOL)0;
								LOC37 = (k_KeWeZHiyBnWbJ7NUxRxrzQ == ((Pathcomponent_9c1SIU9cO1wHcl09b703A9cDrg) 2));
								if (!(LOC37)) goto LA38;
								LOC37 = !(((NU8)(p_dm2MlSSgl6QuA4g3oqnzug->data[pos0]) == (NU8)(46)));
								LA38: ;
								if (!LOC37) goto LA39;
								addpackage_mPfTsfux8gBVeyQ8xwDYTQ(packages0, p_dm2MlSSgl6QuA4g3oqnzug);
							}
							LA39: ;
						}
						LA17: ;
						{
							NI32 LOC43;
							LOC43 = (NI32)0;
							LOC43 = Dl_120437(h_0lk9afqbBF9cAQtskh16RYmQ, (&f_yneQFFyrNSt4aVInhReW9aA));
							if (!(LOC43 == ((NI32) 0))) goto LA44;
							goto LA12;
						}
						LA44: ;
					}
				} LA12: ;
				popSafePoint();
			}
			else {
				popSafePoint();
			}
			{
				Dl_120601(h_0lk9afqbBF9cAQtskh16RYmQ);
			}
			if (T_asNQM9aynXXg9ccUABbReyew_3.status != 0) reraiseException();
		}
		LA9: ;
	}
	{
		NimStringDesc* p_dm2MlSSgl6QuA4g3oqnzug_2;
		p_dm2MlSSgl6QuA4g3oqnzug_2 = (NimStringDesc*)0;
		{
			NimStringDesc* key_Ev9apnmbO2PJJuXUQfg55Zg;
			NimStringDesc* val_ybgqP7AeGJc5RfjZOOmLIA;
			key_Ev9apnmbO2PJJuXUQfg55Zg = (NimStringDesc*)0;
			val_ybgqP7AeGJc5RfjZOOmLIA = (NimStringDesc*)0;
			{
				NI h_0lk9afqbBF9cAQtskh16RYmQ_2;
				NI HEX3Atmp_xBs1KTOTJ0azvpgP9bD601g;
				NI res_yPiyJP1ZM9abouUrPkQkp8Q;
				h_0lk9afqbBF9cAQtskh16RYmQ_2 = (NI)0;
				HEX3Atmp_xBs1KTOTJ0azvpgP9bD601g = (NI)0;
				HEX3Atmp_xBs1KTOTJ0azvpgP9bD601g = ((*packages0).data ? ((*packages0).data->Sup.len-1) : -1);
				res_yPiyJP1ZM9abouUrPkQkp8Q = ((NI) 0);
				{
					while (1) {
						if (!(res_yPiyJP1ZM9abouUrPkQkp8Q <= HEX3Atmp_xBs1KTOTJ0azvpgP9bD601g)) goto LA52;
						h_0lk9afqbBF9cAQtskh16RYmQ_2 = res_yPiyJP1ZM9abouUrPkQkp8Q;
						{
							NimStringDesc* res_yPiyJP1ZM9abouUrPkQkp8Q_2;
							if (!!(((*packages0).data->data[h_0lk9afqbBF9cAQtskh16RYmQ_2].Field0 == 0))) goto LA55;
							key_Ev9apnmbO2PJJuXUQfg55Zg = (*packages0).data->data[h_0lk9afqbBF9cAQtskh16RYmQ_2].Field0;
							val_ybgqP7AeGJc5RfjZOOmLIA = (*packages0).data->data[h_0lk9afqbBF9cAQtskh16RYmQ_2].Field1;
							{
								if (!eqStrings(val_ybgqP7AeGJc5RfjZOOmLIA, ((NimStringDesc*) &T_asNQM9aynXXg9ccUABbReyew_4))) goto LA59;
								res_yPiyJP1ZM9abouUrPkQkp8Q_2 = key_Ev9apnmbO2PJJuXUQfg55Zg;
							}
							goto LA57;
							LA59: ;
							{
								NimStringDesc* LOC62;
								LOC62 = (NimStringDesc*)0;
								LOC62 = rawNewString(key_Ev9apnmbO2PJJuXUQfg55Zg->Sup.len + val_ybgqP7AeGJc5RfjZOOmLIA->Sup.len + 1);
appendString(LOC62, key_Ev9apnmbO2PJJuXUQfg55Zg);
appendChar(LOC62, 45);
appendString(LOC62, val_ybgqP7AeGJc5RfjZOOmLIA);
								res_yPiyJP1ZM9abouUrPkQkp8Q_2 = LOC62;
							}
							LA57: ;
							p_dm2MlSSgl6QuA4g3oqnzug_2 = res_yPiyJP1ZM9abouUrPkQkp8Q_2;
							addnimblepath_Io0tiMEKgDlbf67BdbC9cWw(p_dm2MlSSgl6QuA4g3oqnzug_2, info0);
						}
						LA55: ;
						res_yPiyJP1ZM9abouUrPkQkp8Q += ((NI) 1);
					} LA52: ;
				}
			}
		}
	}
}

N_NIMCALL(void, nimblepath_JlgWmHvYGMBlcPx0hG1xEQ)(NimStringDesc* path0, Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0) {
	addpathrec_3JEODh79bt1SXwL9cUHI7lhw(path0, info0);
	addnimblepath_Io0tiMEKgDlbf67BdbC9cWw(path0, info0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimblecmdDatInit000)(void) {
}

