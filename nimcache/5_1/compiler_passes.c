/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tpass223015 tpass223015;
typedef struct tpasscontext223003 tpasscontext223003;
typedef struct tsym172689 tsym172689;
typedef struct trodreader212023 trodreader212023;
typedef struct tnode172659 tnode172659;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct ttypeseq172691 ttypeseq172691;
typedef struct ttype172693 ttype172693;
typedef struct TGenericSeq TGenericSeq;
typedef struct tscope172683 tscope172683;
typedef struct TY172786 TY172786;
typedef struct tinstantiation172679 tinstantiation172679;
typedef struct tstrtable172663 tstrtable172663;
typedef struct tsymseq172661 tsymseq172661;
typedef struct tident141017 tident141017;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct tloc172673 tloc172673;
typedef struct trope121007 trope121007;
typedef struct tlib172677 tlib172677;
typedef struct NimStringDesc NimStringDesc;
typedef struct tnodeseq172653 tnodeseq172653;
typedef struct tpassdata223017 tpassdata223017;
typedef struct TY9552 TY9552;
typedef struct tllstream162204 tllstream162204;
typedef struct tparsers198026 tparsers198026;
typedef struct tparser186203 tparser186203;
typedef struct tlexer165166 tlexer165166;
typedef struct tbaselexer163018 tbaselexer163018;
typedef struct ttoken165164 ttoken165164;
typedef struct TY172775 TY172775;
typedef struct tindex212021 tindex212021;
typedef struct tiitable179211 tiitable179211;
typedef struct tiipairseq179209 tiipairseq179209;
typedef struct tiipair179207 tiipair179207;
typedef struct tidtable172705 tidtable172705;
typedef struct tidpairseq172703 tidpairseq172703;
typedef struct tidpair172701 tidpair172701;
typedef struct tmemfile210204 tmemfile210204;
typedef struct tlistentry109014 tlistentry109014;
typedef N_NIMCALL_PTR(tpasscontext223003*, tpassopen223007) (tsym172689* module);
typedef N_NIMCALL_PTR(tpasscontext223003*, tpassopencached223009) (tsym172689* module, trodreader212023* rd);
typedef N_NIMCALL_PTR(tnode172659*, tpassprocess223013) (tpasscontext223003* p, tnode172659* toplevelstmt);
typedef N_NIMCALL_PTR(tnode172659*, tpassclose223011) (tpasscontext223003* p, tnode172659* n);
struct tpass223015 {
tpassopen223007 Field0;
tpassopencached223009 Field1;
tpassprocess223013 Field2;
tpassclose223011 Field3;
};
typedef N_NIMCALL_PTR(tsym172689*, TY223056) (tsym172689* m, NI32 fileidx);
typedef N_NIMCALL_PTR(tnode172659*, TY223061) (tsym172689* m, NI32 fileidx);
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct tstrtable172663 {
NI Counter;
tsymseq172661* Data;
};
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tloc172673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype172693* T;
trope121007* R;
trope121007* Heaproot;
NI A;
};
struct tsym172689 {
  tidobj141011 Sup;
NU8 Kind;
union {
struct {ttypeseq172691* Typeinstcache;
tscope172683* Typscope;
} S1;
struct {TY172786* Procinstcache;
tscope172683* Scope;
} S2;
struct {TY172786* Usedgenerics;
tstrtable172663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype172693* Typ;
tident141017* Name;
tlineinfo137509 Info;
tsym172689* Owner;
NU32 Flags;
tnode172659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc172673 Loc;
tlib172677* Annex;
tnode172659* Constraint;
};
struct ttype172693 {
  tidobj141011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq172691* Sons;
tnode172659* N;
tsym172689* Destructor;
tsym172689* Owner;
tsym172689* Sym;
NI64 Size;
NI Align;
tloc172673 Loc;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
struct tnode172659 {
ttype172693* Typ;
tlineinfo137509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym172689* Sym;
} S4;
struct {tident141017* Ident;
} S5;
struct {tnodeseq172653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NU8 TY172865[20];
typedef tpass223015 TY223158[10];
struct tpassdata223017 {
tnode172659* Field0;
tnode172659* Field1;
};
struct tpasscontext223003 {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct tbaselexer163018 {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream162204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct tlexer165166 {
  tbaselexer163018 Sup;
NI32 Fileidx;
NI Indentahead;
};
struct ttoken165164 {
NU8 Toktype;
NI Indent;
tident141017* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct tparser186203 {
NI Currind;
NIM_BOOL Firsttok;
tlexer165166 Lex;
ttoken165164 Tok;
};
struct tparsers198026 {
NU8 Skin;
tparser186203 Parser;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef tpasscontext223003* tpasscontextarray223155[10];
struct tllstream162204 {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct tiipair179207 {
NI Key;
NI Val;
};
struct tiitable179211 {
NI Counter;
tiipairseq179209* Data;
};
struct tindex212021 {
NI Lastidxkey;
NI Lastidxval;
tiitable179211 Tab;
NimStringDesc* R;
NI Offset;
};
struct tidpair172701 {
tidobj141011* Key;
TNimObject* Val;
};
struct tidtable172705 {
NI Counter;
tidpairseq172703* Data;
};
struct tmemfile210204 {
void* Mem;
NI Size;
int Handle;
};
struct trodreader212023 {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY172775* Moddeps;
TY172775* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex212021 Index;
tindex212021 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable172705 Syms;
tmemfile210204 Memfile;
tsymseq172661* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct tscope172683 {
NI Depthlevel;
tstrtable172663 Symbols;
tnodeseq172653* Usingsyms;
tscope172683* Parent;
};
struct tinstantiation172679 {
tsym172689* Sym;
ttypeseq172691* Concretetypes;
TY172775* Usedby;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct trope121007 {
  TNimObject Sup;
trope121007* Left;
trope121007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
};
struct tlib172677 {
  tlistentry109014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope121007* Name;
tnode172659* Path;
};
struct ttypeseq172691 {
  TGenericSeq Sup;
  ttype172693* data[SEQ_DECL_SIZE];
};
struct TY172786 {
  TGenericSeq Sup;
  tinstantiation172679* data[SEQ_DECL_SIZE];
};
struct tsymseq172661 {
  TGenericSeq Sup;
  tsym172689* data[SEQ_DECL_SIZE];
};
struct tnodeseq172653 {
  TGenericSeq Sup;
  tnode172659* data[SEQ_DECL_SIZE];
};
struct TY9552 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY172775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct tiipairseq179209 {
  TGenericSeq Sup;
  tiipair179207 data[SEQ_DECL_SIZE];
};
struct tidpairseq172703 {
  TGenericSeq Sup;
  tidpair172701 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tpass223015, makepass_223040)(tpassopen223007 open, tpassopencached223009 opencached, tpassprocess223013 process, tpassclose223011 close);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, skipcodegen_223074)(tnode172659* n);
N_NIMCALL(NIM_BOOL, astneeded_223081)(tsym172689* s);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NIM_BOOL, needsglobalanalysis_222604)(void);
N_NIMCALL(void, clearpasses_223165)(void);
N_NIMCALL(void, registerpass_223169)(tpass223015 p);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, carrypass_223184)(tpass223015 p, tsym172689* module, tpassdata223017 m, tpassdata223017* Result);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(void, carrypasses_223202)(tnode172659* nodes, tsym172689* module, tpass223015* passes, NI passesLen0);
N_NIMCALL(void, openpasses_223243)(tpasscontext223003** a, tsym172689* module);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, openpassescached_223271)(tpasscontext223003** a, tsym172689* module, trodreader212023* rd);
N_NIMCALL(void, closepasses_223312)(tpasscontext223003** a);
N_NIMCALL(NIM_BOOL, processtoplevelstmt_223341)(tnode172659* n, tpasscontext223003** a);
N_NIMCALL(void, processtoplevelstmtcached_223379)(tnode172659* n, tpasscontext223003** a);
N_NIMCALL(void, closepassescached_223408)(tpasscontext223003** a);
N_NIMCALL(void, processimplicits_223443)(TY9552* implicits, NU8 nodekind, tpasscontext223003** a);
N_NIMCALL(tnode172659*, newnodei_172940)(NU8 kind, tlineinfo137509 info);
N_NIMCALL(tnode172659*, newstrnode_172926)(NU8 kind, NimStringDesc* strval);
N_NIMCALL(void, addson_173048)(tnode172659* father, tnode172659* son);
N_NIMCALL(void, processmodule_223049)(tsym172689* module, tllstream162204* stream, trodreader212023* rd);
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpath_138708)(NI32 fileidx);
N_NIMCALL(tllstream162204*, llstreamopen_162227)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, rawmessage_139191)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_198034)(tparsers198026* p, NI32 fileidx, tllstream162204* inputstream);
N_NIMCALL(tnode172659*, parsetoplevelstmt_198051)(tparsers198026* p);
N_NIMCALL(void, closeparsers_198041)(tparsers198026* p);
N_NIMCALL(void, idsynchronizationpoint_171440)(NI idrange);
N_NIMCALL(tnode172659*, loadinitsection_212065)(trodreader212023* r);
static N_INLINE(NI, sonslen_173022)(tnode172659* n);
static NIM_CONST TY172865 TMP3128 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP3129, "sons", 4);
extern TFrame* frameptr_12037;
TY223056 gimportmodule_223060;
TY223061 gincludefile_223065;
extern NI gerrorcounter_138074;
TY223158 gpasses_223160;
NI gpasseslen_223161;
extern tlineinfo137509 gcmdlineinfo_138009;
extern TNimType NTI198026; /* TParsers */
extern TY9552* implicitimports_114242;
extern TY9552* implicitincludes_114261;
extern TNimType NTI1009; /* TObject */
TNimType NTI223003; /* TPassContext */
extern TNimType NTI133; /* bool */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(tpass223015, makepass_223040)(tpassopen223007 open, tpassopencached223009 opencached, tpassprocess223013 process, tpassclose223011 close) {
	tpass223015 result;
	nimfr("makePass", "passes.nim")
	memset((void*)&result, 0, sizeof(result));
	nimln(44, "passes.nim");
	result.Field0 = open;
	nimln(45, "passes.nim");
	result.Field1 = opencached;
	nimln(46, "passes.nim");
	result.Field3 = close;
	nimln(47, "passes.nim");
	result.Field2 = process;
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, skipcodegen_223074)(tnode172659* n) {
	NIM_BOOL result;
	nimfr("skipCodegen", "passes.nim")
	result = 0;
	nimln(66, "passes.nim");
	nimln(706, "system.nim");
	result = (0 < gerrorcounter_138074);
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, astneeded_223081)(tsym172689* s) {
	NIM_BOOL result;
	nimfr("astNeeded", "passes.nim")
	result = 0;
	nimln(73, "passes.nim");
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		NIM_BOOL LOC5;
		nimln(75, "passes.nim");
		LOC3 = 0;
		nimln(74, "passes.nim");
		LOC4 = 0;
		nimln(73, "passes.nim");
		LOC5 = 0;
		nimln(730, "system.nim");
		LOC5 = ((12288 &(1<<(((*s).Kind)&31)))!=0);
		if (!(LOC5)) goto LA6;
		nimln(74, "passes.nim");
		nimln(74, "passes.nim");
		LOC5 = ((8454144 & (*s).Flags) == 0);
		LA6: ;
		LOC4 = LOC5;
		if (!(LOC4)) goto LA7;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		LOC4 = !(((*(*s).Typ).Callconv == ((NU8) 5)));
		LA7: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA8;
		nimln(76, "passes.nim");
		if (((TMP3128[(*(*s).Ast).Kind/8] &(1<<((*(*s).Ast).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3129));
		if ((NU)(2) >= (NU)((*(*s).Ast).kindU.S6.Sons->Sup.len)) raiseIndexError();
		LOC3 = ((*(*(*s).Ast).kindU.S6.Sons->data[2]).Kind == ((NU8) 1));
		LA8: ;
		if (!LOC3) goto LA9;
		nimln(77, "passes.nim");
		result = needsglobalanalysis_222604();
	}	goto LA1;
	LA9: ;
	{
		nimln(79, "passes.nim");
		result = NIM_TRUE;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(void, clearpasses_223165)(void) {
	nimfr("clearPasses", "passes.nim")
	nimln(92, "passes.nim");
	gpasseslen_223161 = 0;
	popFrame();
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(void, registerpass_223169)(tpass223015 p) {
	nimfr("registerPass", "passes.nim")
	nimln(95, "passes.nim");
	if ((NU)(gpasseslen_223161) > (NU)(9)) raiseIndexError();
	gpasses_223160[(gpasseslen_223161)- 0] = p;
	nimln(96, "passes.nim");
	gpasseslen_223161 = addInt(gpasseslen_223161, 1);
	popFrame();
}
N_NIMCALL(void, carrypass_223184)(tpass223015 p, tsym172689* module, tpassdata223017 m, tpassdata223017* Result) {
	tpasscontext223003* c;
	nimfr("carryPass", "passes.nim")
	nimln(99, "passes.nim");
	c = p.Field0(module);
	nimln(100, "passes.nim");
	unsureAsgnRef((void**) &(*Result).Field0, p.Field2(c, m.Field0));
	nimln(101, "passes.nim");
	nimln(101, "passes.nim");
	{
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((p.Field3 == NIM_NIL))) goto LA3;
		nimln(101, "passes.nim");
		unsureAsgnRef((void**) &(*Result).Field1, p.Field3(c, m.Field1));
	}	goto LA1;
	LA3: ;
	{
		unsureAsgnRef((void**) &(*Result).Field1, m.Field1);
	}	LA1: ;
	popFrame();
}
N_NIMCALL(void, carrypasses_223202)(tnode172659* nodes, tsym172689* module, tpass223015* passes, NI passesLen0) {
	tpassdata223017 passdata;
	tpass223015 pass_223236;
	NI i_223239;
	nimfr("carryPasses", "passes.nim")
	memset((void*)&passdata, 0, sizeof(passdata));
	nimln(106, "passes.nim");
	passdata.Field0 = nodes;
	memset((void*)&pass_223236, 0, sizeof(pass_223236));
	nimln(1377, "system.nim");
	i_223239 = 0;
	nimln(1378, "system.nim");
	while (1) {
		tpassdata223017 LOC2;
		nimln(1378, "system.nim");
		nimln(1378, "system.nim");
		if (!(i_223239 < passesLen0)) goto LA1;
		nimln(1379, "system.nim");
		if ((NU)(i_223239) >= (NU)(passesLen0)) raiseIndexError();
		pass_223236 = passes[i_223239];
		nimln(108, "passes.nim");
		memset((void*)&LOC2, 0, sizeof(LOC2));
		carrypass_223184(pass_223236, module, passdata, &LOC2);		passdata.Field0 = LOC2.Field0;
		passdata.Field1 = LOC2.Field1;
		nimln(1380, "system.nim");
		i_223239 = addInt(i_223239, 1);
	} LA1: ;
	popFrame();
}
static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) - (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU32) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(void, openpasses_223243)(tpasscontext223003** a, tsym172689* module) {
	NI i_223257;
	NI HEX3Atmp_223264;
	NI TMP3130;
	NI res_223266;
	nimfr("openPasses", "passes.nim")
	i_223257 = 0;
	HEX3Atmp_223264 = 0;
	nimln(111, "passes.nim");
	nimln(111, "passes.nim");
	TMP3130 = subInt(gpasseslen_223161, 1);
	HEX3Atmp_223264 = (NI32)(TMP3130);
	nimln(1301, "system.nim");
	res_223266 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_223266 <= HEX3Atmp_223264)) goto LA1;
		nimln(1301, "system.nim");
		i_223257 = res_223266;
		nimln(112, "passes.nim");
		{
			nimln(112, "passes.nim");
			nimln(112, "passes.nim");
			if ((NU)(i_223257) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_223160[(i_223257)- 0].Field0 == 0)) goto LA4;
			nimln(113, "passes.nim");
			if ((NU)(i_223257) > (NU)(9)) raiseIndexError();
			if ((NU)(i_223257) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_223257)- 0], gpasses_223160[(i_223257)- 0].Field0(module));
		}		goto LA2;
		LA4: ;
		{
			nimln(114, "passes.nim");
			if ((NU)(i_223257) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_223257)- 0], NIM_NIL);
		}		LA2: ;
		nimln(1304, "system.nim");
		res_223266 = addInt(res_223266, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, openpassescached_223271)(tpasscontext223003** a, tsym172689* module, trodreader212023* rd) {
	NI i_223286;
	NI HEX3Atmp_223305;
	NI TMP3131;
	NI res_223307;
	nimfr("openPassesCached", "passes.nim")
	i_223286 = 0;
	HEX3Atmp_223305 = 0;
	nimln(117, "passes.nim");
	nimln(117, "passes.nim");
	TMP3131 = subInt(gpasseslen_223161, 1);
	HEX3Atmp_223305 = (NI32)(TMP3131);
	nimln(1301, "system.nim");
	res_223307 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_223307 <= HEX3Atmp_223305)) goto LA1;
		nimln(1301, "system.nim");
		i_223286 = res_223307;
		nimln(118, "passes.nim");
		{
			nimln(118, "passes.nim");
			nimln(118, "passes.nim");
			if ((NU)(i_223286) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_223160[(i_223286)- 0].Field1 == 0)) goto LA4;
			nimln(119, "passes.nim");
			if ((NU)(i_223286) > (NU)(9)) raiseIndexError();
			if ((NU)(i_223286) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_223286)- 0], gpasses_223160[(i_223286)- 0].Field1(module, rd));
			nimln(120, "passes.nim");
			{
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				if ((NU)(i_223286) > (NU)(9)) raiseIndexError();
				if (!!((a[(i_223286)- 0] == NIM_NIL))) goto LA8;
				nimln(121, "passes.nim");
				if ((NU)(i_223286) > (NU)(9)) raiseIndexError();
				(*a[(i_223286)- 0]).Fromcache = NIM_TRUE;
			}			LA8: ;
		}		goto LA2;
		LA4: ;
		{
			nimln(123, "passes.nim");
			if ((NU)(i_223286) > (NU)(9)) raiseIndexError();
			unsureAsgnRef((void**) &a[(i_223286)- 0], NIM_NIL);
		}		LA2: ;
		nimln(1304, "system.nim");
		res_223307 = addInt(res_223307, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, closepasses_223312)(tpasscontext223003** a) {
	tnode172659* m;
	NI i_223326;
	NI HEX3Atmp_223334;
	NI TMP3132;
	NI res_223336;
	nimfr("closePasses", "passes.nim")
	nimln(126, "passes.nim");
	m = NIM_NIL;
	i_223326 = 0;
	HEX3Atmp_223334 = 0;
	nimln(127, "passes.nim");
	nimln(127, "passes.nim");
	TMP3132 = subInt(gpasseslen_223161, 1);
	HEX3Atmp_223334 = (NI32)(TMP3132);
	nimln(1301, "system.nim");
	res_223336 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_223336 <= HEX3Atmp_223334)) goto LA1;
		nimln(1301, "system.nim");
		i_223326 = res_223336;
		nimln(128, "passes.nim");
		{
			nimln(128, "passes.nim");
			nimln(128, "passes.nim");
			if ((NU)(i_223326) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_223160[(i_223326)- 0].Field3 == 0)) goto LA4;
			nimln(128, "passes.nim");
			if ((NU)(i_223326) > (NU)(9)) raiseIndexError();
			if ((NU)(i_223326) > (NU)(9)) raiseIndexError();
			m = gpasses_223160[(i_223326)- 0].Field3(a[(i_223326)- 0], m);
		}		LA4: ;
		nimln(129, "passes.nim");
		if ((NU)(i_223326) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_223326)- 0], NIM_NIL);
		nimln(1304, "system.nim");
		res_223336 = addInt(res_223336, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(NIM_BOOL, processtoplevelstmt_223341)(tnode172659* n, tpasscontext223003** a) {
	NIM_BOOL result;
	tnode172659* m;
	NI i_223357;
	NI HEX3Atmp_223372;
	NI TMP3133;
	NI res_223374;
	nimfr("processTopLevelStmt", "passes.nim")
	result = 0;
	nimln(133, "passes.nim");
	m = n;
	i_223357 = 0;
	HEX3Atmp_223372 = 0;
	nimln(134, "passes.nim");
	nimln(134, "passes.nim");
	TMP3133 = subInt(gpasseslen_223161, 1);
	HEX3Atmp_223372 = (NI32)(TMP3133);
	nimln(1301, "system.nim");
	res_223374 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_223374 <= HEX3Atmp_223372)) goto LA1;
		nimln(1301, "system.nim");
		i_223357 = res_223374;
		nimln(135, "passes.nim");
		{
			nimln(135, "passes.nim");
			nimln(135, "passes.nim");
			if ((NU)(i_223357) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_223160[(i_223357)- 0].Field2 == 0)) goto LA4;
			nimln(136, "passes.nim");
			if ((NU)(i_223357) > (NU)(9)) raiseIndexError();
			if ((NU)(i_223357) > (NU)(9)) raiseIndexError();
			m = gpasses_223160[(i_223357)- 0].Field2(a[(i_223357)- 0], m);
			nimln(137, "passes.nim");
			{
				nimln(137, "passes.nim");
				if (!m == 0) goto LA8;
				nimln(137, "passes.nim");
				nimln(137, "passes.nim");
				result = NIM_FALSE;
				goto BeforeRet;
			}			LA8: ;
		}		LA4: ;
		nimln(1304, "system.nim");
		res_223374 = addInt(res_223374, 1);
	} LA1: ;
	nimln(138, "passes.nim");
	result = NIM_TRUE;
	BeforeRet: ;	popFrame();
	return result;
}
N_NIMCALL(void, processtoplevelstmtcached_223379)(tnode172659* n, tpasscontext223003** a) {
	tnode172659* m;
	NI i_223394;
	NI HEX3Atmp_223401;
	NI TMP3134;
	NI res_223403;
	nimfr("processTopLevelStmtCached", "passes.nim")
	nimln(142, "passes.nim");
	m = n;
	i_223394 = 0;
	HEX3Atmp_223401 = 0;
	nimln(143, "passes.nim");
	nimln(143, "passes.nim");
	TMP3134 = subInt(gpasseslen_223161, 1);
	HEX3Atmp_223401 = (NI32)(TMP3134);
	nimln(1301, "system.nim");
	res_223403 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_223403 <= HEX3Atmp_223401)) goto LA1;
		nimln(1301, "system.nim");
		i_223394 = res_223403;
		nimln(144, "passes.nim");
		{
			nimln(144, "passes.nim");
			nimln(144, "passes.nim");
			if ((NU)(i_223394) > (NU)(9)) raiseIndexError();
			if (!!(gpasses_223160[(i_223394)- 0].Field1 == 0)) goto LA4;
			nimln(144, "passes.nim");
			if ((NU)(i_223394) > (NU)(9)) raiseIndexError();
			if ((NU)(i_223394) > (NU)(9)) raiseIndexError();
			m = gpasses_223160[(i_223394)- 0].Field2(a[(i_223394)- 0], m);
		}		LA4: ;
		nimln(1304, "system.nim");
		res_223403 = addInt(res_223403, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, closepassescached_223408)(tpasscontext223003** a) {
	tnode172659* m;
	NI i_223422;
	NI HEX3Atmp_223436;
	NI TMP3135;
	NI res_223438;
	nimfr("closePassesCached", "passes.nim")
	nimln(147, "passes.nim");
	m = NIM_NIL;
	i_223422 = 0;
	HEX3Atmp_223436 = 0;
	nimln(148, "passes.nim");
	nimln(148, "passes.nim");
	TMP3135 = subInt(gpasseslen_223161, 1);
	HEX3Atmp_223436 = (NI32)(TMP3135);
	nimln(1301, "system.nim");
	res_223438 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_223438 <= HEX3Atmp_223436)) goto LA1;
		nimln(1301, "system.nim");
		i_223422 = res_223438;
		nimln(149, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(149, "passes.nim");
			LOC4 = 0;
			nimln(149, "passes.nim");
			nimln(149, "passes.nim");
			if ((NU)(i_223422) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_223160[(i_223422)- 0].Field1 == 0);
			if (!(LOC4)) goto LA5;
			nimln(149, "passes.nim");
			nimln(149, "passes.nim");
			if ((NU)(i_223422) > (NU)(9)) raiseIndexError();
			LOC4 = !(gpasses_223160[(i_223422)- 0].Field3 == 0);
			LA5: ;
			if (!LOC4) goto LA6;
			nimln(150, "passes.nim");
			if ((NU)(i_223422) > (NU)(9)) raiseIndexError();
			if ((NU)(i_223422) > (NU)(9)) raiseIndexError();
			m = gpasses_223160[(i_223422)- 0].Field3(a[(i_223422)- 0], m);
		}		LA6: ;
		nimln(151, "passes.nim");
		if ((NU)(i_223422) > (NU)(9)) raiseIndexError();
		unsureAsgnRef((void**) &a[(i_223422)- 0], NIM_NIL);
		nimln(1304, "system.nim");
		res_223438 = addInt(res_223438, 1);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, processimplicits_223443)(TY9552* implicits, NU8 nodekind, tpasscontext223003** a) {
	NimStringDesc* module_223459;
	NI i_223463;
	nimfr("processImplicits", "passes.nim")
	module_223459 = 0;
	nimln(1393, "system.nim");
	i_223463 = 0;
	nimln(1394, "system.nim");
	while (1) {
		tnode172659* importstmt;
		tnode172659* str;
		nimln(1394, "system.nim");
		nimln(1394, "system.nim");
		if (!(i_223463 < implicits->Sup.len)) goto LA1;
		nimln(1395, "system.nim");
		if ((NU)(i_223463) >= (NU)(implicits->Sup.len)) raiseIndexError();
		module_223459 = implicits->data[i_223463];
		nimln(156, "passes.nim");
		importstmt = newnodei_172940(nodekind, gcmdlineinfo_138009);
		nimln(157, "passes.nim");
		str = newstrnode_172926(((NU8) 20), module_223459);
		nimln(158, "passes.nim");
		(*str).Info = gcmdlineinfo_138009;
		nimln(159, "passes.nim");
		addson_173048(importstmt, str);		nimln(160, "passes.nim");
		{
			NIM_BOOL LOC4;
			nimln(160, "passes.nim");
			nimln(160, "passes.nim");
			LOC4 = 0;
			LOC4 = processtoplevelstmt_223341(importstmt, a);
			if (!!(LOC4)) goto LA5;
			nimln(160, "passes.nim");
			goto LA1;
		}		LA5: ;
		nimln(1396, "system.nim");
		i_223463 = addInt(i_223463, 1);
	} LA1: ;
	popFrame();
}
static N_INLINE(NI, sonslen_173022)(tnode172659* n) {
	NI result;
	nimfr("sonsLen", "ast.nim")
	result = 0;
	nimln(1209, "ast.nim");
	{
		nimln(1209, "ast.nim");
		if (((TMP3128[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3129));
		if (!(*n).kindU.S6.Sons == 0) goto LA3;
		nimln(1209, "ast.nim");
		result = 0;
	}	goto LA1;
	LA3: ;
	{
		nimln(1210, "ast.nim");
		nimln(1210, "ast.nim");
		if (((TMP3128[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3129));
		result = (*n).kindU.S6.Sons->Sup.len;
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(void, processmodule_223049)(tsym172689* module, tllstream162204* stream, trodreader212023* rd) {
	tparsers198026 p;
	tpasscontextarray223155 a;
	tllstream162204* s;
	NI32 fileidx;
	nimfr("processModule", "passes.nim")
	memset((void*)&p, 0, sizeof(p));
	objectInit(&p, (&NTI198026));
	memset((void*)a, 0, sizeof(a));
	s = 0;
	nimln(167, "passes.nim");
	fileidx = ((NI32) ((*module).Position));
	nimln(168, "passes.nim");
	{
		nimln(168, "passes.nim");
		if (!(rd == NIM_NIL)) goto LA3;
		nimln(169, "passes.nim");
		openpasses_223243(a, module);		nimln(170, "passes.nim");
		{
			NimStringDesc* filename;
			nimln(170, "passes.nim");
			if (!(stream == NIM_NIL)) goto LA7;
			nimln(171, "passes.nim");
			filename = tofullpath_138708(fileidx);
			nimln(172, "passes.nim");
			s = llstreamopen_162227(filename, ((NU8) 0));
			nimln(173, "passes.nim");
			{
				nimln(173, "passes.nim");
				if (!(s == NIM_NIL)) goto LA11;
				nimln(174, "passes.nim");
				rawmessage_139191(((NU16) 3), filename);				nimln(175, "passes.nim");
				goto BeforeRet;
			}			LA11: ;
		}		goto LA5;
		LA7: ;
		{
			nimln(177, "passes.nim");
			s = stream;
		}		LA5: ;
		nimln(178, "passes.nim");
		while (1) {
			nimln(179, "passes.nim");
			openparsers_198034(&p, fileidx, s);			nimln(181, "passes.nim");
			{
				nimln(731, "system.nim");
				nimln(731, "system.nim");
				if (!!((((*module).Flags &(1<<((((NU8) 13))&31)))!=0))) goto LA17;
				nimln(186, "passes.nim");
				processimplicits_223443(implicitimports_114242, ((NU8) 115), a);				nimln(187, "passes.nim");
				processimplicits_223443(implicitincludes_114261, ((NU8) 120), a);			}			LA17: ;
			nimln(189, "passes.nim");
			while (1) {
				tnode172659* n;
				nimln(190, "passes.nim");
				n = parsetoplevelstmt_198051(&p);
				nimln(191, "passes.nim");
				{
					nimln(191, "passes.nim");
					if (!((*n).Kind == ((NU8) 1))) goto LA22;
					nimln(191, "passes.nim");
					goto LA19;
				}				LA22: ;
				nimln(192, "passes.nim");
				{
					NIM_BOOL LOC26;
					nimln(192, "passes.nim");
					nimln(192, "passes.nim");
					LOC26 = 0;
					LOC26 = processtoplevelstmt_223341(n, a);
					if (!!(LOC26)) goto LA27;
					nimln(192, "passes.nim");
					goto LA19;
				}				LA27: ;
			} LA19: ;
			nimln(194, "passes.nim");
			closeparsers_198041(&p);			nimln(195, "passes.nim");
			{
				nimln(698, "system.nim");
				nimln(698, "system.nim");
				if (!!(((*s).Kind == ((NU8) 3)))) goto LA31;
				nimln(195, "passes.nim");
				goto LA14;
			}			LA31: ;
		} LA14: ;
		nimln(196, "passes.nim");
		closepasses_223312(a);		nimln(198, "passes.nim");
		idsynchronizationpoint_171440(1000);	}	goto LA1;
	LA3: ;
	{
		tnode172659* n;
		NI i_223560;
		NI HEX3Atmp_223578;
		NI LOC34;
		NI TMP3136;
		NI res_223580;
		nimln(200, "passes.nim");
		openpassescached_223271(a, module, rd);		nimln(201, "passes.nim");
		n = loadinitsection_212065(rd);
		i_223560 = 0;
		HEX3Atmp_223578 = 0;
		nimln(202, "passes.nim");
		nimln(202, "passes.nim");
		nimln(202, "passes.nim");
		LOC34 = 0;
		LOC34 = sonslen_173022(n);
		TMP3136 = subInt(LOC34, 1);
		HEX3Atmp_223578 = (NI32)(TMP3136);
		nimln(1301, "system.nim");
		res_223580 = 0;
		nimln(1302, "system.nim");
		while (1) {
			nimln(1302, "system.nim");
			if (!(res_223580 <= HEX3Atmp_223578)) goto LA35;
			nimln(1301, "system.nim");
			i_223560 = res_223580;
			nimln(202, "passes.nim");
			if (((TMP3128[(*n).Kind/8] &(1<<((*n).Kind%8)))!=0)) raiseFieldError(((NimStringDesc*) &TMP3129));
			if ((NU)(i_223560) >= (NU)((*n).kindU.S6.Sons->Sup.len)) raiseIndexError();
			processtoplevelstmtcached_223379((*n).kindU.S6.Sons->data[i_223560], a);			nimln(1304, "system.nim");
			res_223580 = addInt(res_223580, 1);
		} LA35: ;
		nimln(203, "passes.nim");
		closepassescached_223408(a);	}	LA1: ;
	BeforeRet: ;	popFrame();
}N_NOINLINE(void, compilerpassesInit)(void) {
	nimfr("passes", "passes.nim")
	popFrame();
}

N_NOINLINE(void, compilerpassesDatInit)(void) {
static TNimNode TMP3016[1];
NTI223003.size = sizeof(tpasscontext223003);
NTI223003.kind = 17;
NTI223003.base = (&NTI1009);
NTI223003.flags = 3;
TMP3016[0].kind = 1;
TMP3016[0].offset = offsetof(tpasscontext223003, Fromcache);
TMP3016[0].typ = (&NTI133);
TMP3016[0].name = "fromCache";
NTI223003.node = &TMP3016[0];
}
