/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct tpasscontext263005 tpasscontext263005;
typedef struct tsym208848 tsym208848;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tidobj184015 tidobj184015;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq208850 ttypeseq208850;
typedef struct ttype208854 ttype208854;
typedef struct tscope208842 tscope208842;
typedef struct TY208949 TY208949;
typedef struct tinstantiation208838 tinstantiation208838;
typedef struct tstrtable208822 tstrtable208822;
typedef struct tsymseq208820 tsymseq208820;
typedef struct tident184021 tident184021;
typedef struct tlineinfo180340 tlineinfo180340;
typedef struct tnode208818 tnode208818;
typedef struct tloc208832 tloc208832;
typedef struct trope177009 trope177009;
typedef struct tlib208836 tlib208836;
typedef struct tnodeseq208812 tnodeseq208812;
typedef struct tcell45348 tcell45348;
typedef struct tcellseq45364 tcellseq45364;
typedef struct tgcheap47616 tgcheap47616;
typedef struct tcellset45360 tcellset45360;
typedef struct tpagedesc45356 tpagedesc45356;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47614 tgcstat47614;
typedef struct TY208938 TY208938;
typedef struct tlistentry127022 tlistentry127022;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable208822  {
NI Counter;
tsymseq208820* Data;
};
struct  tlineinfo180340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc208832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype208854* T;
trope177009* R;
trope177009* Heaproot;
};
struct  tsym208848  {
  tidobj184015 Sup;
NU8 Kind;
union{
struct {ttypeseq208850* Typeinstcache;
tscope208842* Typscope;
} S1;
struct {TY208949* Procinstcache;
tscope208842* Scope;
} S2;
struct {TY208949* Usedgenerics;
tstrtable208822 Tab;
} S3;
struct {tsym208848* Guard;
} S4;
} kindU;
NU16 Magic;
ttype208854* Typ;
tident184021* Name;
tlineinfo180340 Info;
tsym208848* Owner;
NU32 Flags;
tnode208818* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc208832 Loc;
tlib208836* Annex;
tnode208818* Constraint;
};
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
};
struct  tnode208818  {
ttype208854* Typ;
tlineinfo180340 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym208848* Sym;
} S4;
struct {tident184021* Ident;
} S5;
struct {tnodeseq208812* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  tcell45348  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45364  {
NI Len;
NI Cap;
tcell45348** D;
};
struct  tcellset45360  {
NI Counter;
NI Max;
tpagedesc45356* Head;
tpagedesc45356** Data;
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
tcellseq45364 Zct;
tcellseq45364 Decstack;
tcellset45360 Cycleroots;
tcellseq45364 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47614 Stat;
};
struct  tpasscontext263005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  ttype208854  {
  tidobj184015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq208850* Sons;
tnode208818* N;
tsym208848* Owner;
tsym208848* Sym;
tsym208848* Destructor;
tsym208848* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc208832 Loc;
};
struct  tscope208842  {
NI Depthlevel;
tstrtable208822 Symbols;
tnodeseq208812* Usingsyms;
tscope208842* Parent;
};
struct  tinstantiation208838  {
tsym208848* Sym;
ttypeseq208850* Concretetypes;
TY208938* Usedby;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib208836  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode208818* Path;
};
typedef NI TY26820[16];
struct  tpagedesc45356  {
tpagedesc45356* Next;
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
struct ttypeseq208850 {
  TGenericSeq Sup;
  ttype208854* data[SEQ_DECL_SIZE];
};
struct TY208949 {
  TGenericSeq Sup;
  tinstantiation208838* data[SEQ_DECL_SIZE];
};
struct tsymseq208820 {
  TGenericSeq Sup;
  tsym208848* data[SEQ_DECL_SIZE];
};
struct tnodeseq208812 {
  TGenericSeq Sup;
  tnode208818* data[SEQ_DECL_SIZE];
};
struct TY208938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, rawmessage_182415)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, internalerror_182688)(NimStringDesc* errmsg);
N_NIMCALL(void, message_182658)(tlineinfo180340 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NI, sonslen_209251)(tnode208818* n);
N_NIMCALL(tnode208818*, cleanup_535078)(tpasscontext263005* c, tnode208818* n);
N_NIMCALL(tsym208848*, getmodule_217243)(tsym208848* s);
N_NIMCALL(NIM_BOOL, astneeded_263094)(tsym208848* s);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45348*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45348* c);
N_NOINLINE(void, addzct_49217)(tcellseq45364* s, tcell45348* c);
STRING_LITERAL(TMP1952, "logpass: context is not nil", 27);
extern NI gverbosity_169137;
extern NU64 gnotes_181120;
extern NI gbackendid_207013;
extern NU32 gglobaloptions_169128;
extern tnode208818* emptynode_209686;
extern tgcheap47616 gch_47644;

