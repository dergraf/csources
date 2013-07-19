/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tmemfile209204 tmemfile209204;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct tmemfile209204 {
void* Mem;
NI Size;
NI Fhandle;
NI Maphandle;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef N_STDCALL_PTR(NI, TY86379) (NI16* lpfilename, NI32 dwdesiredaccess, NI32 dwsharemode, void* lpsecurityattributes, NI32 dwcreationdisposition, NI32 dwflagsandattributes, NI htemplatefile);
typedef N_STDCALL_PTR(NI32, TY84821) (NI hobject);
typedef N_STDCALL_PTR(NI32, TY86407) (NI hfile, NI32 ldistancetomove, NI32* lpdistancetomovehigh, NI32 dwmovemethod);
typedef N_STDCALL_PTR(NI32, TY86403) (NI hfile);
typedef N_STDCALL_PTR(NI, TY86430) (NI hfile, void* lpfilemappingattributes, NI32 flprotect, NI32 dwmaximumsizehigh, NI32 dwmaximumsizelow, void* lpname);
typedef N_STDCALL_PTR(void*, TY86421) (NI hfilemappingobject, NI32 dwdesiredaccess, NI32 dwfileoffsethigh, NI32 dwfileoffsetlow, NI32 dwnumberofbytestomap, void* lpbaseaddress);
typedef N_STDCALL_PTR(NI32, TY86415) (NI hfile, NI32* lpfilesizehigh);
typedef N_STDCALL_PTR(NI32, TY86602) (void* lpbaseaddress);
typedef N_NIMCALL_PTR(void, TY891) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY891 marker;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(tmemfile209204, open_209211)(NimStringDesc* filename, NU8 mode, NI mappedsize, NI offset, NI newfilesize);
N_NIMCALL(void, hiddenraiseassert_72820)(NimStringDesc* msg);
N_NIMCALL(NI16*, newwidecstring_66803)(NimStringDesc* s);
N_NIMCALL(void, oserror_92230)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_92277)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, close_209828)(tmemfile209204* f);
STRING_LITERAL(TMP2791, "newFileSize == -1 or not mode == fmRead ", 40);
extern TY86379 Dl_86378;
extern TY84821 Dl_84820;
extern TY86407 Dl_86406;
extern TY86403 Dl_86402;
extern TY86430 Dl_86429;
extern TY86421 Dl_86420;
extern TY86415 Dl_86414;
extern TFrame* frameptr_12027;
extern TY86602 Dl_86601;
TNimType NTI209204; /* TMemFile */
extern TNimType NTI147; /* pointer */
extern TNimType NTI105; /* int */

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

