/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef linux
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef NU8 TY_YtcvxHNKV4YiecPE9ap1mcA[20];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU32 TY_xsE8WL1yT5DKfrMdYB89bYA[5];
typedef NU32 TY_BhDmUZcWSpYFIy5J8Xi8mQ[80];
N_NIMCALL(void, securehash_iXA7ojfe1syFxhtO0guLpg)(NimStringDesc* str0, TY_YtcvxHNKV4YiecPE9ap1mcA Result);
N_NIMCALL(void, sha1_9aTd6QKIPh47P9cab3MQ58pg)(NimStringDesc* src0, TY_YtcvxHNKV4YiecPE9ap1mcA Result);
N_NIMCALL(void, sha1_7wQ07XxB49cQVmHre59bNftw)(NCSTRING src0, NI len0, TY_YtcvxHNKV4YiecPE9ap1mcA Result);
N_NIMCALL(void, init_1FhlX6i1LE6EQdyY79bMZ6A)(NU32* result0);
N_NIMCALL(void, innerhash_zaIrNw9b9b0rKA9c6mi2NyudA)(NU32* state0, NU32* w0);
static N_INLINE(void, zeromem_7EL8Zq3xF2ujDWgp3bAEogsystem)(void* p0, NI size0);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, genericReset)(void* dest0, TNimType* mt0);
N_NIMCALL(NimStringDesc*, readfile_T9cm5LIRX2tKEH9aREBZ8A0w)(NimStringDesc* filename0);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_Ql5vZ51gew5fqwplIYujaw)(TY_YtcvxHNKV4YiecPE9ap1mcA x0, TY_YtcvxHNKV4YiecPE9ap1mcA y0);
N_NIMCALL(NI, nsuParseHexInt)(NimStringDesc* s0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x0, NI len0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest0, NI addlen0);
extern TNimType NTI_k3HXouOuhqAKq0dx450lXQ;
TNimType NTI_YtcvxHNKV4YiecPE9ap1mcA;
STRING_LITERAL(T_vvZ67p0IGcFrRHVAevBkPw_2, "", 0);

