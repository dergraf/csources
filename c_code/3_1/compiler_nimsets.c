/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tnode209818 tnode209818;
typedef struct ttype209854 ttype209854;
typedef struct tlineinfo181340 tlineinfo181340;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym209848 tsym209848;
typedef struct tident185021 tident185021;
typedef struct tnodeseq209812 tnodeseq209812;
typedef struct tbitset262012 tbitset262012;
typedef struct tidobj185015 tidobj185015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq209850 ttypeseq209850;
typedef struct tloc209832 tloc209832;
typedef struct trope178009 trope178009;
typedef struct tcell45548 tcell45548;
typedef struct tcellseq45564 tcellseq45564;
typedef struct tgcheap47816 tgcheap47816;
typedef struct tcellset45560 tcellset45560;
typedef struct tpagedesc45556 tpagedesc45556;
typedef struct tmemregion27810 tmemregion27810;
typedef struct tsmallchunk27040 tsmallchunk27040;
typedef struct tllchunk27804 tllchunk27804;
typedef struct tbigchunk27042 tbigchunk27042;
typedef struct tintset27017 tintset27017;
typedef struct ttrunk27013 ttrunk27013;
typedef struct tavlnode27808 tavlnode27808;
typedef struct tgcstat47814 tgcstat47814;
typedef struct tscope209842 tscope209842;
typedef struct TY209949 TY209949;
typedef struct tinstantiation209838 tinstantiation209838;
typedef struct tstrtable209822 tstrtable209822;
typedef struct tsymseq209820 tsymseq209820;
typedef struct tlib209836 tlib209836;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct TY209938 TY209938;
typedef struct tlistentry128022 tlistentry128022;
struct  tlineinfo181340  {
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
struct  tnode209818  {
ttype209854* Typ;
tlineinfo181340 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym209848* Sym;
} S4;
struct {tident185021* Ident;
} S5;
struct {tnodeseq209812* Sons;
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
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tloc209832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype209854* T;
trope178009* R;
trope178009* Heaproot;
};
struct  ttype209854  {
  tidobj185015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq209850* Sons;
tnode209818* N;
tsym209848* Owner;
tsym209848* Sym;
tsym209848* Destructor;
tsym209848* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc209832 Loc;
};
struct  tcell45548  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45564  {
NI Len;
NI Cap;
tcell45548** D;
};
struct  tcellset45560  {
NI Counter;
NI Max;
tpagedesc45556* Head;
tpagedesc45556** Data;
};
typedef tsmallchunk27040* TY27822[512];
typedef ttrunk27013* ttrunkbuckets27015[256];
struct  tintset27017  {
ttrunkbuckets27015 Data;
};
struct  tmemregion27810  {
NI Minlargeobj;
NI Maxlargeobj;
TY27822 Freesmallchunks;
tllchunk27804* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk27042* Freechunkslist;
tintset27017 Chunkstarts;
tavlnode27808* Root;
tavlnode27808* Deleted;
tavlnode27808* Last;
tavlnode27808* Freeavlnodes;
};
struct  tgcstat47814  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47816  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45564 Zct;
tcellseq45564 Decstack;
tcellset45560 Cycleroots;
tcellseq45564 Tempstack;
NI Recgclock;
tmemregion27810 Region;
tgcstat47814 Stat;
};
struct  tstrtable209822  {
NI Counter;
tsymseq209820* Data;
};
struct  tsym209848  {
  tidobj185015 Sup;
NU8 Kind;
union{
struct {ttypeseq209850* Typeinstcache;
tscope209842* Typscope;
} S1;
struct {TY209949* Procinstcache;
tscope209842* Scope;
} S2;
struct {TY209949* Usedgenerics;
tstrtable209822 Tab;
} S3;
struct {tsym209848* Guard;
} S4;
} kindU;
NU16 Magic;
ttype209854* Typ;
tident185021* Name;
tlineinfo181340 Info;
tsym209848* Owner;
NU32 Flags;
tnode209818* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc209832 Loc;
tlib209836* Annex;
tnode209818* Constraint;
};
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY27020[16];
struct  tpagedesc45556  {
tpagedesc45556* Next;
NI Key;
TY27020 Bits;
};
struct  tbasechunk27038  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk27040  {
  tbasechunk27038 Sup;
tsmallchunk27040* Next;
tsmallchunk27040* Prev;
tfreecell27030* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27804  {
NI Size;
NI Acc;
tllchunk27804* Next;
};
struct  tbigchunk27042  {
  tbasechunk27038 Sup;
tbigchunk27042* Next;
tbigchunk27042* Prev;
NI Align;
NF Data;
};
struct  ttrunk27013  {
ttrunk27013* Next;
NI Key;
TY27020 Bits;
};
typedef tavlnode27808* TY27814[2];
struct  tavlnode27808  {
TY27814 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tscope209842  {
NI Depthlevel;
tstrtable209822 Symbols;
tnodeseq209812* Usingsyms;
tscope209842* Parent;
};
struct  tinstantiation209838  {
tsym209848* Sym;
ttypeseq209850* Concretetypes;
TY209938* Usedby;
};
struct  tlistentry128022  {
  TNimObject Sup;
tlistentry128022* Prev;
tlistentry128022* Next;
};
struct  tlib209836  {
  tlistentry128022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode209818* Path;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct tnodeseq209812 {
  TGenericSeq Sup;
  tnode209818* data[SEQ_DECL_SIZE];
};
struct tbitset262012 {
  TGenericSeq Sup;
  NI8 data[SEQ_DECL_SIZE];
};
struct ttypeseq209850 {
  TGenericSeq Sup;
  ttype209854* data[SEQ_DECL_SIZE];
};
struct TY209949 {
  TGenericSeq Sup;
  tinstantiation209838* data[SEQ_DECL_SIZE];
};
struct tsymseq209820 {
  TGenericSeq Sup;
  tsym209848* data[SEQ_DECL_SIZE];
};
struct TY209938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, internalerror_183669)(tlineinfo181340 info, NimStringDesc* errmsg);
static N_INLINE(NI, sonslen_210251)(tnode209818* n);
N_NIMCALL(NIM_BOOL, levalue_218383)(tnode209818* a, tnode209818* b);
N_NIMCALL(NIM_BOOL, samevalue_218324)(tnode209818* a, tnode209818* b);
N_NIMCALL(void, tobitset_263004)(tnode209818* s, tbitset262012** b);
N_NIMCALL(NI64, firstord_242004)(ttype209854* t);
N_NIMCALL(void, bitsetinit_262021)(tbitset262012** b, NI length);
N_NIMCALL(NI64, getsize_242200)(ttype209854* typ);
N_NIMCALL(NI64, getordvalue_242188)(tnode209818* n);
N_NIMCALL(void, bitsetincl_262061)(tbitset262012** x, NI64 elem);
N_NIMCALL(void, bitsetdiff_262037)(tbitset262012** x, tbitset262012* y);
N_NIMCALL(tnode209818*, totreeset_263350)(tbitset262012* s, ttype209854* settype, tlineinfo181340 info);
N_NIMCALL(tnode209818*, newnodei_210140)(NU8 kind, tlineinfo181340 info);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45548*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45548* c);
N_NOINLINE(void, addzct_49417)(tcellseq45564* s, tcell45548* c);
N_NIMCALL(NIM_BOOL, bitsetin_262077)(tbitset262012* x, NI64 e);
N_NIMCALL(void, addson_210289)(tnode209818* father, tnode209818* son);
N_NIMCALL(tnode209818*, newinttypenode_210105)(NU8 kind, NI64 intval, ttype209854* typ);
N_NIMCALL(NIM_BOOL, bitsetcontains_262091)(tbitset262012* x, tbitset262012* y);
N_NIMCALL(NIM_BOOL, bitsetequals_262084)(tbitset262012* x, tbitset262012* y);
N_NIMCALL(void, bitsetintersect_262053)(tbitset262012** x, tbitset262012* y);
N_NIMCALL(void, bitsetunion_262029)(tbitset262012** x, tbitset262012* y);
N_NIMCALL(void, bitsetsymdiff_262045)(tbitset262012** x, tbitset262012* y);
STRING_LITERAL(TMP2840, "inSet", 5);
extern tgcheap47816 gch_47844;

static N_INLINE(NI, sonslen_210251)(tnode209818* n) {
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

N_NIMCALL(NIM_BOOL, inset_263019)(tnode209818* s, tnode209818* elem) {
	NIM_BOOL result;
{	result = 0;
	{
		if (!!(((*s).Kind == ((NU8) 39)))) goto LA3;
		internalerror_183669((*s).Info, ((NimStringDesc*) &TMP2840));
		result = NIM_FALSE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_263121;
		NI HEX3Atmp_263138;
		NI LOC6;
		NI res_263141;
		i_263121 = 0;
		HEX3Atmp_263138 = 0;
		LOC6 = 0;
		LOC6 = sonslen_210251(s);
		HEX3Atmp_263138 = (NI32)(LOC6 - 1);
		res_263141 = 0;
		{
			while (1) {
				if (!(res_263141 <= HEX3Atmp_263138)) goto LA8;
				i_263121 = res_263141;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_263121]).Kind == ((NU8) 44))) goto LA11;
					{
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = levalue_218383((*(*s).kindU.S6.Sons->data[i_263121]).kindU.S6.Sons->data[0], elem);
						if (!(LOC15)) goto LA16;
						LOC15 = levalue_218383(elem, (*(*s).kindU.S6.Sons->data[i_263121]).kindU.S6.Sons->data[1]);
						LA16: ;
						if (!LOC15) goto LA17;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA17: ;
				}
				goto LA9;
				LA11: ;
				{
					{
						NIM_BOOL LOC22;
						LOC22 = 0;
						LOC22 = samevalue_218324((*s).kindU.S6.Sons->data[i_263121], elem);
						if (!LOC22) goto LA23;
						result = NIM_TRUE;
						goto BeforeRet;
					}
					LA23: ;
				}
				LA9: ;
				res_263141 += 1;
			} LA8: ;
		}
	}
	result = NIM_FALSE;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, tobitset_263004)(tnode209818* s, tbitset262012** b) {
	NI64 first;
	NI64 j;
	NI64 LOC1;
	first = 0;
	j = 0;
	first = firstord_242004((*(*s).Typ).Sons->data[0]);
	LOC1 = 0;
	LOC1 = getsize_242200((*s).Typ);
	bitsetinit_262021(b, ((NI) (LOC1)));
	{
		NI i_263292;
		NI HEX3Atmp_263324;
		NI LOC3;
		NI res_263327;
		i_263292 = 0;
		HEX3Atmp_263324 = 0;
		LOC3 = 0;
		LOC3 = sonslen_210251(s);
		HEX3Atmp_263324 = (NI32)(LOC3 - 1);
		res_263327 = 0;
		{
			while (1) {
				if (!(res_263327 <= HEX3Atmp_263324)) goto LA5;
				i_263292 = res_263327;
				{
					if (!((*(*s).kindU.S6.Sons->data[i_263292]).Kind == ((NU8) 44))) goto LA8;
					j = getordvalue_242188((*(*s).kindU.S6.Sons->data[i_263292]).kindU.S6.Sons->data[0]);
					{
						while (1) {
							NI64 LOC12;
							LOC12 = 0;
							LOC12 = getordvalue_242188((*(*s).kindU.S6.Sons->data[i_263292]).kindU.S6.Sons->data[1]);
							if (!(j <= LOC12)) goto LA11;
							bitsetincl_262061(b, (NI64)(j - first));
							j += 1;
						} LA11: ;
					}
				}
				goto LA6;
				LA8: ;
				{
					NI64 LOC14;
					LOC14 = 0;
					LOC14 = getordvalue_242188((*s).kindU.S6.Sons->data[i_263292]);
					bitsetincl_262061(b, (NI64)(LOC14 - first));
				}
				LA6: ;
				res_263327 += 1;
			} LA5: ;
		}
	}
}

