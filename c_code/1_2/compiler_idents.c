/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
typedef struct IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct Tident_4umxGerWTHGPwUms7Yqu3g Tident_4umxGerWTHGPwUms7Yqu3g;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Tidobj_raN9cHVgzmvaXisezY9aGg9cg Tidobj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
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
typedef Tident_4umxGerWTHGPwUms7Yqu3g* TY_CBfZt49asUfAsBVM7a3Rc9cw[8192];
struct  IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw  {
TY_CBfZt49asUfAsBVM7a3Rc9cw buckets;
NI wordcounter;
Tident_4umxGerWTHGPwUms7Yqu3g* idanon;
Tident_4umxGerWTHGPwUms7Yqu3g* iddelegator;
Tident_4umxGerWTHGPwUms7Yqu3g* emptyident;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tident_4umxGerWTHGPwUms7Yqu3g  {
  Tidobj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
Tident_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
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
typedef NU16 Tspecialword_Rthr3K8pFyGXVzi3GvdIZA;
typedef NimStringDesc* TY_P8Cd4JyxAQgoTKxTI9bscQw[265];
typedef NU16 Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw;
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
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
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
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
static N_NIMCALL(void, Marker_TY_1nh2T19a2BrGbBBQRS39bxRw)(void* p, NI op);
static N_NIMCALL(void, Marker_TY_lnkYNZP9asc88UfiEGjLrbA)(void* p, NI op);
static N_NIMCALL(void, T_L3r6bVdeFMiI9cwmLpWIeKw_4)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerproc0);
static N_NIMCALL(void, Marker_TY_GFuL0q6Yj4iJze0S9cdD9avg)(void* p, NI op);
N_NIMCALL(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw*, newidentcache_9basvGvZH4FwEO4MVbYyP9aA)(void);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(Tident_4umxGerWTHGPwUms7Yqu3g*, getident_Y4Yr5rKoaxkzPcN8rPP9bWA)(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw* self0, NimStringDesc* identifier0);
N_NIMCALL(Tident_4umxGerWTHGPwUms7Yqu3g*, getident_62GxCdwHvMBvMwCLnw1wyg)(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw* self0, NCSTRING identifier0, NI length0, NI h0);
N_NIMCALL(NI, cmpexact_119akYztO9b7SG3fyF8j9bFgQ)(NCSTRING a0, NCSTRING b0, NI blen0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NIMCALL(NI, cmpignorestyle_119akYztO9b7SG3fyF8j9bFgQ_2)(NCSTRING a0, NCSTRING b0, NI blen0);
static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_jEsY0iAEfTnaxdnZAwGvIwidents)(NCSTRING cs0, NI i0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NI, hashignorestyle_uBstFm5SYVQeOL3j9c9bc58A_2)(NimStringDesc* x0);
N_NIMCALL(Tident_4umxGerWTHGPwUms7Yqu3g*, getident_BlDQd0MZ58qhFoyY3ZHQIA)(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw* self0, NimStringDesc* identifier0, NI h0);
IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw* legacy_AHP7NxhjlnSC9cf2jfY1fFg;
TNimType NTI_TzLHS09bRH9a0TYLs39cqcNaw;
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA;
TNimType NTI_raN9cHVgzmvaXisezY9aGg9cg;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA;
TNimType NTI_4umxGerWTHGPwUms7Yqu3g;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg;
TNimType NTI_1nh2T19a2BrGbBBQRS39bxRw;
TNimType NTI_CBfZt49asUfAsBVM7a3Rc9cw;
TNimType NTI_lnkYNZP9asc88UfiEGjLrbA;
TNimType NTI_GFuL0q6Yj4iJze0S9cdD9avg;
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(T_L3r6bVdeFMiI9cwmLpWIeKw_5, ":anonymous", 10);
STRING_LITERAL(T_L3r6bVdeFMiI9cwmLpWIeKw_6, ":delegator", 10);
STRING_LITERAL(T_L3r6bVdeFMiI9cwmLpWIeKw_7, "", 0);
extern NIM_CONST TY_P8Cd4JyxAQgoTKxTI9bscQw specialwords_jS3I1dUcvbZAEuApBSUHng;
static N_NIMCALL(void, Marker_TY_1nh2T19a2BrGbBBQRS39bxRw)(void* p, NI op) {
	Tident_4umxGerWTHGPwUms7Yqu3g* a;
	a = (Tident_4umxGerWTHGPwUms7Yqu3g*)p;
	nimGCvisit((void*)(*a).s, op);
	nimGCvisit((void*)(*a).next, op);
}
static N_NIMCALL(void, Marker_TY_lnkYNZP9asc88UfiEGjLrbA)(void* p, NI op) {
	IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw* a;
	NI LOC1;
	a = (IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw*)p;
	LOC1 = (NI)0;
	for (LOC1 = 0; LOC1 < 8192; LOC1++) {
	nimGCvisit((void*)(*a).buckets[LOC1], op);
	}
	nimGCvisit((void*)(*a).idanon, op);
	nimGCvisit((void*)(*a).iddelegator, op);
	nimGCvisit((void*)(*a).emptyident, op);
}
static N_NIMCALL(void, T_L3r6bVdeFMiI9cwmLpWIeKw_4)(void) {
	nimGCvisit((void*)legacy_AHP7NxhjlnSC9cf2jfY1fFg, 0);
}
static N_NIMCALL(void, Marker_TY_GFuL0q6Yj4iJze0S9cdD9avg)(void* p, NI op) {
	Tidobj_raN9cHVgzmvaXisezY9aGg9cg* a;
	a = (Tidobj_raN9cHVgzmvaXisezY9aGg9cg*)p;
}

N_NIMCALL(NI, cmpexact_119akYztO9b7SG3fyF8j9bFgQ)(NCSTRING a0, NCSTRING b0, NI blen0) {
	NI result0;
	NI i0;
	NI j0;
	result0 = (NI)0;
	i0 = ((NI) 0);
	j0 = ((NI) 0);
	result0 = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa0;
			NIM_CHAR bb0;
			if (!(j0 < blen0)) goto LA2;
			aa0 = a0[i0];
			bb0 = b0[j0];
			result0 = (NI)(((NI) (((NU8)(aa0)))) - ((NI) (((NU8)(bb0)))));
			{
				NIM_BOOL LOC5;
				LOC5 = (NIM_BOOL)0;
				LOC5 = !((result0 == ((NI) 0)));
				if (LOC5) goto LA6;
				LOC5 = ((NU8)(aa0) == (NU8)(0));
				LA6: ;
				if (!LOC5) goto LA7;
				goto LA1;
			}
			LA7: ;
			i0 += ((NI) 1);
			j0 += ((NI) 1);
		} LA2: ;
	} LA1: ;
	{
		if (!(result0 == ((NI) 0))) goto LA11;
		{
			if (!!(((NU8)(a0[i0]) == (NU8)(0)))) goto LA15;
			result0 = ((NI) 1);
		}
		LA15: ;
	}
	LA11: ;
	return result0;
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

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0;
		if (!!((src0 == NIM_NIL))) goto LA3;
		c0 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src0);
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0;
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		c0 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest0));
		{
			(*c0).refcount -= ((NI) 8);
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(NIM_BOOL, ismagicidentseparatorrune_jEsY0iAEfTnaxdnZAwGvIwidents)(NCSTRING cs0, NI i0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	NIM_BOOL LOC2;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC2 = (NIM_BOOL)0;
	LOC2 = ((NU8)(cs0[i0]) == (NU8)(226));
	if (!(LOC2)) goto LA3;
	LOC2 = ((NU8)(cs0[(NI)(i0 + ((NI) 1))]) == (NU8)(128));
	LA3: ;
	LOC1 = LOC2;
	if (!(LOC1)) goto LA4;
	LOC1 = ((NU8)(cs0[(NI)(i0 + ((NI) 2))]) == (NU8)(147));
	LA4: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(NI, cmpignorestyle_119akYztO9b7SG3fyF8j9bFgQ_2)(NCSTRING a0, NCSTRING b0, NI blen0) {
	NI result0;
	NI i0;
	NI j0;
{	result0 = (NI)0;
	{
		if (!!(((NU8)(a0[((NI) 0)]) == (NU8)(b0[((NI) 0)])))) goto LA3;
		result0 = ((NI) 1);
		goto BeforeRet;
	}
	LA3: ;
	i0 = ((NI) 0);
	j0 = ((NI) 0);
	result0 = ((NI) 1);
	{
		while (1) {
			NIM_CHAR aa0;
			NIM_CHAR bb0;
			if (!(j0 < blen0)) goto LA6;
			{
				while (1) {
					if (!((NU8)(a0[i0]) == (NU8)(95))) goto LA8;
					i0 += ((NI) 1);
				} LA8: ;
			}
			{
				while (1) {
					if (!((NU8)(b0[j0]) == (NU8)(95))) goto LA10;
					j0 += ((NI) 1);
				} LA10: ;
			}
			{
				while (1) {
					NIM_BOOL LOC13;
					LOC13 = (NIM_BOOL)0;
					LOC13 = ismagicidentseparatorrune_jEsY0iAEfTnaxdnZAwGvIwidents(a0, i0);
					if (!LOC13) goto LA12;
					i0 += ((NI) 3);
				} LA12: ;
			}
			{
				while (1) {
					NIM_BOOL LOC16;
					LOC16 = (NIM_BOOL)0;
					LOC16 = ismagicidentseparatorrune_jEsY0iAEfTnaxdnZAwGvIwidents(b0, j0);
					if (!LOC16) goto LA15;
					j0 += ((NI) 3);
				} LA15: ;
			}
			aa0 = a0[i0];
			bb0 = b0[j0];
			{
				NIM_BOOL LOC19;
				LOC19 = (NIM_BOOL)0;
				LOC19 = ((NU8)(65) <= (NU8)(aa0));
				if (!(LOC19)) goto LA20;
				LOC19 = ((NU8)(aa0) <= (NU8)(90));
				LA20: ;
				if (!LOC19) goto LA21;
				aa0 = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(aa0)))) + ((NI) 32))))));
			}
			LA21: ;
			{
				NIM_BOOL LOC25;
				LOC25 = (NIM_BOOL)0;
				LOC25 = ((NU8)(65) <= (NU8)(bb0));
				if (!(LOC25)) goto LA26;
				LOC25 = ((NU8)(bb0) <= (NU8)(90));
				LA26: ;
				if (!LOC25) goto LA27;
				bb0 = ((NIM_CHAR) (((NI) ((NI)(((NI) (((NU8)(bb0)))) + ((NI) 32))))));
			}
			LA27: ;
			result0 = (NI)(((NI) (((NU8)(aa0)))) - ((NI) (((NU8)(bb0)))));
			{
				NIM_BOOL LOC31;
				LOC31 = (NIM_BOOL)0;
				LOC31 = !((result0 == ((NI) 0)));
				if (LOC31) goto LA32;
				LOC31 = ((NU8)(aa0) == (NU8)(0));
				LA32: ;
				if (!LOC31) goto LA33;
				goto LA5;
			}
			LA33: ;
			i0 += ((NI) 1);
			j0 += ((NI) 1);
		} LA6: ;
	} LA5: ;
	{
		if (!(result0 == ((NI) 0))) goto LA37;
		{
			if (!!(((NU8)(a0[i0]) == (NU8)(0)))) goto LA41;
			result0 = ((NI) 1);
		}
		LA41: ;
	}
	LA37: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tident_4umxGerWTHGPwUms7Yqu3g*, getident_62GxCdwHvMBvMwCLnw1wyg)(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw* self0, NCSTRING identifier0, NI length0, NI h0) {
	Tident_4umxGerWTHGPwUms7Yqu3g* result0;
	NI idx0;
	Tident_4umxGerWTHGPwUms7Yqu3g* last0;
	NI id0;
{	result0 = (Tident_4umxGerWTHGPwUms7Yqu3g*)0;
	idx0 = (NI)(h0 & ((NI) 8191));
	result0 = (*self0).buckets[(idx0)- 0];
	last0 = NIM_NIL;
	id0 = ((NI) 0);
	{
		while (1) {
			if (!!((result0 == NIM_NIL))) goto LA2;
			{
				NI LOC5;
				LOC5 = (NI)0;
				LOC5 = cmpexact_119akYztO9b7SG3fyF8j9bFgQ((*result0).s->data, identifier0, length0);
				if (!(LOC5 == ((NI) 0))) goto LA6;
				{
					if (!!((last0 == NIM_NIL))) goto LA10;
					asgnRefNoCycle((void**) (&(*last0).next), (*result0).next);
					asgnRefNoCycle((void**) (&(*result0).next), (*self0).buckets[(idx0)- 0]);
					asgnRefNoCycle((void**) (&(*self0).buckets[(idx0)- 0]), result0);
				}
				LA10: ;
				goto BeforeRet;
			}
			goto LA3;
			LA6: ;
			{
				NI LOC13;
				LOC13 = (NI)0;
				LOC13 = cmpignorestyle_119akYztO9b7SG3fyF8j9bFgQ_2((*result0).s->data, identifier0, length0);
				if (!(LOC13 == ((NI) 0))) goto LA14;
				id0 = (*result0).Sup.id;
			}
			goto LA3;
			LA14: ;
			LA3: ;
			last0 = result0;
			result0 = (*result0).next;
		} LA2: ;
	}
	result0 = (Tident_4umxGerWTHGPwUms7Yqu3g*) newObj((&NTI_1nh2T19a2BrGbBBQRS39bxRw), sizeof(Tident_4umxGerWTHGPwUms7Yqu3g));
	(*result0).Sup.Sup.m_type = (&NTI_4umxGerWTHGPwUms7Yqu3g);
	(*result0).h = h0;
	asgnRefNoCycle((void**) (&(*result0).s), mnewString(((NI) (length0))));
	{
		NI i_yLK0qWeSfXTJHMxV3Pw2kw;
		NI HEX3Atmp_6vu0tHH2HyLyTrLOiTwGMg;
		NI res_qrJ1psGNQBBXzQMviMk7NA;
		i_yLK0qWeSfXTJHMxV3Pw2kw = (NI)0;
		HEX3Atmp_6vu0tHH2HyLyTrLOiTwGMg = (NI)0;
		HEX3Atmp_6vu0tHH2HyLyTrLOiTwGMg = (NI)(length0 - ((NI) 1));
		res_qrJ1psGNQBBXzQMviMk7NA = ((NI) 0);
		{
			while (1) {
				if (!(res_qrJ1psGNQBBXzQMviMk7NA <= HEX3Atmp_6vu0tHH2HyLyTrLOiTwGMg)) goto LA18;
				i_yLK0qWeSfXTJHMxV3Pw2kw = res_qrJ1psGNQBBXzQMviMk7NA;
				(*result0).s->data[i_yLK0qWeSfXTJHMxV3Pw2kw] = identifier0[i_yLK0qWeSfXTJHMxV3Pw2kw];
				res_qrJ1psGNQBBXzQMviMk7NA += ((NI) 1);
			} LA18: ;
		}
	}
	asgnRefNoCycle((void**) (&(*result0).next), (*self0).buckets[(idx0)- 0]);
	asgnRefNoCycle((void**) (&(*self0).buckets[(idx0)- 0]), result0);
	{
		if (!(id0 == ((NI) 0))) goto LA21;
		(*self0).wordcounter += ((NI) 1);
		(*result0).Sup.id = ((NI64)-((*self0).wordcounter));
	}
	goto LA19;
	LA21: ;
	{
		(*result0).Sup.id = id0;
	}
	LA19: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tident_4umxGerWTHGPwUms7Yqu3g*, getident_Y4Yr5rKoaxkzPcN8rPP9bWA)(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw* self0, NimStringDesc* identifier0) {
	Tident_4umxGerWTHGPwUms7Yqu3g* result0;
	NI LOC1;
	result0 = (Tident_4umxGerWTHGPwUms7Yqu3g*)0;
	LOC1 = (NI)0;
	LOC1 = hashignorestyle_uBstFm5SYVQeOL3j9c9bc58A_2(identifier0);
	result0 = getident_62GxCdwHvMBvMwCLnw1wyg(self0, identifier0->data, (identifier0 ? identifier0->Sup.len : 0), LOC1);
	return result0;
}

N_NIMCALL(Tident_4umxGerWTHGPwUms7Yqu3g*, getident_BlDQd0MZ58qhFoyY3ZHQIA)(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw* self0, NimStringDesc* identifier0, NI h0) {
	Tident_4umxGerWTHGPwUms7Yqu3g* result0;
	result0 = (Tident_4umxGerWTHGPwUms7Yqu3g*)0;
	result0 = getident_62GxCdwHvMBvMwCLnw1wyg(self0, identifier0->data, (identifier0 ? identifier0->Sup.len : 0), h0);
	return result0;
}

N_NIMCALL(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw*, newidentcache_9basvGvZH4FwEO4MVbYyP9aA)(void) {
	IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw* result0;
	result0 = (IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw*)0;
	{
		IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw* LOC5;
		if (!(legacy_AHP7NxhjlnSC9cf2jfY1fFg == 0)) goto LA3;
		LOC5 = (IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw*)0;
		LOC5 = (IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw*) newObj((&NTI_lnkYNZP9asc88UfiEGjLrbA), sizeof(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw));
		result0 = LOC5;
		asgnRefNoCycle((void**) (&(*result0).idanon), getident_Y4Yr5rKoaxkzPcN8rPP9bWA(result0, ((NimStringDesc*) &T_L3r6bVdeFMiI9cwmLpWIeKw_5)));
		(*result0).wordcounter = ((NI) 1);
		asgnRefNoCycle((void**) (&(*result0).iddelegator), getident_Y4Yr5rKoaxkzPcN8rPP9bWA(result0, ((NimStringDesc*) &T_L3r6bVdeFMiI9cwmLpWIeKw_6)));
		asgnRefNoCycle((void**) (&(*result0).emptyident), getident_Y4Yr5rKoaxkzPcN8rPP9bWA(result0, ((NimStringDesc*) &T_L3r6bVdeFMiI9cwmLpWIeKw_7)));
		{
			Tspecialword_Rthr3K8pFyGXVzi3GvdIZA s_SjTZPEyhvCL9cCjHC3Rmoyg;
			NI res_sFqAsVdLrMnuljqVbi9adOg;
			s_SjTZPEyhvCL9cCjHC3Rmoyg = (Tspecialword_Rthr3K8pFyGXVzi3GvdIZA)0;
			res_sFqAsVdLrMnuljqVbi9adOg = ((NI) 1);
			{
				while (1) {
					NI LOC9;
					Tident_4umxGerWTHGPwUms7Yqu3g* LOC10;
					if (!(res_sFqAsVdLrMnuljqVbi9adOg <= ((NI) 264))) goto LA8;
					s_SjTZPEyhvCL9cCjHC3Rmoyg = ((Tspecialword_Rthr3K8pFyGXVzi3GvdIZA) (res_sFqAsVdLrMnuljqVbi9adOg));
					LOC9 = (NI)0;
					LOC9 = hashignorestyle_uBstFm5SYVQeOL3j9c9bc58A_2(specialwords_jS3I1dUcvbZAEuApBSUHng[(s_SjTZPEyhvCL9cCjHC3Rmoyg)- 0]);
					LOC10 = (Tident_4umxGerWTHGPwUms7Yqu3g*)0;
					LOC10 = getident_BlDQd0MZ58qhFoyY3ZHQIA(result0, specialwords_jS3I1dUcvbZAEuApBSUHng[(s_SjTZPEyhvCL9cCjHC3Rmoyg)- 0], LOC9);
					(*LOC10).Sup.id = ((NI) (s_SjTZPEyhvCL9cCjHC3Rmoyg));
					res_sFqAsVdLrMnuljqVbi9adOg += ((NI) 1);
				} LA8: ;
			}
		}
		asgnRefNoCycle((void**) (&legacy_AHP7NxhjlnSC9cf2jfY1fFg), result0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = legacy_AHP7NxhjlnSC9cf2jfY1fFg;
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tident_4umxGerWTHGPwUms7Yqu3g*, getident_oH8GBf4tG3b1F5BIuNPwtA)(NimStringDesc* identifier0) {
	Tident_4umxGerWTHGPwUms7Yqu3g* result0;
	result0 = (Tident_4umxGerWTHGPwUms7Yqu3g*)0;
	{
		IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw* LOC5;
		if (!(legacy_AHP7NxhjlnSC9cf2jfY1fFg == 0)) goto LA3;
		LOC5 = (IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw*)0;
		LOC5 = newidentcache_9basvGvZH4FwEO4MVbYyP9aA();
	}
	LA3: ;
	result0 = getident_Y4Yr5rKoaxkzPcN8rPP9bWA(legacy_AHP7NxhjlnSC9cf2jfY1fFg, identifier0);
	return result0;
}

N_NIMCALL(Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw, whichkeyword_WhYAAh6vF1PoyH6Hsspu4Q)(Tident_4umxGerWTHGPwUms7Yqu3g* id0) {
	Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw result0;
	result0 = (Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw)0;
	{
		if (!((*id0).Sup.id < ((NI) 0))) goto LA3;
		result0 = ((Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw) ((*id0).Sup.id));
	}
	LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_identsInit000)(void) {
nimRegisterGlobalMarker(T_L3r6bVdeFMiI9cwmLpWIeKw_4);
}

NIM_EXTERNC N_NOINLINE(void, compiler_identsDatInit000)(void) {
static TNimNode* T_L3r6bVdeFMiI9cwmLpWIeKw_2[5];
static TNimNode* T_L3r6bVdeFMiI9cwmLpWIeKw_3[3];
static TNimNode T_L3r6bVdeFMiI9cwmLpWIeKw_0[11];
NTI_TzLHS09bRH9a0TYLs39cqcNaw.size = sizeof(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw);
NTI_TzLHS09bRH9a0TYLs39cqcNaw.kind = 18;
NTI_TzLHS09bRH9a0TYLs39cqcNaw.base = 0;
NTI_TzLHS09bRH9a0TYLs39cqcNaw.flags = 2;
T_L3r6bVdeFMiI9cwmLpWIeKw_2[0] = &T_L3r6bVdeFMiI9cwmLpWIeKw_0[1];
NTI_raN9cHVgzmvaXisezY9aGg9cg.size = sizeof(Tidobj_raN9cHVgzmvaXisezY9aGg9cg);
NTI_raN9cHVgzmvaXisezY9aGg9cg.kind = 17;
NTI_raN9cHVgzmvaXisezY9aGg9cg.base = (&NTI_13RNkKqUOX1TtorOUlKtqA);
NTI_raN9cHVgzmvaXisezY9aGg9cg.flags = 1;
T_L3r6bVdeFMiI9cwmLpWIeKw_0[2].kind = 1;
T_L3r6bVdeFMiI9cwmLpWIeKw_0[2].offset = offsetof(Tidobj_raN9cHVgzmvaXisezY9aGg9cg, id);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[2].name = "id";
NTI_raN9cHVgzmvaXisezY9aGg9cg.node = &T_L3r6bVdeFMiI9cwmLpWIeKw_0[2];
NTI_4umxGerWTHGPwUms7Yqu3g.size = sizeof(Tident_4umxGerWTHGPwUms7Yqu3g);
NTI_4umxGerWTHGPwUms7Yqu3g.kind = 17;
NTI_4umxGerWTHGPwUms7Yqu3g.base = (&NTI_raN9cHVgzmvaXisezY9aGg9cg);
NTI_4umxGerWTHGPwUms7Yqu3g.flags = 2;
T_L3r6bVdeFMiI9cwmLpWIeKw_3[0] = &T_L3r6bVdeFMiI9cwmLpWIeKw_0[4];
T_L3r6bVdeFMiI9cwmLpWIeKw_0[4].kind = 1;
T_L3r6bVdeFMiI9cwmLpWIeKw_0[4].offset = offsetof(Tident_4umxGerWTHGPwUms7Yqu3g, s);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[4].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[4].name = "s";
T_L3r6bVdeFMiI9cwmLpWIeKw_3[1] = &T_L3r6bVdeFMiI9cwmLpWIeKw_0[5];
T_L3r6bVdeFMiI9cwmLpWIeKw_0[5].kind = 1;
T_L3r6bVdeFMiI9cwmLpWIeKw_0[5].offset = offsetof(Tident_4umxGerWTHGPwUms7Yqu3g, next);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[5].typ = (&NTI_1nh2T19a2BrGbBBQRS39bxRw);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[5].name = "next";
T_L3r6bVdeFMiI9cwmLpWIeKw_3[2] = &T_L3r6bVdeFMiI9cwmLpWIeKw_0[6];
T_L3r6bVdeFMiI9cwmLpWIeKw_0[6].kind = 1;
T_L3r6bVdeFMiI9cwmLpWIeKw_0[6].offset = offsetof(Tident_4umxGerWTHGPwUms7Yqu3g, h);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[6].name = "h";
T_L3r6bVdeFMiI9cwmLpWIeKw_0[3].len = 3; T_L3r6bVdeFMiI9cwmLpWIeKw_0[3].kind = 2; T_L3r6bVdeFMiI9cwmLpWIeKw_0[3].sons = &T_L3r6bVdeFMiI9cwmLpWIeKw_3[0];
NTI_4umxGerWTHGPwUms7Yqu3g.node = &T_L3r6bVdeFMiI9cwmLpWIeKw_0[3];
NTI_1nh2T19a2BrGbBBQRS39bxRw.size = sizeof(Tident_4umxGerWTHGPwUms7Yqu3g*);
NTI_1nh2T19a2BrGbBBQRS39bxRw.kind = 22;
NTI_1nh2T19a2BrGbBBQRS39bxRw.base = (&NTI_4umxGerWTHGPwUms7Yqu3g);
NTI_1nh2T19a2BrGbBBQRS39bxRw.flags = 2;
NTI_1nh2T19a2BrGbBBQRS39bxRw.marker = Marker_TY_1nh2T19a2BrGbBBQRS39bxRw;
NTI_CBfZt49asUfAsBVM7a3Rc9cw.size = sizeof(TY_CBfZt49asUfAsBVM7a3Rc9cw);
NTI_CBfZt49asUfAsBVM7a3Rc9cw.kind = 16;
NTI_CBfZt49asUfAsBVM7a3Rc9cw.base = (&NTI_1nh2T19a2BrGbBBQRS39bxRw);
NTI_CBfZt49asUfAsBVM7a3Rc9cw.flags = 2;
T_L3r6bVdeFMiI9cwmLpWIeKw_0[1].kind = 1;
T_L3r6bVdeFMiI9cwmLpWIeKw_0[1].offset = offsetof(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw, buckets);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[1].typ = (&NTI_CBfZt49asUfAsBVM7a3Rc9cw);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[1].name = "buckets";
T_L3r6bVdeFMiI9cwmLpWIeKw_2[1] = &T_L3r6bVdeFMiI9cwmLpWIeKw_0[7];
T_L3r6bVdeFMiI9cwmLpWIeKw_0[7].kind = 1;
T_L3r6bVdeFMiI9cwmLpWIeKw_0[7].offset = offsetof(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw, wordcounter);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[7].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[7].name = "wordCounter";
T_L3r6bVdeFMiI9cwmLpWIeKw_2[2] = &T_L3r6bVdeFMiI9cwmLpWIeKw_0[8];
T_L3r6bVdeFMiI9cwmLpWIeKw_0[8].kind = 1;
T_L3r6bVdeFMiI9cwmLpWIeKw_0[8].offset = offsetof(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw, idanon);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[8].typ = (&NTI_1nh2T19a2BrGbBBQRS39bxRw);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[8].name = "idAnon";
T_L3r6bVdeFMiI9cwmLpWIeKw_2[3] = &T_L3r6bVdeFMiI9cwmLpWIeKw_0[9];
T_L3r6bVdeFMiI9cwmLpWIeKw_0[9].kind = 1;
T_L3r6bVdeFMiI9cwmLpWIeKw_0[9].offset = offsetof(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw, iddelegator);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[9].typ = (&NTI_1nh2T19a2BrGbBBQRS39bxRw);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[9].name = "idDelegator";
T_L3r6bVdeFMiI9cwmLpWIeKw_2[4] = &T_L3r6bVdeFMiI9cwmLpWIeKw_0[10];
T_L3r6bVdeFMiI9cwmLpWIeKw_0[10].kind = 1;
T_L3r6bVdeFMiI9cwmLpWIeKw_0[10].offset = offsetof(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw, emptyident);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[10].typ = (&NTI_1nh2T19a2BrGbBBQRS39bxRw);
T_L3r6bVdeFMiI9cwmLpWIeKw_0[10].name = "emptyIdent";
T_L3r6bVdeFMiI9cwmLpWIeKw_0[0].len = 5; T_L3r6bVdeFMiI9cwmLpWIeKw_0[0].kind = 2; T_L3r6bVdeFMiI9cwmLpWIeKw_0[0].sons = &T_L3r6bVdeFMiI9cwmLpWIeKw_2[0];
NTI_TzLHS09bRH9a0TYLs39cqcNaw.node = &T_L3r6bVdeFMiI9cwmLpWIeKw_0[0];
NTI_lnkYNZP9asc88UfiEGjLrbA.size = sizeof(IdentcacheHEX3Aobjecttype_TzLHS09bRH9a0TYLs39cqcNaw*);
NTI_lnkYNZP9asc88UfiEGjLrbA.kind = 22;
NTI_lnkYNZP9asc88UfiEGjLrbA.base = (&NTI_TzLHS09bRH9a0TYLs39cqcNaw);
NTI_lnkYNZP9asc88UfiEGjLrbA.flags = 2;
NTI_lnkYNZP9asc88UfiEGjLrbA.marker = Marker_TY_lnkYNZP9asc88UfiEGjLrbA;
NTI_GFuL0q6Yj4iJze0S9cdD9avg.size = sizeof(Tidobj_raN9cHVgzmvaXisezY9aGg9cg*);
NTI_GFuL0q6Yj4iJze0S9cdD9avg.kind = 22;
NTI_GFuL0q6Yj4iJze0S9cdD9avg.base = (&NTI_raN9cHVgzmvaXisezY9aGg9cg);
NTI_GFuL0q6Yj4iJze0S9cdD9avg.marker = Marker_TY_GFuL0q6Yj4iJze0S9cdD9avg;
}