N_NIMCALL(void, init_1FhlX6i1LE6EQdyY79bMZ6A)(NU32* result0) {
	result0[(((NI) 0))- 0] = ((NU32) 1732584193);
	result0[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	result0[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	result0[(((NI) 3))- 0] = ((NU32) 271733878);
	result0[(((NI) 4))- 0] = ((NU32) IL64(3285377520));
}

N_NIMCALL(void, innerhash_zaIrNw9b9b0rKA9c6mi2NyudA)(NU32* state0, NU32* w0) {
	NU32 a0;
	NU32 b0;
	NU32 c0;
	NU32 d0;
	NU32 e0;
	NI round0;
	NU32 v_bscYhyM4DP8PhDvFxSAF2w;
	NU32 v_bscYhyM4DP8PhDvFxSAF2w_2;
	NU32 v_bscYhyM4DP8PhDvFxSAF2w_3;
	NU32 v_bscYhyM4DP8PhDvFxSAF2w_4;
	NU32 v_bscYhyM4DP8PhDvFxSAF2w_5;
	a0 = state0[(((NI) 0))- 0];
	b0 = state0[(((NI) 1))- 0];
	c0 = state0[(((NI) 2))- 0];
	d0 = state0[(((NI) 3))- 0];
	e0 = state0[(((NI) 4))- 0];
	round0 = ((NI) 0);
	{
		while (1) {
			NU32 t_Ew08mTNDaGmDjo9a8fLr55A;
			if (!(round0 < ((NI) 16))) goto LA2;
			t_Ew08mTNDaGmDjo9a8fLr55A = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a0) << (NU32)(((NI) 5))) | (NU32)((NU32)(a0) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)(b0 & c0) | (NU32)((NU32)((NU32) ~(b0)) & d0))))) + (NU32)(e0))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (NU32)((NU32)((NU32)(b0) << (NU32)(((NI) 30))) | (NU32)((NU32)(b0) >> (NU32)(((NI) 2))));
			b0 = a0;
			a0 = t_Ew08mTNDaGmDjo9a8fLr55A;
			round0 += ((NI) 1);
		} LA2: ;
	}
	{
		while (1) {
			NU32 t_Ew08mTNDaGmDjo9a8fLr55A_2;
			if (!(round0 < ((NI) 20))) goto LA4;
			w0[(round0)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_Ew08mTNDaGmDjo9a8fLr55A_2 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a0) << (NU32)(((NI) 5))) | (NU32)((NU32)(a0) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)(b0 & c0) | (NU32)((NU32)((NU32) ~(b0)) & d0))))) + (NU32)(e0))) + (NU32)(((NU32) 1518500249)))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (NU32)((NU32)((NU32)(b0) << (NU32)(((NI) 30))) | (NU32)((NU32)(b0) >> (NU32)(((NI) 2))));
			b0 = a0;
			a0 = t_Ew08mTNDaGmDjo9a8fLr55A_2;
			round0 += ((NI) 1);
		} LA4: ;
	}
	{
		while (1) {
			NU32 t_Ew08mTNDaGmDjo9a8fLr55A_3;
			if (!(round0 < ((NI) 40))) goto LA6;
			w0[(round0)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_Ew08mTNDaGmDjo9a8fLr55A_3 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a0) << (NU32)(((NI) 5))) | (NU32)((NU32)(a0) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)(b0 ^ c0) ^ d0)))) + (NU32)(e0))) + (NU32)(((NU32) 1859775393)))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (NU32)((NU32)((NU32)(b0) << (NU32)(((NI) 30))) | (NU32)((NU32)(b0) >> (NU32)(((NI) 2))));
			b0 = a0;
			a0 = t_Ew08mTNDaGmDjo9a8fLr55A_3;
			round0 += ((NI) 1);
		} LA6: ;
	}
	{
		while (1) {
			NU32 t_Ew08mTNDaGmDjo9a8fLr55A_4;
			if (!(round0 < ((NI) 60))) goto LA8;
			w0[(round0)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_Ew08mTNDaGmDjo9a8fLr55A_4 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a0) << (NU32)(((NI) 5))) | (NU32)((NU32)(a0) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)((NU32)(b0 & c0) | (NU32)(b0 & d0)) | (NU32)(c0 & d0))))) + (NU32)(e0))) + (NU32)(((NU32) IL64(2400959708))))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (NU32)((NU32)((NU32)(b0) << (NU32)(((NI) 30))) | (NU32)((NU32)(b0) >> (NU32)(((NI) 2))));
			b0 = a0;
			a0 = t_Ew08mTNDaGmDjo9a8fLr55A_4;
			round0 += ((NI) 1);
		} LA8: ;
	}
	{
		while (1) {
			NU32 t_Ew08mTNDaGmDjo9a8fLr55A_5;
			if (!(round0 < ((NI) 80))) goto LA10;
			w0[(round0)- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) << (NU32)(((NI) 1))) | (NU32)((NU32)((NU32)((NU32)((NU32)(w0[((NI)(round0 - ((NI) 3)))- 0] ^ w0[((NI)(round0 - ((NI) 8)))- 0]) ^ w0[((NI)(round0 - ((NI) 14)))- 0]) ^ w0[((NI)(round0 - ((NI) 16)))- 0])) >> (NU32)(((NI) 31))));
			t_Ew08mTNDaGmDjo9a8fLr55A_5 = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a0) << (NU32)(((NI) 5))) | (NU32)((NU32)(a0) >> (NU32)(((NI) 27))))) + (NU32)((NU32)((NU32)(b0 ^ c0) ^ d0)))) + (NU32)(e0))) + (NU32)(((NU32) IL64(3395469782))))) + (NU32)(w0[(round0)- 0]));
			e0 = d0;
			d0 = c0;
			c0 = (NU32)((NU32)((NU32)(b0) << (NU32)(((NI) 30))) | (NU32)((NU32)(b0) >> (NU32)(((NI) 2))));
			b0 = a0;
			a0 = t_Ew08mTNDaGmDjo9a8fLr55A_5;
			round0 += ((NI) 1);
		} LA10: ;
	}
	v_bscYhyM4DP8PhDvFxSAF2w = (NU32)((NU32)(state0[(((NI) 0))- 0]) + (NU32)(a0));
	state0[(((NI) 0))- 0] = v_bscYhyM4DP8PhDvFxSAF2w;
	v_bscYhyM4DP8PhDvFxSAF2w_2 = (NU32)((NU32)(state0[(((NI) 1))- 0]) + (NU32)(b0));
	state0[(((NI) 1))- 0] = v_bscYhyM4DP8PhDvFxSAF2w_2;
	v_bscYhyM4DP8PhDvFxSAF2w_3 = (NU32)((NU32)(state0[(((NI) 2))- 0]) + (NU32)(c0));
	state0[(((NI) 2))- 0] = v_bscYhyM4DP8PhDvFxSAF2w_3;
	v_bscYhyM4DP8PhDvFxSAF2w_4 = (NU32)((NU32)(state0[(((NI) 3))- 0]) + (NU32)(d0));
	state0[(((NI) 3))- 0] = v_bscYhyM4DP8PhDvFxSAF2w_4;
	v_bscYhyM4DP8PhDvFxSAF2w_5 = (NU32)((NU32)(state0[(((NI) 4))- 0]) + (NU32)(e0));
	state0[(((NI) 4))- 0] = v_bscYhyM4DP8PhDvFxSAF2w_5;
}

