/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tnode169647 tnode169647;
typedef struct templctx245006 templctx245006;
typedef struct ttype169681 ttype169681;
typedef struct tlineinfo128308 tlineinfo128308;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tsym169677 tsym169677;
typedef struct tident131015 tident131015;
typedef struct tnodeseq169641 tnodeseq169641;
typedef struct tidobj131009 tidobj131009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq169679 ttypeseq169679;
typedef struct TY169771 TY169771;
typedef struct tinstantiation169667 tinstantiation169667;
typedef struct tscope169671 tscope169671;
typedef struct tstrtable169651 tstrtable169651;
typedef struct tsymseq169649 tsymseq169649;
typedef struct tloc169661 tloc169661;
typedef struct trope126007 trope126007;
typedef struct tlib169665 tlib169665;
typedef struct tidtable169693 tidtable169693;
typedef struct tidpairseq169691 tidpairseq169691;
typedef struct tidpair169689 tidpair169689;
typedef struct TY71482 TY71482;
typedef struct tcell38846 tcell38846;
typedef struct tcellseq38862 tcellseq38862;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38858 tcellset38858;
typedef struct tpagedesc38854 tpagedesc38854;
typedef struct tmemregion22410 tmemregion22410;
typedef struct tsmallchunk21643 tsmallchunk21643;
typedef struct tllchunk22404 tllchunk22404;
typedef struct tbigchunk21645 tbigchunk21645;
typedef struct tintset21618 tintset21618;
typedef struct ttrunk21614 ttrunk21614;
typedef struct tavlnode22408 tavlnode22408;
typedef struct tgcstat40814 tgcstat40814;
typedef struct TY169763 TY169763;
typedef struct tlistentry100011 tlistentry100011;
typedef struct tbasechunk21641 tbasechunk21641;
typedef struct tfreecell21633 tfreecell21633;
struct tlineinfo128308 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tnode169647 {
ttype169681* Typ;
tlineinfo128308 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym169677* Sym;
} S4;
struct {tident131015* Ident;
} S5;
struct {tnodeseq169641* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY169850[19];
typedef N_NIMCALL_PTR(void, TY891) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY891 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj131009 {
  TNimObject Sup;
NI Id;
};
struct tstrtable169651 {
NI Counter;
tsymseq169649* Data;
};
struct tloc169661 {
NU8 K;
NU8 S;
NU8 Flags;
ttype169681* T;
trope126007* R;
trope126007* Heaproot;
NI A;
};
struct tsym169677 {
  tidobj131009 Sup;
NU8 Kind;
union {
struct {ttypeseq169679* Typeinstcache;
} S1;
struct {TY169771* Procinstcache;
tscope169671* Scope;
} S2;
struct {TY169771* Usedgenerics;
tstrtable169651 Tab;
} S3;
} kindU;
NU16 Magic;
ttype169681* Typ;
tident131015* Name;
tlineinfo128308 Info;
tsym169677* Owner;
NU32 Flags;
tnode169647* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc169661 Loc;
tlib169665* Annex;
tnode169647* Constraint;
};
struct tidpair169689 {
tidobj131009* Key;
TNimObject* Val;
};
struct tidtable169693 {
NI Counter;
tidpairseq169691* Data;
};
struct templctx245006 {
tsym169677* Owner;
tsym169677* Gensymowner;
tidtable169693 Mapping;
};
struct TY71482 {
NimStringDesc* Field0;
NI Field1;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tcell38846 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38862 {
NI Len;
NI Cap;
tcell38846** D;
};
struct tcellset38858 {
NI Counter;
NI Max;
tpagedesc38854* Head;
tpagedesc38854** Data;
};
typedef tsmallchunk21643* TY22422[512];
typedef ttrunk21614* ttrunkbuckets21616[256];
struct tintset21618 {
ttrunkbuckets21616 Data;
};
struct tmemregion22410 {
NI Minlargeobj;
NI Maxlargeobj;
TY22422 Freesmallchunks;
tllchunk22404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21645* Freechunkslist;
tintset21618 Chunkstarts;
tavlnode22408* Root;
tavlnode22408* Deleted;
tavlnode22408* Last;
tavlnode22408* Freeavlnodes;
};
struct tgcstat40814 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40816 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38862 Zct;
tcellseq38862 Decstack;
tcellset38858 Cycleroots;
tcellseq38862 Tempstack;
NI Recgclock;
tmemregion22410 Region;
tgcstat40814 Stat;
};
struct ttype169681 {
  tidobj131009 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq169679* Sons;
tnode169647* N;
tsym169677* Destructor;
tsym169677* Owner;
tsym169677* Sym;
NI64 Size;
NI Align;
tloc169661 Loc;
};
struct tident131015 {
  tidobj131009 Sup;
NimStringDesc* S;
tident131015* Next;
NI H;
};
struct tinstantiation169667 {
tsym169677* Sym;
ttypeseq169679* Concretetypes;
TY169763* Usedby;
};
struct tscope169671 {
NI Depthlevel;
tstrtable169651 Symbols;
tscope169671* Parent;
};
struct trope126007 {
  TNimObject Sup;
trope126007* Left;
trope126007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry100011 {
  TNimObject Sup;
tlistentry100011* Prev;
tlistentry100011* Next;
};
struct tlib169665 {
  tlistentry100011 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope126007* Name;
tnode169647* Path;
};
typedef NI TY21621[8];
struct tpagedesc38854 {
tpagedesc38854* Next;
NI Key;
TY21621 Bits;
};
struct tbasechunk21641 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21643 {
  tbasechunk21641 Sup;
tsmallchunk21643* Next;
tsmallchunk21643* Prev;
tfreecell21633* Freelist;
NI Free;
NI Acc;
NF64 Data;
};
struct tllchunk22404 {
NI Size;
NI Acc;
tllchunk22404* Next;
};
struct tbigchunk21645 {
  tbasechunk21641 Sup;
tbigchunk21645* Next;
tbigchunk21645* Prev;
NI Align;
NF64 Data;
};
struct ttrunk21614 {
ttrunk21614* Next;
NI Key;
TY21621 Bits;
};
typedef tavlnode22408* TY22414[2];
struct tavlnode22408 {
TY22414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21633 {
tfreecell21633* Next;
NI Zerofield;
};
struct tnodeseq169641 {
  TGenericSeq Sup;
  tnode169647* data[SEQ_DECL_SIZE];
};
struct ttypeseq169679 {
  TGenericSeq Sup;
  ttype169681* data[SEQ_DECL_SIZE];
};
struct TY169771 {
  TGenericSeq Sup;
  tinstantiation169667* data[SEQ_DECL_SIZE];
};
struct tsymseq169649 {
  TGenericSeq Sup;
  tsym169677* data[SEQ_DECL_SIZE];
};
struct tidpairseq169691 {
  TGenericSeq Sup;
  tidpair169689 data[SEQ_DECL_SIZE];
};
struct TY169763 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, evaltemplateaux_245011)(tnode169647* templ, tnode169647* actual, templctx245006* c, tnode169647* result);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, len_170082)(tnode169647* n);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, add_170176)(tnode169647* father, tnode169647* son);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(tnode169647*, copytree_170059)(tnode169647* src);
N_NIMCALL(void, internalerror_129699)(NimStringDesc* errmsg);
N_NIMCALL(TNimObject*, idtableget_176137)(tidtable169693 t, tidobj131009* key);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
N_NIMCALL(tsym169677*, copysym_169969)(tsym169677* s, NIM_BOOL keepid);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38846*, usrtocell_42243)(void* usr);
static N_INLINE(void, rtladdzct_43402)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(void, idtableput_176147)(tidtable169693* t, tidobj131009* key, TNimObject* val);
N_NIMCALL(tnode169647*, newsymnode_171095)(tsym169677* sym, tlineinfo128308 info);
N_NIMCALL(tnode169647*, copynode_170055)(tnode169647* src);
static N_INLINE(NI, sonslen_170003)(tnode169647* n);
N_NIMCALL(tnode169647*, evaltemplateargs_245201)(tnode169647* n, tsym169677* s);
static N_INLINE(NI, sonslen_170007)(ttype169681* n);
N_NIMCALL(void, globalerror_129660)(tlineinfo128308 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(tnode169647*, newnodei_169921)(NU8 kind, tlineinfo128308 info);
N_NIMCALL(void, localerror_129673)(tlineinfo128308 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, addson_170029)(tnode169647* father, tnode169647* son);
N_NIMCALL(tnode169647*, evaltemplate_245280)(tnode169647* n, tsym169677* tmpl, tsym169677* gensymowner);
N_NIMCALL(void, initidtable_169942)(tidtable169693* x);
N_NIMCALL(tnode169647*, getbody_209576)(tsym169677* s);
static N_INLINE(NIM_BOOL, isatom_174442)(tnode169647* n);
N_NIMCALL(NimStringDesc*, rendertree_187046)(tnode169647* n, NU8 renderflags);
static N_INLINE(NI, safelen_170124)(tnode169647* n);
N_NIMCALL(NimStringDesc*, HEX24_129777)(TY71482 x);
static NIM_CONST TY169850 TMP3372 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3373, "sym", 3);
static NIM_CONST TY169850 TMP3374 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3375, "sons", 4);
STRING_LITERAL(TMP3377, "compiler/evaltempl.nim", 22);
NIM_CONST TY71482 TMP3376 = {((NimStringDesc*) &TMP3377),
34}
;
STRING_LITERAL(TMP3379, "", 0);
extern TFrame* frameptr_12027;
extern TNimType NTI169677; /* TSym */
extern tgcheap40816 gch_40842;
NI evaltemplatecounter_245278;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12027;
	frameptr_12027 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_12027 = (*frameptr_12027).prev;
}

