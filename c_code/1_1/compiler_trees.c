/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tnode210818 tnode210818;
typedef struct ttype210854 ttype210854;
typedef struct tlineinfo182340 tlineinfo182340;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym210848 tsym210848;
typedef struct tident186021 tident186021;
typedef struct tnodeseq210812 tnodeseq210812;
typedef struct tidobj186015 tidobj186015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq210850 ttypeseq210850;
typedef struct tscope210842 tscope210842;
typedef struct TY210949 TY210949;
typedef struct tinstantiation210838 tinstantiation210838;
typedef struct tstrtable210822 tstrtable210822;
typedef struct tsymseq210820 tsymseq210820;
typedef struct tloc210832 tloc210832;
typedef struct trope179009 trope179009;
typedef struct tlib210836 tlib210836;
typedef struct tcell45346 tcell45346;
typedef struct tcellseq45362 tcellseq45362;
typedef struct tgcheap47616 tgcheap47616;
typedef struct tcellset45358 tcellset45358;
typedef struct tpagedesc45354 tpagedesc45354;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47614 tgcstat47614;
typedef struct TY210938 TY210938;
typedef struct tlistentry130022 tlistentry130022;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
struct  tlineinfo182340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tnode210818  {
ttype210854* Typ;
tlineinfo182340 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym210848* Sym;
} S4;
struct {tident186021* Ident;
} S5;
struct {tnodeseq210812* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
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
struct  tstrtable210822  {
NI Counter;
tsymseq210820* Data;
};
struct  tloc210832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype210854* T;
trope179009* R;
trope179009* Heaproot;
};
struct  tsym210848  {
  tidobj186015 Sup;
NU8 Kind;
union{
struct {ttypeseq210850* Typeinstcache;
tscope210842* Typscope;
} S1;
struct {TY210949* Procinstcache;
tscope210842* Scope;
} S2;
struct {TY210949* Usedgenerics;
tstrtable210822 Tab;
} S3;
struct {tsym210848* Guard;
} S4;
} kindU;
NU16 Magic;
ttype210854* Typ;
tident186021* Name;
tlineinfo182340 Info;
tsym210848* Owner;
NU32 Flags;
tnode210818* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc210832 Loc;
tlib210836* Annex;
tnode210818* Constraint;
};
struct  tident186021  {
  tidobj186015 Sup;
NimStringDesc* S;
tident186021* Next;
NI H;
};
struct  tcell45346  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45362  {
NI Len;
NI Cap;
tcell45346** D;
};
struct  tcellset45358  {
NI Counter;
NI Max;
tpagedesc45354* Head;
tpagedesc45354** Data;
};
typedef tsmallchunk26840* TY27622[512];
typedef ttrunk26813* ttrunkbuckets26815[256];
struct  tintset26817  {
ttrunkbuckets26815 Data;
};
struct  tmemregion27610  {
NI Minlargeobj;
NI Maxlargeobj;
TY27622 Freesmallchunks;
tllchunk27604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26842* Freechunkslist;
tintset26817 Chunkstarts;
tavlnode27608* Root;
tavlnode27608* Deleted;
tavlnode27608* Last;
tavlnode27608* Freeavlnodes;
};
struct  tgcstat47614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45362 Zct;
tcellseq45362 Decstack;
tcellset45358 Cycleroots;
tcellseq45362 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47614 Stat;
};
struct  ttype210854  {
  tidobj186015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq210850* Sons;
tnode210818* N;
tsym210848* Owner;
tsym210848* Sym;
tsym210848* Destructor;
tsym210848* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc210832 Loc;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tscope210842  {
NI Depthlevel;
tstrtable210822 Symbols;
tnodeseq210812* Usingsyms;
tscope210842* Parent;
};
struct  tinstantiation210838  {
tsym210848* Sym;
ttypeseq210850* Concretetypes;
TY210938* Usedby;
};
struct  trope179009  {
  TNimObject Sup;
trope179009* Left;
trope179009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry130022  {
  TNimObject Sup;
tlistentry130022* Prev;
tlistentry130022* Next;
};
struct  tlib210836  {
  tlistentry130022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope179009* Name;
tnode210818* Path;
};
typedef NI TY26820[16];
struct  tpagedesc45354  {
tpagedesc45354* Next;
NI Key;
TY26820 Bits;
};
struct  tbasechunk26838  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26840  {
  tbasechunk26838 Sup;
tsmallchunk26840* Next;
tsmallchunk26840* Prev;
tfreecell26830* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27604  {
NI Size;
NI Acc;
tllchunk27604* Next;
};
struct  tbigchunk26842  {
  tbasechunk26838 Sup;
tbigchunk26842* Next;
tbigchunk26842* Prev;
NI Align;
NF Data;
};
struct  ttrunk26813  {
ttrunk26813* Next;
NI Key;
TY26820 Bits;
};
typedef tavlnode27608* TY27614[2];
struct  tavlnode27608  {
TY27614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct tnodeseq210812 {
  TGenericSeq Sup;
  tnode210818* data[SEQ_DECL_SIZE];
};
struct ttypeseq210850 {
  TGenericSeq Sup;
  ttype210854* data[SEQ_DECL_SIZE];
};
struct TY210949 {
  TGenericSeq Sup;
  tinstantiation210838* data[SEQ_DECL_SIZE];
};
struct tsymseq210820 {
  TGenericSeq Sup;
  tsym210848* data[SEQ_DECL_SIZE];
};
struct TY210938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NI, sonslen_211251)(tnode210818* n);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_242158)(tnode210818* a, tnode210818* b);
N_NIMCALL(tnode210818*, newnodei_211140)(NU8 kind, tlineinfo182340 info);
N_NIMCALL(NIM_BOOL, cyclictreeaux_242075)(tnode210818* n, tnode210818* s);
N_NIMCALL(NIM_BOOL, hasson_242019)(tnode210818* father, tnode210818* son);
N_NIMCALL(void, addson_211289)(tnode210818* father, tnode210818* son);
N_NIMCALL(void, delson_211296)(tnode210818* father, NI idx);
N_NIMCALL(void, unneststmts_242757)(tnode210818* n, tnode210818* result);
static N_INLINE(NI, len_211366)(tnode210818* n);
N_NIMCALL(void, add_211448)(tnode210818* father, tnode210818* son);
N_NIMCALL(tnode210818*, newnodei_212807)(NU8 kind, tlineinfo182340 info, NI children);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45346*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45346* c);
N_NOINLINE(void, addzct_49217)(tcellseq45362* s, tcell45346* c);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_242508)(tnode210818* n);
N_NIMCALL(ttype210854*, skiptypes_214980)(ttype210854* t, NU64 kinds);
N_NIMCALL(NU8, whichkeyword_190382)(tident186021* id);
extern tgcheap47616 gch_47644;

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, sonslen_211251)(tnode210818* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_242158)(tnode210818* a, tnode210818* b) {
	NIM_BOOL result;
{	result = 0;
	result = NIM_FALSE;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = 0;
		LOC7 = 0;
		LOC7 = !((a == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a).Kind == (*b).Kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a).Kind) {
		case ((NU8) 3):
		{
			result = ((*(*(*a).kindU.S4.Sym).Name).Sup.Id == (*(*(*b).kindU.S4.Sym).Name).Sup.Id);
		}
		break;
		case ((NU8) 2):
		{
			result = ((*(*a).kindU.S5.Ident).Sup.Id == (*(*b).kindU.S5.Ident).Sup.Id);
		}
		break;
		case ((NU8) 5) ... ((NU8) 10):
		{
			result = ((*a).kindU.S1.Intval == (*b).kindU.S1.Intval);
		}
		break;
		case ((NU8) 16) ... ((NU8) 18):
		{
			result = ((*a).kindU.S2.Floatval == (*b).kindU.S2.Floatval);
		}
		break;
		case ((NU8) 20) ... ((NU8) 22):
		{
			result = eqStrings((*a).kindU.S3.Strval, (*b).kindU.S3.Strval);
		}
		break;
		case ((NU8) 1):
		case ((NU8) 23):
		case ((NU8) 4):
		{
			result = NIM_TRUE;
		}
		break;
		default:
		{
			{
				NI LOC21;
				NI LOC22;
				LOC21 = 0;
				LOC21 = sonslen_211251(a);
				LOC22 = 0;
				LOC22 = sonslen_211251(b);
				if (!(LOC21 == LOC22)) goto LA23;
				{
					NI i_242246;
					NI HEX3Atmp_242250;
					NI LOC26;
					NI res_242253;
					i_242246 = 0;
					HEX3Atmp_242250 = 0;
					LOC26 = 0;
					LOC26 = sonslen_211251(a);
					HEX3Atmp_242250 = (NI32)(LOC26 - 1);
					res_242253 = 0;
					{
						while (1) {
							if (!(res_242253 <= HEX3Atmp_242250)) goto LA28;
							i_242246 = res_242253;
							{
								NIM_BOOL LOC31;
								LOC31 = 0;
								LOC31 = exprstructuralequivalent_242158((*a).kindU.S6.Sons->data[i_242246], (*b).kindU.S6.Sons->data[i_242246]);
								if (!!(LOC31)) goto LA32;
								goto BeforeRet;
							}
							LA32: ;
							res_242253 += 1;
						} LA28: ;
					}
				}
				result = NIM_TRUE;
			}
			LA23: ;
		}
		break;
		}
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU16, getmagic_242446)(tnode210818* op) {
	NU16 result;
	result = 0;
	switch ((*op).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	case ((NU8) 32):
	{
		switch ((*(*op).kindU.S6.Sons->data[0]).Kind) {
		case ((NU8) 3):
		{
			result = (*(*(*op).kindU.S6.Sons->data[0]).kindU.S4.Sym).Magic;
		}
		break;
		default:
		{
			result = ((NU16) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result = ((NU16) 0);
	}
	break;
	}
	return result;
}

N_NIMCALL(NIM_BOOL, hasson_242019)(tnode210818* father, tnode210818* son) {
	NIM_BOOL result;
{	result = 0;
	{
		NI i_242036;
		NI HEX3Atmp_242055;
		NI LOC2;
		NI res_242058;
		i_242036 = 0;
		HEX3Atmp_242055 = 0;
		LOC2 = 0;
		LOC2 = sonslen_211251(father);
		HEX3Atmp_242055 = (NI32)(LOC2 - 1);
		res_242058 = 0;
		{
			while (1) {
				if (!(res_242058 <= HEX3Atmp_242055)) goto LA4;
				i_242036 = res_242058;
				{
					if (!((*father).kindU.S6.Sons->data[i_242036] == son)) goto LA7;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA7: ;
				res_242058 += 1;
			} LA4: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_242075)(tnode210818* n, tnode210818* s) {
	NIM_BOOL result;
	NI m;
{	result = 0;
	{
		if (!(n == NIM_NIL)) goto LA3;
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = hasson_242019(s, n);
		if (!LOC7) goto LA8;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA8: ;
	m = sonslen_211251(s);
	addson_211289(s, n);
	{
		if (!!(((*n).Kind >= ((NU8) 1) && (*n).Kind <= ((NU8) 23)))) goto LA12;
		{
			NI i_242124;
			NI HEX3Atmp_242127;
			NI LOC15;
			NI res_242130;
			i_242124 = 0;
			HEX3Atmp_242127 = 0;
			LOC15 = 0;
			LOC15 = sonslen_211251(n);
			HEX3Atmp_242127 = (NI32)(LOC15 - 1);
			res_242130 = 0;
			{
				while (1) {
					if (!(res_242130 <= HEX3Atmp_242127)) goto LA17;
					i_242124 = res_242130;
					{
						NIM_BOOL LOC20;
						LOC20 = 0;
						LOC20 = cyclictreeaux_242075((*n).kindU.S6.Sons->data[i_242124], s);
						if (!LOC20) goto LA21;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA21: ;
					res_242130 += 1;
				} LA17: ;
			}
		}
	}
	LA12: ;
	result = NIM_FALSE;
	delson_211296(s, m);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, cyclictree_242147)(tnode210818* n) {
	NIM_BOOL result;
	tnode210818* s;
	result = 0;
	s = newnodei_211140(((NU8) 1), (*n).Info);
	result = cyclictreeaux_242075(n, s);
	return result;
}

static N_INLINE(NI, len_211366)(tnode210818* n) {
	NI result;
	result = 0;
	{
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, unneststmts_242757)(tnode210818* n, tnode210818* result) {
	{
		if (!((*n).Kind == ((NU8) 115))) goto LA3;
		{
			tnode210818* x_242770;
			x_242770 = 0;
			{
				NI i_242790;
				NI HEX3Atmp_242792;
				NI LOC7;
				NI res_242794;
				i_242790 = 0;
				HEX3Atmp_242792 = 0;
				LOC7 = 0;
				LOC7 = len_211366(n);
				HEX3Atmp_242792 = (LOC7 - 1);
				res_242794 = 0;
				{
					while (1) {
						if (!(res_242794 <= HEX3Atmp_242792)) goto LA9;
						i_242790 = res_242794;
						x_242770 = (*n).kindU.S6.Sons->data[i_242790];
						unneststmts_242757(x_242770, result);
						res_242794 += 1;
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n).Kind == ((NU8) 125) || (*n).Kind == ((NU8) 23)))) goto LA11;
		add_211448(result, n);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(tnode210818*, flattenstmts_242813)(tnode210818* n) {
	tnode210818* result;
	result = 0;
	result = newnodei_211140(((NU8) 115), (*n).Info);
	unneststmts_242757(n, result);
	{
		NI LOC3;
		LOC3 = 0;
		LOC3 = len_211366(result);
		if (!(LOC3 == 1)) goto LA4;
		result = (*result).kindU.S6.Sons->data[0];
	}
	LA4: ;
	return result;
}

static N_INLINE(tcell45346*, usrtocell_49246)(void* usr) {
	tcell45346* result;
	result = 0;
	result = ((tcell45346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45346))))));
	return result;
}

static N_INLINE(void, rtladdzct_50804)(tcell45346* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode210818*, extractrange_242825)(NU8 k, tnode210818* n, NI a, NI b) {
	tnode210818* result;
	result = 0;
	result = newnodei_212807(k, (*n).Info, (NI32)((NI32)(b - a) + 1));
	{
		NI i_242842;
		NI HEX3Atmp_242846;
		NI res_242849;
		i_242842 = 0;
		HEX3Atmp_242846 = 0;
		HEX3Atmp_242846 = (NI32)(b - a);
		res_242849 = 0;
		{
			while (1) {
				if (!(res_242849 <= HEX3Atmp_242846)) goto LA3;
				i_242842 = res_242849;
				asgnRefNoCycle((void**) (&(*result).kindU.S6.Sons->data[i_242842]), (*n).kindU.S6.Sons->data[(NI32)(i_242842 + a)]);
				res_242849 += 1;
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_242508)(tnode210818* n) {
	NIM_BOOL result;
{	result = 0;
	switch ((*n).Kind) {
	case ((NU8) 5) ... ((NU8) 10):
	case ((NU8) 20) ... ((NU8) 22):
	case ((NU8) 16) ... ((NU8) 18):
	case ((NU8) 23):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 33):
	case ((NU8) 34):
	case ((NU8) 58):
	case ((NU8) 59):
	{
		result = isdeepconstexpr_242508((*n).kindU.S6.Sons->data[1]);
	}
	break;
	case ((NU8) 39):
	case ((NU8) 41):
	case ((NU8) 37):
	case ((NU8) 38):
	case ((NU8) 154):
	{
		NIM_BOOL LOC13;
		ttype210854* LOC15;
		{
			NI i_242535;
			NI HEX3Atmp_242559;
			NI LOC5;
			NI res_242562;
			i_242535 = 0;
			HEX3Atmp_242559 = 0;
			LOC5 = 0;
			LOC5 = len_211366(n);
			HEX3Atmp_242559 = (LOC5 - 1);
			res_242562 = 0;
			{
				while (1) {
					if (!(res_242562 <= HEX3Atmp_242559)) goto LA7;
					i_242535 = res_242562;
					{
						NIM_BOOL LOC10;
						LOC10 = 0;
						LOC10 = isdeepconstexpr_242508((*n).kindU.S6.Sons->data[i_242535]);
						if (!!(LOC10)) goto LA11;
						result = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_242562 += 1;
				} LA7: ;
			}
		}
		LOC13 = 0;
		LOC13 = (*n).Typ == 0;
		if (LOC13) goto LA14;
		LOC15 = 0;
		LOC15 = skiptypes_214980((*n).Typ, 10240);
		LOC13 = !(((*LOC15).Kind == ((NU8) 17)));
		LA14: ;
		result = LOC13;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isconstexpr_242471)(tnode210818* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((*n).Kind >= ((NU8) 5) && (*n).Kind <= ((NU8) 10) || (*n).Kind >= ((NU8) 20) && (*n).Kind <= ((NU8) 22) || (*n).Kind >= ((NU8) 16) && (*n).Kind <= ((NU8) 18) || (*n).Kind == ((NU8) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n).Flags &(1<<((((NU8) 4))&15)))!=0);
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(NU8, whichpragma_242726)(tnode210818* n) {
	NU8 result;
	tnode210818* key;
	result = 0;
	{
		if (!((*n).Kind == ((NU8) 34))) goto LA3;
		key = (*n).kindU.S6.Sons->data[0];
	}
	goto LA1;
	LA3: ;
	{
		key = n;
	}
	LA1: ;
	{
		if (!((*key).Kind == ((NU8) 2))) goto LA8;
		result = whichkeyword_190382((*key).kindU.S5.Ident);
	}
	LA8: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit)(void) {
}
