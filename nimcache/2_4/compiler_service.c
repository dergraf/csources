/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>

#include <stdlib.h>

#include <sys/socket.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tcell38846 tcell38846;
typedef struct TNimType TNimType;
typedef struct tcellseq38862 tcellseq38862;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38858 tcellset38858;
typedef struct tpagedesc38854 tpagedesc38854;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21438 tsmallchunk21438;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21440 tbigchunk21440;
typedef struct tintset21415 tintset21415;
typedef struct ttrunk21411 ttrunk21411;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40814 tgcstat40814;
typedef struct toptparser417607 toptparser417607;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct tlineinfo137509 tlineinfo137509;
typedef struct TY9552 TY9552;
typedef struct tsocketimpl124605 tsocketimpl124605;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
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
typedef tsmallchunk21438* TY22222[512];
typedef ttrunk21411* ttrunkbuckets21413[256];
struct tintset21415 {
ttrunkbuckets21413 Data;
};
struct tmemregion22210 {
NI Minlargeobj;
NI Maxlargeobj;
TY22222 Freesmallchunks;
tllchunk22204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21440* Freechunkslist;
tintset21415 Chunkstarts;
tavlnode22208* Root;
tavlnode22208* Deleted;
tavlnode22208* Last;
tavlnode22208* Freeavlnodes;
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
tmemregion22210 Region;
tgcstat40814 Stat;
};
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
struct toptparser417607 {
  TNimObject Sup;
NimStringDesc* Cmd;
NI Pos;
NIM_BOOL Inshortstate;
NU8 Kind;
NimStringDesc* Key;
NimStringDesc* Val;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tlineinfo137509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
typedef NimStringDesc* TY149228[1];
typedef N_NIMCALL_PTR(void, TY419279) (void);
typedef NIM_CHAR TY124630[4001];
struct tsocketimpl124605 {
int Fd;
NIM_BOOL Isbuffered;
union {
struct {TY124630 Buffer;
NI Currpos;
NI Buflen;
} S1;
} isbufferedU;
NIM_BOOL Nonblocking;
};
typedef NI TY21418[16];
struct tpagedesc38854 {
tpagedesc38854* Next;
NI Key;
TY21418 Bits;
};
struct tbasechunk21436 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21438 {
  tbasechunk21436 Sup;
tsmallchunk21438* Next;
tsmallchunk21438* Prev;
tfreecell21428* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22204 {
NI Size;
NI Acc;
tllchunk22204* Next;
};
struct tbigchunk21440 {
  tbasechunk21436 Sup;
tbigchunk21440* Next;
tbigchunk21440* Prev;
NI Align;
NF Data;
};
struct ttrunk21411 {
ttrunk21411* Next;
NI Key;
TY21418 Bits;
};
typedef tavlnode22208* TY22214[2];
struct tavlnode22208 {
TY22214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
struct TY9552 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell38846*, usrtocell_42239)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_43802)(tcell38846* c);
N_NOINLINE(void, addzct_42215)(tcellseq38862* s, tcell38846* c);
N_NIMCALL(void, processcmdline_419207)(NU8 pass, NimStringDesc* cmd);
N_NIMCALL(void, initoptparser_417619)(NimStringDesc* cmdline, toptparser417607* Result);
N_NOINLINE(void, chckNil)(void* p);
N_NIMCALL(void, nponext)(toptparser417607* p);
N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_67823, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(void, processswitch_152016)(NimStringDesc* switch_152018, NimStringDesc* arg, NU8 pass, tlineinfo137509 info);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(NimStringDesc*, nosUnixToNativePath)(NimStringDesc* path);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, npocmdLineRest)(toptparser417607* p);
N_NIMCALL(void, rawmessage_139121)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, serve_419277)(TY419279 action);
N_NIMCALL(NimStringDesc*, getconfigvar_114292)(NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, readline_9480)(FILE* f);
N_NIMCALL(tsocketimpl124605*, socket_125402)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered);
N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s);
N_NIMCALL(void, bindaddr_126534)(tsocketimpl124605* socket, NU16 port, NimStringDesc* address);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, listen_126405)(tsocketimpl124605* socket, int backlog);
N_NIMCALL(void*, newObjRC1)(TNimType* typ, NI size);
N_NIMCALL(void, accept_128201)(tsocketimpl124605* server, tsocketimpl124605** client);
N_NIMCALL(void, readline_132830)(tsocketimpl124605* socket, NimStringDesc** line, NI timeout);
N_NIMCALL(void, send_134404)(tsocketimpl124605* socket, NimStringDesc* data);
N_NIMCALL(void, close_128258)(tsocketimpl124605* socket);
STRING_LITERAL(TMP7036, "", 0);
STRING_LITERAL(TMP7043, "server.type", 11);
STRING_LITERAL(TMP7044, "stdin", 5);
STRING_LITERAL(TMP7045, "tcp", 3);
STRING_LITERAL(TMP7046, "quit", 4);
STRING_LITERAL(TMP7051, "server.port", 11);
STRING_LITERAL(TMP7052, "server.address", 14);
STRING_LITERAL(TMP7077, "\015\012", 2);
STRING_LITERAL(TMP7078, "Invalid server.type:", 20);
NimStringDesc* curcaascmd_419203;
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;
NimStringDesc* lastcaascmd_419204;
NimStringDesc* arguments_419205;
extern TNimType NTI417607; /* TOptParser */
extern tlineinfo137509 gcmdlineinfo_138009;
extern NimStringDesc* command_114203;
extern TY9552* commandargs_114222;
extern NimStringDesc* gprojectname_114197;
extern NU32 gglobaloptions_114109;
extern NI32 gdirtybufferidx_114124;
extern NI32 gdirtyoriginalidx_114125;
extern NI gerrorcounter_138074;
extern tsocketimpl124605* stdoutsocket_138084;
extern TNimType NTI124607; /* TSocket */

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(tcell38846*, usrtocell_42239)(void* usr) {
	tcell38846* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38846*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38846))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43802)(tcell38846* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42215(&gch_40844.Zct, c);	popFrame();
}
static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell38846* c;
	nimfr("nimGCunrefNoCycle", "gc.nim")
	nimln(231, "gc.nim");
	c = usrtocell_42239(p);
	nimln(233, "gc.nim");
	{
		nimln(165, "gc.nim");
		(*c).Refcount -= 8;
		nimln(166, "gc.nim");
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		nimln(234, "gc.nim");
		rtladdzct_43802(c);	}	LA3: ;
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
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[((*dest).Sup.len)- 0] = c;
	(*dest).data[((NI32)((*dest).Sup.len + 1))- 0] = 0;
	(*dest).Sup.len += 1;
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38846* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(250, "gc.nim");
		c = usrtocell_42239(src);
		nimln(167, "gc.nim");
		(*c).Refcount += 8;
	}	LA3: ;
	nimln(252, "gc.nim");
	{
		tcell38846* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(253, "gc.nim");
		c = usrtocell_42239((*dest));
		nimln(254, "gc.nim");
		{
			nimln(165, "gc.nim");
			(*c).Refcount -= 8;
			nimln(166, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43802(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
N_NIMCALL(void, processcmdline_419207)(NU8 pass, NimStringDesc* cmd) {
	toptparser417607 p;
	NI argscount;
	nimfr("ProcessCmdLine", "service.nim")
	nimln(33, "service.nim");
	chckNil((void*)&p);
	memset((void*)&p, 0, sizeof(p));
	p.Sup.m_type = (&NTI417607);
	initoptparser_417619(cmd, &p);	nimln(34, "service.nim");
	argscount = 0;
	nimln(35, "service.nim");
	while (1) {
		nimln(36, "service.nim");
		nponext(&p);		nimln(37, "service.nim");
		switch (p.Kind) {
		case ((NU8) 0):
		{
			nimln(38, "service.nim");
			goto LA1;
		}		break;
		case ((NU8) 2):
		case ((NU8) 3):
		{
			NI bracketle;
			nimln(42, "service.nim");
			bracketle = nsuFindChar(p.Key, 91, 0);
			nimln(43, "service.nim");
			{
				NimStringDesc* key;
				NI TMP7041;
				NimStringDesc* val;
				NimStringDesc* LOC8;
				NI TMP7042;
				NimStringDesc* LOC9;
				nimln(702, "system.nim");
				if (!(0 <= bracketle)) goto LA6;
				nimln(44, "service.nim");
				nimln(44, "service.nim");
				nimln(44, "service.nim");
				TMP7041 = subInt(bracketle, 1);
				key = copyStrLast(p.Key, 0, (NI32)(TMP7041));
				nimln(45, "service.nim");
				nimln(45, "service.nim");
				LOC8 = 0;
				nimln(45, "service.nim");
				nimln(45, "service.nim");
				TMP7042 = addInt(bracketle, 1);
				LOC9 = 0;
				LOC9 = copyStr(p.Key, (NI32)(TMP7042));
				LOC8 = rawNewString(LOC9->Sup.len + p.Val->Sup.len + 1);
appendString(LOC8, LOC9);
appendChar(LOC8, 58);
appendString(LOC8, p.Val);
				val = LOC8;
				nimln(46, "service.nim");
				processswitch_152016(key, val, pass, gcmdlineinfo_138009);			}			goto LA4;
			LA6: ;
			{
				nimln(48, "service.nim");
				processswitch_152016(p.Key, p.Val, pass, gcmdlineinfo_138009);			}			LA4: ;
		}		break;
		case ((NU8) 1):
		{
			nimln(50, "service.nim");
			{
				NimStringDesc* LOC16;
				nimln(50, "service.nim");
				if (!(argscount == 0)) goto LA14;
				nimln(51, "service.nim");
				LOC16 = 0;
				LOC16 = command_114203; command_114203 = copyStringRC1(p.Key);
				if (LOC16) nimGCunrefNoCycle(LOC16);
			}			goto LA12;
			LA14: ;
			{
				nimln(53, "service.nim");
				{
					NimStringDesc* LOC22;
					nimln(53, "service.nim");
					if (!(pass == ((NU8) 0))) goto LA20;
					nimln(53, "service.nim");
					commandargs_114222 = (TY9552*) incrSeq(&(commandargs_114222)->Sup, sizeof(NimStringDesc*));
					LOC22 = 0;
					LOC22 = commandargs_114222->data[commandargs_114222->Sup.len-1]; commandargs_114222->data[commandargs_114222->Sup.len-1] = copyStringRC1(p.Key);
					if (LOC22) nimGCunrefNoCycle(LOC22);
				}				LA20: ;
				nimln(54, "service.nim");
				{
					nimln(54, "service.nim");
					if (!(argscount == 1)) goto LA25;
					nimln(56, "service.nim");
					asgnRefNoCycle((void**) &gprojectname_114197, nosUnixToNativePath(p.Key));
					nimln(57, "service.nim");
					asgnRefNoCycle((void**) &arguments_419205, npocmdLineRest(&p));
					nimln(58, "service.nim");
					goto LA1;
				}				LA25: ;
			}			LA12: ;
			nimln(59, "service.nim");
			argscount = addInt(argscount, 1);
		}		break;
		}
	} LA1: ;
	nimln(61, "service.nim");
	{
		nimln(61, "service.nim");
		if (!(pass == ((NU8) 1))) goto LA29;
		nimln(62, "service.nim");
		{
			NIM_BOOL LOC33;
			TY149228 LOC37;
			nimln(62, "service.nim");
			LOC33 = 0;
			nimln(731, "system.nim");
			nimln(731, "system.nim");
			LOC33 = !(((gglobaloptions_114109 &(1<<((((NU8) 13))&31)))!=0));
			if (!(LOC33)) goto LA34;
			nimln(698, "system.nim");
			nimln(698, "system.nim");
			LOC33 = !(((arguments_419205) && (arguments_419205)->Sup.len == 0));
			LA34: ;
			if (!LOC33) goto LA35;
			nimln(63, "service.nim");
			memset((void*)LOC37, 0, sizeof(LOC37));
			rawmessage_139121(((NU16) 57), LOC37, 0);		}		LA35: ;
	}	LA29: ;
	popFrame();
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}	LA3: ;
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
	}	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(void, serve_419277)(TY419279 action) {
	NimStringDesc* typ;
	nimfr("serve", "service.nim")
	nimln(74, "service.nim");
	typ = getconfigvar_114292(((NimStringDesc*) &TMP7043));
	nimln(75, "service.nim");
	if (eqStrings(typ, ((NimStringDesc*) &TMP7044))) goto LA1;
	if (eqStrings(typ, ((NimStringDesc*) &TMP7045))) goto LA2;
	if (eqStrings(typ, ((NimStringDesc*) &TMP7036))) goto LA2;
	goto LA3;
	LA1: ;
	{
		nimln(77, "service.nim");
		while (1) {
			NimStringDesc* line;
			NimStringDesc* LOC11;
			nimln(78, "service.nim");
			nimln(78, "service.nim");
			line = readline_9480(stdin);
			nimln(79, "service.nim");
			{
				nimln(79, "service.nim");
				if (!eqStrings(line, ((NimStringDesc*) &TMP7046))) goto LA9;
				nimln(79, "service.nim");
				exit(0);			}			LA9: ;
			nimln(67, "service.nim");
			LOC11 = 0;
			LOC11 = curcaascmd_419203; curcaascmd_419203 = copyStringRC1(line);
			if (LOC11) nimGCunrefNoCycle(LOC11);
			nimln(68, "service.nim");
			processcmdline_419207(((NU8) 1), line);			nimln(69, "service.nim");
			action();			nimln(70, "service.nim");
			gdirtybufferidx_114124 = ((NI32) 0);
			nimln(71, "service.nim");
			gdirtyoriginalidx_114125 = ((NI32) 0);
			nimln(72, "service.nim");
			gerrorcounter_138074 = 0;
			nimln(81, "service.nim");
			printf("%s\012", (((NimStringDesc*) &TMP7036))->data);
			nimln(82, "service.nim");
			fflush(stdout);		}	}	goto LA4;
	LA2: ;
	{
		tsocketimpl124605* server;
		NimStringDesc* p;
		NU16 port;
		NimStringDesc* LOC19;
		NimStringDesc* inp;
		nimln(86, "service.nim");
		server = socket_125402(((NU8) 2), ((NU8) 1), ((NU8) 6), NIM_TRUE);
		nimln(87, "service.nim");
		p = getconfigvar_114292(((NimStringDesc*) &TMP7051));
		nimln(88, "service.nim");
		nimln(88, "service.nim");
		{
			NI LOC17;
			nimln(706, "system.nim");
			nimln(88, "service.nim");
			if (!(0 < p->Sup.len)) goto LA15;
			nimln(88, "service.nim");
			LOC17 = 0;
			LOC17 = nsuParseInt(p);
			port = ((NU16) (LOC17));
		}		goto LA13;
		LA15: ;
		{
			port = ((NU16) 6000);
		}		LA13: ;
		nimln(89, "service.nim");
		nimln(89, "service.nim");
		LOC19 = 0;
		LOC19 = getconfigvar_114292(((NimStringDesc*) &TMP7052));
		bindaddr_126534(server, port, LOC19);		nimln(90, "service.nim");
		inp = copyString(((NimStringDesc*) &TMP7036));
		nimln(91, "service.nim");
		listen_126405(server, SOMAXCONN);		nimln(92, "service.nim");
		if (stdoutsocket_138084) nimGCunrefNoCycle(stdoutsocket_138084);
		stdoutsocket_138084 = (tsocketimpl124605*) newObjRC1((&NTI124607), sizeof(tsocketimpl124605));
		nimln(93, "service.nim");
		while (1) {
			NimStringDesc* LOC21;
			nimln(94, "service.nim");
			accept_128201(server, &stdoutsocket_138084);			nimln(95, "service.nim");
			readline_132830(stdoutsocket_138084, &inp, -1);			nimln(67, "service.nim");
			LOC21 = 0;
			LOC21 = curcaascmd_419203; curcaascmd_419203 = copyStringRC1(inp);
			if (LOC21) nimGCunrefNoCycle(LOC21);
			nimln(68, "service.nim");
			processcmdline_419207(((NU8) 1), inp);			nimln(69, "service.nim");
			action();			nimln(70, "service.nim");
			gdirtybufferidx_114124 = ((NI32) 0);
			nimln(71, "service.nim");
			gdirtyoriginalidx_114125 = ((NI32) 0);
			nimln(72, "service.nim");
			gerrorcounter_138074 = 0;
			nimln(97, "service.nim");
			send_134404(stdoutsocket_138084, ((NimStringDesc*) &TMP7077));			nimln(98, "service.nim");
			close_128258(stdoutsocket_138084);		}	}	goto LA4;
	LA3: ;
	{
		nimln(102, "service.nim");
		printf("%s%s\012", (((NimStringDesc*) &TMP7078))->data, (typ)->data);
		nimln(103, "service.nim");
		exit(1);	}	LA4: ;
	popFrame();
}N_NOINLINE(void, compilerserviceInit)(void) {
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	nimfr("service", "service.nim")
	nimln(24, "service.nim");
	LOC1 = 0;
	LOC1 = curcaascmd_419203; curcaascmd_419203 = copyStringRC1(((NimStringDesc*) &TMP7036));
	if (LOC1) nimGCunrefNoCycle(LOC1);
	nimln(25, "service.nim");
	LOC2 = 0;
	LOC2 = lastcaascmd_419204; lastcaascmd_419204 = copyStringRC1(((NimStringDesc*) &TMP7036));
	if (LOC2) nimGCunrefNoCycle(LOC2);
	nimln(28, "service.nim");
	LOC3 = 0;
	LOC3 = arguments_419205; arguments_419205 = copyStringRC1(((NimStringDesc*) &TMP7036));
	if (LOC3) nimGCunrefNoCycle(LOC3);
	popFrame();
}

N_NOINLINE(void, compilerserviceDatInit)(void) {
}