static N_INLINE(tcell45548*, usrtocell_49446)(void* usr) {
	tcell45548* result;
	result = 0;
	result = ((tcell45548*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45548))))));
	return result;
}

static N_INLINE(void, rtladdzct_51004)(tcell45548* c) {
	addzct_49417((&gch_47844.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45548* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49446(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45548* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49446((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_51004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tnode209818*, totreeset_263350)(tbitset262012* s, ttype209854* settype, tlineinfo181340 info) {
	tnode209818* result;
	NI64 a;
	NI64 b;
	NI64 e;
	NI64 first;
	ttype209854* elemtype;
	tnode209818* n;
	result = 0;
	a = 0;
	b = 0;
	e = 0;
	first = 0;
	elemtype = 0;
	n = 0;
	elemtype = (*settype).Sons->data[0];
	first = firstord_242004(elemtype);
	result = newnodei_210140(((NU8) 39), info);
	asgnRefNoCycle((void**) (&(*result).Typ), settype);
	(*result).Info = info;
	e = IL64(0);
	{
		while (1) {
			if (!(e < ((NI64) ((NI32)(s->Sup.len * 8))))) goto LA2;
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = bitsetin_262077(s, e);
				if (!LOC5) goto LA6;
				a = e;
				b = e;
				{
					while (1) {
						b += 1;
						{
							NIM_BOOL LOC12;
							NIM_BOOL LOC14;
							LOC12 = 0;
							LOC12 = (((NI64) ((NI32)(s->Sup.len * 8))) <= b);
							if (LOC12) goto LA13;
							LOC14 = 0;
							LOC14 = bitsetin_262077(s, b);
							LOC12 = !(LOC14);
							LA13: ;
							if (!LOC12) goto LA15;
							goto LA8;
						}
						LA15: ;
					}
				} LA8: ;
				b -= 1;
				{
					tnode209818* LOC21;
					if (!(a == b)) goto LA19;
					LOC21 = 0;
					LOC21 = newinttypenode_210105(((NU8) 6), (NI64)(a + first), elemtype);
					addson_210289(result, LOC21);
				}
				goto LA17;
				LA19: ;
				{
					tnode209818* LOC23;
					tnode209818* LOC24;
					n = newnodei_210140(((NU8) 44), info);
					asgnRefNoCycle((void**) (&(*n).Typ), elemtype);
					LOC23 = 0;
					LOC23 = newinttypenode_210105(((NU8) 6), (NI64)(a + first), elemtype);
					addson_210289(n, LOC23);
					LOC24 = 0;
					LOC24 = newinttypenode_210105(((NU8) 6), (NI64)(b + first), elemtype);
					addson_210289(n, LOC24);
					addson_210289(result, n);
				}
				LA17: ;
				e = b;
			}
			LA6: ;
			e += 1;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(tnode209818*, diffsets_263054)(tnode209818* a, tnode209818* b) {
	tnode209818* result;
	tbitset262012* x;
	tbitset262012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_263004(a, (&x));
	tobitset_263004(b, (&y));
	bitsetdiff_262037((&x), y);
	result = totreeset_263350(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NI64, cardset_263089)(tnode209818* s) {
	NI64 result;
	result = 0;
	result = IL64(0);
	{
		NI i_263619;
		NI HEX3Atmp_263647;
		NI LOC2;
		NI res_263650;
		i_263619 = 0;
		HEX3Atmp_263647 = 0;
		LOC2 = 0;
		LOC2 = sonslen_210251(s);
		HEX3Atmp_263647 = (NI32)(LOC2 - 1);
		res_263650 = 0;
		{
			while (1) {
				if (!(res_263650 <= HEX3Atmp_263647)) goto LA4;
				i_263619 = res_263650;
				{
					NI64 LOC9;
					NI64 LOC10;
					if (!((*(*s).kindU.S6.Sons->data[i_263619]).Kind == ((NU8) 44))) goto LA7;
					LOC9 = 0;
					LOC9 = getordvalue_242188((*(*s).kindU.S6.Sons->data[i_263619]).kindU.S6.Sons->data[1]);
					LOC10 = 0;
					LOC10 = getordvalue_242188((*(*s).kindU.S6.Sons->data[i_263619]).kindU.S6.Sons->data[0]);
					result = (NI64)((NI64)((NI64)(result + LOC9) - LOC10) + IL64(1));
				}
				goto LA5;
				LA7: ;
				{
					result += 1;
				}
				LA5: ;
				res_263650 += 1;
			} LA4: ;
		}
	}
	return result;
}

N_NIMCALL(NIM_BOOL, containssets_263075)(tnode209818* a, tnode209818* b) {
	NIM_BOOL result;
	tbitset262012* x;
	tbitset262012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_263004(a, (&x));
	tobitset_263004(b, (&y));
	result = bitsetcontains_262091(x, y);
	return result;
}

N_NIMCALL(NIM_BOOL, equalsets_263082)(tnode209818* a, tnode209818* b) {
	NIM_BOOL result;
	tbitset262012* x;
	tbitset262012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_263004(a, (&x));
	tobitset_263004(b, (&y));
	result = bitsetequals_262084(x, y);
	return result;
}

N_NIMCALL(tnode209818*, intersectsets_263061)(tnode209818* a, tnode209818* b) {
	tnode209818* result;
	tbitset262012* x;
	tbitset262012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_263004(a, (&x));
	tobitset_263004(b, (&y));
	bitsetintersect_262053((&x), y);
	result = totreeset_263350(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode209818*, unionsets_263047)(tnode209818* a, tnode209818* b) {
	tnode209818* result;
	tbitset262012* x;
	tbitset262012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_263004(a, (&x));
	tobitset_263004(b, (&y));
	bitsetunion_262029((&x), y);
	result = totreeset_263350(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(tnode209818*, symdiffsets_263068)(tnode209818* a, tnode209818* b) {
	tnode209818* result;
	tbitset262012* x;
	tbitset262012* y;
	result = 0;
	x = 0;
	y = 0;
	tobitset_263004(a, (&x));
	tobitset_263004(b, (&y));
	bitsetsymdiff_262045((&x), y);
	result = totreeset_263350(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, overlap_263012)(tnode209818* a, tnode209818* b) {
	NIM_BOOL result;
	result = 0;
	{
		if (!((*a).Kind == ((NU8) 44))) goto LA3;
		{
			NIM_BOOL LOC9;
			if (!((*b).Kind == ((NU8) 44))) goto LA7;
			LOC9 = 0;
			LOC9 = levalue_218383((*a).kindU.S6.Sons->data[0], (*b).kindU.S6.Sons->data[1]);
			if (!(LOC9)) goto LA10;
			LOC9 = levalue_218383((*b).kindU.S6.Sons->data[0], (*a).kindU.S6.Sons->data[1]);
			LA10: ;
			result = LOC9;
		}
		goto LA5;
		LA7: ;
		{
			NIM_BOOL LOC12;
			LOC12 = 0;
			LOC12 = levalue_218383((*a).kindU.S6.Sons->data[0], b);
			if (!(LOC12)) goto LA13;
			LOC12 = levalue_218383(b, (*a).kindU.S6.Sons->data[1]);
			LA13: ;
			result = LOC12;
		}
		LA5: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NIM_BOOL LOC19;
			if (!((*b).Kind == ((NU8) 44))) goto LA17;
			LOC19 = 0;
			LOC19 = levalue_218383((*b).kindU.S6.Sons->data[0], a);
			if (!(LOC19)) goto LA20;
			LOC19 = levalue_218383(a, (*b).kindU.S6.Sons->data[1]);
			LA20: ;
			result = LOC19;
		}
		goto LA15;
		LA17: ;
		{
			result = samevalue_218324(a, b);
		}
		LA15: ;
	}
	LA1: ;
	return result;
}

N_NIMCALL(tnode209818*, complement_263562)(tnode209818* a) {
	tnode209818* result;
	tbitset262012* x;
	result = 0;
	x = 0;
	tobitset_263004(a, (&x));
	{
		NI i_263580;
		NI HEX3Atmp_263583;
		NI res_263586;
		i_263580 = 0;
		HEX3Atmp_263583 = 0;
		HEX3Atmp_263583 = (x->Sup.len-1);
		res_263586 = 0;
		{
			while (1) {
				if (!(res_263586 <= HEX3Atmp_263583)) goto LA3;
				i_263580 = res_263586;
				x->data[i_263580] = (NI8)((NU8) ~(x->data[i_263580]));
				res_263586 += 1;
			} LA3: ;
		}
	}
	result = totreeset_263350(x, (*a).Typ, (*a).Info);
	return result;
}

N_NIMCALL(NIM_BOOL, emptyrange_263034)(tnode209818* a, tnode209818* b) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = levalue_218383(a, b);
	result = !(LOC1);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_nimsetsDatInit)(void) {
}
