/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcgen486035 tcgen486035;
typedef struct tllstream197204 tllstream197204;
typedef struct tbaselexer198024 tbaselexer198024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tidtable210866 tidtable210866;
typedef struct tidobj186015 tidobj186015;
typedef struct ttype210854 ttype210854;
typedef struct ttypeseq210850 ttypeseq210850;
typedef struct tnode210818 tnode210818;
typedef struct tsym210848 tsym210848;
typedef struct tloc210832 tloc210832;
typedef struct trope179009 trope179009;
typedef struct tpasscontext265005 tpasscontext265005;
typedef struct tidpairseq210864 tidpairseq210864;
typedef struct tidpair210862 tidpair210862;
typedef struct intset207056 intset207056;
typedef struct ttrunk207052 ttrunk207052;
typedef struct ttrunkseq207054 ttrunkseq207054;
typedef struct tlinkedlist130028 tlinkedlist130028;
typedef struct tlistentry130022 tlistentry130022;
typedef struct tcproc486031 tcproc486031;
typedef struct tnodetable210878 tnodetable210878;
typedef struct tnodepairseq210876 tnodepairseq210876;
typedef struct tnodepair210874 tnodepair210874;
typedef struct tsymseq210820 tsymseq210820;
typedef struct tnodeseq210812 tnodeseq210812;
typedef struct TY182353 TY182353;
typedef struct TY486102 TY486102;
typedef struct tblock486029 tblock486029;
typedef struct tmergesections487861 tmergesections487861;
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
typedef struct tlineinfo182340 tlineinfo182340;
typedef struct tident186021 tident186021;
typedef struct tscope210842 tscope210842;
typedef struct TY210949 TY210949;
typedef struct tinstantiation210838 tinstantiation210838;
typedef struct tstrtable210822 tstrtable210822;
typedef struct tlib210836 tlib210836;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
typedef struct TY210938 TY210938;
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
struct  tbaselexer198024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream197204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tidobj186015  {
  TNimObject Sup;
NI Id;
};
struct  tloc210832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype210854* T;
trope179009* R;
trope179009* Heaproot;
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
struct  tpasscontext265005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
typedef trope179009* tcfilesections486019[18];
struct  tidpair210862  {
tidobj186015* Key;
TNimObject* Val;
};
struct  tidtable210866  {
NI Counter;
tidpairseq210864* Data;
};
struct  intset207056  {
NI Counter;
NI Max;
ttrunk207052* Head;
ttrunkseq207054* Data;
};
struct  tlinkedlist130028  {
tlistentry130022* Head;
tlistentry130022* Tail;
NI Counter;
};
struct  tnodepair210874  {
NI H;
tnode210818* Key;
NI Val;
};
struct  tnodetable210878  {
NI Counter;
tnodepairseq210876* Data;
};
typedef trope179009* TY486139[10];
struct  tcgen486035  {
  tpasscontext265005 Sup;
tsym210848* Module;
NimStringDesc* Filename;
tcfilesections486019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable210866 Typecache;
tidtable210866 Forwtypecache;
intset207056 Declaredthings;
intset207056 Declaredprotos;
tlinkedlist130028 Headerfiles;
intset207056 Typeinfomarker;
tcproc486031* Initproc;
tcproc486031* Postinitproc;
tcproc486031* Preinitproc;
ttypeseq210850* Typestack;
tnodetable210878 Datacache;
tsymseq210820* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope179009* Typenodesname;
trope179009* Nimtypesname;
NI Labels;
TY486139 Extensionloaders;
trope179009* Injectstmt;
};
typedef trope179009* tcprocsections486023[3];
struct  tblock486029  {
NI Id;
trope179009* Label;
tcprocsections486023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc486031  {
tsym210848* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq210812* Nestedtrystmts;
NI Inexceptblock;
TY182353* Finallysafepoints;
NI Labels;
TY486102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen486035* Module;
NI Withinloop;
NI Splitdecls;
NI Gcframeid;
trope179009* Gcframetype;
};
struct  tmergesections487861  {
tcfilesections486019 F;
tcprocsections486023 P;
};
typedef NimStringDesc* TY487013[18];
typedef NimStringDesc* TY487019[3];
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
typedef NI TY26820[8];
struct  ttrunk207052  {
ttrunk207052* Next;
NI Key;
TY26820 Bits;
};
struct  tllstream197204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tlineinfo182340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
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
struct  tstrtable210822  {
NI Counter;
tsymseq210820* Data;
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
struct  tident186021  {
  tidobj186015 Sup;
NimStringDesc* S;
tident186021* Next;
NI H;
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
struct  tlib210836  {
  tlistentry130022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope179009* Name;
tnode210818* Path;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct ttypeseq210850 {
  TGenericSeq Sup;
  ttype210854* data[SEQ_DECL_SIZE];
};
struct tidpairseq210864 {
  TGenericSeq Sup;
  tidpair210862 data[SEQ_DECL_SIZE];
};
struct ttrunkseq207054 {
  TGenericSeq Sup;
  ttrunk207052* data[SEQ_DECL_SIZE];
};
struct tnodepairseq210876 {
  TGenericSeq Sup;
  tnodepair210874 data[SEQ_DECL_SIZE];
};
struct tsymseq210820 {
  TGenericSeq Sup;
  tsym210848* data[SEQ_DECL_SIZE];
};
struct tnodeseq210812 {
  TGenericSeq Sup;
  tnode210818* data[SEQ_DECL_SIZE];
};
struct TY182353 {
  TGenericSeq Sup;
  trope179009* data[SEQ_DECL_SIZE];
};
struct TY486102 {
  TGenericSeq Sup;
  tblock486029 data[SEQ_DECL_SIZE];
};
struct TY210949 {
  TGenericSeq Sup;
  tinstantiation210838* data[SEQ_DECL_SIZE];
};
struct TY210938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(tllstream197204*, llstreamopen_197273)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, openbaselexer_198035)(tbaselexer198024* l, tllstream197204* inputstream, NI buflen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, skipuntilcmd_487402)(tbaselexer198024* l);
N_NIMCALL(NI, handlecr_198066)(tbaselexer198024* l, NI pos);
N_NIMCALL(NI, handlelf_198074)(tbaselexer198024* l, NI pos);
N_NIMCALL(void, readkey_487535)(tbaselexer198024* l, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(void, internalerror_184688)(NimStringDesc* errmsg);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(void, processmergeinfo_487711)(tbaselexer198024* l, tcgen486035* m);
N_NIMCALL(void, skipwhite_487372)(tbaselexer198024* l);
N_NIMCALL(void, readtypecache_487607)(tbaselexer198024* l, tidtable210866* result);
N_NIMCALL(NI, decodevint_218359)(NCSTRING s, NI* pos);
N_NIMCALL(NimStringDesc*, decodestr_218155)(NCSTRING s, NI* pos);
N_NIMCALL(void, idtableput_219196)(tidtable210866* t, tidobj186015* key, TNimObject* val);
N_NIMCALL(ttype210854*, newfaketype_487581)(NI id);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(trope179009*, torope_179076)(NimStringDesc* s);
N_NIMCALL(void, readintset_487666)(tbaselexer198024* l, intset207056* result);
N_NIMCALL(void, incl_207869)(intset207056* s, NI key);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(void, closebaselexer_198045)(tbaselexer198024* l);
static N_INLINE(trope179009**, s_486184)(tcproc486031* p, NU8 s);
N_NIMCALL(void, readmergesections_487867)(NimStringDesc* cfilename, tmergesections487861* m);
N_NIMCALL(trope179009*, readverbatimsection_487489)(tbaselexer198024* l);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NIM_BOOL, atendmark_487456)(NCSTRING buf, NI pos);
static N_INLINE(NI, find_487914)(TY487013 a_487919, NimStringDesc* item_487921);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(NI, find_488017)(TY487019 a_488022, NimStringDesc* item_488024);
N_NIMCALL(trope179009*, con_179024)(trope179009* a, trope179009* b);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45346*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45346* c);
N_NOINLINE(void, addzct_49217)(tcellseq45362* s, tcell45346* c);
N_NIMCALL(void, app_179060)(trope179009** a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, writetypecache_487224)(tidtable210866 a, NimStringDesc** s);
N_NIMCALL(void, encodevint_218304)(NI x, NimStringDesc** result);
N_NIMCALL(void, encodestr_218042)(NimStringDesc* s, NimStringDesc** result);
N_NIMCALL(NimStringDesc*, ropetostr_179101)(trope179009* p);
N_NIMCALL(void, writeintset_487271)(intset207056* a, NimStringDesc** s);
STRING_LITERAL(TMP4068, "ccgmerge: \':\' expected", 22);
STRING_LITERAL(TMP4069, "NIM_merge_INFO", 14);
STRING_LITERAL(TMP4070, "typeCache", 9);
STRING_LITERAL(TMP4071, "declared", 8);
STRING_LITERAL(TMP4072, "typeInfo", 8);
STRING_LITERAL(TMP4073, "labels", 6);
STRING_LITERAL(TMP4074, "hasframe", 8);
STRING_LITERAL(TMP4075, "ccgmerge: \'{\' expected", 22);
STRING_LITERAL(TMP4076, "ccgmerge: unkown key: ", 22);
STRING_LITERAL(TMP4145, "ccgmerge: expected: /*\011NIM_merge_END:*/", 39);
STRING_LITERAL(TMP4146, "/*\011NIM_merge_END:*/", 19);
STRING_LITERAL(TMP4147, "", 0);
STRING_LITERAL(TMP4148, "NIM_merge_HEADERS", 17);
STRING_LITERAL(TMP4149, "NIM_merge_FORWARD_TYPES", 23);
STRING_LITERAL(TMP4150, "NIM_merge_TYPES", 15);
STRING_LITERAL(TMP4151, "NIM_merge_SEQ_TYPES", 19);
STRING_LITERAL(TMP4152, "NIM_merge_FIELD_INFO", 20);
STRING_LITERAL(TMP4153, "NIM_merge_TYPE_INFO", 19);
STRING_LITERAL(TMP4154, "NIM_merge_PROC_HEADERS", 22);
STRING_LITERAL(TMP4155, "NIM_merge_DATA", 14);
STRING_LITERAL(TMP4156, "NIM_merge_VARS", 14);
STRING_LITERAL(TMP4157, "NIM_merge_PROCS", 15);
STRING_LITERAL(TMP4158, "NIM_merge_INIT_PROC", 19);
STRING_LITERAL(TMP4159, "NIM_merge_TYPE_INIT1", 20);
STRING_LITERAL(TMP4160, "NIM_merge_TYPE_INIT2", 20);
STRING_LITERAL(TMP4161, "NIM_merge_TYPE_INIT3", 20);
STRING_LITERAL(TMP4162, "NIM_merge_DEBUG_INIT", 20);
STRING_LITERAL(TMP4163, "NIM_merge_DYNLIB_INIT", 21);
STRING_LITERAL(TMP4164, "NIM_merge_DYNLIB_DEINIT", 23);
NIM_CONST TY487013 cfilesectionnames_487012 = {((NimStringDesc*) &TMP4147),
((NimStringDesc*) &TMP4148),
((NimStringDesc*) &TMP4149),
((NimStringDesc*) &TMP4150),
((NimStringDesc*) &TMP4151),
((NimStringDesc*) &TMP4152),
((NimStringDesc*) &TMP4153),
((NimStringDesc*) &TMP4154),
((NimStringDesc*) &TMP4155),
((NimStringDesc*) &TMP4156),
((NimStringDesc*) &TMP4157),
((NimStringDesc*) &TMP4158),
((NimStringDesc*) &TMP4159),
((NimStringDesc*) &TMP4160),
((NimStringDesc*) &TMP4161),
((NimStringDesc*) &TMP4162),
((NimStringDesc*) &TMP4163),
((NimStringDesc*) &TMP4164)}
;
STRING_LITERAL(TMP4165, "NIM_merge_PROC_LOCALS", 21);
STRING_LITERAL(TMP4166, "NIM_merge_PROC_INIT", 19);
STRING_LITERAL(TMP4167, "NIM_merge_PROC_BODY", 19);
NIM_CONST TY487019 cprocsectionnames_487018 = {((NimStringDesc*) &TMP4165),
((NimStringDesc*) &TMP4166),
((NimStringDesc*) &TMP4167)}
;
STRING_LITERAL(TMP4168, "ccgmerge: unknown section: ", 27);
STRING_LITERAL(TMP4169, "ccgmerge: \'*/\' expected", 23);
STRING_LITERAL(TMP4173, "/*\011", 3);
STRING_LITERAL(TMP4174, ":*/", 3);
STRING_LITERAL(TMP4182, "/*\011NIM_merge_INFO:", 18);
STRING_LITERAL(TMP4183, "typeCache:{", 11);
STRING_LITERAL(TMP4184, "declared:{", 10);
STRING_LITERAL(TMP4185, "typeInfo:{", 10);
STRING_LITERAL(TMP4186, "labels:", 7);
STRING_LITERAL(TMP4187, " hasframe:", 10);
STRING_LITERAL(TMP4188, "*/", 2);
extern TNimType NTI198024; /* TBaseLexer */
extern TNimType NTI210814; /* PType */
extern TNimType NTI210854; /* TType */
extern NimStringDesc* tnl_176629;
extern tgcheap47616 gch_47644;
extern NU32 gglobaloptions_171128;

N_NIMCALL(void, skipuntilcmd_487402)(tbaselexer198024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_198066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_198074(l, pos);
			}
			break;
			case 0:
			{
				goto LA1;
			}
			break;
			case 47:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = ((NU8)((*l).Buf[(NI64)(pos + 1)]) == (NU8)(42));
					if (!(LOC9)) goto LA10;
					LOC9 = ((NU8)((*l).Buf[(NI64)(pos + 2)]) == (NU8)(9));
					LA10: ;
					if (!LOC9) goto LA11;
					pos += 3;
					goto LA1;
				}
				LA11: ;
				pos += 1;
			}
			break;
			default:
			{
				pos += 1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
}

