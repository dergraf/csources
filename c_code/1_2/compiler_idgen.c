/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
#undef linux
typedef struct Tidobj_raN9cHVgzmvaXisezY9aGg9cg Tidobj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Filemode_fVUBHvW79bXUw1j55Oo9avSQ;
typedef NimStringDesc* TY_nHXaesL0DJZHyVS07ARPRA[1];
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
struct  Tidobj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
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
N_NIMCALL(NIM_BOOL, open_sEp0GH2306oGo9bqBpj5oTQ)(FILE** f0, NimStringDesc* filename0, Filemode_fVUBHvW79bXUw1j55Oo9avSQ mode0, NI bufsize0);
N_NIMCALL(NimStringDesc*, togid_sMk9ack7M9ax9bmd18c5es9aUw)(NimStringDesc* f0);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_OC4D8bcC5YbXne9b768tZcQ)(NimStringDesc* f0, NIM_BOOL createsubdir0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, readline_sO1bQXVRA6RP9cdYJXNKeSw)(FILE* f0, NimStringDesc** line0);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s0);
N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_2)(FILE* f0);
N_NIMCALL(FILE*, open_hqzpWQbdA2B8l9a6wwNoP4g)(NimStringDesc* filename0, Filemode_fVUBHvW79bXUw1j55Oo9avSQ mode0, NI bufsize0);
static N_INLINE(void, writeline_rBQVO3cm3BhnA9aEFD7PG6Qmsgs)(FILE* f0, NimStringDesc** x0, NI x0Len0);
N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ)(FILE* f0, NimStringDesc* s0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
NI gfrontendid_gyRrMPnY7JyC6tAu9bCfGng;
STRING_LITERAL(T_OcNXKFm0N2ybP5hO0iXdjw_2, "nim.gid", 7);
STRING_LITERAL(T_OcNXKFm0N2ybP5hO0iXdjw_3, "\015\012", 2);

N_NIMCALL(void, registerid_ZN2j9cT9c6WdU9bRORys9cZIAg)(Tidobj_raN9cHVgzmvaXisezY9aGg9cg* id0) {
}

N_NIMCALL(NimStringDesc*, togid_sMk9ack7M9ax9bmd18c5es9aUw)(NimStringDesc* f0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = completegeneratedfilepath_OC4D8bcC5YbXne9b768tZcQ(((NimStringDesc*) &T_OcNXKFm0N2ybP5hO0iXdjw_2), NIM_TRUE);
	return result0;
}

N_NIMCALL(void, loadmaxids_NACtd4vcNteQFGls509aStA)(NimStringDesc* project0) {
	FILE* f0;
	f0 = (FILE*)0;
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line0;
		LOC3 = (NimStringDesc*)0;
		LOC3 = togid_sMk9ack7M9ax9bmd18c5es9aUw(project0);
		LOC4 = (NIM_BOOL)0;
		LOC4 = open_sEp0GH2306oGo9bqBpj5oTQ(&f0, LOC3, ((Filemode_fVUBHvW79bXUw1j55Oo9avSQ) 0), ((NI) -1));
		if (!LOC4) goto LA5;
		line0 = rawNewString(((NI) 20));
		{
			NIM_BOOL LOC9;
			NI frontendid0;
			LOC9 = (NIM_BOOL)0;
			LOC9 = readline_sO1bQXVRA6RP9cdYJXNKeSw(f0, (&line0));
			if (!LOC9) goto LA10;
			frontendid0 = nsuParseInt(line0);
			{
				NIM_BOOL LOC14;
				LOC14 = (NIM_BOOL)0;
				LOC14 = readline_sO1bQXVRA6RP9cdYJXNKeSw(f0, (&line0));
				if (!LOC14) goto LA15;
				gfrontendid_gyRrMPnY7JyC6tAu9bCfGng = ((gfrontendid_gyRrMPnY7JyC6tAu9bCfGng >= frontendid0) ? gfrontendid_gyRrMPnY7JyC6tAu9bCfGng : frontendid0);
			}
			LA15: ;
		}
		LA10: ;
		close_BWnr8V7RERYno9bIdPmw8Hw_2(f0);
	}
	LA5: ;
}

N_NIMCALL(void, idsynchronizationpoint_GU7xhi8Sthx1AieMTTUZqQ)(NI idrange0) {
	gfrontendid_gyRrMPnY7JyC6tAu9bCfGng = (NI)((NI)((NI)((NI)(gfrontendid_gyRrMPnY7JyC6tAu9bCfGng / idrange0) + ((NI) 1)) * idrange0) + ((NI) 1));
}

static N_INLINE(void, writeline_rBQVO3cm3BhnA9aEFD7PG6Qmsgs)(FILE* f0, NimStringDesc** x0, NI x0Len0) {
	{
		NimStringDesc* i_kSboRGYz9bWc0rf2v8AlLGQ;
		NI i_kSboRGYz9bWc0rf2v8AlLGQ_2;
		i_kSboRGYz9bWc0rf2v8AlLGQ = (NimStringDesc*)0;
		i_kSboRGYz9bWc0rf2v8AlLGQ_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_kSboRGYz9bWc0rf2v8AlLGQ_2 < x0Len0)) goto LA3;
				i_kSboRGYz9bWc0rf2v8AlLGQ = x0[i_kSboRGYz9bWc0rf2v8AlLGQ_2];
				write_c4mGyJBvK73pdM22jiweKQ(f0, i_kSboRGYz9bWc0rf2v8AlLGQ);
				i_kSboRGYz9bWc0rf2v8AlLGQ_2 += ((NI) 1);
			} LA3: ;
		}
	}
	write_c4mGyJBvK73pdM22jiweKQ(f0, ((NimStringDesc*) &T_OcNXKFm0N2ybP5hO0iXdjw_3));
}

N_NIMCALL(void, savemaxids_NACtd4vcNteQFGls509aStA_2)(NimStringDesc* project0) {
	FILE* f0;
	NimStringDesc* LOC1;
	TY_nHXaesL0DJZHyVS07ARPRA LOC2;
	LOC1 = (NimStringDesc*)0;
	LOC1 = togid_sMk9ack7M9ax9bmd18c5es9aUw(project0);
	f0 = open_hqzpWQbdA2B8l9a6wwNoP4g(LOC1, ((Filemode_fVUBHvW79bXUw1j55Oo9avSQ) 1), ((NI) -1));
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = nimIntToStr(gfrontendid_gyRrMPnY7JyC6tAu9bCfGng);
	writeline_rBQVO3cm3BhnA9aEFD7PG6Qmsgs(f0, LOC2, 1);
	close_BWnr8V7RERYno9bIdPmw8Hw_2(f0);
}
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit000)(void) {
}

