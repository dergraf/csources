/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#undef linux
typedef struct TY_pxbIse2JUQkJU0n9blV9bY5g TY_pxbIse2JUQkJU0n9blV9bY5g;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct TY_pxbIse2JUQkJU0n9blV9bY5g {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
static N_NIMCALL(void, Marker_TY_pxbIse2JUQkJU0n9blV9bY5g)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
extern TNimType NTI_chXunH2dwinSkhpA6JnsXw;
TNimType NTI_pxbIse2JUQkJU0n9blV9bY5g;
static N_NIMCALL(void, Marker_TY_pxbIse2JUQkJU0n9blV9bY5g)(void* p, NI op) {
	TY_pxbIse2JUQkJU0n9blV9bY5g* a;
	NI LOC1;
	a = (TY_pxbIse2JUQkJU0n9blV9bY5g*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	}
}

N_NIMCALL(void, bitsetinit_9bKA1DbmAErHy3uIMkQY9bUQ)(TY_pxbIse2JUQkJU0n9blV9bY5g** b0, NI length0) {
	unsureAsgnRef((void**) (&(*b0)), (TY_pxbIse2JUQkJU0n9blV9bY5g*) newSeq((&NTI_pxbIse2JUQkJU0n9blV9bY5g), ((NI) (length0))));
}

N_NIMCALL(void, bitsetincl_tznoRhsCn6M9csUzVp17S1w)(TY_pxbIse2JUQkJU0n9blV9bY5g** x0, NI64 elem0) {
	(*x0)->data[(NI64)(elem0 / IL64(8))] = (NI8)((*x0)->data[(NI64)(elem0 / IL64(8))] | ((NI8)(NU8)(NU)((NI)((NU64)(((NI) 1)) << (NU64)(((NI64) ((NI64)(elem0 % IL64(8)))))))));
}

N_NIMCALL(void, bitsetdiff_zN8mfRIlfkwl4UeelbWZPg)(TY_pxbIse2JUQkJU0n9blV9bY5g** x0, TY_pxbIse2JUQkJU0n9blV9bY5g* y0) {
	{
		NI i_152SpMM0Va88RUlvwTn9aRQ;
		NI HEX3Atmp_hyoxoZakARNSVmD9a3E6GgQ;
		NI res_J17jtv2MfI2ZFcRYABtJhg;
		i_152SpMM0Va88RUlvwTn9aRQ = (NI)0;
		HEX3Atmp_hyoxoZakARNSVmD9a3E6GgQ = (NI)0;
		HEX3Atmp_hyoxoZakARNSVmD9a3E6GgQ = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_J17jtv2MfI2ZFcRYABtJhg = ((NI) 0);
		{
			while (1) {
				if (!(res_J17jtv2MfI2ZFcRYABtJhg <= HEX3Atmp_hyoxoZakARNSVmD9a3E6GgQ)) goto LA3;
				i_152SpMM0Va88RUlvwTn9aRQ = res_J17jtv2MfI2ZFcRYABtJhg;
				(*x0)->data[i_152SpMM0Va88RUlvwTn9aRQ] = (NI8)((*x0)->data[i_152SpMM0Va88RUlvwTn9aRQ] & (NI8)((NU8) ~(y0->data[i_152SpMM0Va88RUlvwTn9aRQ])));
				res_J17jtv2MfI2ZFcRYABtJhg += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(NIM_BOOL, bitsetin_Z5HI0xhB5Wx2mWRfrJc2NQ)(TY_pxbIse2JUQkJU0n9blV9bY5g* x0, NI64 e0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = !(((NI8)(x0->data[(NI64)(e0 / IL64(8))] & ((NI8)(NU8)(NU)((NI)((NU64)(((NI) 1)) << (NU64)(((NI64) ((NI64)(e0 % IL64(8))))))))) == ((NI8) 0)));
	return result0;
}

N_NIMCALL(NIM_BOOL, bitsetcontains_gqMsWrr3fORAvmtdSaP4rA)(TY_pxbIse2JUQkJU0n9blV9bY5g* x0, TY_pxbIse2JUQkJU0n9blV9bY5g* y0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		NI i_jcRLCSjDZWm9a9biuYWx6CgQ;
		NI HEX3Atmp_lVH6KyPzEmGgYAL2BDZjLA;
		NI res_Uk0lbP2wKsMvcSCk3tg1pg;
		i_jcRLCSjDZWm9a9biuYWx6CgQ = (NI)0;
		HEX3Atmp_lVH6KyPzEmGgYAL2BDZjLA = (NI)0;
		HEX3Atmp_lVH6KyPzEmGgYAL2BDZjLA = (x0 ? (x0->Sup.len-1) : -1);
		res_Uk0lbP2wKsMvcSCk3tg1pg = ((NI) 0);
		{
			while (1) {
				if (!(res_Uk0lbP2wKsMvcSCk3tg1pg <= HEX3Atmp_lVH6KyPzEmGgYAL2BDZjLA)) goto LA3;
				i_jcRLCSjDZWm9a9biuYWx6CgQ = res_Uk0lbP2wKsMvcSCk3tg1pg;
				{
					if (!!(((NI8)(x0->data[i_jcRLCSjDZWm9a9biuYWx6CgQ] & (NI8)((NU8) ~(y0->data[i_jcRLCSjDZWm9a9biuYWx6CgQ]))) == ((NI8) 0)))) goto LA6;
					result0 = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_Uk0lbP2wKsMvcSCk3tg1pg += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = NIM_TRUE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, bitsetequals_gqMsWrr3fORAvmtdSaP4rA_2)(TY_pxbIse2JUQkJU0n9blV9bY5g* x0, TY_pxbIse2JUQkJU0n9blV9bY5g* y0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		NI i_lO4c74RJvGpWx6EFbKwHew;
		NI HEX3Atmp_J9aW8mLDrKvWB5VLuTKFG4g;
		NI res_RjEVsoFhyU1obj2ozUo6Xg;
		i_lO4c74RJvGpWx6EFbKwHew = (NI)0;
		HEX3Atmp_J9aW8mLDrKvWB5VLuTKFG4g = (NI)0;
		HEX3Atmp_J9aW8mLDrKvWB5VLuTKFG4g = (x0 ? (x0->Sup.len-1) : -1);
		res_RjEVsoFhyU1obj2ozUo6Xg = ((NI) 0);
		{
			while (1) {
				if (!(res_RjEVsoFhyU1obj2ozUo6Xg <= HEX3Atmp_J9aW8mLDrKvWB5VLuTKFG4g)) goto LA3;
				i_lO4c74RJvGpWx6EFbKwHew = res_RjEVsoFhyU1obj2ozUo6Xg;
				{
					if (!!((x0->data[i_lO4c74RJvGpWx6EFbKwHew] == y0->data[i_lO4c74RJvGpWx6EFbKwHew]))) goto LA6;
					result0 = NIM_FALSE;
					goto BeforeRet;
				}
				LA6: ;
				res_RjEVsoFhyU1obj2ozUo6Xg += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = NIM_TRUE;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, bitsetintersect_zN8mfRIlfkwl4UeelbWZPg_2)(TY_pxbIse2JUQkJU0n9blV9bY5g** x0, TY_pxbIse2JUQkJU0n9blV9bY5g* y0) {
	{
		NI i_16umNsKQlb2Nr7OfUMoOJQ;
		NI HEX3Atmp_oLwfLmVKBpis9akzGdaCTnA;
		NI res_KnhUKkn7c6NGlWIlf19cnWg;
		i_16umNsKQlb2Nr7OfUMoOJQ = (NI)0;
		HEX3Atmp_oLwfLmVKBpis9akzGdaCTnA = (NI)0;
		HEX3Atmp_oLwfLmVKBpis9akzGdaCTnA = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_KnhUKkn7c6NGlWIlf19cnWg = ((NI) 0);
		{
			while (1) {
				if (!(res_KnhUKkn7c6NGlWIlf19cnWg <= HEX3Atmp_oLwfLmVKBpis9akzGdaCTnA)) goto LA3;
				i_16umNsKQlb2Nr7OfUMoOJQ = res_KnhUKkn7c6NGlWIlf19cnWg;
				(*x0)->data[i_16umNsKQlb2Nr7OfUMoOJQ] = (NI8)((*x0)->data[i_16umNsKQlb2Nr7OfUMoOJQ] & y0->data[i_16umNsKQlb2Nr7OfUMoOJQ]);
				res_KnhUKkn7c6NGlWIlf19cnWg += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetunion_zN8mfRIlfkwl4UeelbWZPg_3)(TY_pxbIse2JUQkJU0n9blV9bY5g** x0, TY_pxbIse2JUQkJU0n9blV9bY5g* y0) {
	{
		NI i_fTB9aOETe1Q7uCmRdHY0EuQ;
		NI HEX3Atmp_41A0hclgF3Y0DVJSMCCRPg;
		NI res_HpdI0gbrOcXkKJtP9azI0YQ;
		i_fTB9aOETe1Q7uCmRdHY0EuQ = (NI)0;
		HEX3Atmp_41A0hclgF3Y0DVJSMCCRPg = (NI)0;
		HEX3Atmp_41A0hclgF3Y0DVJSMCCRPg = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_HpdI0gbrOcXkKJtP9azI0YQ = ((NI) 0);
		{
			while (1) {
				if (!(res_HpdI0gbrOcXkKJtP9azI0YQ <= HEX3Atmp_41A0hclgF3Y0DVJSMCCRPg)) goto LA3;
				i_fTB9aOETe1Q7uCmRdHY0EuQ = res_HpdI0gbrOcXkKJtP9azI0YQ;
				(*x0)->data[i_fTB9aOETe1Q7uCmRdHY0EuQ] = (NI8)((*x0)->data[i_fTB9aOETe1Q7uCmRdHY0EuQ] | y0->data[i_fTB9aOETe1Q7uCmRdHY0EuQ]);
				res_HpdI0gbrOcXkKJtP9azI0YQ += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, bitsetsymdiff_zN8mfRIlfkwl4UeelbWZPg_4)(TY_pxbIse2JUQkJU0n9blV9bY5g** x0, TY_pxbIse2JUQkJU0n9blV9bY5g* y0) {
	{
		NI i_borSuthZ9bsKeRrm9bFu7pKQ;
		NI HEX3Atmp_reSe9bHzNScxx9cxw9aVbWXWA;
		NI res_Dgl9aMh1htZkHZjskglYRJA;
		i_borSuthZ9bsKeRrm9bFu7pKQ = (NI)0;
		HEX3Atmp_reSe9bHzNScxx9cxw9aVbWXWA = (NI)0;
		HEX3Atmp_reSe9bHzNScxx9cxw9aVbWXWA = ((*x0) ? ((*x0)->Sup.len-1) : -1);
		res_Dgl9aMh1htZkHZjskglYRJA = ((NI) 0);
		{
			while (1) {
				if (!(res_Dgl9aMh1htZkHZjskglYRJA <= HEX3Atmp_reSe9bHzNScxx9cxw9aVbWXWA)) goto LA3;
				i_borSuthZ9bsKeRrm9bFu7pKQ = res_Dgl9aMh1htZkHZjskglYRJA;
				(*x0)->data[i_borSuthZ9bsKeRrm9bFu7pKQ] = (NI8)((*x0)->data[i_borSuthZ9bsKeRrm9bFu7pKQ] ^ y0->data[i_borSuthZ9bsKeRrm9bFu7pKQ]);
				res_Dgl9aMh1htZkHZjskglYRJA += ((NI) 1);
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_bitsetsDatInit000)(void) {
NTI_pxbIse2JUQkJU0n9blV9bY5g.size = sizeof(TY_pxbIse2JUQkJU0n9blV9bY5g*);
NTI_pxbIse2JUQkJU0n9blV9bY5g.kind = 24;
NTI_pxbIse2JUQkJU0n9blV9bY5g.base = (&NTI_chXunH2dwinSkhpA6JnsXw);
NTI_pxbIse2JUQkJU0n9blV9bY5g.flags = 2;
NTI_pxbIse2JUQkJU0n9blV9bY5g.marker = Marker_TY_pxbIse2JUQkJU0n9blV9bY5g;
}