N_NIMCALL(void, readkey_487535)(tbaselexer198024* l, NimStringDesc** result) {
	NI pos;
	NCSTRING buf;
	pos = (*l).Bufpos;
	buf = (*l).Buf;
	(*result) = setLengthStr((*result), 0);
	{
		while (1) {
			if (!(((NU8)(buf[pos])) >= ((NU8)(97)) && ((NU8)(buf[pos])) <= ((NU8)(122)) || ((NU8)(buf[pos])) >= ((NU8)(65)) && ((NU8)(buf[pos])) <= ((NU8)(90)) || ((NU8)(buf[pos])) >= ((NU8)(48)) && ((NU8)(buf[pos])) <= ((NU8)(57)) || ((NU8)(buf[pos])) == ((NU8)(95)))) goto LA2;
			(*result) = addChar((*result), buf[pos]);
			pos += 1;
		} LA2: ;
	}
	{
		if (!!(((NU8)(buf[pos]) == (NU8)(58)))) goto LA5;
		internalerror_184688(((NimStringDesc*) &TMP4068));
	}
	LA5: ;
	(*l).Bufpos = (NI64)(pos + 1);
}

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
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI64)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, skipwhite_487372)(tbaselexer198024* l) {
	NI pos;
	pos = (*l).Bufpos;
	{
		while (1) {
			switch (((NU8)((*l).Buf[pos]))) {
			case 13:
			{
				pos = handlecr_198066(l, pos);
			}
			break;
			case 10:
			{
				pos = handlelf_198074(l, pos);
			}
			break;
			case 32:
			{
				pos += 1;
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
}

N_NIMCALL(ttype210854*, newfaketype_487581)(NI id) {
	ttype210854* result;
	result = 0;
	result = (ttype210854*) newObj((&NTI210814), sizeof(ttype210854));
	(*result).Sup.Sup.m_type = (&NTI210854);
	(*result).Sup.Id = id;
	return result;
}

N_NIMCALL(void, readtypecache_487607)(tbaselexer198024* l, tidtable210866* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_184688(((NimStringDesc*) &TMP4075));
	}
	LA3: ;
	(*l).Bufpos += 1;
	{
		while (1) {
			NI key;
			NimStringDesc* value;
			ttype210854* LOC11;
			tidobj186015* LOC12;
			trope179009* LOC13;
			TNimObject* LOC14;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_487372(l);
			key = decodevint_218359((*l).Buf, (&(*l).Bufpos));
			{
				if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(58)))) goto LA9;
				internalerror_184688(((NimStringDesc*) &TMP4068));
			}
			LA9: ;
			(*l).Bufpos += 1;
			value = decodestr_218155((*l).Buf, (&(*l).Bufpos));
			LOC11 = 0;
			LOC11 = newfaketype_487581(key);
			LOC12 = 0;
			LOC12 = &LOC11->Sup;
			LOC13 = 0;
			LOC13 = torope_179076(value);
			LOC14 = 0;
			LOC14 = &LOC13->Sup;
			idtableput_219196(result, LOC12, LOC14);
		} LA6: ;
	}
	(*l).Bufpos += 1;
}