N_NIMCALL(tpasscontext263005*, verboseopen_535012)(tsym208848* s) {
	tpasscontext263005* result;
	result = 0;
	result = NIM_NIL;
	{
		if (!(0 < gverbosity_169137)) goto LA3;
		rawmessage_182415(((NU16) 268), (*(*s).Name).S);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tnode208818*, verboseprocess_535024)(tpasscontext263005* context, tnode208818* n) {
	tnode208818* result;
	result = 0;
	result = n;
	{
		if (!!((context == NIM_NIL))) goto LA3;
		internalerror_182688(((NimStringDesc*) &TMP1952));
	}
	LA3: ;
	{
		NimStringDesc* LOC9;
		if (!(gverbosity_169137 == 3)) goto LA7;
		gnotes_181120 |= ((NI64)1)<<(((((NU16) 268)- 230))%(sizeof(NI64)*8));
		LOC9 = 0;
		LOC9 = nimIntToStr(gbackendid_207013);
		message_182658((*n).Info, ((NU16) 268), LOC9);
	}
	LA7: ;
	return result;
}

static N_INLINE(NI, sonslen_209251)(tnode208818* n) {
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

static N_INLINE(tcell45348*, usrtocell_49246)(void* usr) {
	tcell45348* result;
	result = 0;
	result = ((tcell45348*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45348))))));
	return result;
}

static N_INLINE(void, rtladdzct_50804)(tcell45348* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45348* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45348* c;
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

N_NIMCALL(tnode208818*, cleanup_535078)(tpasscontext263005* c, tnode208818* n) {
	tnode208818* result;
{	result = 0;
	result = n;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((gglobaloptions_169128 &(1<<((((NU8) 2))&31)))!=0);
		if (LOC3) goto LA4;
		LOC3 = (n == NIM_NIL);
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	switch ((*n).Kind) {
	case ((NU8) 115):
	{
		{
			NI i_535125;
			NI HEX3Atmp_535157;
			NI LOC9;
			NI res_535160;
			i_535125 = 0;
			HEX3Atmp_535157 = 0;
			LOC9 = 0;
			LOC9 = sonslen_209251(n);
			HEX3Atmp_535157 = (NI32)(LOC9 - 1);
			res_535160 = 0;
			{
				while (1) {
					tnode208818* LOC12;
					if (!(res_535160 <= HEX3Atmp_535157)) goto LA11;
					i_535125 = res_535160;
					LOC12 = 0;
					LOC12 = cleanup_535078(c, (*n).kindU.S6.Sons->data[i_535125]);
					res_535160 += 1;
				} LA11: ;
			}
		}
	}
	break;
	case ((NU8) 79):
	case ((NU8) 80):
	{
		{
			tsym208848* s;
			if (!((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 3))) goto LA16;
			s = (*(*n).kindU.S6.Sons->data[0]).kindU.S4.Sym;
			{
				NIM_BOOL LOC20;
				tsym208848* LOC21;
				NIM_BOOL LOC23;
				LOC20 = 0;
				LOC21 = 0;
				LOC21 = getmodule_217243(s);
				LOC20 = !((((*LOC21).Flags &(1<<((((NU8) 25))&31)))!=0));
				if (!(LOC20)) goto LA22;
				LOC23 = 0;
				LOC23 = astneeded_263094(s);
				LOC20 = !(LOC23);
				LA22: ;
				if (!LOC20) goto LA24;
				asgnRefNoCycle((void**) (&(*(*s).Ast).kindU.S6.Sons->data[6]), emptynode_209686);
			}
			LA24: ;
		}
		LA16: ;
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
NIM_EXTERNC N_NOINLINE(void, compiler_passauxInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_passauxDatInit)(void) {
}