N_NIMCALL(tmemfile209204, open_209211)(NimStringDesc* filename, NU8 mode, NI mappedsize, NI offset, NI newfilesize) {
	tmemfile209204 result;
	NIM_BOOL readonly;
	NI16* LOC7;
	NI32 LOC8;
	NI32 LOC14;
	NI32 LOC20;
	NI32 LOC64;
	NI32 LOC85;
	NI LOC91;
	NI32 hi;
	NI32 low;
	nimfr("open", "memfiles.nim")
	memset((void*)&result, 0, sizeof(result));
	nimln(45, "memfiles.nim");
	{
		NIM_BOOL LOC3;
		nimln(45, "memfiles.nim");
		nimln(45, "memfiles.nim");
		nimln(45, "memfiles.nim");
		LOC3 = (newfilesize == -1);
		if (LOC3) goto LA4;
		nimln(45, "memfiles.nim");
		nimln(45, "memfiles.nim");
		LOC3 = !((mode == ((NU8) 0)));
		LA4: ;
		if (!!(LOC3)) goto LA5;
		nimln(45, "memfiles.nim");
		hiddenraiseassert_72820(((NimStringDesc*) &TMP2791));
	}
	LA5: ;
	nimln(46, "memfiles.nim");
	nimln(46, "memfiles.nim");
	readonly = (mode == ((NU8) 0));
	nimln(72, "memfiles.nim");
	nimln(72, "memfiles.nim");
	LOC7 = 0;
	LOC7 = newwidecstring_66803(filename);
	nimln(64, "memfiles.nim");
	{
		if (!readonly) goto LA11;
		LOC8 = ((NI32) (-2147483647 -1));
	}
	goto LA9;
	LA11: ;
	{
		LOC8 = ((NI32) 268435456);
	}
	LA9: ;
	nimln(67, "memfiles.nim");
	{
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((newfilesize == -1))) goto LA17;
		LOC14 = ((NI32) 2);
	}
	goto LA15;
	LA17: ;
	{
		LOC14 = ((NI32) 3);
	}
	LA15: ;
	nimln(68, "memfiles.nim");
	{
		if (!readonly) goto LA23;
		LOC20 = ((NI32) 1);
	}
	goto LA21;
	LA23: ;
	{
		LOC20 = ((NI32) 256);
	}
	LA21: ;
	result.Fhandle = Dl_86378(LOC7, LOC8, ((NI32) 1), NIM_NIL, LOC14, LOC20, 0);
	nimln(76, "memfiles.nim");
	{
		NI32 LOC40;
		nimln(76, "memfiles.nim");
		if (!(result.Fhandle == -1)) goto LA28;
		nimln(49, "memfiles.nim");
		result.Mem = NIM_NIL;
		nimln(50, "memfiles.nim");
		result.Size = 0;
		nimln(55, "memfiles.nim");
		{
			NI32 LOC34;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((result.Fhandle == 0))) goto LA32;
			nimln(55, "memfiles.nim");
			nimln(55, "memfiles.nim");
			LOC34 = Dl_84820(result.Fhandle);
		}
		LA32: ;
		nimln(56, "memfiles.nim");
		{
			NI32 LOC39;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((result.Maphandle == 0))) goto LA37;
			nimln(56, "memfiles.nim");
			nimln(56, "memfiles.nim");
			LOC39 = Dl_84820(result.Maphandle);
		}
		LA37: ;
		nimln(57, "memfiles.nim");
		nimln(77, "memfiles.nim");
		LOC40 = oslasterror_92277();
		oserror_92230(LOC40);
	}
	LA28: ;
	nimln(79, "memfiles.nim");
	{
		NI32 sizehigh;
		NI32 sizelow;
		NI32 status;
		NI32 lasterr;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((newfilesize == -1))) goto LA43;
		nimln(81, "memfiles.nim");
		nimln(81, "memfiles.nim");
		sizehigh = ((NI32)chckRange((NI)((NU64)(newfilesize) >> (NU64)(32)), ((NI32) (-2147483647 -1)), ((NI32) 2147483647)));
		nimln(82, "memfiles.nim");
		nimln(82, "memfiles.nim");
		sizelow = ((NI32)chckRange((NI)(newfilesize & IL64(4294967295)), ((NI32) (-2147483647 -1)), ((NI32) 2147483647)));
		nimln(84, "memfiles.nim");
		status = Dl_86406(result.Fhandle, sizelow, &sizehigh, ((NI32) 0));
		nimln(86, "memfiles.nim");
		lasterr = oslasterror_92277();
		nimln(87, "memfiles.nim");
		{
			NIM_BOOL LOC47;
			NIM_BOOL LOC48;
			NI32 LOC51;
			nimln(87, "memfiles.nim");
			nimln(87, "memfiles.nim");
			nimln(87, "memfiles.nim");
			LOC48 = (status == ((NI32) -1));
			if (!(LOC48)) goto LA49;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			LOC48 = !((lasterr == ((NI32) 0)));
			LA49: ;
			LOC47 = LOC48;
			if (LOC47) goto LA50;
			nimln(88, "memfiles.nim");
			nimln(88, "memfiles.nim");
			LOC51 = Dl_86402(result.Fhandle);
			LOC47 = (LOC51 == ((NI32) 0));
			LA50: ;
			if (!LOC47) goto LA52;
			nimln(49, "memfiles.nim");
			result.Mem = NIM_NIL;
			nimln(50, "memfiles.nim");
			result.Size = 0;
			nimln(55, "memfiles.nim");
			{
				NI32 LOC58;
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!((result.Fhandle == 0))) goto LA56;
				nimln(55, "memfiles.nim");
				nimln(55, "memfiles.nim");
				LOC58 = Dl_84820(result.Fhandle);
			}
			LA56: ;
			nimln(56, "memfiles.nim");
			{
				NI32 LOC63;
				nimln(684, "system.nim");
				nimln(684, "system.nim");
				if (!!((result.Maphandle == 0))) goto LA61;
				nimln(56, "memfiles.nim");
				nimln(56, "memfiles.nim");
				LOC63 = Dl_84820(result.Maphandle);
			}
			LA61: ;
			nimln(57, "memfiles.nim");
			oserror_92230(lasterr);
		}
		LA52: ;
	}
	LA43: ;
	nimln(93, "memfiles.nim");
	nimln(95, "memfiles.nim");
	{
		if (!readonly) goto LA67;
		LOC64 = ((NI32) 2);
	}
	goto LA65;
	LA67: ;
	{
		LOC64 = ((NI32) 4);
	}
	LA65: ;
	result.Maphandle = Dl_86429(result.Fhandle, NIM_NIL, LOC64, ((NI32) 0), ((NI32) 0), NIM_NIL);
	nimln(98, "memfiles.nim");
	{
		NI32 LOC84;
		nimln(98, "memfiles.nim");
		if (!(result.Maphandle == 0)) goto LA72;
		nimln(49, "memfiles.nim");
		result.Mem = NIM_NIL;
		nimln(50, "memfiles.nim");
		result.Size = 0;
		nimln(55, "memfiles.nim");
		{
			NI32 LOC78;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((result.Fhandle == 0))) goto LA76;
			nimln(55, "memfiles.nim");
			nimln(55, "memfiles.nim");
			LOC78 = Dl_84820(result.Fhandle);
		}
		LA76: ;
		nimln(56, "memfiles.nim");
		{
			NI32 LOC83;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((result.Maphandle == 0))) goto LA81;
			nimln(56, "memfiles.nim");
			nimln(56, "memfiles.nim");
			LOC83 = Dl_84820(result.Maphandle);
		}
		LA81: ;
		nimln(57, "memfiles.nim");
		nimln(99, "memfiles.nim");
		LOC84 = oslasterror_92277();
		oserror_92230(LOC84);
	}
	LA72: ;
	nimln(101, "memfiles.nim");
	nimln(103, "memfiles.nim");
	{
		if (!readonly) goto LA88;
		LOC85 = ((NI32) 4);
	}
	goto LA86;
	LA88: ;
	{
		LOC85 = ((NI32) 2);
	}
	LA86: ;
	nimln(104, "memfiles.nim");
	nimln(105, "memfiles.nim");
	nimln(106, "memfiles.nim");
	{
		nimln(106, "memfiles.nim");
		if (!(mappedsize == -1)) goto LA94;
		LOC91 = 0;
	}
	goto LA92;
	LA94: ;
	{
		LOC91 = mappedsize;
	}
	LA92: ;
	result.Mem = Dl_86420(result.Maphandle, LOC85, ((NI32)chckRange((NI)((NU64)(offset) >> (NU64)(32)), ((NI32) (-2147483647 -1)), ((NI32) 2147483647))), ((NI32)chckRange((NI)(offset & IL64(4294967295)), ((NI32) (-2147483647 -1)), ((NI32) 2147483647))), ((NI32)chckRange(LOC91, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))), NIM_NIL);
	nimln(109, "memfiles.nim");
	{
		NI32 LOC111;
		nimln(109, "memfiles.nim");
		if (!(result.Mem == NIM_NIL)) goto LA99;
		nimln(49, "memfiles.nim");
		result.Mem = NIM_NIL;
		nimln(50, "memfiles.nim");
		result.Size = 0;
		nimln(55, "memfiles.nim");
		{
			NI32 LOC105;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((result.Fhandle == 0))) goto LA103;
			nimln(55, "memfiles.nim");
			nimln(55, "memfiles.nim");
			LOC105 = Dl_84820(result.Fhandle);
		}
		LA103: ;
		nimln(56, "memfiles.nim");
		{
			NI32 LOC110;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((result.Maphandle == 0))) goto LA108;
			nimln(56, "memfiles.nim");
			nimln(56, "memfiles.nim");
			LOC110 = Dl_84820(result.Maphandle);
		}
		LA108: ;
		nimln(57, "memfiles.nim");
		nimln(110, "memfiles.nim");
		LOC111 = oslasterror_92277();
		oserror_92230(LOC111);
	}
	LA99: ;
	hi = 0;
	low = 0;
	nimln(113, "memfiles.nim");
	low = Dl_86414(result.Fhandle, &hi);
	nimln(114, "memfiles.nim");
	{
		NI32 LOC126;
		nimln(114, "memfiles.nim");
		if (!(low == ((NI32) -1))) goto LA114;
		nimln(49, "memfiles.nim");
		result.Mem = NIM_NIL;
		nimln(50, "memfiles.nim");
		result.Size = 0;
		nimln(55, "memfiles.nim");
		{
			NI32 LOC120;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((result.Fhandle == 0))) goto LA118;
			nimln(55, "memfiles.nim");
			nimln(55, "memfiles.nim");
			LOC120 = Dl_84820(result.Fhandle);
		}
		LA118: ;
		nimln(56, "memfiles.nim");
		{
			NI32 LOC125;
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((result.Maphandle == 0))) goto LA123;
			nimln(56, "memfiles.nim");
			nimln(56, "memfiles.nim");
			LOC125 = Dl_84820(result.Maphandle);
		}
		LA123: ;
		nimln(57, "memfiles.nim");
		nimln(115, "memfiles.nim");
		LOC126 = oslasterror_92277();
		oserror_92230(LOC126);
	}
	goto LA112;
	LA114: ;
	{
		NI64 filesize;
		nimln(117, "memfiles.nim");
		nimln(117, "memfiles.nim");
		nimln(117, "memfiles.nim");
		filesize = (NI64)((NI64)((NU64)(((NI64) (hi))) >> (NU64)(32)) | ((NI64) (low)));
		nimln(118, "memfiles.nim");
		{
			nimln(684, "system.nim");
			nimln(684, "system.nim");
			if (!!((mappedsize == -1))) goto LA130;
			nimln(118, "memfiles.nim");
			nimln(118, "memfiles.nim");
			result.Size = ((NI) (((filesize <= ((NI64) (mappedsize))) ? filesize : ((NI64) (mappedsize)))));
		}
		goto LA128;
		LA130: ;
		{
			nimln(119, "memfiles.nim");
			result.Size = ((NI) (filesize));
		}
		LA128: ;
	}
	LA112: ;
	popFrame();
	return result;
}