N_NIMCALL(void, readintset_487666)(tbaselexer198024* l, intset207056* result) {
	{
		if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(123)))) goto LA3;
		internalerror_184688(((NimStringDesc*) &TMP4075));
	}
	LA3: ;
	(*l).Bufpos += 1;
	{
		while (1) {
			NI key;
			if (!!(((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(125)))) goto LA6;
			skipwhite_487372(l);
			key = decodevint_218359((*l).Buf, (&(*l).Bufpos));
			incl_207869(result, key);
		} LA6: ;
	}
	(*l).Bufpos += 1;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, processmergeinfo_487711)(tbaselexer198024* l, tcgen486035* m) {
	NimStringDesc* k;
	k = rawNewString(9);
	{
		while (1) {
			skipwhite_487372(l);
			{
				NIM_BOOL LOC5;
				LOC5 = 0;
				LOC5 = ((NU8)((*l).Buf[(*l).Bufpos]) == (NU8)(42));
				if (!(LOC5)) goto LA6;
				LOC5 = ((NU8)((*l).Buf[(NI64)((*l).Bufpos + 1)]) == (NU8)(47));
				LA6: ;
				if (!LOC5) goto LA7;
				(*l).Bufpos += 2;
				goto LA1;
			}
			LA7: ;
			readkey_487535(l, (&k));
			if (eqStrings(k, ((NimStringDesc*) &TMP4070))) goto LA9;
			if (eqStrings(k, ((NimStringDesc*) &TMP4071))) goto LA10;
			if (eqStrings(k, ((NimStringDesc*) &TMP4072))) goto LA11;
			if (eqStrings(k, ((NimStringDesc*) &TMP4073))) goto LA12;
			if (eqStrings(k, ((NimStringDesc*) &TMP4074))) goto LA13;
			goto LA14;
			LA9: ;
			{
				readtypecache_487607(l, (&(*m).Typecache));
			}
			goto LA15;
			LA10: ;
			{
				readintset_487666(l, (&(*m).Declaredthings));
			}
			goto LA15;
			LA11: ;
			{
				readintset_487666(l, (&(*m).Typeinfomarker));
			}
			goto LA15;
			LA12: ;
			{
				NI LOC20;
				LOC20 = 0;
				LOC20 = decodevint_218359((*l).Buf, (&(*l).Bufpos));
				(*m).Labels = ((NI) (LOC20));
			}
			goto LA15;
			LA13: ;
			{
				NI LOC22;
				LOC22 = 0;
				LOC22 = decodevint_218359((*l).Buf, (&(*l).Bufpos));
				(*m).Framedeclared = !((LOC22 == 0));
			}
			goto LA15;
			LA14: ;
			{
				NimStringDesc* LOC24;
				LOC24 = 0;
				LOC24 = rawNewString(k->Sup.len + 22);
appendString(LOC24, ((NimStringDesc*) &TMP4076));
appendString(LOC24, k);
				internalerror_184688(LOC24);
			}
			LA15: ;
		}
	} LA1: ;
}

