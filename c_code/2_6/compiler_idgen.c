/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <stdio.h>

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj186015 tidobj186015;
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
typedef NimStringDesc* TY183990[1];
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj186015  {
  TNimObject Sup;
NI Id;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NIM_BOOL, open_13003)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, togid_209467)(NimStringDesc* f);
N_NIMCALL(NimStringDesc*, completegeneratedfilepath_172001)(NimStringDesc* f, NIM_BOOL createsubdir);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_13289)(FILE* f, NimStringDesc** line);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(FILE*, open_13017)(NimStringDesc* filename, NU8 mode, NI bufsize);
static N_INLINE(void, writeln_172205)(FILE* f_172209, NimStringDesc** x_172213, NI x_172213Len0);
N_NIMCALL(void, write_13265)(FILE* f, NimStringDesc* s);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
STRING_LITERAL(TMP1371, "nimrod.gid", 10);
STRING_LITERAL(TMP4143, "\012", 1);
NI gfrontendid_209012;
NI gbackendid_209013;

N_NIMCALL(NimStringDesc*, togid_209467)(NimStringDesc* f) {
	NimStringDesc* result;
	result = 0;
	result = completegeneratedfilepath_172001(((NimStringDesc*) &TMP1371), NIM_TRUE);
	return result;
}

N_NIMCALL(void, loadmaxids_209519)(NimStringDesc* project) {
	FILE* f;
	f = 0;
	{
		NimStringDesc* LOC3;
		NIM_BOOL LOC4;
		NimStringDesc* line;
		LOC3 = 0;
		LOC3 = togid_209467(project);
		LOC4 = 0;
		LOC4 = open_13003(&f, LOC3, ((NU8) 0), -1);
		if (!LOC4) goto LA5;
		line = rawNewString(20);
		{
			NIM_BOOL LOC9;
			NI frontendid;
			LOC9 = 0;
			LOC9 = readline_13289(f, (&line));
			if (!LOC9) goto LA10;
			frontendid = nsuParseInt(line);
			{
				NIM_BOOL LOC14;
				NI backendid;
				LOC14 = 0;
				LOC14 = readline_13289(f, (&line));
				if (!LOC14) goto LA15;
				backendid = nsuParseInt(line);
				gfrontendid_209012 = ((gfrontendid_209012 >= frontendid) ? gfrontendid_209012 : frontendid);
				gbackendid_209013 = ((gbackendid_209013 >= backendid) ? gbackendid_209013 : backendid);
			}
			LA15: ;
		}
		LA10: ;
		fclose(f);
	}
	LA5: ;
}

N_NIMCALL(void, registerid_209201)(tidobj186015* id) {
}

N_NIMCALL(void, idsynchronizationpoint_209458)(NI idrange) {
	gfrontendid_209012 = (NI32)((NI32)((NI32)((NI32)(gfrontendid_209012 / idrange) + 1) * idrange) + 1);
}

static N_INLINE(void, writeln_172205)(FILE* f_172209, NimStringDesc** x_172213, NI x_172213Len0) {
	{
		NimStringDesc* i_172226;
		NI i_172234;
		i_172226 = 0;
		i_172234 = 0;
		{
			while (1) {
				if (!(i_172234 < x_172213Len0)) goto LA3;
				i_172226 = x_172213[i_172234];
				write_13265(f_172209, i_172226);
				i_172234 += 1;
			} LA3: ;
		}
	}
	write_13265(f_172209, ((NimStringDesc*) &TMP4143));
}

N_NIMCALL(void, savemaxids_209477)(NimStringDesc* project) {
	FILE* f;
	NimStringDesc* LOC1;
	TY183990 LOC2;
	TY183990 LOC3;
	LOC1 = 0;
	LOC1 = togid_209467(project);
	f = open_13017(LOC1, ((NU8) 1), -1);
	memset((void*)LOC2, 0, sizeof(LOC2));
	LOC2[0] = nimIntToStr(gfrontendid_209012);
	writeln_172205(f, LOC2, 1);
	memset((void*)LOC3, 0, sizeof(LOC3));
	LOC3[0] = nimIntToStr(gbackendid_209013);
	writeln_172205(f, LOC3, 1);
	fclose(f);
}
NIM_EXTERNC N_NOINLINE(void, compiler_idgenInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_idgenDatInit)(void) {
}
