/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef linux
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Md5context_oMciKUdSdCaIeMtcxbiPOw Md5context_oMciKUdSdCaIeMtcxbiPOw;
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
typedef NU8 TY_qtqsWM5aXmcpMIVmvq3kAA[16];
typedef NU32 TY_FleBT9cC2nxhgiXmSYYnEKA[4];
typedef NU32 TY_JlnxiR65D9cjJpwi6uBZRtA[2];
typedef NU8 TY_w5VB8h5K8DB3oWrO5U2wqg[64];
struct  Md5context_oMciKUdSdCaIeMtcxbiPOw  {
TY_FleBT9cC2nxhgiXmSYYnEKA state;
TY_JlnxiR65D9cjJpwi6uBZRtA count;
TY_w5VB8h5K8DB3oWrO5U2wqg buffer;
};
typedef NU32 TY_U0SiHM0pVagA9c71oWelQMA[16];
typedef NU8 TY_cdsir9aPB24hAk6k77P9b9bCA[8];
static N_INLINE(void, zeromem_7EL8Zq3xF2ujDWgp3bAEogsystem)(void* p0, NI size0);
static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(void, transform_BVJTPXCwb2rPwlDOJoCtcQ)(void* buffer0, NU32* state0);
N_NIMCALL(void, encode_bGGKHUKRgpt4lRMA6o8vJw)(NU32* dest0, NCSTRING src0);
N_NIMCALL(void, Ff_CuD4I5y8bsueZlGqujuUZw)(NU32* a0, NU32 b0, NU32 c0, NU32 d0, NU32 x0, NU8 s0, NU32 ac0);
static N_INLINE(NU32, F_ojAq5rYkim7vo76QXO9beRwmd5)(NU32 x0, NU32 y0, NU32 z0);
static N_INLINE(void, rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5)(NU32* x0, NU8 n0);
N_NIMCALL(void, Gg_CuD4I5y8bsueZlGqujuUZw_2)(NU32* a0, NU32 b0, NU32 c0, NU32 d0, NU32 x0, NU8 s0, NU32 ac0);
static N_INLINE(NU32, G_ojAq5rYkim7vo76QXO9beRw_2md5)(NU32 x0, NU32 y0, NU32 z0);
N_NIMCALL(void, Hh_CuD4I5y8bsueZlGqujuUZw_3)(NU32* a0, NU32 b0, NU32 c0, NU32 d0, NU32 x0, NU8 s0, NU32 ac0);
static N_INLINE(NU32, H_ojAq5rYkim7vo76QXO9beRw_3md5)(NU32 x0, NU32 y0, NU32 z0);
N_NIMCALL(void, Ii_CuD4I5y8bsueZlGqujuUZw_4)(NU32* a0, NU32 b0, NU32 c0, NU32 d0, NU32 x0, NU8 s0, NU32 ac0);
static N_INLINE(NU32, I_ojAq5rYkim7vo76QXO9beRw_4md5)(NU32 x0, NU32 y0, NU32 z0);
N_NIMCALL(void, decode_RBet4Tm12y1uAF9bb9cqMfrA)(NU8* dest0, NI dest0Len0, NU32* src0, NI src0Len0);
N_NIMCALL(void, md5update_2rxQixjUkbT0w5WdNOCwMw)(Md5context_oMciKUdSdCaIeMtcxbiPOw* c0, NCSTRING input_bWAc5knnB9bBxVuO4Hm6hoA, NI len0);
extern TNimType NTI_k3HXouOuhqAKq0dx450lXQ;
TNimType NTI_qtqsWM5aXmcpMIVmvq3kAA;

static N_INLINE(void, zeromem_7EL8Zq3xF2ujDWgp3bAEogsystem)(void* p0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memset(p0, ((int) 0), ((size_t) (size0)));
}