N_NIMCALL(void, readmergeinfo_487815)(NimStringDesc* cfilename, tcgen486035* m) {
	tllstream197204* s_487820;
	tbaselexer198024 l;
	NimStringDesc* k;
{	s_487820 = llstreamopen_197273(cfilename, ((NU8) 0));
	{
		if (!(s_487820 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.m_type = (&NTI198024);
	openbaselexer_198035((&l), s_487820, 8192);
	k = rawNewString(23);
	{
		while (1) {
			skipuntilcmd_487402((&l));
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_487535((&l), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4069))) goto LA13;
				processmergeinfo_487711((&l), m);
				goto LA5;
			}
			LA13: ;
		}
	} LA5: ;
	closebaselexer_198045((&l));
	}BeforeRet: ;
}

static N_INLINE(trope179009**, s_486184)(tcproc486031* p, NU8 s) {
	trope179009** result;
	result = 0;
	result = &(*p).Blocks->data[(NI64)((*p).Blocks->Sup.len - 1)].Sections[(s)- 0];
	return result;
}

N_NIMCALL(NIM_BOOL, mergerequired_488137)(tcgen486035* m) {
	NIM_BOOL result;
{	result = 0;
	{
		NU8 i_488185;
		NU8 res_488270;
		i_488185 = 0;
		res_488270 = ((NU8) 1);
		{
			while (1) {
				if (!(res_488270 <= ((NU8) 10))) goto LA3;
				i_488185 = res_488270;
				{
					if (!!(((*m).S[(i_488185)- 0] == NIM_NIL))) goto LA6;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA6: ;
				res_488270 += 1;
			} LA3: ;
		}
	}
	{
		NU8 i_488249;
		NU8 res_488277;
		i_488249 = 0;
		res_488277 = ((NU8) 0);
		{
			while (1) {
				if (!(res_488277 <= ((NU8) 2))) goto LA10;
				i_488249 = res_488277;
				{
					trope179009** LOC13;
					LOC13 = 0;
					LOC13 = s_486184((*m).Initproc, i_488249);
					if (!!(((*LOC13) == NIM_NIL))) goto LA14;
					result = NIM_TRUE;
					goto BeforeRet;
				}
				LA14: ;
				res_488277 += 1;
			} LA10: ;
		}
	}
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, atendmark_487456)(NCSTRING buf, NI pos) {
	NIM_BOOL result;
	NI s;
	result = 0;
	s = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = (s < 19);
			if (!(LOC3)) goto LA4;
			LOC3 = ((NU8)(buf[(NI64)(pos + s)]) == (NU8)(((NimStringDesc*) &TMP4146)->data[s]));
			LA4: ;
			if (!LOC3) goto LA2;
			s += 1;
		} LA2: ;
	}
	result = (s == 19);
	return result;
}

