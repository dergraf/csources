/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
typedef struct Intset_PQrmFm4BXFkFSVOUl1ojSg Intset_PQrmFm4BXFkFSVOUl1ojSg;
typedef struct Trunk_ul49aWfv9aes8cutmeltT3gQ Trunk_ul49aWfv9aes8cutmeltT3gQ;
typedef struct TY_9brg1xNurxcus33lU4IE1Dw TY_9brg1xNurxcus33lU4IE1Dw;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct Cellseq_Axo1XVm9aaQueTOldv8le5w Cellseq_Axo1XVm9aaQueTOldv8le5w;
typedef struct Gcheap_1TRH1TZMaVZTnLNcIHuNFQ Gcheap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct Gcstack_7fytPA5bBsob6See21YMRA Gcstack_7fytPA5bBsob6See21YMRA;
typedef struct Memregion_x81NhDv59b8ercDZ9bi85jyg Memregion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct Smallchunk_tXn60W2f8h3jgAYdEmy5NQ Smallchunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct Llchunk_XsENErzHIZV9bhvyJx56wGw Llchunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct Bigchunk_Rv9c70Uhp2TytkX7eH78qEg Bigchunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct Intset_EZObFrE3NC9bIb3YMkY9crZA Intset_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct Avlnode_IaqjtwKhxLEpvDS9bct9blEw Avlnode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct Gcstat_0RwLoVBHZPfUAcLczmfQAg Gcstat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct Cellset_jG87P0AI9aZtss9ccTYBIISQ Cellset_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct Pagedesc_fublkgIY4LG3mT51LU2WHg Pagedesc_fublkgIY4LG3mT51LU2WHg;
typedef struct Basechunk_Sdq7WpT6qAH858F5ZEdG3w Basechunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct Freecell_u6M5LHprqzkn9axr04yg9bGQ Freecell_u6M5LHprqzkn9axr04yg9bGQ;
struct  Intset_PQrmFm4BXFkFSVOUl1ojSg  {
NI counter;
NI max;
Trunk_ul49aWfv9aes8cutmeltT3gQ* head;
TY_9brg1xNurxcus33lU4IE1Dw* data;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_ul49aWfv9aes8cutmeltT3gQ  {
Trunk_ul49aWfv9aes8cutmeltT3gQ* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
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
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  Cellseq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  Intset_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
struct  Memregion_x81NhDv59b8ercDZ9bi85jyg  {
NI minlargeobj;
NI maxlargeobj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freesmallchunks;
Llchunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* freechunkslist;
Intset_EZObFrE3NC9bIb3YMkY9crZA chunkstarts;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* root;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* last;
Avlnode_IaqjtwKhxLEpvDS9bct9blEw* freeavlnodes;
NIM_BOOL locked;
NIM_BOOL blockchunksizeincrease;
NI nextchunksize;
};
struct  Gcstat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
Pagedesc_fublkgIY4LG3mT51LU2WHg* head;
Pagedesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  Gcheap_1TRH1TZMaVZTnLNcIHuNFQ  {
Gcstack_7fytPA5bBsob6See21YMRA* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq_Axo1XVm9aaQueTOldv8le5w zct;
Cellseq_Axo1XVm9aaQueTOldv8le5w decstack;
Cellseq_Axo1XVm9aaQueTOldv8le5w tempstack;
NI recgclock;
Memregion_x81NhDv59b8ercDZ9bi85jyg region;
Gcstat_0RwLoVBHZPfUAcLczmfQAg stat;
Cellset_jG87P0AI9aZtss9ccTYBIISQ marked;
Cellseq_Axo1XVm9aaQueTOldv8le5w additionalroots;
};
struct  Gcstack_7fytPA5bBsob6See21YMRA  {
Gcstack_7fytPA5bBsob6See21YMRA* prev;
Gcstack_7fytPA5bBsob6See21YMRA* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk_tXn60W2f8h3jgAYdEmy5NQ  {
  Basechunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* next;
Smallchunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
Freecell_u6M5LHprqzkn9axr04yg9bGQ* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
Llchunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  Bigchunk_Rv9c70Uhp2TytkX7eH78qEg  {
  Basechunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* next;
Bigchunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NI align;
NF data;
};
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
typedef Avlnode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  Avlnode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc_fublkgIY4LG3mT51LU2WHg  {
Pagedesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  Freecell_u6M5LHprqzkn9axr04yg9bGQ  {
Freecell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zerofield;
};
struct TY_9brg1xNurxcus33lU4IE1Dw {
  TGenericSeq Sup;
  Trunk_ul49aWfv9aes8cutmeltT3gQ* data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
static N_NIMCALL(void, Marker_TY_Vz0pPzxitckVclPPWiz0xw)(void* p, NI op);
static N_NIMCALL(void, Marker_TY_9brg1xNurxcus33lU4IE1Dw)(void* p, NI op);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(void, unsureAsgnRef)(void** dest0, void* src0);
N_NIMCALL(Trunk_ul49aWfv9aes8cutmeltT3gQ*, intsetput_0ZDJhLLWVElSxfwD0RRxbQ)(Intset_PQrmFm4BXFkFSVOUl1ojSg* t0, NI key0);
static N_INLINE(NI, nexttry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets)(NI h0, NI maxhash0);
static N_INLINE(NIM_BOOL, mustrehash_taHuV1HJYdnKkjS6Tm5Tswintsets)(NI length0, NI counter0);
N_NIMCALL(void, intsetenlarge_Ayv9chaeD5Za6gYR3XnnA3A)(Intset_PQrmFm4BXFkFSVOUl1ojSg* t0);
N_NIMCALL(void, intsetrawinsert_I4xwTnLJbJwT2BPkb1SYSA)(Intset_PQrmFm4BXFkFSVOUl1ojSg* t0, TY_9brg1xNurxcus33lU4IE1Dw** data0, Trunk_ul49aWfv9aes8cutmeltT3gQ* desc0);
static N_INLINE(void, asgnRef)(void** dest0, void* src0);
static N_INLINE(void, incref_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, decref_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(Trunk_ul49aWfv9aes8cutmeltT3gQ*, intsetget_IcxbJfpUmsxePO8Fvv2aCg)(Intset_PQrmFm4BXFkFSVOUl1ojSg* t0, NI key0);
N_NIMCALL(void, incl_iUpE9bYmIR0fROyJskQwN8g)(Intset_PQrmFm4BXFkFSVOUl1ojSg* s0, NI key0);
TNimType NTI_ul49aWfv9aes8cutmeltT3gQ;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA;
TNimType NTI_9a8QARi5WsUggNU9bom7kzTQ;
TNimType NTI_Vz0pPzxitckVclPPWiz0xw;
TNimType NTI_9brg1xNurxcus33lU4IE1Dw;
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
TNimType NTI_PQrmFm4BXFkFSVOUl1ojSg;
static N_NIMCALL(void, Marker_TY_Vz0pPzxitckVclPPWiz0xw)(void* p, NI op) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* a;
	NI LOC1;
	a = (Trunk_ul49aWfv9aes8cutmeltT3gQ*)p;
	nimGCvisit((void*)(*a).next, op);
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 8; LOC1++) {
	}
}
static N_NIMCALL(void, Marker_TY_9brg1xNurxcus33lU4IE1Dw)(void* p, NI op) {
	TY_9brg1xNurxcus33lU4IE1Dw* a;
	NI LOC1;
	a = (TY_9brg1xNurxcus33lU4IE1Dw*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

N_NIMCALL(void, initintset_a9a80eJplB17xrdZJ41Baww)(Intset_PQrmFm4BXFkFSVOUl1ojSg* Result) {
	unsureAsgnRef((void**) (&(*Result).data), (TY_9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI_9brg1xNurxcus33lU4IE1Dw), ((NI) 8)));
	(*Result).max = ((NI) 7);
	(*Result).counter = ((NI) 0);
	unsureAsgnRef((void**) (&(*Result).head), NIM_NIL);
}

static N_INLINE(NI, nexttry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets)(NI h0, NI maxhash0) {
	NI result0;
	result0 = (NI)0;
	result0 = (NI)((NI)((NI)(((NI) 5) * h0) + ((NI) 1)) & maxhash0);
	return result0;
}

static N_INLINE(NIM_BOOL, mustrehash_taHuV1HJYdnKkjS6Tm5Tswintsets)(NI length0, NI counter0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = ((NI)(length0 * ((NI) 2)) < (NI)(counter0 * ((NI) 3)));
	if (LOC1) goto LA2;
	LOC1 = ((NI)(length0 - counter0) < ((NI) 4));
	LA2: ;
	result0 = LOC1;
	return result0;
}

static N_INLINE(void, incref_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0) {
	(*c0).refcount = (NI)((NU64)((*c0).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result0;
	result0 = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result0 = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	return result0;
}

static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0) {
	addzct_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c0);
}

static N_INLINE(void, decref_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0) {
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system(c0);
	}
	LA3: ;
}

static N_INLINE(void, asgnRef)(void** dest0, void* src0) {
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* LOC5;
		if (!!((src0 == NIM_NIL))) goto LA3;
		LOC5 = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		LOC5 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src0);
		incref_9cAA5YuQAAC3MVbnGeV86swsystem(LOC5);
	}
	LA3: ;
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* LOC10;
		if (!!(((*dest0) == NIM_NIL))) goto LA8;
		LOC10 = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		LOC10 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest0));
		decref_MV4BBk6J1qu70IbBxwEn4wsystem(LOC10);
	}
	LA8: ;
	(*dest0) = src0;
}