static N_INLINE(NI, len_170082)(tnode169647* n) {
	NI result;
	nimfr("len", "ast.nim")
	result = 0;
	nimln(852, "ast.nim");
	{
		nimln(852, "ast.nim");
		if (((TMP3374[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(852, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(853, "ast.nim");
		nimln(853, "ast.nim");
		if (((TMP3374[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(tcell38846*, usrtocell_42243)(void* usr) {
	tcell38846* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	nimln(106, "gc.nim");
	result = ((tcell38846*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell38846))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_43402)(tcell38846* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(184, "gc.nim");
	addzct_42215(&gch_40842.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(236, "gc.nim");
	{
		tcell38846* c;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(237, "gc.nim");
		c = usrtocell_42243(src);
		nimln(157, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(239, "gc.nim");
	{
		tcell38846* c;
		nimln(684, "system.nim");
		nimln(684, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(240, "gc.nim");
		c = usrtocell_42243((*dest));
		nimln(241, "gc.nim");
		{
			nimln(155, "gc.nim");
			(*c).Refcount -= 8;
			nimln(156, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(242, "gc.nim");
			rtladdzct_43402(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(243, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(NI, sonslen_170003)(tnode169647* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1175, "ast.nim");
	{
		nimln(1175, "ast.nim");
		if (((TMP3374[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1175, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1176, "ast.nim");
		nimln(1176, "ast.nim");
		if (((TMP3374[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(void, evaltemplateaux_245011)(tnode169647* templ, tnode169647* actual, templctx245006* c, tnode169647* result) {
	nimfr("evalTemplateAux", "evaltempl.nim")
	nimln(23, "evaltempl.nim");
	switch ((*templ).Kind) {
	case ((NU8) 3):
	{
		tsym169677* s;
		nimln(25, "evaltempl.nim");
		if (!(((TMP3372[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3373));
		s = (*templ).kindU.S4.Sym;
		nimln(26, "evaltempl.nim");
		{
			nimln(26, "evaltempl.nim");
			if (!((*(*s).Owner).Sup.Id == (*(*c).Owner).Sup.Id)) goto LA4;
			nimln(27, "evaltempl.nim");
			{
				tnode169647* x;
				nimln(27, "evaltempl.nim");
				if (!((*s).Kind == ((NU8) 3))) goto LA8;
				nimln(28, "evaltempl.nim");
				if (((TMP3374[(*actual).Kind/8] &(1<<((*actual).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
				if ((NU)((*s).Position) >= (NU)((*actual).kindU.S6.Sons->Sup.len)) raiseIndexError();
				x = (*actual).kindU.S6.Sons->data[(*s).Position];
				nimln(29, "evaltempl.nim");
				{
					tnode169647* y_245052;
					NI i_245101;
					NI HEX3Atmp_245103;
					NI LOC14;
					NI res_245105;
					nimln(29, "evaltempl.nim");
					if (!((*x).Kind == ((NU8) 145))) goto LA12;
					y_245052 = 0;
					i_245101 = 0;
					HEX3Atmp_245103 = 0;
					nimln(1376, "ast.nim");
					nimln(1376, "ast.nim");
					nimln(1376, "ast.nim");
					LOC14 = len_170082(x);
					HEX3Atmp_245103 = subInt(LOC14, 1);
					nimln(1281, "system.nim");
					res_245105 = 0;
					nimln(1282, "system.nim");
					while (1) {
						nimln(1282, "system.nim");
						if (!(res_245105 <= HEX3Atmp_245103)) goto LA15;
						nimln(1281, "system.nim");
						i_245101 = res_245105;
						nimln(1376, "ast.nim");
						if (((TMP3374[(*x).Kind/8] &(1<<((*x).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
						if ((NU)(i_245101) >= (NU)((*x).kindU.S6.Sons->Sup.len)) raiseIndexError();
						y_245052 = (*x).kindU.S6.Sons->data[i_245101];
						nimln(30, "evaltempl.nim");
						add_170176(result, y_245052);
						nimln(1284, "system.nim");
						res_245105 = addInt(res_245105, 1);
					} LA15: ;
				}
				goto LA10;
				LA12: ;
				{
					tnode169647* LOC17;
					nimln(32, "evaltempl.nim");
					nimln(32, "evaltempl.nim");
					LOC17 = 0;
					LOC17 = copytree_170059(x);
					add_170176(result, LOC17);
				}
				LA10: ;
			}
			goto LA6;
			LA8: ;
			{
				tsym169677* x;
				TNimObject* LOC24;
				tnode169647* LOC29;
				nimln(793, "msgs.nim");
				{
					NimStringDesc* LOC23;
					nimln(793, "msgs.nim");
					nimln(716, "system.nim");
					if (!!((((*s).Flags &(1<<((((NU8) 31))&31)))!=0))) goto LA21;
					nimln(793, "msgs.nim");
					nimln(793, "msgs.nim");
					LOC23 = 0;
					LOC23 = HEX24_129777(TMP3376);
					internalerror_129699(LOC23);
				}
				LA21: ;
				nimln(35, "evaltempl.nim");
				nimln(35, "evaltempl.nim");
				LOC24 = 0;
				LOC24 = idtableget_176137((*c).Mapping, &s->Sup);
				if (LOC24) chckObj((*LOC24).m_type, (&NTI169677));
				x = ((tsym169677*) (LOC24));
				nimln(36, "evaltempl.nim");
				{
					nimln(36, "evaltempl.nim");
					if (!(x == NIM_NIL)) goto LA27;
					nimln(37, "evaltempl.nim");
					x = copysym_169969(s, NIM_FALSE);
					nimln(38, "evaltempl.nim");
					asgnRefNoCycle((void**) &(*x).Owner, (*c).Gensymowner);
					nimln(39, "evaltempl.nim");
					idtableput_176147(&(*c).Mapping, &s->Sup, &x->Sup.Sup);
				}
				LA27: ;
				nimln(40, "evaltempl.nim");
				nimln(40, "evaltempl.nim");
				LOC29 = 0;
				LOC29 = newsymnode_171095(x, (*templ).Info);
				add_170176(result, LOC29);
			}
			LA6: ;
		}
		goto LA2;
		LA4: ;
		{
			tnode169647* LOC31;
			nimln(42, "evaltempl.nim");
			nimln(42, "evaltempl.nim");
			LOC31 = 0;
			LOC31 = copynode_170055(templ);
			add_170176(result, LOC31);
		}
		LA2: ;
	}
	break;
	case ((NU8) 0) ... ((NU8) 2):
	case ((NU8) 4) ... ((NU8) 23):
	{
		tnode169647* LOC33;
		nimln(44, "evaltempl.nim");
		nimln(44, "evaltempl.nim");
		LOC33 = 0;
		LOC33 = copynode_170055(templ);
		add_170176(result, LOC33);
	}
	break;
	default:
	{
		tnode169647* res;
		NI i_245089;
		NI HEX3Atmp_245106;
		NI LOC35;
		NI TMP3378;
		NI res_245108;
		nimln(46, "evaltempl.nim");
		res = copynode_170055(templ);
		i_245089 = 0;
		HEX3Atmp_245106 = 0;
		nimln(47, "evaltempl.nim");
		nimln(47, "evaltempl.nim");
		nimln(47, "evaltempl.nim");
		LOC35 = sonslen_170003(templ);
		TMP3378 = subInt(LOC35, 1);
		HEX3Atmp_245106 = (NI64)(TMP3378);
		nimln(1274, "system.nim");
		res_245108 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_245108 <= HEX3Atmp_245106)) goto LA36;
			nimln(1274, "system.nim");
			i_245089 = res_245108;
			nimln(48, "evaltempl.nim");
			if (((TMP3374[(*templ).Kind/8] &(1<<((*templ).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
			if ((NU)(i_245089) >= (NU)((*templ).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_245011((*templ).kindU.S6.Sons->data[i_245089], actual, c, res);
			nimln(1277, "system.nim");
			res_245108 = addInt(res_245108, 1);
		} LA36: ;
		nimln(49, "evaltempl.nim");
		add_170176(result, res);
	}
	break;
	}
	popFrame();
}

static N_INLINE(NI, sonslen_170007)(ttype169681* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1161, "ast.nim");
	{
		nimln(1161, "ast.nim");
		if (!(*n).Sons == 0) goto LA3;
		nimln(1161, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA3: ;
	{
		nimln(1162, "ast.nim");
		nimln(1162, "ast.nim");
		result = (*n).Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode169647*, evaltemplateargs_245201)(tnode169647* n, tsym169677* s) {
	tnode169647* result;
	NI a;
	NI f;
	NI i_245218;
	NI HEX3Atmp_245271;
	NI TMP3380;
	NI res_245273;
	nimfr("evalTemplateArgs", "evaltempl.nim")
	result = 0;
	a = 0;
	nimln(81, "evaltempl.nim");
	switch ((*n).Kind) {
	case ((NU8) 27):
	case ((NU8) 29):
	case ((NU8) 30):
	case ((NU8) 31):
	case ((NU8) 26):
	case ((NU8) 28):
	{
		nimln(83, "evaltempl.nim");
		a = sonslen_170003(n);
	}
	break;
	default:
	{
		nimln(84, "evaltempl.nim");
		a = 0;
	}
	break;
	}
	nimln(85, "evaltempl.nim");
	f = sonslen_170007((*s).Typ);
	nimln(86, "evaltempl.nim");
	{
		nimln(692, "system.nim");
		if (!(f < a)) goto LA5;
		nimln(86, "evaltempl.nim");
		globalerror_129660((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP3379));
	}
	LA5: ;
	nimln(88, "evaltempl.nim");
	result = newnodei_169921(((NU8) 145), (*n).Info);
	i_245218 = 0;
	HEX3Atmp_245271 = 0;
	nimln(89, "evaltempl.nim");
	nimln(89, "evaltempl.nim");
	TMP3380 = subInt(f, 1);
	HEX3Atmp_245271 = (NI64)(TMP3380);
	nimln(1274, "system.nim");
	res_245273 = 1;
	nimln(1275, "system.nim");
	while (1) {
		tnode169647* arg;
		nimln(1275, "system.nim");
		if (!(res_245273 <= HEX3Atmp_245271)) goto LA7;
		nimln(1274, "system.nim");
		i_245218 = res_245273;
		nimln(90, "evaltempl.nim");
		nimln(90, "evaltempl.nim");
		{
			nimln(90, "evaltempl.nim");
			if (!(i_245218 < a)) goto LA10;
			if (((TMP3374[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
			if ((NU)(i_245218) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			arg = (*n).kindU.S6.Sons->data[i_245218];
		}
		goto LA8;
		LA10: ;
		{
			nimln(90, "evaltempl.nim");
			if (((TMP3374[(*(*(*s).Typ).N).Kind/8] &(1<<((*(*(*s).Typ).N).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
			if ((NU)(i_245218) >= (NU)((*(*(*s).Typ).N).kindU.S6.Sons->Sup.len)) raiseIndexError();
			if (!(((TMP3372[(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_245218]).Kind/8] &(1<<((*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_245218]).Kind%8)))!=0))) raiseFieldError(((NimStringDesc*) &TMP3373));
			arg = copytree_170059((*(*(*(*(*s).Typ).N).kindU.S6.Sons->data[i_245218]).kindU.S4.Sym).Ast);
		}
		LA8: ;
		nimln(91, "evaltempl.nim");
		{
			NIM_BOOL LOC15;
			nimln(91, "evaltempl.nim");
			nimln(91, "evaltempl.nim");
			LOC15 = (arg == NIM_NIL);
			if (LOC15) goto LA16;
			nimln(91, "evaltempl.nim");
			LOC15 = ((*arg).Kind == ((NU8) 1));
			LA16: ;
			if (!LOC15) goto LA17;
			nimln(92, "evaltempl.nim");
			localerror_129673((*n).Info, ((NU16) 133), ((NimStringDesc*) &TMP3379));
		}
		LA17: ;
		nimln(93, "evaltempl.nim");
		addson_170029(result, arg);
		nimln(1277, "system.nim");
		res_245273 = addInt(res_245273, 1);
	} LA7: ;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isatom_174442)(tnode169647* n) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	nimfr("isAtom", "ast.nim")
	result = 0;
	nimln(1379, "ast.nim");
	nimln(1379, "ast.nim");
	nimln(688, "system.nim");
	LOC1 = (((NU8) 0) <= (*n).Kind);
	if (!(LOC1)) goto LA2;
	nimln(1379, "ast.nim");
	LOC1 = ((*n).Kind <= ((NU8) 23));
	LA2: ;
	result = LOC1;
	popFrame();
	return result;
}

static N_INLINE(NI, safelen_170124)(tnode169647* n) {
	NI result;
	nimfr("safeLen", "ast.nim")
	result = 0;
	nimln(857, "ast.nim");
	{
		NIM_BOOL LOC3;
		nimln(857, "ast.nim");
		nimln(716, "system.nim");
		LOC3 = ((*n).Kind >= ((NU8) 0) && (*n).Kind <= ((NU8) 23));
		if (LOC3) goto LA4;
		nimln(857, "ast.nim");
		if (((TMP3374[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
		LOC3 = (*n).kindU.S6.Sons == 0;
		LA4: ;
		if (!LOC3) goto LA5;
		nimln(857, "ast.nim");
		result = 0;
	}
	goto LA1;
	LA5: ;
	{
		nimln(858, "ast.nim");
		nimln(858, "ast.nim");
		if (((TMP3374[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
		result = (*n).kindU.S6.Sons->Sup.len;
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(tnode169647*, evaltemplate_245280)(tnode169647* n, tsym169677* tmpl, tsym169677* gensymowner) {
	tnode169647* result;
	tnode169647* args;
	templctx245006 ctx;
	tnode169647* body;
	nimfr("evalTemplate", "evaltempl.nim")
	result = 0;
	nimln(99, "evaltempl.nim");
	evaltemplatecounter_245278 = addInt(evaltemplatecounter_245278, 1);
	nimln(100, "evaltempl.nim");
	{
		nimln(692, "system.nim");
		if (!(100 < evaltemplatecounter_245278)) goto LA3;
		nimln(101, "evaltempl.nim");
		globalerror_129660((*n).Info, ((NU16) 183), ((NimStringDesc*) &TMP3379));
		nimln(102, "evaltempl.nim");
		result = n;
	}
	LA3: ;
	nimln(105, "evaltempl.nim");
	args = evaltemplateargs_245201(n, tmpl);
	memset((void*)&ctx, 0, sizeof(ctx));
	nimln(107, "evaltempl.nim");
	ctx.Owner = tmpl;
	nimln(108, "evaltempl.nim");
	ctx.Gensymowner = gensymowner;
	nimln(109, "evaltempl.nim");
	initidtable_169942(&ctx.Mapping);
	nimln(111, "evaltempl.nim");
	body = getbody_209576(tmpl);
	nimln(112, "evaltempl.nim");
	{
		NIM_BOOL LOC7;
		nimln(112, "evaltempl.nim");
		LOC7 = isatom_174442(body);
		if (!LOC7) goto LA8;
		nimln(113, "evaltempl.nim");
		result = newnodei_169921(((NU8) 37), (*body).Info);
		nimln(114, "evaltempl.nim");
		evaltemplateaux_245011(body, args, &ctx, result);
		nimln(115, "evaltempl.nim");
		{
			NI LOC12;
			nimln(115, "evaltempl.nim");
			nimln(115, "evaltempl.nim");
			LOC12 = len_170082(result);
			if (!(LOC12 == 1)) goto LA13;
			nimln(115, "evaltempl.nim");
			if (((TMP3374[(*result).Kind/8] &(1<<((*result).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
			if ((NU)(0) >= (NU)((*result).kindU.S6.Sons->Sup.len)) raiseIndexError();
			result = (*result).kindU.S6.Sons->data[0];
		}
		goto LA10;
		LA13: ;
		{
			NimStringDesc* LOC16;
			nimln(117, "evaltempl.nim");
			nimln(118, "evaltempl.nim");
			LOC16 = 0;
			LOC16 = rendertree_187046(result, 4);
			globalerror_129660((*result).Info, ((NU16) 1), LOC16);
		}
		LA10: ;
	}
	goto LA5;
	LA8: ;
	{
		NI i_245326;
		NI HEX3Atmp_245351;
		NI LOC18;
		NI TMP3381;
		NI res_245353;
		nimln(120, "evaltempl.nim");
		result = copynode_170055(body);
		i_245326 = 0;
		HEX3Atmp_245351 = 0;
		nimln(122, "evaltempl.nim");
		nimln(122, "evaltempl.nim");
		nimln(122, "evaltempl.nim");
		LOC18 = safelen_170124(body);
		TMP3381 = subInt(LOC18, 1);
		HEX3Atmp_245351 = (NI64)(TMP3381);
		nimln(1274, "system.nim");
		res_245353 = 0;
		nimln(1275, "system.nim");
		while (1) {
			nimln(1275, "system.nim");
			if (!(res_245353 <= HEX3Atmp_245351)) goto LA19;
			nimln(1274, "system.nim");
			i_245326 = res_245353;
			nimln(123, "evaltempl.nim");
			if (((TMP3374[(*body).Kind/8] &(1<<((*body).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3375));
			if ((NU)(i_245326) >= (NU)((*body).kindU.S6.Sons->Sup.len)) raiseIndexError();
			evaltemplateaux_245011((*body).kindU.S6.Sons->data[i_245326], args, &ctx, result);
			nimln(1277, "system.nim");
			res_245353 = addInt(res_245353, 1);
		} LA19: ;
	}
	LA5: ;
	nimln(125, "evaltempl.nim");
	evaltemplatecounter_245278 = subInt(evaltemplatecounter_245278, 1);
	popFrame();
	return result;
}
N_NOINLINE(void, evaltemplInit)(void) {
	nimfr("evaltempl", "evaltempl.nim")
	nimln(95, "evaltempl.nim");
	evaltemplatecounter_245278 = 0;
	popFrame();
}

N_NOINLINE(void, evaltemplDatInit)(void) {
}