N_NIMCALL(trope179009*, readverbatimsection_487489)(tbaselexer198024* l) {
	trope179009* result;
	NI pos;
	NCSTRING buf;
	NimStringDesc* r;
	result = 0;
	pos = (*l).Bufpos;
	buf = (*l).Buf;
	r = rawNewString(30000);
	{
		while (1) {
			switch (((NU8)(buf[pos]))) {
			case 13:
			{
				pos = handlecr_198066(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_176629->Sup.len + 0);
appendString(r, tnl_176629);
			}
			break;
			case 10:
			{
				pos = handlelf_198074(l, pos);
				buf = (*l).Buf;
				r = resizeString(r, tnl_176629->Sup.len + 0);
appendString(r, tnl_176629);
			}
			break;
			case 0:
			{
				internalerror_184688(((NimStringDesc*) &TMP4145));
				goto LA1;
			}
			break;
			default:
			{
				{
					NIM_BOOL LOC9;
					LOC9 = 0;
					LOC9 = atendmark_487456(buf, pos);
					if (!LOC9) goto LA10;
					pos += 19;
					goto LA1;
				}
				LA10: ;
				r = addChar(r, buf[pos]);
				pos += 1;
			}
			break;
			}
		}
	} LA1: ;
	(*l).Bufpos = pos;
	result = torope_179076(r);
	return result;
}