N_NIMCALL(void, md5init_TD1qNpCBAlKjZlVJ9cbPeVg)(Md5context_oMciKUdSdCaIeMtcxbiPOw* c0) {
	(*c0).state[(((NI) 0))- 0] = ((NU32) 1732584193);
	(*c0).state[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	(*c0).state[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	(*c0).state[(((NI) 3))- 0] = ((NU32) 271733878);
	(*c0).count[(((NI) 0))- 0] = ((NU32) 0);
	(*c0).count[(((NI) 1))- 0] = ((NU32) 0);
	zeromem_7EL8Zq3xF2ujDWgp3bAEogsystem(((void*) ((*c0).buffer)), ((NI) (((NI)sizeof(TY_w5VB8h5K8DB3oWrO5U2wqg)))));
}

static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

N_NIMCALL(void, encode_bGGKHUKRgpt4lRMA6o8vJw)(NU32* dest0, NCSTRING src0) {
	NI j0;
	j0 = ((NI) 0);
	{
		NI i_Ryl4pfDorL9cF3nbSiE9c6Aw;
		NI res_ap10Y9aqhzvthHspM9aRj6Zw;
		i_Ryl4pfDorL9cF3nbSiE9c6Aw = (NI)0;
		res_ap10Y9aqhzvthHspM9aRj6Zw = ((NI) 0);
		{
			while (1) {
				if (!(res_ap10Y9aqhzvthHspM9aRj6Zw <= ((NI) 15))) goto LA3;
				i_Ryl4pfDorL9cF3nbSiE9c6Aw = ((NI) (res_ap10Y9aqhzvthHspM9aRj6Zw));
				dest0[(i_Ryl4pfDorL9cF3nbSiE9c6Aw)- 0] = (NU32)((NU32)((NU32)(((NU32) (((NU8)(src0[j0])))) | (NU32)((NU32)(((NU32) (((NU8)(src0[(NI)(j0 + ((NI) 1))]))))) << (NU32)(((NI) 8)))) | (NU32)((NU32)(((NU32) (((NU8)(src0[(NI)(j0 + ((NI) 2))]))))) << (NU32)(((NI) 16)))) | (NU32)((NU32)(((NU32) (((NU8)(src0[(NI)(j0 + ((NI) 3))]))))) << (NU32)(((NI) 24))));
				j0 += ((NI) 4);
				res_ap10Y9aqhzvthHspM9aRj6Zw += ((NI) 1);
			} LA3: ;
		}
	}
}

static N_INLINE(NU32, F_ojAq5rYkim7vo76QXO9beRwmd5)(NU32 x0, NU32 y0, NU32 z0) {
	NU32 result0;
	result0 = (NU32)0;
	result0 = (NU32)((NU32)(x0 & y0) | (NU32)((NU32)((NU32) ~(x0)) & z0));
	return result0;
}

static N_INLINE(void, rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5)(NU32* x0, NU8 n0) {
	(*x0) = (NU32)((NU32)((NU32)((*x0)) << (NU32)(n0)) | (NU32)((NU32)((*x0)) >> (NU32)((NU32)((NU32)(((NU32) 32)) - (NU32)(((NU32) (n0)))))));
}

N_NIMCALL(void, Ff_CuD4I5y8bsueZlGqujuUZw)(NU32* a0, NU32 b0, NU32 c0, NU32 d0, NU32 x0, NU8 s0, NU32 ac0) {
	NU32 LOC1;
	LOC1 = (NU32)0;
	LOC1 = F_ojAq5rYkim7vo76QXO9beRwmd5(b0, c0, d0);
	(*a0) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a0)) + (NU32)(LOC1))) + (NU32)(x0))) + (NU32)(ac0));
	rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5(a0, s0);
	(*a0) = (NU32)((NU32)((*a0)) + (NU32)(b0));
}

static N_INLINE(NU32, G_ojAq5rYkim7vo76QXO9beRw_2md5)(NU32 x0, NU32 y0, NU32 z0) {
	NU32 result0;
	result0 = (NU32)0;
	result0 = (NU32)((NU32)(x0 & z0) | (NU32)(y0 & (NU32)((NU32) ~(z0))));
	return result0;
}

