/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#undef linux
typedef struct Tnode_bROa11lyF5vxEN9aYNbHmhw Tnode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Ttype_LTUWCZolpovw9cWE3JBWSUw Ttype_LTUWCZolpovw9cWE3JBWSUw;
typedef struct Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct Tsym_AXG7xcvKqaxY6koRX1xkCw Tsym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct Tident_4umxGerWTHGPwUms7Yqu3g Tident_4umxGerWTHGPwUms7Yqu3g;
typedef struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ TY_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct Tidobj_raN9cHVgzmvaXisezY9aGg9cg Tidobj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tllstream_IHsOGFu33dIY69a9bLlFHlHw Tllstream_IHsOGFu33dIY69a9bLlFHlHw;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct Tloc_EtHNvCB0bgfu9bFjzx9cb6aA Tloc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct Ropeobj_HF4qJnb6xiOddgPmsxodtQ Ropeobj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct Tstrtable_f07aOS3dr28kGa5wcE29aFA Tstrtable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct Tlib_4f9aBgmqEuj7uWJdBBGcRgA Tlib_4f9aBgmqEuj7uWJdBBGcRgA;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q;
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
typedef NU16 Tnodeflag_jyh9acXHkhZANSSvPIY7ZLg_Set;
typedef NU8 Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw;
struct  Tnode_bROa11lyF5vxEN9aYNbHmhw  {
Ttype_LTUWCZolpovw9cWE3JBWSUw* typ;
Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
Tnodeflag_jyh9acXHkhZANSSvPIY7ZLg_Set flags;
Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym_AXG7xcvKqaxY6koRX1xkCw* sym;
} S4;
struct {Tident_4umxGerWTHGPwUms7Yqu3g* ident;
} S5;
struct {TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
typedef NU16 Tmsgkind_IGAWgv9aR2KqPKJfPZPEWaw;
typedef NU8 Trenderflag_wrPgUo1ExBlHvFnXN2nSHw_Set;
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
struct  Tident_4umxGerWTHGPwUms7Yqu3g  {
  Tidobj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
Tident_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef NU8 TY_nmiMWKVIe46vacnhAFrQvw_Set[32];
typedef NU8 Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 Tcallingconvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU32 Ttypeflag_x2m5g1NpbmDig4wLT3Ylhw_Set;
typedef NU8 Tlockind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 Tstorageloc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 Tlocflag_o2bqJgR4ceIupnUSpxiudA_Set;
struct  Tloc_EtHNvCB0bgfu9bFjzx9cb6aA  {
Tlockind_O7PRFZKuiBBWbku09cayVBg k;
Tstorageloc_JK9cKMX3XnqHaUky9b6gkGEw s;
Tlocflag_o2bqJgR4ceIupnUSpxiudA_Set flags;
Ttype_LTUWCZolpovw9cWE3JBWSUw* t;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* r;
};
struct  Ttype_LTUWCZolpovw9cWE3JBWSUw  {
  Tidobj_raN9cHVgzmvaXisezY9aGg9cg Sup;
Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag kind;
Tcallingconvention_yjAJ8w0h1PBaSwSGJ3P7IA callconv;
Ttypeflag_x2m5g1NpbmDig4wLT3Ylhw_Set flags;
TY_zuqP4Riz26Oi5fWgPYVEgA* sons;
Tnode_bROa11lyF5vxEN9aYNbHmhw* n;
Tsym_AXG7xcvKqaxY6koRX1xkCw* owner;
Tsym_AXG7xcvKqaxY6koRX1xkCw* sym;
Tsym_AXG7xcvKqaxY6koRX1xkCw* destructor;
Tsym_AXG7xcvKqaxY6koRX1xkCw* deepcopy;
Tsym_AXG7xcvKqaxY6koRX1xkCw* assignment;
TY_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
Ttype_LTUWCZolpovw9cWE3JBWSUw* typeinst;
};
typedef NU8 Tsymkind_cNCW9acsSznmEccl1fgQwkw;
struct  Tstrtable_f07aOS3dr28kGa5wcE29aFA  {
NI counter;
TY_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 Tmagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU32 Tsymflag_K9ay6LWMat9bUiT9bIbMxpDHw_Set;
typedef NU32 Toption_WspMeQySXNP2XoTWR5MTgg_Set;
struct  Tsym_AXG7xcvKqaxY6koRX1xkCw  {
  Tidobj_raN9cHVgzmvaXisezY9aGg9cg Sup;
Tsymkind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {TY_zuqP4Riz26Oi5fWgPYVEgA* typeinstcache;
} S1;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* procinstcache;
Tsym_AXG7xcvKqaxY6koRX1xkCw* gcunsafetyreason;
} S2;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* usedgenerics;
Tstrtable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {Tsym_AXG7xcvKqaxY6koRX1xkCw* guard;
NI bitsize;
} S4;
} kindU;
Tmagic_shZhZOdbVC5nnFvcXQAImg magic;
Ttype_LTUWCZolpovw9cWE3JBWSUw* typ;
Tident_4umxGerWTHGPwUms7Yqu3g* name;
Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
Tsym_AXG7xcvKqaxY6koRX1xkCw* owner;
Tsymflag_K9ay6LWMat9bUiT9bIbMxpDHw_Set flags;
Tnode_bROa11lyF5vxEN9aYNbHmhw* ast;
Toption_WspMeQySXNP2XoTWR5MTgg_Set options;
NI position;
NI offset;
Tloc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
Tlib_4f9aBgmqEuj7uWJdBBGcRgA* annex;
Tnode_bROa11lyF5vxEN9aYNbHmhw* constraint;
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
typedef NU8 Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ;
struct  Tllstream_IHsOGFu33dIY69a9bLlFHlHw  {
  TNimObject Sup;
Tllstreamkind_jVcKY16LbOamXE9bxXUD6pQ kind;
FILE* f;
NimStringDesc* s;
NI rd;
NI wr;
NI lineoffset;
};
struct TY_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
Tsym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct  Ropeobj_HF4qJnb6xiOddgPmsxodtQ  {
  TNimObject Sup;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* left;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q  {
  TNimObject Sup;
Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q* prev;
Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q* next;
};
typedef NU8 Tlibkind_9b8v60kso59bBaw9cp8B9a9apKQ;
struct  Tlib_4f9aBgmqEuj7uWJdBBGcRgA  {
  Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q Sup;
Tlibkind_9b8v60kso59bBaw9cp8B9a9apKQ kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* name;
Tnode_bROa11lyF5vxEN9aYNbHmhw* path;
};
struct  Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA  {
Tsym_AXG7xcvKqaxY6koRX1xkCw* sym;
TY_zuqP4Riz26Oi5fWgPYVEgA* concretetypes;
NI compilesid;
};
struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  Tnode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct TY_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  Ttype_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct TY_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct TY_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  Tsym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Tnode_bROa11lyF5vxEN9aYNbHmhw*, getarg_4LRC3jIE5TPe1ACm9aPVpBQ)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NimStringDesc* name0, NI pos0);
N_NIMCALL(NI, sonslen_qPWPHw7WgJeEVYUdcaRIig)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
N_NIMCALL(void, invalidpragma_54ZurtFnCR0LbrbLzC8vrw)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
N_NIMCALL(void, localerror_VpilfPWbplGz6ny7O9cfr2g)(Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0, Tmsgkind_IGAWgv9aR2KqPKJfPZPEWaw msg0, NimStringDesc* arg0);
N_NIMCALL(NimStringDesc*, rendertree_ppjdh9aQ5L0SGPF8yz1gZ9cA)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, Trenderflag_wrPgUo1ExBlHvFnXN2nSHw_Set renderflags0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NimStringDesc*, strarg_hrsET2VpzHuUBdZObITwmQ)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NimStringDesc* name0, NI pos0, NimStringDesc* default_SN1oaQdQM0a8trKX6TwKig);
N_NIMCALL(NIM_BOOL, boolarg_J1A66BRI6GgqzqhU0EZntw)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NimStringDesc* name0, NI pos0, NIM_BOOL default_NH2VpJWCLyx9cW5vivqXJNg);
N_NIMCALL(Tllstream_IHsOGFu33dIY69a9bLlFHlHw*, llstreamopen_HQSZA6kzdilYF0Pf022dhA)(NimStringDesc* data0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap0);
N_NIMCALL(NIM_BOOL, llstreamreadline_Qwm1ilRhcaI3znjOGn4xBg)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0, NimStringDesc** line0);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s0, NIM_BOOL leading0, NIM_BOOL trailing0, TY_nmiMWKVIe46vacnhAFrQvw_Set chars0);
N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s0, NimStringDesc* prefix0);
N_NIMCALL(void, llstreamwriteln_p1fwzwO1YKdwAKg6V27RTw_2)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0, NimStringDesc* data0);
N_NIMCALL(void, llstreamclose_TQe1mwqs39ccgay5ywsr9azw)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* s0);
N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s0, NimStringDesc* sub0, NimStringDesc* by0);
STRING_LITERAL(T_TpC7tIfhGAaosc7HIsUuXA_2, "startswith", 10);
STRING_LITERAL(T_TpC7tIfhGAaosc7HIsUuXA_3, "", 0);
STRING_LITERAL(T_TpC7tIfhGAaosc7HIsUuXA_4, "true", 4);
STRING_LITERAL(T_TpC7tIfhGAaosc7HIsUuXA_5, "false", 5);
STRING_LITERAL(T_TpC7tIfhGAaosc7HIsUuXA_6, "leading", 7);
STRING_LITERAL(T_TpC7tIfhGAaosc7HIsUuXA_7, "trailing", 8);
static NIM_CONST TY_nmiMWKVIe46vacnhAFrQvw_Set T_TpC7tIfhGAaosc7HIsUuXA_8 = {
0x00, 0x3E, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(T_TpC7tIfhGAaosc7HIsUuXA_9, "sub", 3);
STRING_LITERAL(T_TpC7tIfhGAaosc7HIsUuXA_10, "by", 2);

N_NIMCALL(void, invalidpragma_54ZurtFnCR0LbrbLzC8vrw)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0) {
	NimStringDesc* LOC1;
	LOC1 = (NimStringDesc*)0;
	LOC1 = rendertree_ppjdh9aQ5L0SGPF8yz1gZ9cA(n0, 4);
	localerror_VpilfPWbplGz6ny7O9cfr2g((*n0).info, ((Tmsgkind_IGAWgv9aR2KqPKJfPZPEWaw) 166), LOC1);
}