N_NIMCALL(void, close_209828)(tmemfile209204* f) {
	NIM_BOOL error;
	NI32 lasterr;
	nimfr("close", "memfiles.nim")
	nimln(168, "memfiles.nim");
	error = NIM_FALSE;
	lasterr = 0;
	nimln(172, "memfiles.nim");
	{
		NI32 LOC5;
		NIM_BOOL LOC6;
		NI32 LOC7;
		NIM_BOOL LOC9;
		NI32 LOC10;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*f).Fhandle == -1))) goto LA3;
		nimln(173, "memfiles.nim");
		lasterr = oslasterror_92277();
		nimln(174, "memfiles.nim");
		nimln(174, "memfiles.nim");
		nimln(174, "memfiles.nim");
		LOC5 = Dl_86601((*f).Mem);
		error = (LOC5 == ((NI32) 0));
		nimln(175, "memfiles.nim");
		nimln(175, "memfiles.nim");
		nimln(175, "memfiles.nim");
		nimln(175, "memfiles.nim");
		LOC7 = Dl_84820((*f).Maphandle);
		LOC6 = (LOC7 == ((NI32) 0));
		if (LOC6) goto LA8;
		LOC6 = error;
		LA8: ;
		error = LOC6;
		nimln(176, "memfiles.nim");
		nimln(176, "memfiles.nim");
		nimln(176, "memfiles.nim");
		nimln(176, "memfiles.nim");
		LOC10 = Dl_84820((*f).Fhandle);
		LOC9 = (LOC10 == ((NI32) 0));
		if (LOC9) goto LA11;
		LOC9 = error;
		LA11: ;
		error = LOC9;
	}
	LA3: ;
	nimln(183, "memfiles.nim");
	(*f).Size = 0;
	nimln(184, "memfiles.nim");
	(*f).Mem = NIM_NIL;
	nimln(187, "memfiles.nim");
	(*f).Fhandle = 0;
	nimln(188, "memfiles.nim");
	(*f).Maphandle = 0;
	nimln(192, "memfiles.nim");
	{
		if (!error) goto LA14;
		nimln(192, "memfiles.nim");
		oserror_92230(lasterr);
	}
	LA14: ;
	popFrame();
}
N_NOINLINE(void, memfilesInit)(void) {
	nimfr("memfiles", "memfiles.nim")
	popFrame();
}