N_NIMCALL(void, Gg_CuD4I5y8bsueZlGqujuUZw_2)(NU32* a0, NU32 b0, NU32 c0, NU32 d0, NU32 x0, NU8 s0, NU32 ac0) {
	NU32 LOC1;
	LOC1 = (NU32)0;
	LOC1 = G_ojAq5rYkim7vo76QXO9beRw_2md5(b0, c0, d0);
	(*a0) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a0)) + (NU32)(LOC1))) + (NU32)(x0))) + (NU32)(ac0));
	rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5(a0, s0);
	(*a0) = (NU32)((NU32)((*a0)) + (NU32)(b0));
}

static N_INLINE(NU32, H_ojAq5rYkim7vo76QXO9beRw_3md5)(NU32 x0, NU32 y0, NU32 z0) {
	NU32 result0;
	result0 = (NU32)0;
	result0 = (NU32)((NU32)(x0 ^ y0) ^ z0);
	return result0;
}

N_NIMCALL(void, Hh_CuD4I5y8bsueZlGqujuUZw_3)(NU32* a0, NU32 b0, NU32 c0, NU32 d0, NU32 x0, NU8 s0, NU32 ac0) {
	NU32 LOC1;
	LOC1 = (NU32)0;
	LOC1 = H_ojAq5rYkim7vo76QXO9beRw_3md5(b0, c0, d0);
	(*a0) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a0)) + (NU32)(LOC1))) + (NU32)(x0))) + (NU32)(ac0));
	rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5(a0, s0);
	(*a0) = (NU32)((NU32)((*a0)) + (NU32)(b0));
}

static N_INLINE(NU32, I_ojAq5rYkim7vo76QXO9beRw_4md5)(NU32 x0, NU32 y0, NU32 z0) {
	NU32 result0;
	result0 = (NU32)0;
	result0 = (NU32)(y0 ^ (NU32)(x0 | (NU32)((NU32) ~(z0))));
	return result0;
}

N_NIMCALL(void, Ii_CuD4I5y8bsueZlGqujuUZw_4)(NU32* a0, NU32 b0, NU32 c0, NU32 d0, NU32 x0, NU8 s0, NU32 ac0) {
	NU32 LOC1;
	LOC1 = (NU32)0;
	LOC1 = I_ojAq5rYkim7vo76QXO9beRw_4md5(b0, c0, d0);
	(*a0) = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((*a0)) + (NU32)(LOC1))) + (NU32)(x0))) + (NU32)(ac0));
	rot_is2Co9bsO9ayY8OTNZuT9aLGwmd5(a0, s0);
	(*a0) = (NU32)((NU32)((*a0)) + (NU32)(b0));
}

