/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef linux
typedef struct Memfile_j4SnXNrJDFBxAz4BlbM9aIQ Memfile_j4SnXNrJDFBxAz4BlbM9aIQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  Memfile_j4SnXNrJDFBxAz4BlbM9aIQ  {
void* mem;
NI size;
NI fhandle;
NI maphandle;
NIM_BOOL wasopened;
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
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Filemode_fVUBHvW79bXUw1j55Oo9avSQ;
typedef N_STDCALL_PTR(NI, TY_jZjaRJIBSgYA1p8iXwsy9cA) (NI16* lpfilename0, NI32 dwdesiredaccess0, NI32 dwsharemode0, void* lpsecurityattributes0, NI32 dwcreationdisposition0, NI32 dwflagsandattributes0, NI htemplatefile0);
typedef N_STDCALL_PTR(NI32, TY_P13srMBg9b3d3yEV9aW4NCoA) (NI hobject0);
typedef N_STDCALL_PTR(NI32, TY_ZF830CPGZda8saokdzv3Nw) (NI hfile0, NI32 ldistancetomove0, NI32* lpdistancetomovehigh0, NI32 dwmovemethod0);
typedef N_STDCALL_PTR(NI, TY_rQv4HdT3JZB1EnhSb4r4Gg) (NI hfile0, void* lpfilemappingattributes0, NI32 flprotect0, NI32 dwmaximumsizehigh0, NI32 dwmaximumsizelow0, void* lpname0);
typedef N_STDCALL_PTR(void*, TY_N3uS69bw8S7evCEnH5Rc6Mg) (NI hfilemappingobject0, NI32 dwdesiredaccess0, NI32 dwfileoffsethigh0, NI32 dwfileoffsetlow0, NI32 dwnumberofbytestomap0, void* lpbaseaddress0);
typedef N_STDCALL_PTR(NI32, TY_I8CYTKrqz0DV8EyysIRhJw) (NI hfile0, NI32* lpfilesizehigh0);
typedef N_STDCALL_PTR(NI32, TY_ah5wcFv3UG20t2vgXBy0Fg) (void* lpbaseaddress0);
N_NIMCALL(NI16*, newwidecstring_kxipuF9cNh6r2grKDcLjFuw)(NimStringDesc* s0);
N_NOINLINE(void, raiseoserror_K9a7YBjj81Bse0N0Fg7MFIA)(NI32 errorcode0, NimStringDesc* additionalinfo0);
N_NIMCALL(NI32, oslasterror_6wyvsbJUteIgEY9cC5BVJZQ)(void);
TNimType NTI_j4SnXNrJDFBxAz4BlbM9aIQ;
extern TNimType NTI_vr5DoT1jILTGdRlYv1OYpw;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ;
extern TY_jZjaRJIBSgYA1p8iXwsy9cA Dl_121421;
extern TY_P13srMBg9b3d3yEV9aW4NCoA Dl_119603;
extern TY_ZF830CPGZda8saokdzv3Nw Dl_121604;
extern TY_P13srMBg9b3d3yEV9aW4NCoA Dl_121601;
extern TY_rQv4HdT3JZB1EnhSb4r4Gg Dl_121624;
extern TY_N3uS69bw8S7evCEnH5Rc6Mg Dl_121616;
extern TY_I8CYTKrqz0DV8EyysIRhJw Dl_121611;
extern TY_ah5wcFv3UG20t2vgXBy0Fg Dl_121801;
STRING_LITERAL(T_mFfhe8Jm7Jqn2Znr3841fw_3, "", 0);

N_NIMCALL(Memfile_j4SnXNrJDFBxAz4BlbM9aIQ, open_ZMwdj9bPZN6r75n0Xmlofkg)(NimStringDesc* filename0, Filemode_fVUBHvW79bXUw1j55Oo9avSQ mode0, NI mappedsize0, NI offset0, NI newfilesize0) {
	Memfile_j4SnXNrJDFBxAz4BlbM9aIQ result0;
	NIM_BOOL readonly0;
	NI16* LOC1;
	NI32 LOC2;
	NI32 LOC8;
	NI32 LOC14;
	NI32 LOC58;
	NI32 LOC79;
	NI LOC85;
	NI32 hi0;
	NI32 low0;
	memset((void*)(&result0), 0, sizeof(result0));
	readonly0 = (mode0 == ((Filemode_fVUBHvW79bXUw1j55Oo9avSQ) 0));
	LOC1 = (NI16*)0;
	LOC1 = newwidecstring_kxipuF9cNh6r2grKDcLjFuw(filename0);
	LOC2 = (NI32)0;
	{
		if (!readonly0) goto LA5;
		LOC2 = ((NI32) (-2147483647 -1));
	}
	goto LA3;
	LA5: ;
	{
		LOC2 = ((NI32) -1073741824);
	}
	LA3: ;
	LOC8 = (NI32)0;
	{
		if (!!((newfilesize0 == ((NI) -1)))) goto LA11;
		LOC8 = ((NI32) 2);
	}
	goto LA9;
	LA11: ;
	{
		LOC8 = ((NI32) 3);
	}
	LA9: ;
	LOC14 = (NI32)0;
	{
		if (!readonly0) goto LA17;
		LOC14 = ((NI32) 1);
	}
	goto LA15;
	LA17: ;
	{
		LOC14 = ((NI32) 256);
	}
	LA15: ;
	result0.fhandle = Dl_121421(LOC1, LOC2, ((NI32) 1), NIM_NIL, LOC8, LOC14, ((NI) 0));
	{
		NI32 LOC34;
		if (!(result0.fhandle == ((NI) -1))) goto LA22;
		result0.mem = NIM_NIL;
		result0.size = ((NI) 0);
		{
			NI32 LOC28;
			if (!!((result0.fhandle == ((NI) 0)))) goto LA26;
			LOC28 = (NI32)0;
			LOC28 = Dl_119603(result0.fhandle);
		}
		LA26: ;
		{
			NI32 LOC33;
			if (!!((result0.maphandle == ((NI) 0)))) goto LA31;
			LOC33 = (NI32)0;
			LOC33 = Dl_119603(result0.maphandle);
		}
		LA31: ;
		LOC34 = (NI32)0;
		LOC34 = oslasterror_6wyvsbJUteIgEY9cC5BVJZQ();
		raiseoserror_K9a7YBjj81Bse0N0Fg7MFIA(LOC34, ((NimStringDesc*) &T_mFfhe8Jm7Jqn2Znr3841fw_3));
	}
	LA22: ;
	{
		NI32 sizehigh0;
		NI32 sizelow0;
		NI32 status0;
		NI32 lasterr0;
		if (!!((newfilesize0 == ((NI) -1)))) goto LA37;
		sizehigh0 = ((NI32) ((NI)((NU32)(newfilesize0) >> (NU32)(((NI) 32)))));
		sizelow0 = ((NI32) ((NI)(((NI64) (newfilesize0)) & IL64(4294967295))));
		status0 = Dl_121604(result0.fhandle, sizelow0, (&sizehigh0), ((NI32) 0));
		lasterr0 = oslasterror_6wyvsbJUteIgEY9cC5BVJZQ();
		{
			NIM_BOOL LOC41;
			NIM_BOOL LOC42;
			NI32 LOC45;
			LOC41 = (NIM_BOOL)0;
			LOC42 = (NIM_BOOL)0;
			LOC42 = (status0 == ((NI32) -1));
			if (!(LOC42)) goto LA43;
			LOC42 = !((lasterr0 == ((NI32) 0)));
			LA43: ;
			LOC41 = LOC42;
			if (LOC41) goto LA44;
			LOC45 = (NI32)0;
			LOC45 = Dl_121601(result0.fhandle);
			LOC41 = (LOC45 == ((NI32) 0));
			LA44: ;
			if (!LOC41) goto LA46;
			result0.mem = NIM_NIL;
			result0.size = ((NI) 0);
			{
				NI32 LOC52;
				if (!!((result0.fhandle == ((NI) 0)))) goto LA50;
				LOC52 = (NI32)0;
				LOC52 = Dl_119603(result0.fhandle);
			}
			LA50: ;
			{
				NI32 LOC57;
				if (!!((result0.maphandle == ((NI) 0)))) goto LA55;
				LOC57 = (NI32)0;
				LOC57 = Dl_119603(result0.maphandle);
			}
			LA55: ;
			raiseoserror_K9a7YBjj81Bse0N0Fg7MFIA(lasterr0, ((NimStringDesc*) &T_mFfhe8Jm7Jqn2Znr3841fw_3));
		}
		LA46: ;
	}
	LA37: ;
	LOC58 = (NI32)0;
	{
		if (!readonly0) goto LA61;
		LOC58 = ((NI32) 2);
	}
	goto LA59;
	LA61: ;
	{
		LOC58 = ((NI32) 4);
	}
	LA59: ;
	result0.maphandle = Dl_121624(result0.fhandle, NIM_NIL, LOC58, ((NI32) 0), ((NI32) 0), NIM_NIL);
	{
		NI32 LOC78;
		if (!(result0.maphandle == ((NI) 0))) goto LA66;
		result0.mem = NIM_NIL;
		result0.size = ((NI) 0);
		{
			NI32 LOC72;
			if (!!((result0.fhandle == ((NI) 0)))) goto LA70;
			LOC72 = (NI32)0;
			LOC72 = Dl_119603(result0.fhandle);
		}
		LA70: ;
		{
			NI32 LOC77;
			if (!!((result0.maphandle == ((NI) 0)))) goto LA75;
			LOC77 = (NI32)0;
			LOC77 = Dl_119603(result0.maphandle);
		}
		LA75: ;
		LOC78 = (NI32)0;
		LOC78 = oslasterror_6wyvsbJUteIgEY9cC5BVJZQ();
		raiseoserror_K9a7YBjj81Bse0N0Fg7MFIA(LOC78, ((NimStringDesc*) &T_mFfhe8Jm7Jqn2Znr3841fw_3));
	}
	LA66: ;
	LOC79 = (NI32)0;
	{
		if (!readonly0) goto LA82;
		LOC79 = ((NI32) 4);
	}
	goto LA80;
	LA82: ;
	{
		LOC79 = ((NI32) 2);
	}
	LA80: ;
	LOC85 = (NI)0;
	{
		if (!(mappedsize0 == ((NI) -1))) goto LA88;
		LOC85 = ((NI) 0);
	}
	goto LA86;
	LA88: ;
	{
		LOC85 = mappedsize0;
	}
	LA86: ;
	result0.mem = Dl_121616(result0.maphandle, LOC79, ((NI32) ((NI)((NU32)(offset0) >> (NU32)(((NI) 32))))), ((NI32) ((NI)(((NI64) (offset0)) & IL64(4294967295)))), ((NI32) (LOC85)), NIM_NIL);
	{
		NI32 LOC105;
		if (!(result0.mem == NIM_NIL)) goto LA93;
		result0.mem = NIM_NIL;
		result0.size = ((NI) 0);
		{
			NI32 LOC99;
			if (!!((result0.fhandle == ((NI) 0)))) goto LA97;
			LOC99 = (NI32)0;
			LOC99 = Dl_119603(result0.fhandle);
		}
		LA97: ;
		{
			NI32 LOC104;
			if (!!((result0.maphandle == ((NI) 0)))) goto LA102;
			LOC104 = (NI32)0;
			LOC104 = Dl_119603(result0.maphandle);
		}
		LA102: ;
		LOC105 = (NI32)0;
		LOC105 = oslasterror_6wyvsbJUteIgEY9cC5BVJZQ();
		raiseoserror_K9a7YBjj81Bse0N0Fg7MFIA(LOC105, ((NimStringDesc*) &T_mFfhe8Jm7Jqn2Znr3841fw_3));
	}
	LA93: ;
	hi0 = (NI32)0;
	low0 = (NI32)0;
	low0 = Dl_121611(result0.fhandle, (&hi0));
	{
		NI32 LOC120;
		if (!(low0 == ((NI32) -1))) goto LA108;
		result0.mem = NIM_NIL;
		result0.size = ((NI) 0);
		{
			NI32 LOC114;
			if (!!((result0.fhandle == ((NI) 0)))) goto LA112;
			LOC114 = (NI32)0;
			LOC114 = Dl_119603(result0.fhandle);
		}
		LA112: ;
		{
			NI32 LOC119;
			if (!!((result0.maphandle == ((NI) 0)))) goto LA117;
			LOC119 = (NI32)0;
			LOC119 = Dl_119603(result0.maphandle);
		}
		LA117: ;
		LOC120 = (NI32)0;
		LOC120 = oslasterror_6wyvsbJUteIgEY9cC5BVJZQ();
		raiseoserror_K9a7YBjj81Bse0N0Fg7MFIA(LOC120, ((NimStringDesc*) &T_mFfhe8Jm7Jqn2Znr3841fw_3));
	}
	goto LA106;
	LA108: ;
	{
		NI64 filesize0;
		filesize0 = (NI64)((NI64)((NU64)(((NI64) (hi0))) >> (NU64)(((NI) 32))) | ((NI64) (low0)));
		{
			if (!!((mappedsize0 == ((NI) -1)))) goto LA124;
			result0.size = ((NI) (((filesize0 <= ((NI64) (mappedsize0))) ? filesize0 : ((NI64) (mappedsize0)))));
		}
		goto LA122;
		LA124: ;
		{
			result0.size = ((NI) (filesize0));
		}
		LA122: ;
	}
	LA106: ;
	result0.wasopened = NIM_TRUE;
	return result0;
}

N_NIMCALL(void, close_nK8O9cRK8tfFl5he9bLSP9bNQ)(Memfile_j4SnXNrJDFBxAz4BlbM9aIQ* f0) {
	NIM_BOOL error0;
	NI32 lasterr0;
	error0 = NIM_FALSE;
	lasterr0 = (NI32)0;
	{
		NIM_BOOL LOC3;
		NI32 LOC7;
		NIM_BOOL LOC8;
		NI32 LOC9;
		NIM_BOOL LOC11;
		NI32 LOC12;
		LOC3 = (NIM_BOOL)0;
		LOC3 = !(((*f0).fhandle == ((NI) -1)));
		if (!(LOC3)) goto LA4;
		LOC3 = (*f0).wasopened;
		LA4: ;
		if (!LOC3) goto LA5;
		LOC7 = (NI32)0;
		LOC7 = Dl_121801((*f0).mem);
		error0 = (LOC7 == ((NI32) 0));
		lasterr0 = oslasterror_6wyvsbJUteIgEY9cC5BVJZQ();
		LOC8 = (NIM_BOOL)0;
		LOC9 = (NI32)0;
		LOC9 = Dl_119603((*f0).maphandle);
		LOC8 = (LOC9 == ((NI32) 0));
		if (LOC8) goto LA10;
		LOC8 = error0;
		LA10: ;
		error0 = LOC8;
		LOC11 = (NIM_BOOL)0;
		LOC12 = (NI32)0;
		LOC12 = Dl_119603((*f0).fhandle);
		LOC11 = (LOC12 == ((NI32) 0));
		if (LOC11) goto LA13;
		LOC11 = error0;
		LA13: ;
		error0 = LOC11;
	}
	LA5: ;
	(*f0).size = ((NI) 0);
	(*f0).mem = NIM_NIL;
	(*f0).fhandle = ((NI) 0);
	(*f0).maphandle = ((NI) 0);
	(*f0).wasopened = NIM_FALSE;
	{
		if (!error0) goto LA16;
		raiseoserror_K9a7YBjj81Bse0N0Fg7MFIA(lasterr0, ((NimStringDesc*) &T_mFfhe8Jm7Jqn2Znr3841fw_3));
	}
	LA16: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit000)(void) {
static TNimNode* T_mFfhe8Jm7Jqn2Znr3841fw_2[5];
static TNimNode T_mFfhe8Jm7Jqn2Znr3841fw_0[6];
NTI_j4SnXNrJDFBxAz4BlbM9aIQ.size = sizeof(Memfile_j4SnXNrJDFBxAz4BlbM9aIQ);
NTI_j4SnXNrJDFBxAz4BlbM9aIQ.kind = 18;
NTI_j4SnXNrJDFBxAz4BlbM9aIQ.base = 0;
NTI_j4SnXNrJDFBxAz4BlbM9aIQ.flags = 3;
T_mFfhe8Jm7Jqn2Znr3841fw_2[0] = &T_mFfhe8Jm7Jqn2Znr3841fw_0[1];
T_mFfhe8Jm7Jqn2Znr3841fw_0[1].kind = 1;
T_mFfhe8Jm7Jqn2Znr3841fw_0[1].offset = offsetof(Memfile_j4SnXNrJDFBxAz4BlbM9aIQ, mem);
T_mFfhe8Jm7Jqn2Znr3841fw_0[1].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw);
T_mFfhe8Jm7Jqn2Znr3841fw_0[1].name = "mem";
T_mFfhe8Jm7Jqn2Znr3841fw_2[1] = &T_mFfhe8Jm7Jqn2Znr3841fw_0[2];
T_mFfhe8Jm7Jqn2Znr3841fw_0[2].kind = 1;
T_mFfhe8Jm7Jqn2Znr3841fw_0[2].offset = offsetof(Memfile_j4SnXNrJDFBxAz4BlbM9aIQ, size);
T_mFfhe8Jm7Jqn2Znr3841fw_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_mFfhe8Jm7Jqn2Znr3841fw_0[2].name = "size";
T_mFfhe8Jm7Jqn2Znr3841fw_2[2] = &T_mFfhe8Jm7Jqn2Znr3841fw_0[3];
T_mFfhe8Jm7Jqn2Znr3841fw_0[3].kind = 1;
T_mFfhe8Jm7Jqn2Znr3841fw_0[3].offset = offsetof(Memfile_j4SnXNrJDFBxAz4BlbM9aIQ, fhandle);
T_mFfhe8Jm7Jqn2Znr3841fw_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_mFfhe8Jm7Jqn2Znr3841fw_0[3].name = "fHandle";
T_mFfhe8Jm7Jqn2Znr3841fw_2[3] = &T_mFfhe8Jm7Jqn2Znr3841fw_0[4];
T_mFfhe8Jm7Jqn2Znr3841fw_0[4].kind = 1;
T_mFfhe8Jm7Jqn2Znr3841fw_0[4].offset = offsetof(Memfile_j4SnXNrJDFBxAz4BlbM9aIQ, maphandle);
T_mFfhe8Jm7Jqn2Znr3841fw_0[4].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_mFfhe8Jm7Jqn2Znr3841fw_0[4].name = "mapHandle";
T_mFfhe8Jm7Jqn2Znr3841fw_2[4] = &T_mFfhe8Jm7Jqn2Znr3841fw_0[5];
T_mFfhe8Jm7Jqn2Znr3841fw_0[5].kind = 1;
T_mFfhe8Jm7Jqn2Znr3841fw_0[5].offset = offsetof(Memfile_j4SnXNrJDFBxAz4BlbM9aIQ, wasopened);
T_mFfhe8Jm7Jqn2Znr3841fw_0[5].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ);
T_mFfhe8Jm7Jqn2Znr3841fw_0[5].name = "wasOpened";
T_mFfhe8Jm7Jqn2Znr3841fw_0[0].len = 5; T_mFfhe8Jm7Jqn2Znr3841fw_0[0].kind = 2; T_mFfhe8Jm7Jqn2Znr3841fw_0[0].sons = &T_mFfhe8Jm7Jqn2Znr3841fw_2[0];
NTI_j4SnXNrJDFBxAz4BlbM9aIQ.node = &T_mFfhe8Jm7Jqn2Znr3841fw_0[0];
}

