/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#undef linux
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 Style_NXKayqTLMsAibFwNceBlpA_Set;
typedef NU8 Style_NXKayqTLMsAibFwNceBlpA;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Foregroundcolor_ez9ah4IgQc0AbdW68acioDg;
N_NIMCALL(void, write_c4mGyJBvK73pdM22jiweKQ)(FILE* f0, NimStringDesc* s0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(int, getfilehandle_bZ9c2yojtXoDTUpfyl8h8Rg)(FILE* f0);
NI gfg_g7w4T3anr20OMlWloNx2tQ;
NI gbg_dgmeknpHWrtwqMJGQAp9atA;
STRING_LITERAL(T_CN3raB9atujkEiPpxYAdlgQ_2, "\033[", 2);
STRING_LITERAL(T_CN3raB9atujkEiPpxYAdlgQ_3, "\033[0m", 4);

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

N_NIMCALL(void, setstyle_zEKKPPIjKZs9bVYu4TwenLg)(FILE* f0, Style_NXKayqTLMsAibFwNceBlpA_Set style0) {
	{
		Style_NXKayqTLMsAibFwNceBlpA s_FZtpHAjVRzoXQLsd0ruPvQ;
		NI i_BlOmMRII9bmWVWIFwYK5XdQ;
		s_FZtpHAjVRzoXQLsd0ruPvQ = (Style_NXKayqTLMsAibFwNceBlpA)0;
		i_BlOmMRII9bmWVWIFwYK5XdQ = ((NI) 1);
		{
			while (1) {
				if (!(i_BlOmMRII9bmWVWIFwYK5XdQ <= ((NI) 8))) goto LA3;
				{
					NimStringDesc* LOC8;
					NimStringDesc* LOC9;
					if (!((style0 &(1U<<((NU)((((Style_NXKayqTLMsAibFwNceBlpA) (i_BlOmMRII9bmWVWIFwYK5XdQ))- 1))&7U)))!=0)) goto LA6;
					s_FZtpHAjVRzoXQLsd0ruPvQ = ((Style_NXKayqTLMsAibFwNceBlpA) (i_BlOmMRII9bmWVWIFwYK5XdQ));
					LOC8 = (NimStringDesc*)0;
					LOC9 = (NimStringDesc*)0;
					LOC9 = nimIntToStr(((NI) (s_FZtpHAjVRzoXQLsd0ruPvQ)));
					LOC8 = rawNewString(LOC9->Sup.len + 3);
appendString(LOC8, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_2));
appendString(LOC8, LOC9);
appendChar(LOC8, 109);
					write_c4mGyJBvK73pdM22jiweKQ(f0, LOC8);
				}
				LA6: ;
				i_BlOmMRII9bmWVWIFwYK5XdQ += ((NI) 1);
			} LA3: ;
		}
	}
}

N_NIMCALL(void, resetattributes_tFIu39aFSR3N0M64Ynwugng)(FILE* f0) {
	write_c4mGyJBvK73pdM22jiweKQ(f0, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_3));
}

N_NIMCALL(void, setforegroundcolor_Tw7yxMupneOmAicqiYt3NA)(FILE* f0, Foregroundcolor_ez9ah4IgQc0AbdW68acioDg fg0, NIM_BOOL bright0) {
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	gfg_g7w4T3anr20OMlWloNx2tQ = ((NI) (fg0));
	{
		if (!bright0) goto LA3;
		gfg_g7w4T3anr20OMlWloNx2tQ += ((NI) 60);
	}
	LA3: ;
	LOC5 = (NimStringDesc*)0;
	LOC6 = (NimStringDesc*)0;
	LOC6 = nimIntToStr(gfg_g7w4T3anr20OMlWloNx2tQ);
	LOC5 = rawNewString(LOC6->Sup.len + 3);
appendString(LOC5, ((NimStringDesc*) &T_CN3raB9atujkEiPpxYAdlgQ_2));
appendString(LOC5, LOC6);
appendChar(LOC5, 109);
	write_c4mGyJBvK73pdM22jiweKQ(f0, LOC5);
}

N_NIMCALL(NIM_BOOL, isatty_POoHvosCWg3Yl5ieYeLHrg)(FILE* f0) {
	NIM_BOOL result0;
	int LOC1;
	int LOC2;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = getfilehandle_bZ9c2yojtXoDTUpfyl8h8Rg(f0);
	LOC2 = (int)0;
	LOC2 = isatty(LOC1);
	result0 = !((LOC2 == ((NI32) 0)));
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_terminalInit000)(void) {
	gfg_g7w4T3anr20OMlWloNx2tQ = ((NI) 0);
	gbg_dgmeknpHWrtwqMJGQAp9atA = ((NI) 0);
}

NIM_EXTERNC N_NOINLINE(void, stdlib_terminalDatInit000)(void) {
}