N_NIMCALL(void, intsetrawinsert_I4xwTnLJbJwT2BPkb1SYSA)(Intset_PQrmFm4BXFkFSVOUl1ojSg* t0, TY_9brg1xNurxcus33lU4IE1Dw** data0, Trunk_ul49aWfv9aes8cutmeltT3gQ* desc0) {
	NI h0;
	h0 = (NI)((*desc0).key & (*t0).max);
	{
		while (1) {
			if (!!(((*data0)->data[h0] == NIM_NIL))) goto LA2;
			h0 = nexttry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets(h0, (*t0).max);
		} LA2: ;
	}
	asgnRef((void**) (&(*data0)->data[h0]), desc0);
}

N_NIMCALL(void, intsetenlarge_Ayv9chaeD5Za6gYR3XnnA3A)(Intset_PQrmFm4BXFkFSVOUl1ojSg* t0) {
	TY_9brg1xNurxcus33lU4IE1Dw* n0;
	NI oldmax0;
	TY_9brg1xNurxcus33lU4IE1Dw* LOC8;
	n0 = (TY_9brg1xNurxcus33lU4IE1Dw*)0;
	oldmax0 = (*t0).max;
	(*t0).max = (NI)((NI)((NI)((*t0).max + ((NI) 1)) * ((NI) 2)) - ((NI) 1));
	n0 = (TY_9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI_9brg1xNurxcus33lU4IE1Dw), ((NI) ((NI)((*t0).max + ((NI) 1)))));
	{
		NI i_FTpeAdkn5UsecSaQ2qihDw;
		NI res_JZyFreXHYUPfwzqAnMCxDA;
		i_FTpeAdkn5UsecSaQ2qihDw = (NI)0;
		res_JZyFreXHYUPfwzqAnMCxDA = ((NI) 0);
		{
			while (1) {
				if (!(res_JZyFreXHYUPfwzqAnMCxDA <= oldmax0)) goto LA3;
				i_FTpeAdkn5UsecSaQ2qihDw = res_JZyFreXHYUPfwzqAnMCxDA;
				{
					if (!!(((*t0).data->data[i_FTpeAdkn5UsecSaQ2qihDw] == NIM_NIL))) goto LA6;
					intsetrawinsert_I4xwTnLJbJwT2BPkb1SYSA((&(*t0)), (&n0), (*t0).data->data[i_FTpeAdkn5UsecSaQ2qihDw]);
				}
				LA6: ;
				res_JZyFreXHYUPfwzqAnMCxDA += ((NI) 1);
			} LA3: ;
		}
	}
	LOC8 = (TY_9brg1xNurxcus33lU4IE1Dw*)0;
	LOC8 = (*t0).data;
	unsureAsgnRef((void**) (&(*t0).data), n0);
	n0 = LOC8;
}