N_NOINLINE(void, memfilesDatInit)(void) {
static TNimNode* TMP2872[4];
static TNimNode TMP2789[5];
NTI209204.size = sizeof(tmemfile209204);
NTI209204.kind = 18;
NTI209204.base = 0;
NTI209204.flags = 3;
TMP2872[0] = &TMP2789[1];
TMP2789[1].kind = 1;
TMP2789[1].offset = offsetof(tmemfile209204, Mem);
TMP2789[1].typ = (&NTI147);
TMP2789[1].name = "mem";
TMP2872[1] = &TMP2789[2];
TMP2789[2].kind = 1;
TMP2789[2].offset = offsetof(tmemfile209204, Size);
TMP2789[2].typ = (&NTI105);
TMP2789[2].name = "size";
TMP2872[2] = &TMP2789[3];
TMP2789[3].kind = 1;
TMP2789[3].offset = offsetof(tmemfile209204, Fhandle);
TMP2789[3].typ = (&NTI105);
TMP2789[3].name = "fHandle";
TMP2872[3] = &TMP2789[4];
TMP2789[4].kind = 1;
TMP2789[4].offset = offsetof(tmemfile209204, Maphandle);
TMP2789[4].typ = (&NTI105);
TMP2789[4].name = "mapHandle";
TMP2789[0].len = 4; TMP2789[0].kind = 2; TMP2789[0].sons = &TMP2872[0];
NTI209204.node = &TMP2789[0];
}