static N_INLINE(NI, find_487914)(TY487013 a_487919, NimStringDesc* item_487921) {
	NI result;
{	result = 0;
	{
		NimStringDesc* i_487983;
		NU8 i_487999;
		i_487983 = 0;
		i_487999 = ((NU8) 0);
		{
			if (!(i_487999 <= ((NU8) 17))) goto LA4;
			{
				while (1) {
					i_487983 = a_487919[(i_487999)- 0];
					{
						if (!eqStrings(i_487983, item_487921)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += 1;
					{
						if (!(((NU8) 17) <= i_487999)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_487999 += 1;
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = -1;
	}BeforeRet: ;
	return result;
}

static N_INLINE(NI, find_488017)(TY487019 a_488022, NimStringDesc* item_488024) {
	NI result;
{	result = 0;
	{
		NimStringDesc* i_488086;
		NU8 i_488102;
		i_488086 = 0;
		i_488102 = ((NU8) 0);
		{
			if (!(i_488102 <= ((NU8) 2))) goto LA4;
			{
				while (1) {
					i_488086 = a_488022[(i_488102)- 0];
					{
						if (!eqStrings(i_488086, item_488024)) goto LA10;
						goto BeforeRet;
					}
					LA10: ;
					result += 1;
					{
						if (!(((NU8) 2) <= i_488102)) goto LA14;
						goto LA6;
					}
					LA14: ;
					i_488102 += 1;
				}
			} LA6: ;
		}
		LA4: ;
	}
	result = -1;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, readmergesections_487867)(NimStringDesc* cfilename, tmergesections487861* m) {
	tllstream197204* s_487873;
	tbaselexer198024 l;
	NimStringDesc* k;
{	s_487873 = llstreamopen_197273(cfilename, ((NU8) 0));
	{
		if (!(s_487873 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	memset((void*)(&l), 0, sizeof(l));
	l.Sup.m_type = (&NTI198024);
	openbaselexer_198035((&l), s_487873, 8192);
	k = rawNewString(23);
	{
		while (1) {
			skipuntilcmd_487402((&l));
			{
				if (!((NU8)(l.Buf[l.Bufpos]) == (NU8)(0))) goto LA9;
				goto LA5;
			}
			LA9: ;
			readkey_487535((&l), (&k));
			{
				if (!eqStrings(k, ((NimStringDesc*) &TMP4069))) goto LA13;
			}
			goto LA11;
			LA13: ;
			{
				NIM_BOOL LOC16;
				trope179009* verbatim;
				NI sectiona;
				LOC16 = 0;
				LOC16 = ((NU8)(l.Buf[l.Bufpos]) == (NU8)(42));
				if (!(LOC16)) goto LA17;
				LOC16 = ((NU8)(l.Buf[(NI64)(l.Bufpos + 1)]) == (NU8)(47));
				LA17: ;
				if (!LOC16) goto LA18;
				l.Bufpos += 2;
				skipwhite_487372((&l));
				verbatim = readverbatimsection_487489((&l));
				skipwhite_487372((&l));
				sectiona = find_487914(cfilesectionnames_487012, k);
				{
					NIM_BOOL LOC22;
					LOC22 = 0;
					LOC22 = (0 < sectiona);
					if (!(LOC22)) goto LA23;
					LOC22 = (sectiona <= 17);
					LA23: ;
					if (!LOC22) goto LA24;
					unsureAsgnRef((void**) (&(*m).F[(sectiona)- 0]), verbatim);
				}
				goto LA20;
				LA24: ;
				{
					NI sectionb;
					sectionb = find_488017(cprocsectionnames_487018, k);
					{
						NIM_BOOL LOC29;
						LOC29 = 0;
						LOC29 = (0 <= sectionb);
						if (!(LOC29)) goto LA30;
						LOC29 = (sectionb <= 2);
						LA30: ;
						if (!LOC29) goto LA31;
						unsureAsgnRef((void**) (&(*m).P[(sectionb)- 0]), verbatim);
					}
					goto LA27;
					LA31: ;
					{
						NimStringDesc* LOC34;
						LOC34 = 0;
						LOC34 = rawNewString(k->Sup.len + 27);
appendString(LOC34, ((NimStringDesc*) &TMP4168));
appendString(LOC34, k);
						internalerror_184688(LOC34);
					}
					LA27: ;
				}
				LA20: ;
			}
			goto LA11;
			LA18: ;
			{
				internalerror_184688(((NimStringDesc*) &TMP4169));
			}
			LA11: ;
		}
	} LA5: ;
	closebaselexer_198045((&l));
	}BeforeRet: ;
}

static N_INLINE(tcell45346*, usrtocell_49246)(void* usr) {
	tcell45346* result;
	result = 0;
	result = ((tcell45346*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45346))))));
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
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(void, mergefiles_488303)(NimStringDesc* cfilename, tcgen486035* m) {
	tmergesections487861 old;
	memset((void*)(&old), 0, sizeof(old));
	readmergesections_487867(cfilename, (&old));
	{
		NU8 i_488321;
		NU8 res_488345;
		i_488321 = 0;
		res_488345 = ((NU8) 0);
		{
			while (1) {
				if (!(res_488345 <= ((NU8) 17))) goto LA3;
				i_488321 = res_488345;
				asgnRefNoCycle((void**) (&(*m).S[(i_488321)- 0]), con_179024(old.F[(i_488321)- 0], (*m).S[(i_488321)- 0]));
				res_488345 += 1;
			} LA3: ;
		}
	}
	{
		NU8 i_488336;
		NU8 res_488352;
		i_488336 = 0;
		res_488352 = ((NU8) 0);
		{
			while (1) {
				trope179009** LOC7;
				trope179009** LOC8;
				if (!(res_488352 <= ((NU8) 2))) goto LA6;
				i_488336 = res_488352;
				LOC7 = 0;
				LOC7 = s_486184((*m).Initproc, i_488336);
				LOC8 = 0;
				LOC8 = s_486184((*m).Initproc, i_488336);
				unsureAsgnRef((void**) (&(*LOC7)), con_179024(old.P[(i_488336)- 0], (*LOC8)));
				res_488352 += 1;
			} LA6: ;
		}
	}
}

N_NIMCALL(trope179009*, gensectionstart_487126)(NU8 ps) {
	trope179009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_171128) == 0))) goto LA3;
		result = torope_179076(tnl_176629);
		app_179060(&result, ((NimStringDesc*) &TMP4173));
		app_179060(&result, cprocsectionnames_487018[(ps)- 0]);
		app_179060(&result, ((NimStringDesc*) &TMP4174));
		app_179060(&result, tnl_176629);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope179009*, gensectionend_487177)(NU8 ps) {
	trope179009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_171128) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_176629->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4146));
appendString(LOC5, tnl_176629);
		result = torope_179076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope179009*, gensectionstart_487028)(NU8 fs) {
	trope179009* result;
	result = 0;
	{
		if (!!(((49152 & gglobaloptions_171128) == 0))) goto LA3;
		result = torope_179076(tnl_176629);
		app_179060(&result, ((NimStringDesc*) &TMP4173));
		app_179060(&result, cfilesectionnames_487012[(fs)- 0]);
		app_179060(&result, ((NimStringDesc*) &TMP4174));
		app_179060(&result, tnl_176629);
	}
	LA3: ;
	return result;
}

N_NIMCALL(trope179009*, gensectionend_487079)(NU8 fs) {
	trope179009* result;
	result = 0;
	{
		NimStringDesc* LOC5;
		if (!!(((49152 & gglobaloptions_171128) == 0))) goto LA3;
		LOC5 = 0;
		LOC5 = rawNewString(tnl_176629->Sup.len + 19);
appendString(LOC5, ((NimStringDesc*) &TMP4146));
appendString(LOC5, tnl_176629);
		result = torope_179076(LOC5);
	}
	LA3: ;
	return result;
}

N_NIMCALL(void, writetypecache_487224)(tidtable210866 a, NimStringDesc** s) {
	NI i;
	i = 0;
	{
		NI id_487230;
		TNimObject* value_487231;
		id_487230 = 0;
		value_487231 = 0;
		{
			NI i_487248;
			NI HEX3Atmp_487250;
			NI res_487252;
			i_487248 = 0;
			HEX3Atmp_487250 = 0;
			HEX3Atmp_487250 = (a.Data->Sup.len-1);
			res_487252 = 0;
			{
				while (1) {
					if (!(res_487252 <= HEX3Atmp_487250)) goto LA4;
					i_487248 = res_487252;
					{
						NimStringDesc* LOC14;
						if (!!((a.Data->data[i_487248].Key == NIM_NIL))) goto LA7;
						id_487230 = (*a.Data->data[i_487248].Key).Id;
						value_487231 = a.Data->data[i_487248].Val;
						{
							if (!(i == 10)) goto LA11;
							i = 0;
							(*s) = resizeString((*s), tnl_176629->Sup.len + 0);
appendString((*s), tnl_176629);
						}
						goto LA9;
						LA11: ;
						{
							(*s) = addChar((*s), 32);
						}
						LA9: ;
						encodevint_218304(id_487230, s);
						(*s) = addChar((*s), 58);
						LOC14 = 0;
						LOC14 = ropetostr_179101(((trope179009*) (value_487231)));
						encodestr_218042(LOC14, s);
						i += 1;
					}
					LA7: ;
					res_487252 += 1;
				} LA4: ;
			}
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(void, writeintset_487271)(intset207056* a, NimStringDesc** s) {
	NI i;
	i = 0;
	{
		NI x_487277;
		ttrunk207052* r_487295;
		x_487277 = 0;
		r_487295 = (*a).Head;
		{
			while (1) {
				NI i_487297;
				if (!!((r_487295 == NIM_NIL))) goto LA3;
				i_487297 = 0;
				{
					while (1) {
						NI w_487299;
						NI j_487301;
						if (!(i_487297 <= 7)) goto LA5;
						w_487299 = (*r_487295).Bits[(i_487297)- 0];
						j_487301 = 0;
						{
							while (1) {
								if (!!((w_487299 == 0))) goto LA7;
								{
									if (!!((((NI) ((NI)(w_487299 & 1))) == 0))) goto LA10;
									x_487277 = (NI)((NI)((NU64)((*r_487295).Key) << (NU64)(9)) | (NI)((NU64)((NI)((NU64)(i_487297) << (NU64)(6))) + (NU64)(j_487301)));
									{
										if (!(i == 10)) goto LA14;
										i = 0;
										(*s) = resizeString((*s), tnl_176629->Sup.len + 0);
appendString((*s), tnl_176629);
									}
									goto LA12;
									LA14: ;
									{
										(*s) = addChar((*s), 32);
									}
									LA12: ;
									encodevint_218304(x_487277, s);
									i += 1;
								}
								LA10: ;
								j_487301 += 1;
								w_487299 = (NI)((NU64)(w_487299) >> (NU64)(1));
							} LA7: ;
						}
						i_487297 += 1;
					} LA5: ;
				}
				r_487295 = (*r_487295).Next;
			} LA3: ;
		}
	}
	(*s) = addChar((*s), 125);
}

N_NIMCALL(trope179009*, genmergeinfo_487329)(tcgen486035* m) {
	trope179009* result;
	NimStringDesc* s;
{	result = 0;
	{
		if (!!(((gglobaloptions_171128 &(1<<((((NU8) 14))&31)))!=0))) goto LA3;
		result = NIM_NIL;
		goto BeforeRet;
	}
	LA3: ;
	s = copyString(((NimStringDesc*) &TMP4182));
	s = resizeString(s, tnl_176629->Sup.len + 0);
appendString(s, tnl_176629);
	s = resizeString(s, 11);
appendString(s, ((NimStringDesc*) &TMP4183));
	writetypecache_487224((*m).Typecache, (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4184));
	writeintset_487271((&(*m).Declaredthings), (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4185));
	writeintset_487271((&(*m).Typeinfomarker), (&s));
	s = resizeString(s, 7);
appendString(s, ((NimStringDesc*) &TMP4186));
	encodevint_218304(((NI) ((*m).Labels)), (&s));
	s = resizeString(s, 10);
appendString(s, ((NimStringDesc*) &TMP4187));
	encodevint_218304(((NI) ((*m).Framedeclared)), (&s));
	s = resizeString(s, tnl_176629->Sup.len + 0);
appendString(s, tnl_176629);
	s = resizeString(s, 2);
appendString(s, ((NimStringDesc*) &TMP4188));
	result = torope_179076(s);
	}BeforeRet: ;
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_ccgmergeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_ccgmergeDatInit)(void) {
}