N_NIMCALL(Trunk_ul49aWfv9aes8cutmeltT3gQ*, intsetput_0ZDJhLLWVElSxfwD0RRxbQ)(Intset_PQrmFm4BXFkFSVOUl1ojSg* t0, NI key0) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* result0;
	NI h0;
{	result0 = (Trunk_ul49aWfv9aes8cutmeltT3gQ*)0;
	h0 = (NI)(key0 & (*t0).max);
	{
		while (1) {
			if (!!(((*t0).data->data[h0] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t0).data->data[h0]).key == key0)) goto LA5;
				result0 = (*t0).data->data[h0];
				goto BeforeRet;
			}
			LA5: ;
			h0 = nexttry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets(h0, (*t0).max);
		} LA2: ;
	}
	{
		NIM_BOOL LOC9;
		LOC9 = (NIM_BOOL)0;
		LOC9 = mustrehash_taHuV1HJYdnKkjS6Tm5Tswintsets((NI)((*t0).max + ((NI) 1)), (*t0).counter);
		if (!LOC9) goto LA10;
		intsetenlarge_Ayv9chaeD5Za6gYR3XnnA3A(t0);
	}
	LA10: ;
	(*t0).counter += ((NI) 1);
	h0 = (NI)(key0 & (*t0).max);
	{
		while (1) {
			if (!!(((*t0).data->data[h0] == NIM_NIL))) goto LA13;
			h0 = nexttry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets(h0, (*t0).max);
		} LA13: ;
	}
	result0 = (Trunk_ul49aWfv9aes8cutmeltT3gQ*) newObj((&NTI_Vz0pPzxitckVclPPWiz0xw), sizeof(Trunk_ul49aWfv9aes8cutmeltT3gQ));
	asgnRef((void**) (&(*result0).next), (*t0).head);
	(*result0).key = key0;
	unsureAsgnRef((void**) (&(*t0).head), result0);
	asgnRef((void**) (&(*t0).data->data[h0]), result0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, incl_iUpE9bYmIR0fROyJskQwN8g)(Intset_PQrmFm4BXFkFSVOUl1ojSg* s0, NI key0) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* t0;
	NI u0;
	t0 = intsetput_0ZDJhLLWVElSxfwD0RRxbQ(s0, (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
	u0 = (NI)(key0 & ((NI) 511));
	(*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u0)) & ((NI) 63)))))));
}