static N_INLINE(void, zeromem_7EL8Zq3xF2ujDWgp3bAEogsystem)(void* p0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memset(p0, ((int) 0), ((size_t) (size0)));
}

N_NIMCALL(void, sha1_7wQ07XxB49cQVmHre59bNftw)(NCSTRING src0, NI len0, TY_YtcvxHNKV4YiecPE9ap1mcA Result) {
	TY_xsE8WL1yT5DKfrMdYB89bYA state0;
	TY_BhDmUZcWSpYFIy5J8Xi8mQ w0;
	NI bytelen0;
	NI endoffullblocks0;
	NI endcurrentblock0;
	NI currentblock0;
	NI lastblockbytes0;
	memset((void*)state0, 0, sizeof(state0));
	init_1FhlX6i1LE6EQdyY79bMZ6A(state0);
	memset((void*)w0, 0, sizeof(w0));
	bytelen0 = len0;
	endoffullblocks0 = (NI)(bytelen0 - ((NI) 64));
	endcurrentblock0 = ((NI) 0);
	currentblock0 = ((NI) 0);
	{
		while (1) {
			NI i0;
			if (!(currentblock0 <= endoffullblocks0)) goto LA2;
			endcurrentblock0 = (NI)(currentblock0 + ((NI) 64));
			i0 = ((NI) 0);
			{
				while (1) {
					if (!(currentblock0 < endcurrentblock0)) goto LA4;
					w0[(i0)- 0] = (NU32)((NU32)((NU32)(((NU32) (((NU8)(src0[(NI)(currentblock0 + ((NI) 3))])))) | (NU32)((NU32)(((NU32) (((NU8)(src0[(NI)(currentblock0 + ((NI) 2))]))))) << (NU32)(((NU32) 8)))) | (NU32)((NU32)(((NU32) (((NU8)(src0[(NI)(currentblock0 + ((NI) 1))]))))) << (NU32)(((NU32) 16)))) | (NU32)((NU32)(((NU32) (((NU8)(src0[currentblock0]))))) << (NU32)(((NU32) 24))));
					currentblock0 += ((NI) 4);
					i0 += ((NI) 1);
				} LA4: ;
			}
			innerhash_zaIrNw9b9b0rKA9c6mi2NyudA(state0, w0);
		} LA2: ;
	}
	endcurrentblock0 = (NI)(bytelen0 - currentblock0);
	zeromem_7EL8Zq3xF2ujDWgp3bAEogsystem(((void*) (w0)), ((NI) 64));
	lastblockbytes0 = ((NI) 0);
	{
		while (1) {
			NU32 value0;
			if (!(lastblockbytes0 < endcurrentblock0)) goto LA6;
			value0 = (NU32)((NU32)(((NU32) (((NU8)(src0[(NI)(lastblockbytes0 + currentblock0)]))))) << (NU32)((NU32)((NU32)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes0 & ((NI) 3))))))) << (NU32)(((NI) 3)))));
			w0[((NI)((NU32)(lastblockbytes0) >> (NU32)(((NI) 2))))- 0] = (NU32)(w0[((NI)((NU32)(lastblockbytes0) >> (NU32)(((NI) 2))))- 0] | value0);
			lastblockbytes0 += ((NI) 1);
		} LA6: ;
	}
	w0[((NI)((NU32)(lastblockbytes0) >> (NU32)(((NI) 2))))- 0] = (NU32)(w0[((NI)((NU32)(lastblockbytes0) >> (NU32)(((NI) 2))))- 0] | (NU32)((NU32)(((NU32) 128)) << (NU32)((NU32)((NU32)((NU32)((NU32)(((NU32) 3)) - (NU32)(((NU32) ((NI)(lastblockbytes0 & ((NI) 3))))))) << (NU32)(((NI) 3))))));
	{
		if (!(((NI) 56) <= endcurrentblock0)) goto LA9;
		innerhash_zaIrNw9b9b0rKA9c6mi2NyudA(state0, w0);
		zeromem_7EL8Zq3xF2ujDWgp3bAEogsystem(((void*) (w0)), ((NI) 64));
	}
	LA9: ;
	w0[(((NI) 15))- 0] = (NU32)((NU32)(((NU32) (bytelen0))) << (NU32)(((NI) 3)));
	innerhash_zaIrNw9b9b0rKA9c6mi2NyudA(state0, w0);
	{
		NI i_z9b3aDvsXjXawNzam3VSfGQ;
		NI res_I4oljtxJP3kqYcLvpucNqw;
		i_z9b3aDvsXjXawNzam3VSfGQ = (NI)0;
		res_I4oljtxJP3kqYcLvpucNqw = ((NI) 0);
		{
			while (1) {
				if (!(res_I4oljtxJP3kqYcLvpucNqw <= ((NI) 19))) goto LA13;
				i_z9b3aDvsXjXawNzam3VSfGQ = res_I4oljtxJP3kqYcLvpucNqw;
				Result[(i_z9b3aDvsXjXawNzam3VSfGQ)- 0] = ((NU8) ((NI)((NI)((NU32)(((NI) (state0[((NI)((NU32)(i_z9b3aDvsXjXawNzam3VSfGQ) >> (NU32)(((NI) 2))))- 0]))) >> (NU32)((NI)((NI)(((NI) 3) - ((NI) ((NI)(i_z9b3aDvsXjXawNzam3VSfGQ & ((NI) 3))))) * ((NI) 8)))) & ((NI) 255))));
				res_I4oljtxJP3kqYcLvpucNqw += ((NI) 1);
			} LA13: ;
		}
	}
}

