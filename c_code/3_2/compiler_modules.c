/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tsymseq209820 tsymseq209820;
typedef struct tsym209848 tsym209848;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
typedef struct TY553058 TY553058;
typedef struct tmoduleinmemory553017 tmoduleinmemory553017;
typedef struct TY209938 TY209938;
typedef struct tnode209818 tnode209818;
typedef struct tidobj185015 tidobj185015;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq209850 ttypeseq209850;
typedef struct ttype209854 ttype209854;
typedef struct tscope209842 tscope209842;
typedef struct TY209949 TY209949;
typedef struct tinstantiation209838 tinstantiation209838;
typedef struct tstrtable209822 tstrtable209822;
typedef struct tident185021 tident185021;
typedef struct tlineinfo181340 tlineinfo181340;
typedef struct tloc209832 tloc209832;
typedef struct trope178009 trope178009;
typedef struct tlib209836 tlib209836;
typedef struct NimStringDesc NimStringDesc;
typedef struct TY118804 TY118804;
typedef struct trodreader255030 trodreader255030;
typedef struct tllstream196204 tllstream196204;
typedef struct TY85745 TY85745;
typedef struct TY485151 TY485151;
typedef struct tcgen485035 tcgen485035;
typedef struct tbasechunk27038 tbasechunk27038;
typedef struct tfreecell27030 tfreecell27030;
typedef struct tnodeseq209812 tnodeseq209812;
typedef struct tlistentry128022 tlistentry128022;
typedef struct tindex255028 tindex255028;
typedef struct tiitable218274 tiitable218274;
typedef struct tiipairseq218272 tiipairseq218272;
typedef struct tiipair218270 tiipair218270;
typedef struct tidtable209866 tidtable209866;
typedef struct tidpairseq209864 tidpairseq209864;
typedef struct tidpair209862 tidpair209862;
typedef struct memfile253208 memfile253208;
typedef struct tpasscontext264005 tpasscontext264005;
typedef struct intset206056 intset206056;
typedef struct ttrunk206052 ttrunk206052;
typedef struct ttrunkseq206054 ttrunkseq206054;
typedef struct tlinkedlist128028 tlinkedlist128028;
typedef struct tcproc485031 tcproc485031;
typedef struct tnodetable209878 tnodetable209878;
typedef struct tnodepairseq209876 tnodepairseq209876;
typedef struct tnodepair209874 tnodepair209874;
typedef struct TY181353 TY181353;
typedef struct TY485102 TY485102;
typedef struct tblock485029 tblock485029;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
struct  tmoduleinmemory553017  {
NF Compiledat;
NI32 Crc;
TY209938* Deps;
NU8 Needsrecompile;
NU8 Crcstatus;
};
typedef N_NIMCALL_PTR(tnode209818*, TY264069) (tsym209848* m, NI32 fileidx);
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable209822  {
NI Counter;
tsymseq209820* Data;
};
struct  tlineinfo181340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc209832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype209854* T;
trope178009* R;
trope178009* Heaproot;
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
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(tsym209848*, TY264064) (tsym209848* m, NI32 fileidx);
struct TY118804 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct TY85745 {
NimStringDesc* Field0;
NI Field1;
};
typedef NI TY27020[8];
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
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
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
struct  tiipair218270  {
NI Key;
NI Val;
};
struct  tiitable218274  {
NI Counter;
tiipairseq218272* Data;
};
struct  tindex255028  {
NI Lastidxkey;
NI Lastidxval;
tiitable218274 Tab;
NimStringDesc* R;
NI Offset;
};
struct  tidpair209862  {
tidobj185015* Key;
TNimObject* Val;
};
struct  tidtable209866  {
NI Counter;
tidpairseq209864* Data;
};
struct  memfile253208  {
void* Mem;
NI Size;
int Handle;
};
struct  trodreader255030  {
  TNimObject Sup;
NI Pos;
NCSTRING S;
NU32 Options;
NU8 Reason;
TY209938* Moddeps;
TY209938* Files;
NI Dataidx;
NI Convertersidx;
NI Initidx;
NI Interfidx;
NI Compilerprocsidx;
NI Methodsidx;
NimStringDesc* Filename;
tindex255028 Index;
tindex255028 Imports;
NI Readerindex;
NI Line;
NI Moduleid;
tidtable209866 Syms;
memfile253208 Memfile;
tsymseq209820* Methods;
NimStringDesc* Origfile;
NIM_BOOL Inviewmode;
};
struct  tllstream196204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tpasscontext264005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef trope178009* tcfilesections485019[18];
struct  intset206056  {
NI Counter;
NI Max;
ttrunk206052* Head;
ttrunkseq206054* Data;
};
struct  tlinkedlist128028  {
tlistentry128022* Head;
tlistentry128022* Tail;
NI Counter;
};
struct  tnodepair209874  {
NI H;
tnode209818* Key;
NI Val;
};
struct  tnodetable209878  {
NI Counter;
tnodepairseq209876* Data;
};
typedef trope178009* TY485139[10];
struct  tcgen485035  {
  tpasscontext264005 Sup;
tsym209848* Module;
NimStringDesc* Filename;
tcfilesections485019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable209866 Typecache;
tidtable209866 Forwtypecache;
intset206056 Declaredthings;
intset206056 Declaredprotos;
tlinkedlist128028 Headerfiles;
intset206056 Typeinfomarker;
tcproc485031* Initproc;
tcproc485031* Postinitproc;
tcproc485031* Preinitproc;
ttypeseq209850* Typestack;
tnodetable209878 Datacache;
tsymseq209820* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope178009* Typenodesname;
trope178009* Nimtypesname;
NI Labels;
TY485139 Extensionloaders;
trope178009* Injectstmt;
};
struct  tfreecell27030  {
tfreecell27030* Next;
NI Zerofield;
};
struct  ttrunk206052  {
ttrunk206052* Next;
NI Key;
TY27020 Bits;
};
typedef trope178009* tcprocsections485023[3];
struct  tblock485029  {
NI Id;
trope178009* Label;
tcprocsections485023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc485031  {
tsym209848* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq209812* Nestedtrystmts;
NI Inexceptblock;
TY181353* Finallysafepoints;
NI Labels;
TY485102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen485035* Module;
NI Withinloop;
NI Splitdecls;
NI Gcframeid;
trope178009* Gcframetype;
};
struct tsymseq209820 {
  TGenericSeq Sup;
  tsym209848* data[SEQ_DECL_SIZE];
};
struct TY209938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
struct TY553058 {
  TGenericSeq Sup;
  tmoduleinmemory553017 data[SEQ_DECL_SIZE];
};
struct ttypeseq209850 {
  TGenericSeq Sup;
  ttype209854* data[SEQ_DECL_SIZE];
};
struct TY209949 {
  TGenericSeq Sup;
  tinstantiation209838* data[SEQ_DECL_SIZE];
};
struct TY485151 {
  TGenericSeq Sup;
  tcgen485035* data[SEQ_DECL_SIZE];
};
struct tnodeseq209812 {
  TGenericSeq Sup;
  tnode209818* data[SEQ_DECL_SIZE];
};
struct tiipairseq218272 {
  TGenericSeq Sup;
  tiipair218270 data[SEQ_DECL_SIZE];
};
struct tidpairseq209864 {
  TGenericSeq Sup;
  tidpair209862 data[SEQ_DECL_SIZE];
};
struct ttrunkseq206054 {
  TGenericSeq Sup;
  ttrunk206052* data[SEQ_DECL_SIZE];
};
struct tnodepairseq209876 {
  TGenericSeq Sup;
  tnodepair209874 data[SEQ_DECL_SIZE];
};
struct TY181353 {
  TGenericSeq Sup;
  trope178009* data[SEQ_DECL_SIZE];
};
struct TY485102 {
  TGenericSeq Sup;
  tblock485029 data[SEQ_DECL_SIZE];
};
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45548*, usrtocell_49446)(void* usr);
static N_INLINE(void, rtladdzct_51004)(tcell45548* c);
N_NOINLINE(void, addzct_49417)(tcellseq45564* s, tcell45548* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP1002)(void* p, NI op);
N_NIMCALL(tnode209818*, includemodule_553917)(tsym209848* s, NI32 fileidx);
N_NIMCALL(tnode209818*, parsefile_240041)(NI32 fileidx);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(void, adddep_553176)(tsym209848* x, NI32 dep);
N_NIMCALL(void, safeadd_553211)(TY209938** x_553219, NI32 y_553223);
N_NIMCALL(void, docrc_553158)(NI32 fileidx);
N_NIMCALL(NI32, crcfromfile_177046)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, tofilename_182625)(NI32 fileidx);
N_NIMCALL(tsym209848*, importmodule_553875)(tsym209848* s, NI32 fileidx);
N_NIMCALL(tsym209848*, compilemodule_553760)(NI32 fileidx, NU32 flags);
N_NIMCALL(tsym209848*, getmodule_553085)(NI32 fileidx);
N_NIMCALL(tsym209848*, newmodule_553649)(NI32 fileidx);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, tofullpath_182637)(NI32 fileidx);
N_NIMCALL(tident185021*, getident_185472)(NimStringDesc* identifier);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY118804* Result);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NIM_BOOL, isnimidentifier_199325)(NimStringDesc* s);
N_NIMCALL(void, rawmessage_183415)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(tlineinfo181340, newlineinfo_181943)(NI32 fileinfoidx, NI line, NI col);
N_NIMCALL(tsym209848*, newsym_210076)(NU8 symkind, tident185021* name, tsym209848* owner, tlineinfo181340 info);
N_NIMCALL(NimStringDesc*, getpackagename_170825)(NimStringDesc* path);
N_NIMCALL(void, initstrtable_210155)(tstrtable209822* x);
N_NIMCALL(void, strtableadd_218103)(tstrtable209822* t, tsym209848* n);
N_NIMCALL(trodreader255030*, handlesymbolfile_255071)(tsym209848* module);
N_NIMCALL(void, internalerror_183688)(NimStringDesc* errmsg);
static N_INLINE(NI, getid_208404)(void);
N_NIMCALL(void, processmodule_264056)(tsym209848* module, tllstream196204* stream, trodreader255030* rd);
N_NIMCALL(NU8, checkdepmem_553490)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, crcchanged_553113)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, HEX24_183808)(TY85745 x_183812);
N_NIMCALL(void, resetmodule_553397)(NI32 fileidx);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51825)(tcell45548* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45548* c);
static N_INLINE(void, rtladdcycleroot_50229)(tcell45548* c);
N_NOINLINE(void, incl_46471)(tcellset45560* s, tcell45548* cell);
static N_INLINE(void, decref_51404)(tcell45548* c);
N_NIMCALL(NIM_BOOL, HEX3DHEX3D_553227)(TY209938* x_553233, TY209938* y_553238);
N_NIMCALL(void, localerror_183637)(tlineinfo181340 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, wantmainmodule_554005)(void);
N_NIMCALL(void, fatal_183605)(tlineinfo181340 info, NU16 msg, NimStringDesc* arg);
N_NIMCALL(NI32, fileinfoidx_181930)(NimStringDesc* filename);
N_NIMCALL(NimStringDesc*, nosaddFileExt)(NimStringDesc* filename, NimStringDesc* ext);
N_NIMCALL(NimStringDesc*, HEX2F_118499)(NimStringDesc* head, NimStringDesc* tail);
N_NIMCALL(void, compilesystemmodule_553979)(void);
N_NIMCALL(void, resetpackagecache_170605)(void);
STRING_LITERAL(TMP1435, "handleSymbolFile should have set the module\'s ID", 48);
STRING_LITERAL(TMP1438, "compiler/modules.nim", 20);
NIM_CONST TY85745 TMP1437 = {((NimStringDesc*) &TMP1438),
41}
;
STRING_LITERAL(TMP4139, "", 0);
STRING_LITERAL(TMP4140, "nim", 3);
STRING_LITERAL(TMP4141, "system.nim", 10);
STRING_LITERAL(TMP4851, "stdin", 5);
tsymseq209820* gcompiledmodules_553057;
extern TNimType NTI209820; /* TSymSeq */
extern tgcheap47816 gch_47844;
TY553058* gmemcachedata_553079;
TNimType NTI553017; /* TModuleInMemory */
extern TNimType NTI128; /* float */
extern TNimType NTI177010; /* TCrc32 */
extern TNimType NTI209938; /* seq[int32] */
TNimType NTI553013; /* TNeedRecompile */
TNimType NTI553015; /* TCrcStatus */
TNimType NTI553058; /* seq[TModuleInMemory] */
extern TY264069 gincludefile_264073;
extern NU32 gglobaloptions_170128;
extern TY264064 gimportmodule_264068;
extern TNimType NTI209816; /* PSym */
extern TNimType NTI209848; /* TSym */
extern NU8 gcmd_170130;
extern NI gfrontendid_208012;
extern NF glastcmdtime_170141;
extern TY485151* gmodules_485172;
tsym209848* stdinmodule_554083;
extern NimStringDesc* gprojectfull_170239;
extern tlineinfo181340 gcmdlineinfo_182006;
extern NI32 gprojectmainidx_170240;
extern NimStringDesc* libpath_170236;
extern tsym209848* systemmodule_261019;
extern NI32 systemfileidx_181443;