N_NIMCALL(Trunk_ul49aWfv9aes8cutmeltT3gQ*, intsetget_IcxbJfpUmsxePO8Fvv2aCg)(Intset_PQrmFm4BXFkFSVOUl1ojSg* t0, NI key0) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* result0;
	NI h0;
{	result0 = (Trunk_ul49aWfv9aes8cutmeltT3gQ*)0;
	h0 = (NI)(key0 & (*t0).max);
	{
		while (1) {
			if (!!(((*t0).data->data[h0] == NIM_NIL))) goto LA2;
			{
				if (!((*(*t0).data->data[h0]).key == key0)) goto LA5;
				result0 = (*t0).data->data[h0];
				goto BeforeRet;
			}
			LA5: ;
			h0 = nexttry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets(h0, (*t0).max);
		} LA2: ;
	}
	result0 = NIM_NIL;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, containsorincl_B0EhVMrh5BBBZOOtYjAvVg)(Intset_PQrmFm4BXFkFSVOUl1ojSg* s0, NI key0) {
	NIM_BOOL result0;
	Trunk_ul49aWfv9aes8cutmeltT3gQ* t0;
	result0 = (NIM_BOOL)0;
	t0 = intsetget_IcxbJfpUmsxePO8Fvv2aCg((&(*s0)), (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
	{
		NI u0;
		if (!!((t0 == NIM_NIL))) goto LA3;
		u0 = (NI)(key0 & ((NI) 511));
		result0 = !(((NI)((*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u0)) & ((NI) 63))))))) == ((NI) 0)));
		{
			if (!!(result0)) goto LA7;
			(*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] | (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u0)) & ((NI) 63)))))));
		}
		LA7: ;
	}
	goto LA1;
	LA3: ;
	{
		incl_iUpE9bYmIR0fROyJskQwN8g(s0, key0);
		result0 = NIM_FALSE;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, contains_sYBLNwnPJlAFi0nfWU79awg)(Intset_PQrmFm4BXFkFSVOUl1ojSg* s0, NI key0) {
	NIM_BOOL result0;
	Trunk_ul49aWfv9aes8cutmeltT3gQ* t0;
	result0 = (NIM_BOOL)0;
	t0 = intsetget_IcxbJfpUmsxePO8Fvv2aCg(s0, (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
	{
		NI u0;
		if (!!((t0 == NIM_NIL))) goto LA3;
		u0 = (NI)(key0 & ((NI) 511));
		result0 = !(((NI)((*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u0)) & ((NI) 63))))))) == ((NI) 0)));
	}
	goto LA1;
	LA3: ;
	{
		result0 = NIM_FALSE;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(void, assign_a2uuNOWD29cFDODAp4nip0A)(Intset_PQrmFm4BXFkFSVOUl1ojSg* dest0, Intset_PQrmFm4BXFkFSVOUl1ojSg* src0) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* it0;
	(*dest0).counter = (*src0).counter;
	(*dest0).max = (*src0).max;
	unsureAsgnRef((void**) (&(*dest0).data), (TY_9brg1xNurxcus33lU4IE1Dw*) newSeq((&NTI_9brg1xNurxcus33lU4IE1Dw), ((NI) (((*src0).data ? (*src0).data->Sup.len : 0)))));
	it0 = (*src0).head;
	{
		while (1) {
			NI h0;
			Trunk_ul49aWfv9aes8cutmeltT3gQ* n0;
			if (!!((it0 == NIM_NIL))) goto LA2;
			h0 = (NI)((*it0).key & (*dest0).max);
			{
				while (1) {
					if (!!(((*dest0).data->data[h0] == NIM_NIL))) goto LA4;
					h0 = nexttry_Tx9c0j9b5WTbCx0lfW5eXjQgintsets(h0, (*dest0).max);
				} LA4: ;
			}
			n0 = (Trunk_ul49aWfv9aes8cutmeltT3gQ*)0;
			n0 = (Trunk_ul49aWfv9aes8cutmeltT3gQ*) newObj((&NTI_Vz0pPzxitckVclPPWiz0xw), sizeof(Trunk_ul49aWfv9aes8cutmeltT3gQ));
			asgnRef((void**) (&(*n0).next), (*dest0).head);
			(*n0).key = (*it0).key;
			memcpy((void*)(*n0).bits, (NIM_CONST void*)(*it0).bits, sizeof(TY_9a8QARi5WsUggNU9bom7kzTQ));
			unsureAsgnRef((void**) (&(*dest0).head), n0);
			asgnRef((void**) (&(*dest0).data->data[h0]), n0);
			it0 = (*it0).next;
		} LA2: ;
	}
}