N_NIMCALL(Tnode_bROa11lyF5vxEN9aYNbHmhw*, getarg_4LRC3jIE5TPe1ACm9aPVpBQ)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NimStringDesc* name0, NI pos0) {
	Tnode_bROa11lyF5vxEN9aYNbHmhw* result0;
{	result0 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result0 = NIM_NIL;
	{
		if (!((*n0).kind >= ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 1) && (*n0).kind <= ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 23))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_XOmbuBEqaXLfmywSBNfcKw;
		NI HEX3Atmp_nRBwXptAeLwd9aM1g9c6ToIw;
		NI LOC6;
		NI res_tQL9bpoB43pOCpi4s3Uqgow;
		i_XOmbuBEqaXLfmywSBNfcKw = (NI)0;
		HEX3Atmp_nRBwXptAeLwd9aM1g9c6ToIw = (NI)0;
		LOC6 = (NI)0;
		LOC6 = sonslen_qPWPHw7WgJeEVYUdcaRIig(n0);
		HEX3Atmp_nRBwXptAeLwd9aM1g9c6ToIw = (NI)(LOC6 - ((NI) 1));
		res_tQL9bpoB43pOCpi4s3Uqgow = ((NI) 1);
		{
			while (1) {
				if (!(res_tQL9bpoB43pOCpi4s3Uqgow <= HEX3Atmp_nRBwXptAeLwd9aM1g9c6ToIw)) goto LA8;
				i_XOmbuBEqaXLfmywSBNfcKw = res_tQL9bpoB43pOCpi4s3Uqgow;
				{
					if (!((*(*n0).kindU.S6.sons->data[i_XOmbuBEqaXLfmywSBNfcKw]).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 33))) goto LA11;
					{
						if (!!(((*(*(*n0).kindU.S6.sons->data[i_XOmbuBEqaXLfmywSBNfcKw]).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 2)))) goto LA15;
						invalidpragma_54ZurtFnCR0LbrbLzC8vrw(n0);
					}
					LA15: ;
					{
						NI LOC19;
						LOC19 = (NI)0;
						LOC19 = nsuCmpIgnoreStyle((*(*(*(*n0).kindU.S6.sons->data[i_XOmbuBEqaXLfmywSBNfcKw]).kindU.S6.sons->data[((NI) 0)]).kindU.S5.ident).s, name0);
						if (!(LOC19 == ((NI) 0))) goto LA20;
						result0 = (*(*n0).kindU.S6.sons->data[i_XOmbuBEqaXLfmywSBNfcKw]).kindU.S6.sons->data[((NI) 1)];
						goto BeforeRet;
					}
					LA20: ;
				}
				goto LA9;
				LA11: ;
				{
					if (!(i_XOmbuBEqaXLfmywSBNfcKw == pos0)) goto LA23;
					result0 = (*n0).kindU.S6.sons->data[i_XOmbuBEqaXLfmywSBNfcKw];
					goto BeforeRet;
				}
				goto LA9;
				LA23: ;
				LA9: ;
				res_tQL9bpoB43pOCpi4s3Uqgow += ((NI) 1);
			} LA8: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_CHAR, chararg_9a2s5yGJN0q64pYjhEbI1pQ)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NimStringDesc* name0, NI pos0, NIM_CHAR default_geVXEUJTmqfThODrSW2GVA) {
	NIM_CHAR result0;
	Tnode_bROa11lyF5vxEN9aYNbHmhw* x0;
	result0 = (NIM_CHAR)0;
	x0 = getarg_4LRC3jIE5TPe1ACm9aPVpBQ(n0, name0, pos0);
	{
		if (!(x0 == NIM_NIL)) goto LA3;
		result0 = default_geVXEUJTmqfThODrSW2GVA;
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x0).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 5))) goto LA6;
		result0 = ((NIM_CHAR) (((NI) (((NI) ((*x0).kindU.S1.intval))))));
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_54ZurtFnCR0LbrbLzC8vrw(n0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NimStringDesc*, strarg_hrsET2VpzHuUBdZObITwmQ)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NimStringDesc* name0, NI pos0, NimStringDesc* default_SN1oaQdQM0a8trKX6TwKig) {
	NimStringDesc* result0;
	Tnode_bROa11lyF5vxEN9aYNbHmhw* x0;
	result0 = (NimStringDesc*)0;
	x0 = getarg_4LRC3jIE5TPe1ACm9aPVpBQ(n0, name0, pos0);
	{
		if (!(x0 == NIM_NIL)) goto LA3;
		result0 = copyString(default_SN1oaQdQM0a8trKX6TwKig);
	}
	goto LA1;
	LA3: ;
	{
		if (!((*x0).kind >= ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 20) && (*x0).kind <= ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 22))) goto LA6;
		result0 = copyString((*x0).kindU.S3.strval);
	}
	goto LA1;
	LA6: ;
	{
		invalidpragma_54ZurtFnCR0LbrbLzC8vrw(n0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, boolarg_J1A66BRI6GgqzqhU0EZntw)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NimStringDesc* name0, NI pos0, NIM_BOOL default_NH2VpJWCLyx9cW5vivqXJNg) {
	NIM_BOOL result0;
	Tnode_bROa11lyF5vxEN9aYNbHmhw* x0;
	result0 = (NIM_BOOL)0;
	x0 = getarg_4LRC3jIE5TPe1ACm9aPVpBQ(n0, name0, pos0);
	{
		if (!(x0 == NIM_NIL)) goto LA3;
		result0 = default_NH2VpJWCLyx9cW5vivqXJNg;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NI LOC8;
		LOC6 = (NIM_BOOL)0;
		LOC6 = ((*x0).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 2));
		if (!(LOC6)) goto LA7;
		LOC8 = (NI)0;
		LOC8 = nsuCmpIgnoreStyle((*(*x0).kindU.S5.ident).s, ((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_4));
		LOC6 = (LOC8 == ((NI) 0));
		LA7: ;
		if (!LOC6) goto LA9;
		result0 = NIM_TRUE;
	}
	goto LA1;
	LA9: ;
	{
		NIM_BOOL LOC12;
		NI LOC14;
		LOC12 = (NIM_BOOL)0;
		LOC12 = ((*x0).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 2));
		if (!(LOC12)) goto LA13;
		LOC14 = (NI)0;
		LOC14 = nsuCmpIgnoreStyle((*(*x0).kindU.S5.ident).s, ((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_5));
		LOC12 = (LOC14 == ((NI) 0));
		LA13: ;
		if (!LOC12) goto LA15;
		result0 = NIM_FALSE;
	}
	goto LA1;
	LA15: ;
	{
		invalidpragma_54ZurtFnCR0LbrbLzC8vrw(n0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tllstream_IHsOGFu33dIY69a9bLlFHlHw*, filterstrip_8vZ6X8KZZNI4xsTx2A9bPBw)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* stdin_kOIrmbkfx9bA9aensSDHNIyg, NimStringDesc* filename0, Tnode_bROa11lyF5vxEN9aYNbHmhw* call0) {
	Tllstream_IHsOGFu33dIY69a9bLlFHlHw* result0;
	NimStringDesc* pattern0;
	NIM_BOOL leading0;
	NIM_BOOL trailing0;
	NimStringDesc* line0;
	result0 = (Tllstream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	pattern0 = strarg_hrsET2VpzHuUBdZObITwmQ(call0, ((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_2), ((NI) 1), ((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_3));
	leading0 = boolarg_J1A66BRI6GgqzqhU0EZntw(call0, ((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_6), ((NI) 2), NIM_TRUE);
	trailing0 = boolarg_J1A66BRI6GgqzqhU0EZntw(call0, ((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_7), ((NI) 3), NIM_TRUE);
	result0 = llstreamopen_HQSZA6kzdilYF0Pf022dhA(((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_3));
	line0 = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC3;
			NimStringDesc* stripped0;
			LOC3 = (NIM_BOOL)0;
			LOC3 = llstreamreadline_Qwm1ilRhcaI3znjOGn4xBg(stdin_kOIrmbkfx9bA9aensSDHNIyg, (&line0));
			if (!LOC3) goto LA2;
			stripped0 = nsuStrip(line0, leading0, trailing0, T_TpC7tIfhGAaosc7HIsUuXA_8);
			{
				NIM_BOOL LOC6;
				LOC6 = (NIM_BOOL)0;
				LOC6 = ((pattern0 ? pattern0->Sup.len : 0) == ((NI) 0));
				if (LOC6) goto LA7;
				LOC6 = nsuStartsWith(stripped0, pattern0);
				LA7: ;
				if (!LOC6) goto LA8;
				llstreamwriteln_p1fwzwO1YKdwAKg6V27RTw_2(result0, stripped0);
			}
			goto LA4;
			LA8: ;
			{
				llstreamwriteln_p1fwzwO1YKdwAKg6V27RTw_2(result0, line0);
			}
			LA4: ;
		} LA2: ;
	}
	llstreamclose_TQe1mwqs39ccgay5ywsr9azw(stdin_kOIrmbkfx9bA9aensSDHNIyg);
	return result0;
}

N_NIMCALL(Tllstream_IHsOGFu33dIY69a9bLlFHlHw*, filterreplace_8vZ6X8KZZNI4xsTx2A9bPBw_2)(Tllstream_IHsOGFu33dIY69a9bLlFHlHw* stdin_AuKs8fAd5orVmJJhh2if5w, NimStringDesc* filename0, Tnode_bROa11lyF5vxEN9aYNbHmhw* call0) {
	Tllstream_IHsOGFu33dIY69a9bLlFHlHw* result0;
	NimStringDesc* sub0;
	NimStringDesc* by0;
	NimStringDesc* line0;
	result0 = (Tllstream_IHsOGFu33dIY69a9bLlFHlHw*)0;
	sub0 = strarg_hrsET2VpzHuUBdZObITwmQ(call0, ((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_9), ((NI) 1), ((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_3));
	{
		if (!((sub0 ? sub0->Sup.len : 0) == ((NI) 0))) goto LA3;
		invalidpragma_54ZurtFnCR0LbrbLzC8vrw(call0);
	}
	LA3: ;
	by0 = strarg_hrsET2VpzHuUBdZObITwmQ(call0, ((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_10), ((NI) 2), ((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_3));
	result0 = llstreamopen_HQSZA6kzdilYF0Pf022dhA(((NimStringDesc*) &T_TpC7tIfhGAaosc7HIsUuXA_3));
	line0 = rawNewString(((NI) 80));
	{
		while (1) {
			NIM_BOOL LOC7;
			NimStringDesc* LOC8;
			LOC7 = (NIM_BOOL)0;
			LOC7 = llstreamreadline_Qwm1ilRhcaI3znjOGn4xBg(stdin_AuKs8fAd5orVmJJhh2if5w, (&line0));
			if (!LOC7) goto LA6;
			LOC8 = (NimStringDesc*)0;
			LOC8 = nsuReplaceStr(line0, sub0, by0);
			llstreamwriteln_p1fwzwO1YKdwAKg6V27RTw_2(result0, LOC8);
		} LA6: ;
	}
	llstreamclose_TQe1mwqs39ccgay5ywsr9azw(stdin_AuKs8fAd5orVmJJhh2if5w);
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_filtersInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_filtersDatInit000)(void) {
}