static N_INLINE(tcell45548*, usrtocell_49446)(void* usr) {
	tcell45548* result;
	result = 0;
	result = ((tcell45548*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45548))))));
	return result;
}

static N_INLINE(void, rtladdzct_51004)(tcell45548* c) {
	addzct_49417((&gch_47844.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45548* c;
	c = usrtocell_49446(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_51004(c);
	}
	LA3: ;
}
N_NIMCALL(void, TMP1002)(void* p, NI op) {
	TY553058* a;
	NI LOC1;
	a = (TY553058*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Deps, op);
	}
}

N_NIMCALL(void, adddep_553176)(tsym209848* x, NI32 dep) {
	{
		if (!(gmemcachedata_553079->Sup.len <= ((NI) (dep)))) goto LA3;
		gmemcachedata_553079 = (TY553058*) setLengthSeq(&(gmemcachedata_553079)->Sup, sizeof(tmoduleinmemory553017), ((NI) ((NI32)(dep + ((NI32) 1)))));
	}
	LA3: ;
	safeadd_553211((&gmemcachedata_553079->data[(*x).Position].Deps), dep);
}

N_NIMCALL(void, docrc_553158)(NI32 fileidx) {
	{
		NimStringDesc* LOC5;
		if (!(gmemcachedata_553079->data[fileidx].Crcstatus == ((NU8) 0))) goto LA3;
		LOC5 = 0;
		LOC5 = tofilename_182625(fileidx);
		gmemcachedata_553079->data[fileidx].Crc = crcfromfile_177046(LOC5);
	}
	LA3: ;
}

N_NIMCALL(tnode209818*, includemodule_553917)(tsym209848* s, NI32 fileidx) {
	tnode209818* result;
	result = 0;
	result = parsefile_240041(fileidx);
	{
		if (!((gglobaloptions_170128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		{
			if (!(gmemcachedata_553079->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_553079 = (TY553058*) setLengthSeq(&(gmemcachedata_553079)->Sup, sizeof(tmoduleinmemory553017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		adddep_553176(s, fileidx);
		docrc_553158(fileidx);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tsym209848*, getmodule_553085)(NI32 fileidx) {
	tsym209848* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gcompiledmodules_553057->Sup.len);
		LA4: ;
		if (!LOC3) goto LA5;
		result = gcompiledmodules_553057->data[fileidx];
	}
	LA5: ;
	return result;
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_51004(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(tsym209848*, newmodule_553649)(NI32 fileidx) {
	tsym209848* result;
	NimStringDesc* filename;
	TY118804 LOC1;
	NimStringDesc* LOC7;
	tident185021* LOC8;
	result = 0;
	result = (tsym209848*) newObj((&NTI209816), sizeof(tsym209848));
	(*result).Sup.Sup.m_type = (&NTI209848);
	(*result).Sup.Id = -1;
	(*result).Kind = ((NU8) 6);
	filename = tofullpath_182637(fileidx);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	nossplitFile(filename, (&LOC1));
	asgnRefNoCycle((void**) (&(*result).Name), getident_185472(LOC1.Field1));
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = isnimidentifier_199325((*(*result).Name).S);
		if (!!(LOC4)) goto LA5;
		rawmessage_183415(((NU16) 21), (*(*result).Name).S);
	}
	LA5: ;
	(*result).Info = newlineinfo_181943(fileidx, 1, 1);
	LOC7 = 0;
	LOC7 = getpackagename_170825(filename);
	LOC8 = 0;
	LOC8 = getident_185472(LOC7);
	asgnRefNoCycle((void**) (&(*result).Owner), newsym_210076(((NU8) 24), LOC8, NIM_NIL, (*result).Info));
	(*result).Position = ((NI) (fileidx));
	{
		if (!(gmemcachedata_553079->Sup.len <= ((NI) (fileidx)))) goto LA11;
		gmemcachedata_553079 = (TY553058*) setLengthSeq(&(gmemcachedata_553079)->Sup, sizeof(tmoduleinmemory553017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA11: ;
	{
		if (!(gcompiledmodules_553057->Sup.len <= ((NI) (fileidx)))) goto LA15;
		gcompiledmodules_553057 = (tsymseq209820*) setLengthSeq(&(gcompiledmodules_553057)->Sup, sizeof(tsym209848*), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
	}
	LA15: ;
	asgnRefNoCycle((void**) (&gcompiledmodules_553057->data[(*result).Position]), result);
	(*result).Flags |= ((NI32)1)<<((((NU8) 0))%(sizeof(NI32)*8));
	initstrtable_210155((&(*result).kindU.S3.Tab));
	strtableadd_218103((&(*result).kindU.S3.Tab), result);
	return result;
}

static N_INLINE(NI, getid_208404)(void) {
	NI result;
	result = 0;
	result = gfrontendid_208012;
	gfrontendid_208012 += 1;
	return result;
}

N_NIMCALL(NIM_BOOL, crcchanged_553113)(NI32 fileidx) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC7;
		LOC3 = 0;
		LOC3 = (((NI32) 0) <= fileidx);
		if (!(LOC3)) goto LA4;
		LOC3 = (((NI) (fileidx)) < gmemcachedata_553079->Sup.len);
		LA4: ;
		if (!!(LOC3)) goto LA5;
		LOC7 = 0;
		LOC7 = HEX24_183808(TMP1437);
		internalerror_183688(LOC7);
	}
	LA5: ;
	switch (gmemcachedata_553079->data[fileidx].Crcstatus) {
	case ((NU8) 2):
	{
		result = NIM_TRUE;
	}
	break;
	case ((NU8) 3):
	{
		result = NIM_FALSE;
	}
	break;
	case ((NU8) 1):
	{
		NI32 newcrc;
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = tofilename_182625(fileidx);
		newcrc = crcfromfile_177046(LOC11);
		result = !((newcrc == gmemcachedata_553079->data[fileidx].Crc));
		gmemcachedata_553079->data[fileidx].Crc = newcrc;
		{
			if (!result) goto LA14;
			gmemcachedata_553079->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA12;
		LA14: ;
		{
			gmemcachedata_553079->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA12: ;
	}
	break;
	case ((NU8) 0):
	{
		NimStringDesc* LOC18;
		LOC18 = 0;
		LOC18 = tofilename_182625(fileidx);
		gmemcachedata_553079->data[fileidx].Crc = crcfromfile_177046(LOC18);
		result = NIM_TRUE;
		{
			if (!result) goto LA21;
			gmemcachedata_553079->data[fileidx].Crcstatus = ((NU8) 2);
		}
		goto LA19;
		LA21: ;
		{
			gmemcachedata_553079->data[fileidx].Crcstatus = ((NU8) 3);
		}
		LA19: ;
	}
	break;
	}
	return result;
}

static N_INLINE(NIM_BOOL, canbecycleroot_49467)(tcell45548* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50229)(tcell45548* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_46471((&gch_47844.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, incref_51825)(tcell45548* c) {
	(*c).Refcount = (NI)((NU64)((*c).Refcount) + (NU64)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49467(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50229(c);
	}
	LA4: ;
}

static N_INLINE(void, decref_51404)(tcell45548* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_51004(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49467(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50229(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell45548* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49446(src);
		incref_51825(LOC5);
	}
	LA3: ;
	{
		tcell45548* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49446((*dest));
		decref_51404(LOC10);
	}
	LA8: ;
	(*dest) = src;
}

N_NIMCALL(void, resetmodule_553397)(NI32 fileidx) {
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gmemcachedata_553079->Sup.len))))) goto LA3;
		gmemcachedata_553079->data[fileidx].Needsrecompile = ((NU8) 2);
	}
	LA3: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gcompiledmodules_553057->Sup.len))))) goto LA7;
		asgnRefNoCycle((void**) (&gcompiledmodules_553057->data[fileidx]), NIM_NIL);
	}
	LA7: ;
	{
		if (!((NU64)(((NI64) (fileidx))) < (NU64)(((NI64) (gmodules_485172->Sup.len))))) goto LA11;
		asgnRef((void**) (&gmodules_485172->data[fileidx]), NIM_NIL);
	}
	LA11: ;
}

N_NIMCALL(NU8, checkdepmem_553490)(NI32 fileidx) {
	NU8 result;
{	result = 0;
	{
		if (!!((gmemcachedata_553079->data[fileidx].Needsrecompile == ((NU8) 0)))) goto LA3;
		result = gmemcachedata_553079->data[fileidx].Needsrecompile;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = ((gglobaloptions_170128 &(1<<((((NU8) 1))&31)))!=0);
		if (LOC7) goto LA8;
		LOC7 = crcchanged_553113(fileidx);
		LA8: ;
		if (!LOC7) goto LA9;
		resetmodule_553397(fileidx);
		result = ((NU8) 2);
		goto BeforeRet;
	}
	LA9: ;
	{
		NIM_BOOL LOC13;
		LOC13 = 0;
		LOC13 = HEX3DHEX3D_553227(gmemcachedata_553079->data[fileidx].Deps, NIM_NIL);
		if (!!(LOC13)) goto LA14;
		gmemcachedata_553079->data[fileidx].Needsrecompile = ((NU8) 3);
		{
			NI32 dep_553611;
			TY209938* HEX3Atmp_553628;
			NI i_553631;
			NI l_553633;
			dep_553611 = 0;
			HEX3Atmp_553628 = 0;
			HEX3Atmp_553628 = gmemcachedata_553079->data[fileidx].Deps;
			i_553631 = 0;
			l_553633 = HEX3Atmp_553628->Sup.len;
			{
				while (1) {
					NU8 d;
					if (!(i_553631 < l_553633)) goto LA18;
					dep_553611 = HEX3Atmp_553628->data[i_553631];
					d = checkdepmem_553490(dep_553611);
					{
						if (!((20 &(1<<((d)&7)))!=0)) goto LA21;
						resetmodule_553397(fileidx);
						result = ((NU8) 2);
						goto BeforeRet;
					}
					LA21: ;
					i_553631 += 1;
				} LA18: ;
			}
		}
	}
	LA14: ;
	gmemcachedata_553079->data[fileidx].Needsrecompile = ((NU8) 1);
	result = ((NU8) 1);
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym209848*, compilemodule_553760)(NI32 fileidx, NU32 flags) {
	tsym209848* result;
{	result = 0;
	result = getmodule_553085(fileidx);
	{
		trodreader255030* rd;
		if (!(result == NIM_NIL)) goto LA3;
		{
			if (!(gmemcachedata_553079->Sup.len <= ((NI) (fileidx)))) goto LA7;
			gmemcachedata_553079 = (TY553058*) setLengthSeq(&(gmemcachedata_553079)->Sup, sizeof(tmoduleinmemory553017), ((NI) ((NI32)(fileidx + ((NI32) 1)))));
		}
		LA7: ;
		gmemcachedata_553079->data[fileidx].Needsrecompile = ((NU8) 3);
		result = newmodule_553649(fileidx);
		rd = 0;
		(*result).Flags = ((*result).Flags | flags);
		{
			if (!((18438 &(1<<((gcmd_170130)&31)))!=0)) goto LA11;
			rd = handlesymbolfile_255071(result);
			{
				if (!((*result).Sup.Id < 0)) goto LA15;
				internalerror_183688(((NimStringDesc*) &TMP1435));
				goto BeforeRet;
			}
			LA15: ;
		}
		goto LA9;
		LA11: ;
		{
			(*result).Sup.Id = getid_208404();
		}
		LA9: ;
		processmodule_264056(result, NIM_NIL, rd);
		{
			if (!((gglobaloptions_170128 &(1<<((((NU8) 15))&31)))!=0)) goto LA20;
			gmemcachedata_553079->data[fileidx].Compiledat = glastcmdtime_170141;
			gmemcachedata_553079->data[fileidx].Needsrecompile = ((NU8) 4);
			docrc_553158(fileidx);
		}
		LA20: ;
	}
	goto LA1;
	LA3: ;
	{
		{
			NU8 LOC25;
			LOC25 = 0;
			LOC25 = checkdepmem_553490(fileidx);
			if (!(LOC25 == ((NU8) 2))) goto LA26;
			result = compilemodule_553760(fileidx, flags);
		}
		goto LA23;
		LA26: ;
		{
			result = gcompiledmodules_553057->data[fileidx];
		}
		LA23: ;
	}
	LA1: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tsym209848*, importmodule_553875)(tsym209848* s, NI32 fileidx) {
	tsym209848* result;
	result = 0;
	result = compilemodule_553760(fileidx, 0);
	{
		if (!((gglobaloptions_170128 &(1<<((((NU8) 15))&31)))!=0)) goto LA3;
		adddep_553176(s, fileidx);
	}
	LA3: ;
	{
		if (!(((*result).Flags &(1<<((((NU8) 13))&31)))!=0)) goto LA7;
		localerror_183637((*result).Info, ((NU16) 40), (*(*result).Name).S);
	}
	LA7: ;
	return result;
}

N_NIMCALL(void, wantmainmodule_554005)(void) {
	NimStringDesc* LOC5;
	{
		if (!(gprojectfull_170239->Sup.len == 0)) goto LA3;
		fatal_183605(gcmdlineinfo_182006, ((NU16) 186), ((NimStringDesc*) &TMP4139));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = nosaddFileExt(gprojectfull_170239, ((NimStringDesc*) &TMP4140));
	gprojectmainidx_170240 = fileinfoidx_181930(LOC5);
}

N_NIMCALL(void, compilesystemmodule_553979)(void) {
	{
		NimStringDesc* LOC5;
		tsym209848* LOC6;
		if (!(systemmodule_261019 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = HEX2F_118499(libpath_170236, ((NimStringDesc*) &TMP4141));
		systemfileidx_181443 = fileinfoidx_181930(LOC5);
		LOC6 = 0;
		LOC6 = compilemodule_553760(systemfileidx_181443, 8192);
	}
	LA3: ;
}

N_NIMCALL(void, compileproject_554068)(NI32 projectfileidx) {
	NI32 systemfileidx;
	NimStringDesc* LOC1;
	NI32 projectfile;
	wantmainmodule_554005();
	LOC1 = 0;
	LOC1 = HEX2F_118499(libpath_170236, ((NimStringDesc*) &TMP4141));
	systemfileidx = fileinfoidx_181930(LOC1);
	{
		if (!(projectfileidx < ((NI32) 0))) goto LA4;
		projectfile = gprojectmainidx_170240;
	}
	goto LA2;
	LA4: ;
	{
		projectfile = projectfileidx;
	}
	LA2: ;
	{
		tsym209848* LOC11;
		if (!(projectfile == systemfileidx)) goto LA9;
		LOC11 = 0;
		LOC11 = compilemodule_553760(projectfile, 12288);
	}
	goto LA7;
	LA9: ;
	{
		tsym209848* LOC13;
		compilesystemmodule_553979();
		LOC13 = 0;
		LOC13 = compilemodule_553760(projectfile, 4096);
	}
	LA7: ;
}

N_NIMCALL(tsym209848*, makestdinmodule_554088)(void) {
	tsym209848* result;
	result = 0;
	{
		NI32 LOC5;
		if (!(stdinmodule_554083 == NIM_NIL)) goto LA3;
		LOC5 = 0;
		LOC5 = fileinfoidx_181930(((NimStringDesc*) &TMP4851));
		asgnRefNoCycle((void**) (&stdinmodule_554083), newmodule_553649(LOC5));
		(*stdinmodule_554083).Sup.Id = getid_208404();
	}
	LA3: ;
	result = stdinmodule_554083;
	return result;
}

N_NIMCALL(void, resetallmodules_553439)(void) {
	{
		NI i_553451;
		NI HEX3Atmp_553470;
		NI res_553473;
		i_553451 = 0;
		HEX3Atmp_553470 = 0;
		HEX3Atmp_553470 = (gcompiledmodules_553057->Sup.len-1);
		res_553473 = 0;
		{
			while (1) {
				if (!(res_553473 <= HEX3Atmp_553470)) goto LA3;
				i_553451 = res_553473;
				{
					if (!!((gcompiledmodules_553057->data[i_553451] == NIM_NIL))) goto LA6;
					resetmodule_553397(((NI32) (i_553451)));
				}
				LA6: ;
				res_553473 += 1;
			} LA3: ;
		}
	}
	resetpackagecache_170605();
}
NIM_EXTERNC N_NOINLINE(void, compiler_modulesInit)(void) {
	if (gcompiledmodules_553057) nimGCunrefNoCycle(gcompiledmodules_553057);
	gcompiledmodules_553057 = (tsymseq209820*) newSeqRC1((&NTI209820), 0);
	if (gmemcachedata_553079) nimGCunrefNoCycle(gmemcachedata_553079);
	gmemcachedata_553079 = (TY553058*) newSeqRC1((&NTI553058), 0);
	gincludefile_264073 = includemodule_553917;
	gimportmodule_264068 = importmodule_553875;
}

NIM_EXTERNC N_NOINLINE(void, compiler_modulesDatInit)(void) {
static TNimNode* TMP995[5];
static TNimNode* TMP996[5];
NI TMP998;
static char* NIM_CONST TMP997[5] = {
"Maybe", 
"No", 
"Yes", 
"Probing", 
"Recompiled"};
static TNimNode* TMP999[4];
NI TMP1001;
static char* NIM_CONST TMP1000[4] = {
"crcNotTaken", 
"crcCached", 
"crcHasChanged", 
"crcNotChanged"};
static TNimNode TMP993[17];
NTI553017.size = sizeof(tmoduleinmemory553017);
NTI553017.kind = 18;
NTI553017.base = 0;
NTI553017.flags = 2;
TMP995[0] = &TMP993[1];
TMP993[1].kind = 1;
TMP993[1].offset = offsetof(tmoduleinmemory553017, Compiledat);
TMP993[1].typ = (&NTI128);
TMP993[1].name = "compiledAt";
TMP995[1] = &TMP993[2];
TMP993[2].kind = 1;
TMP993[2].offset = offsetof(tmoduleinmemory553017, Crc);
TMP993[2].typ = (&NTI177010);
TMP993[2].name = "crc";
TMP995[2] = &TMP993[3];
TMP993[3].kind = 1;
TMP993[3].offset = offsetof(tmoduleinmemory553017, Deps);
TMP993[3].typ = (&NTI209938);
TMP993[3].name = "deps";
TMP995[3] = &TMP993[4];
NTI553013.size = sizeof(NU8);
NTI553013.kind = 14;
NTI553013.base = 0;
NTI553013.flags = 3;
for (TMP998 = 0; TMP998 < 5; TMP998++) {
TMP993[TMP998+5].kind = 1;
TMP993[TMP998+5].offset = TMP998;
TMP993[TMP998+5].name = TMP997[TMP998];
TMP996[TMP998] = &TMP993[TMP998+5];
}
TMP993[10].len = 5; TMP993[10].kind = 2; TMP993[10].sons = &TMP996[0];
NTI553013.node = &TMP993[10];
TMP993[4].kind = 1;
TMP993[4].offset = offsetof(tmoduleinmemory553017, Needsrecompile);
TMP993[4].typ = (&NTI553013);
TMP993[4].name = "needsRecompile";
TMP995[4] = &TMP993[11];
NTI553015.size = sizeof(NU8);
NTI553015.kind = 14;
NTI553015.base = 0;
NTI553015.flags = 3;
for (TMP1001 = 0; TMP1001 < 4; TMP1001++) {
TMP993[TMP1001+12].kind = 1;
TMP993[TMP1001+12].offset = TMP1001;
TMP993[TMP1001+12].name = TMP1000[TMP1001];
TMP999[TMP1001] = &TMP993[TMP1001+12];
}
TMP993[16].len = 4; TMP993[16].kind = 2; TMP993[16].sons = &TMP999[0];
NTI553015.node = &TMP993[16];
TMP993[11].kind = 1;
TMP993[11].offset = offsetof(tmoduleinmemory553017, Crcstatus);
TMP993[11].typ = (&NTI553015);
TMP993[11].name = "crcStatus";
TMP993[0].len = 5; TMP993[0].kind = 2; TMP993[0].sons = &TMP995[0];
NTI553017.node = &TMP993[0];
NTI553058.size = sizeof(TY553058*);
NTI553058.kind = 24;
NTI553058.base = (&NTI553017);
NTI553058.flags = 2;
NTI553058.marker = TMP1002;
}