N_NIMCALL(void, sha1_9aTd6QKIPh47P9cab3MQ58pg)(NimStringDesc* src0, TY_YtcvxHNKV4YiecPE9ap1mcA Result) {
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_YtcvxHNKV4YiecPE9ap1mcA));
	sha1_7wQ07XxB49cQVmHre59bNftw(src0->data, (src0 ? src0->Sup.len : 0), Result);
}

N_NIMCALL(void, securehash_iXA7ojfe1syFxhtO0guLpg)(NimStringDesc* str0, TY_YtcvxHNKV4YiecPE9ap1mcA Result) {
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_YtcvxHNKV4YiecPE9ap1mcA));
	sha1_9aTd6QKIPh47P9cab3MQ58pg(str0, Result);
}

N_NIMCALL(void, securehashfile_WH9bD1JrTXe4j39astgya4oA)(NimStringDesc* filename0, TY_YtcvxHNKV4YiecPE9ap1mcA Result) {
	NimStringDesc* LOC1;
	LOC1 = (NimStringDesc*)0;
	LOC1 = readfile_T9cm5LIRX2tKEH9aREBZ8A0w(filename0);
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_YtcvxHNKV4YiecPE9ap1mcA));
	securehash_iXA7ojfe1syFxhtO0guLpg(LOC1, Result);
}