N_NIMCALL(void, transform_BVJTPXCwb2rPwlDOJoCtcQ)(void* buffer0, NU32* state0) {
	TY_U0SiHM0pVagA9c71oWelQMA myblock0;
	NU32 a0;
	NU32 b0;
	NU32 c0;
	NU32 d0;
	memset((void*)myblock0, 0, sizeof(myblock0));
	encode_bGGKHUKRgpt4lRMA6o8vJw(myblock0, ((NCSTRING) (buffer0)));
	a0 = state0[(((NI) 0))- 0];
	b0 = state0[(((NI) 1))- 0];
	c0 = state0[(((NI) 2))- 0];
	d0 = state0[(((NI) 3))- 0];
	Ff_CuD4I5y8bsueZlGqujuUZw((&a0), b0, c0, d0, myblock0[(((NI) 0))- 0], ((NU8) 7), ((NU32) IL64(3614090360)));
	Ff_CuD4I5y8bsueZlGqujuUZw((&d0), a0, b0, c0, myblock0[(((NI) 1))- 0], ((NU8) 12), ((NU32) IL64(3905402710)));
	Ff_CuD4I5y8bsueZlGqujuUZw((&c0), d0, a0, b0, myblock0[(((NI) 2))- 0], ((NU8) 17), ((NU32) 606105819));
	Ff_CuD4I5y8bsueZlGqujuUZw((&b0), c0, d0, a0, myblock0[(((NI) 3))- 0], ((NU8) 22), ((NU32) IL64(3250441966)));
	Ff_CuD4I5y8bsueZlGqujuUZw((&a0), b0, c0, d0, myblock0[(((NI) 4))- 0], ((NU8) 7), ((NU32) IL64(4118548399)));
	Ff_CuD4I5y8bsueZlGqujuUZw((&d0), a0, b0, c0, myblock0[(((NI) 5))- 0], ((NU8) 12), ((NU32) 1200080426));
	Ff_CuD4I5y8bsueZlGqujuUZw((&c0), d0, a0, b0, myblock0[(((NI) 6))- 0], ((NU8) 17), ((NU32) IL64(2821735955)));
	Ff_CuD4I5y8bsueZlGqujuUZw((&b0), c0, d0, a0, myblock0[(((NI) 7))- 0], ((NU8) 22), ((NU32) IL64(4249261313)));
	Ff_CuD4I5y8bsueZlGqujuUZw((&a0), b0, c0, d0, myblock0[(((NI) 8))- 0], ((NU8) 7), ((NU32) 1770035416));
	Ff_CuD4I5y8bsueZlGqujuUZw((&d0), a0, b0, c0, myblock0[(((NI) 9))- 0], ((NU8) 12), ((NU32) IL64(2336552879)));
	Ff_CuD4I5y8bsueZlGqujuUZw((&c0), d0, a0, b0, myblock0[(((NI) 10))- 0], ((NU8) 17), ((NU32) IL64(4294925233)));
	Ff_CuD4I5y8bsueZlGqujuUZw((&b0), c0, d0, a0, myblock0[(((NI) 11))- 0], ((NU8) 22), ((NU32) IL64(2304563134)));
	Ff_CuD4I5y8bsueZlGqujuUZw((&a0), b0, c0, d0, myblock0[(((NI) 12))- 0], ((NU8) 7), ((NU32) 1804603682));
	Ff_CuD4I5y8bsueZlGqujuUZw((&d0), a0, b0, c0, myblock0[(((NI) 13))- 0], ((NU8) 12), ((NU32) IL64(4254626195)));
	Ff_CuD4I5y8bsueZlGqujuUZw((&c0), d0, a0, b0, myblock0[(((NI) 14))- 0], ((NU8) 17), ((NU32) IL64(2792965006)));
	Ff_CuD4I5y8bsueZlGqujuUZw((&b0), c0, d0, a0, myblock0[(((NI) 15))- 0], ((NU8) 22), ((NU32) 1236535329));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&a0), b0, c0, d0, myblock0[(((NI) 1))- 0], ((NU8) 5), ((NU32) IL64(4129170786)));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&d0), a0, b0, c0, myblock0[(((NI) 6))- 0], ((NU8) 9), ((NU32) IL64(3225465664)));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&c0), d0, a0, b0, myblock0[(((NI) 11))- 0], ((NU8) 14), ((NU32) 643717713));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&b0), c0, d0, a0, myblock0[(((NI) 0))- 0], ((NU8) 20), ((NU32) IL64(3921069994)));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&a0), b0, c0, d0, myblock0[(((NI) 5))- 0], ((NU8) 5), ((NU32) IL64(3593408605)));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&d0), a0, b0, c0, myblock0[(((NI) 10))- 0], ((NU8) 9), ((NU32) 38016083));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&c0), d0, a0, b0, myblock0[(((NI) 15))- 0], ((NU8) 14), ((NU32) IL64(3634488961)));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&b0), c0, d0, a0, myblock0[(((NI) 4))- 0], ((NU8) 20), ((NU32) IL64(3889429448)));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&a0), b0, c0, d0, myblock0[(((NI) 9))- 0], ((NU8) 5), ((NU32) 568446438));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&d0), a0, b0, c0, myblock0[(((NI) 14))- 0], ((NU8) 9), ((NU32) IL64(3275163606)));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&c0), d0, a0, b0, myblock0[(((NI) 3))- 0], ((NU8) 14), ((NU32) IL64(4107603335)));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&b0), c0, d0, a0, myblock0[(((NI) 8))- 0], ((NU8) 20), ((NU32) 1163531501));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&a0), b0, c0, d0, myblock0[(((NI) 13))- 0], ((NU8) 5), ((NU32) IL64(2850285829)));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&d0), a0, b0, c0, myblock0[(((NI) 2))- 0], ((NU8) 9), ((NU32) IL64(4243563512)));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&c0), d0, a0, b0, myblock0[(((NI) 7))- 0], ((NU8) 14), ((NU32) 1735328473));
	Gg_CuD4I5y8bsueZlGqujuUZw_2((&b0), c0, d0, a0, myblock0[(((NI) 12))- 0], ((NU8) 20), ((NU32) IL64(2368359562)));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&a0), b0, c0, d0, myblock0[(((NI) 5))- 0], ((NU8) 4), ((NU32) IL64(4294588738)));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&d0), a0, b0, c0, myblock0[(((NI) 8))- 0], ((NU8) 11), ((NU32) IL64(2272392833)));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&c0), d0, a0, b0, myblock0[(((NI) 11))- 0], ((NU8) 16), ((NU32) 1839030562));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&b0), c0, d0, a0, myblock0[(((NI) 14))- 0], ((NU8) 23), ((NU32) IL64(4259657740)));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&a0), b0, c0, d0, myblock0[(((NI) 1))- 0], ((NU8) 4), ((NU32) IL64(2763975236)));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&d0), a0, b0, c0, myblock0[(((NI) 4))- 0], ((NU8) 11), ((NU32) 1272893353));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&c0), d0, a0, b0, myblock0[(((NI) 7))- 0], ((NU8) 16), ((NU32) IL64(4139469664)));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&b0), c0, d0, a0, myblock0[(((NI) 10))- 0], ((NU8) 23), ((NU32) IL64(3200236656)));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&a0), b0, c0, d0, myblock0[(((NI) 13))- 0], ((NU8) 4), ((NU32) 681279174));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&d0), a0, b0, c0, myblock0[(((NI) 0))- 0], ((NU8) 11), ((NU32) IL64(3936430074)));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&c0), d0, a0, b0, myblock0[(((NI) 3))- 0], ((NU8) 16), ((NU32) IL64(3572445317)));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&b0), c0, d0, a0, myblock0[(((NI) 6))- 0], ((NU8) 23), ((NU32) 76029189));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&a0), b0, c0, d0, myblock0[(((NI) 9))- 0], ((NU8) 4), ((NU32) IL64(3654602809)));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&d0), a0, b0, c0, myblock0[(((NI) 12))- 0], ((NU8) 11), ((NU32) IL64(3873151461)));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&c0), d0, a0, b0, myblock0[(((NI) 15))- 0], ((NU8) 16), ((NU32) 530742520));
	Hh_CuD4I5y8bsueZlGqujuUZw_3((&b0), c0, d0, a0, myblock0[(((NI) 2))- 0], ((NU8) 23), ((NU32) IL64(3299628645)));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&a0), b0, c0, d0, myblock0[(((NI) 0))- 0], ((NU8) 6), ((NU32) IL64(4096336452)));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&d0), a0, b0, c0, myblock0[(((NI) 7))- 0], ((NU8) 10), ((NU32) 1126891415));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&c0), d0, a0, b0, myblock0[(((NI) 14))- 0], ((NU8) 15), ((NU32) IL64(2878612391)));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&b0), c0, d0, a0, myblock0[(((NI) 5))- 0], ((NU8) 21), ((NU32) IL64(4237533241)));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&a0), b0, c0, d0, myblock0[(((NI) 12))- 0], ((NU8) 6), ((NU32) 1700485571));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&d0), a0, b0, c0, myblock0[(((NI) 3))- 0], ((NU8) 10), ((NU32) IL64(2399980690)));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&c0), d0, a0, b0, myblock0[(((NI) 10))- 0], ((NU8) 15), ((NU32) IL64(4293915773)));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&b0), c0, d0, a0, myblock0[(((NI) 1))- 0], ((NU8) 21), ((NU32) IL64(2240044497)));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&a0), b0, c0, d0, myblock0[(((NI) 8))- 0], ((NU8) 6), ((NU32) 1873313359));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&d0), a0, b0, c0, myblock0[(((NI) 15))- 0], ((NU8) 10), ((NU32) IL64(4264355552)));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&c0), d0, a0, b0, myblock0[(((NI) 6))- 0], ((NU8) 15), ((NU32) IL64(2734768916)));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&b0), c0, d0, a0, myblock0[(((NI) 13))- 0], ((NU8) 21), ((NU32) 1309151649));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&a0), b0, c0, d0, myblock0[(((NI) 4))- 0], ((NU8) 6), ((NU32) IL64(4149444226)));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&d0), a0, b0, c0, myblock0[(((NI) 11))- 0], ((NU8) 10), ((NU32) IL64(3174756917)));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&c0), d0, a0, b0, myblock0[(((NI) 2))- 0], ((NU8) 15), ((NU32) 718787259));
	Ii_CuD4I5y8bsueZlGqujuUZw_4((&b0), c0, d0, a0, myblock0[(((NI) 9))- 0], ((NU8) 21), ((NU32) IL64(3951481745)));
	state0[(((NI) 0))- 0] = (NU32)((NU32)(state0[(((NI) 0))- 0]) + (NU32)(a0));
	state0[(((NI) 1))- 0] = (NU32)((NU32)(state0[(((NI) 1))- 0]) + (NU32)(b0));
	state0[(((NI) 2))- 0] = (NU32)((NU32)(state0[(((NI) 2))- 0]) + (NU32)(c0));
	state0[(((NI) 3))- 0] = (NU32)((NU32)(state0[(((NI) 3))- 0]) + (NU32)(d0));
}