N_NIMCALL(void, excl_iUpE9bYmIR0fROyJskQwN8g_2)(Intset_PQrmFm4BXFkFSVOUl1ojSg* s0, NI key0) {
	Trunk_ul49aWfv9aes8cutmeltT3gQ* t0;
	t0 = intsetget_IcxbJfpUmsxePO8Fvv2aCg((&(*s0)), (NI)((NU64)(key0) >> (NU64)(((NI) 9))));
	{
		NI u0;
		if (!!((t0 == NIM_NIL))) goto LA3;
		u0 = (NI)(key0 & ((NI) 511));
		(*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] = (NI)((*t0).bits[((NI)((NU64)(((NI) (u0))) >> (NU64)(((NI) 6))))- 0] & (NI)((NU64) ~((NI)((NU64)(((NI) 1)) << (NU64)(((NI) ((NI)(((NI) (u0)) & ((NI) 63)))))))));
	}
	LA3: ;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_intsetsDatInit000)(void) {
static TNimNode* T_ulJ2WYumkJwZ9b5Ewe7sCpg_2[3];
static TNimNode* T_ulJ2WYumkJwZ9b5Ewe7sCpg_3[4];
static TNimNode T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[9];
NTI_ul49aWfv9aes8cutmeltT3gQ.size = sizeof(Trunk_ul49aWfv9aes8cutmeltT3gQ);
NTI_ul49aWfv9aes8cutmeltT3gQ.kind = 18;
NTI_ul49aWfv9aes8cutmeltT3gQ.base = 0;
T_ulJ2WYumkJwZ9b5Ewe7sCpg_2[0] = &T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1];
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].kind = 1;
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].offset = offsetof(Trunk_ul49aWfv9aes8cutmeltT3gQ, next);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].typ = (&NTI_Vz0pPzxitckVclPPWiz0xw);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[1].name = "next";
T_ulJ2WYumkJwZ9b5Ewe7sCpg_2[1] = &T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2];
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].kind = 1;
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].offset = offsetof(Trunk_ul49aWfv9aes8cutmeltT3gQ, key);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[2].name = "key";
T_ulJ2WYumkJwZ9b5Ewe7sCpg_2[2] = &T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3];
NTI_9a8QARi5WsUggNU9bom7kzTQ.size = sizeof(TY_9a8QARi5WsUggNU9bom7kzTQ);
NTI_9a8QARi5WsUggNU9bom7kzTQ.kind = 16;
NTI_9a8QARi5WsUggNU9bom7kzTQ.base = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
NTI_9a8QARi5WsUggNU9bom7kzTQ.flags = 3;
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].kind = 1;
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].offset = offsetof(Trunk_ul49aWfv9aes8cutmeltT3gQ, bits);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].typ = (&NTI_9a8QARi5WsUggNU9bom7kzTQ);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[3].name = "bits";
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].len = 3; T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].kind = 2; T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0].sons = &T_ulJ2WYumkJwZ9b5Ewe7sCpg_2[0];
NTI_ul49aWfv9aes8cutmeltT3gQ.node = &T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[0];
NTI_Vz0pPzxitckVclPPWiz0xw.size = sizeof(Trunk_ul49aWfv9aes8cutmeltT3gQ*);
NTI_Vz0pPzxitckVclPPWiz0xw.kind = 22;
NTI_Vz0pPzxitckVclPPWiz0xw.base = (&NTI_ul49aWfv9aes8cutmeltT3gQ);
NTI_Vz0pPzxitckVclPPWiz0xw.marker = Marker_TY_Vz0pPzxitckVclPPWiz0xw;
NTI_9brg1xNurxcus33lU4IE1Dw.size = sizeof(TY_9brg1xNurxcus33lU4IE1Dw*);
NTI_9brg1xNurxcus33lU4IE1Dw.kind = 24;
NTI_9brg1xNurxcus33lU4IE1Dw.base = (&NTI_Vz0pPzxitckVclPPWiz0xw);
NTI_9brg1xNurxcus33lU4IE1Dw.flags = 2;
NTI_9brg1xNurxcus33lU4IE1Dw.marker = Marker_TY_9brg1xNurxcus33lU4IE1Dw;
NTI_PQrmFm4BXFkFSVOUl1ojSg.size = sizeof(Intset_PQrmFm4BXFkFSVOUl1ojSg);
NTI_PQrmFm4BXFkFSVOUl1ojSg.kind = 18;
NTI_PQrmFm4BXFkFSVOUl1ojSg.base = 0;
NTI_PQrmFm4BXFkFSVOUl1ojSg.flags = 2;
T_ulJ2WYumkJwZ9b5Ewe7sCpg_3[0] = &T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5];
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].kind = 1;
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].offset = offsetof(Intset_PQrmFm4BXFkFSVOUl1ojSg, counter);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[5].name = "counter";
T_ulJ2WYumkJwZ9b5Ewe7sCpg_3[1] = &T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6];
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].kind = 1;
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].offset = offsetof(Intset_PQrmFm4BXFkFSVOUl1ojSg, max);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[6].name = "max";
T_ulJ2WYumkJwZ9b5Ewe7sCpg_3[2] = &T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7];
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].kind = 1;
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].offset = offsetof(Intset_PQrmFm4BXFkFSVOUl1ojSg, head);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].typ = (&NTI_Vz0pPzxitckVclPPWiz0xw);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[7].name = "head";
T_ulJ2WYumkJwZ9b5Ewe7sCpg_3[3] = &T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8];
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].kind = 1;
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].offset = offsetof(Intset_PQrmFm4BXFkFSVOUl1ojSg, data);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].typ = (&NTI_9brg1xNurxcus33lU4IE1Dw);
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[8].name = "data";
T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].len = 4; T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].kind = 2; T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4].sons = &T_ulJ2WYumkJwZ9b5Ewe7sCpg_3[0];
NTI_PQrmFm4BXFkFSVOUl1ojSg.node = &T_ulJ2WYumkJwZ9b5Ewe7sCpg_0[4];
}