N_NIMCALL(NIM_BOOL, HEX3DHEX3D_D9cw7Ut67uVRyWe3YecX0SQ)(TY_YtcvxHNKV4YiecPE9ap1mcA a0, TY_YtcvxHNKV4YiecPE9ap1mcA b0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = HEX3DHEX3D_Ql5vZ51gew5fqwplIYujaw(a0, b0);
	return result0;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(void, parsesecurehash_z6ogq7oeMr7FogkL734yew)(NimStringDesc* hash0, TY_YtcvxHNKV4YiecPE9ap1mcA Result) {
	{
		NI i_BE374UeiijI44qb2QBy5qQ;
		NI res_16bTcnYPoepOHFvoPTQuiA;
		i_BE374UeiijI44qb2QBy5qQ = (NI)0;
		res_16bTcnYPoepOHFvoPTQuiA = ((NI) 0);
		{
			while (1) {
				NimStringDesc* LOC4;
				NI LOC5;
				if (!(res_16bTcnYPoepOHFvoPTQuiA <= ((NI) 19))) goto LA3;
				i_BE374UeiijI44qb2QBy5qQ = res_16bTcnYPoepOHFvoPTQuiA;
				LOC4 = (NimStringDesc*)0;
				LOC4 = rawNewString(2);
appendChar(LOC4, hash0->data[(NI)(i_BE374UeiijI44qb2QBy5qQ * ((NI) 2))]);
appendChar(LOC4, hash0->data[(NI)((NI)(i_BE374UeiijI44qb2QBy5qQ * ((NI) 2)) + ((NI) 1))]);
				LOC5 = (NI)0;
				LOC5 = nsuParseHexInt(LOC4);
				Result[(i_BE374UeiijI44qb2QBy5qQ)- 0] = ((NU8) (LOC5));
				res_16bTcnYPoepOHFvoPTQuiA += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_At9aCTfZ0LzVIMgxCh2oK7g)(TY_YtcvxHNKV4YiecPE9ap1mcA self0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &T_vvZ67p0IGcFrRHVAevBkPw_2));
	{
		NU8 v_GG4VjfJwBPVnuh4ugE9aqww;
		TY_YtcvxHNKV4YiecPE9ap1mcA HEX3Atmp_YFXwjmj6aa10OlwhONEd9bg;
		NI i_CO6Cf9cQUbAnNRPojYb4gPg;
		v_GG4VjfJwBPVnuh4ugE9aqww = (NU8)0;
		memset((void*)HEX3Atmp_YFXwjmj6aa10OlwhONEd9bg, 0, sizeof(HEX3Atmp_YFXwjmj6aa10OlwhONEd9bg));
		memcpy((void*)HEX3Atmp_YFXwjmj6aa10OlwhONEd9bg, (NIM_CONST void*)self0, sizeof(TY_YtcvxHNKV4YiecPE9ap1mcA));
		i_CO6Cf9cQUbAnNRPojYb4gPg = ((NI) 0);
		{
			if (!(((NI) (i_CO6Cf9cQUbAnNRPojYb4gPg)) <= ((NI) 19))) goto LA4;
			{
				while (1) {
					NimStringDesc* LOC8;
					v_GG4VjfJwBPVnuh4ugE9aqww = HEX3Atmp_YFXwjmj6aa10OlwhONEd9bg[(i_CO6Cf9cQUbAnNRPojYb4gPg)- 0];
					LOC8 = (NimStringDesc*)0;
					LOC8 = nsuToHex(((NI64) (((NI) (v_GG4VjfJwBPVnuh4ugE9aqww)))), ((NI) 2));
					result0 = resizeString(result0, LOC8->Sup.len + 0);
appendString(result0, LOC8);
					{
						if (!(((NI) 19) <= ((NI) (i_CO6Cf9cQUbAnNRPojYb4gPg)))) goto LA11;
						goto LA6;
					}
					LA11: ;
					i_CO6Cf9cQUbAnNRPojYb4gPg += ((NI) 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_securehashInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_securehashDatInit000)(void) {
NTI_YtcvxHNKV4YiecPE9ap1mcA.size = sizeof(TY_YtcvxHNKV4YiecPE9ap1mcA);
NTI_YtcvxHNKV4YiecPE9ap1mcA.kind = 16;
NTI_YtcvxHNKV4YiecPE9ap1mcA.base = (&NTI_k3HXouOuhqAKq0dx450lXQ);
NTI_YtcvxHNKV4YiecPE9ap1mcA.flags = 3;
}