N_NIMCALL(void, md5update_2rxQixjUkbT0w5WdNOCwMw)(Md5context_oMciKUdSdCaIeMtcxbiPOw* c0, NCSTRING input_bWAc5knnB9bBxVuO4Hm6hoA, NI len0) {
	NCSTRING input0;
	NI Index0;
	NI Partlen0;
	input0 = input_bWAc5knnB9bBxVuO4Hm6hoA;
	Index0 = ((NI) ((NU32)((NU32)((NU32)((*c0).count[(((NI) 0))- 0]) >> (NU32)(((NI) 3))) & ((NI) 63))));
	(*c0).count[(((NI) 0))- 0] = (NU32)((NU32)((*c0).count[(((NI) 0))- 0]) + (NU32)((NU32)((NU32)(((NU32) (len0))) << (NU32)(((NI) 3)))));
	{
		if (!((NU32)((*c0).count[(((NI) 0))- 0]) < (NU32)((NU32)((NU32)(((NU32) (len0))) << (NU32)(((NI) 3)))))) goto LA3;
		(*c0).count[(((NI) 1))- 0] = (NU32)((NU32)((*c0).count[(((NI) 1))- 0]) + (NU32)(((NU32) 1)));
	}
	LA3: ;
	(*c0).count[(((NI) 1))- 0] = (NU32)((NU32)((*c0).count[(((NI) 1))- 0]) + (NU32)((NU32)((NU32)(((NU32) (len0))) >> (NU32)(((NI) 29)))));
	Partlen0 = (NI)(((NI) 64) - Index0);
	{
		NI i0;
		if (!(Partlen0 <= len0)) goto LA7;
		copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*c0).buffer[(Index0)- 0]))), ((void*) (input0)), ((NI) (Partlen0)));
		transform_BVJTPXCwb2rPwlDOJoCtcQ(((void*) ((*c0).buffer)), (*c0).state);
		i0 = Partlen0;
		{
			while (1) {
				if (!((NI)(i0 + ((NI) 63)) < len0)) goto LA10;
				transform_BVJTPXCwb2rPwlDOJoCtcQ(((void*) ((&input0[i0]))), (*c0).state);
				i0 += ((NI) 64);
			} LA10: ;
		}
		copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*c0).buffer[(((NI) 0))- 0]))), ((void*) ((&input0[i0]))), ((NI) ((NI)(len0 - i0))));
	}
	goto LA5;
	LA7: ;
	{
		copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*c0).buffer[(Index0)- 0]))), ((void*) ((&input0[((NI) 0)]))), ((NI) (len0)));
	}
	LA5: ;
}

N_NIMCALL(void, decode_RBet4Tm12y1uAF9bb9cqMfrA)(NU8* dest0, NI dest0Len0, NU32* src0, NI src0Len0) {
	NI i0;
	i0 = ((NI) 0);
	{
		NI j_5uFI3CwmwUC9beNCw1pKFYg;
		NI HEX3Atmp_jTPjYJRQdKFntmLfsV2cng;
		NI res_1yIyrE9bJFXAUI2BHaKefSA;
		j_5uFI3CwmwUC9beNCw1pKFYg = (NI)0;
		HEX3Atmp_jTPjYJRQdKFntmLfsV2cng = (NI)0;
		HEX3Atmp_jTPjYJRQdKFntmLfsV2cng = (src0Len0-1);
		res_1yIyrE9bJFXAUI2BHaKefSA = ((NI) 0);
		{
			while (1) {
				if (!(res_1yIyrE9bJFXAUI2BHaKefSA <= HEX3Atmp_jTPjYJRQdKFntmLfsV2cng)) goto LA3;
				j_5uFI3CwmwUC9beNCw1pKFYg = res_1yIyrE9bJFXAUI2BHaKefSA;
				dest0[i0] = ((NU8) ((NU32)(src0[j_5uFI3CwmwUC9beNCw1pKFYg] & ((NU32) 255))));
				dest0[(NI)(i0 + ((NI) 1))] = ((NU8) ((NU32)((NU32)((NU32)(src0[j_5uFI3CwmwUC9beNCw1pKFYg]) >> (NU32)(((NI) 8))) & ((NU32) 255))));
				dest0[(NI)(i0 + ((NI) 2))] = ((NU8) ((NU32)((NU32)((NU32)(src0[j_5uFI3CwmwUC9beNCw1pKFYg]) >> (NU32)(((NI) 16))) & ((NU32) 255))));
				dest0[(NI)(i0 + ((NI) 3))] = ((NU8) ((NU32)((NU32)((NU32)(src0[j_5uFI3CwmwUC9beNCw1pKFYg]) >> (NU32)(((NI) 24))) & ((NU32) 255))));
				i0 += ((NI) 4);
				res_1yIyrE9bJFXAUI2BHaKefSA += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, md5final_QVR9bnyINbQRLkYQjTeezvw)(Md5context_oMciKUdSdCaIeMtcxbiPOw* c0, NU8* digest0) {
	TY_cdsir9aPB24hAk6k77P9b9bCA Bits0;
	NI Padlen0;
	NI Index0;
	memset((void*)Bits0, 0, sizeof(Bits0));
	Padlen0 = (NI)0;
	decode_RBet4Tm12y1uAF9bb9cqMfrA(Bits0, 8, (*c0).count, 2);
	Index0 = ((NI) ((NU32)((NU32)((NU32)((*c0).count[(((NI) 0))- 0]) >> (NU32)(((NI) 3))) & ((NI) 63))));
	{
		if (!(Index0 < ((NI) 56))) goto LA3;
		Padlen0 = (NI)(((NI) 56) - Index0);
	}
	goto LA1;
	LA3: ;
	{
		Padlen0 = (NI)(((NI) 120) - Index0);
	}
	LA1: ;
	md5update_2rxQixjUkbT0w5WdNOCwMw(c0, "\200\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000", Padlen0);
	md5update_2rxQixjUkbT0w5WdNOCwMw(c0, ((NCSTRING) (Bits0)), ((NI) 8));
	decode_RBet4Tm12y1uAF9bb9cqMfrA(digest0, 16, (*c0).state, 4);
	zeromem_7EL8Zq3xF2ujDWgp3bAEogsystem(((void*) (c0)), ((NI) (((NI)sizeof(Md5context_oMciKUdSdCaIeMtcxbiPOw)))));
}
NIM_EXTERNC N_NOINLINE(void, stdlib_md5Init000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_md5DatInit000)(void) {
NTI_qtqsWM5aXmcpMIVmvq3kAA.size = sizeof(TY_qtqsWM5aXmcpMIVmvq3kAA);
NTI_qtqsWM5aXmcpMIVmvq3kAA.kind = 16;
NTI_qtqsWM5aXmcpMIVmvq3kAA.base = (&NTI_k3HXouOuhqAKq0dx450lXQ);
NTI_qtqsWM5aXmcpMIVmvq3kAA.flags = 3;
}

