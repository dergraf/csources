/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#undef linux
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY_UpiOGlu5Ux6DLM73wSrdpg TY_UpiOGlu5Ux6DLM73wSrdpg;
typedef struct TY_5L3fCt9bX0gyEcO30ervPLw TY_5L3fCt9bX0gyEcO30ervPLw;
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
typedef NU8 Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
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
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
typedef NU8 Tendian_bQ3yFYQJojZPNYsZnS7Zjg;
struct TY_UpiOGlu5Ux6DLM73wSrdpg {
NimStringDesc* Field0;
NI Field1;
Tendian_bQ3yFYQJojZPNYsZnS7Zjg Field2;
NI Field3;
NI Field4;
};
typedef TY_UpiOGlu5Ux6DLM73wSrdpg TY_AkFlnp1eOXOampCkGKpGYA[19];
typedef NU8 Tinfoosprop_thetQwB9agpeQ13qFmAcWhg_Set;
struct TY_5L3fCt9bX0gyEcO30ervPLw {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
Tinfoosprop_thetQwB9agpeQ13qFmAcWhg_Set Field12;
};
typedef TY_5L3fCt9bX0gyEcO30ervPLw TY_lqxxFN1iDg3WCzdrp3BQKA[24];
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
static N_NIMCALL(void, T_LEa0rTUoGHqcCT74IoUuTg_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerproc0);
N_NIMCALL(Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag, nametocpu_JQ5BAe9a4dm5IfbYpemguNA)(NimStringDesc* name0);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a0, NimStringDesc* b0);
N_NIMCALL(Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ, nametoos_G9aqbBV7MHYHy8iWiblt9c6w)(NimStringDesc* name0);
N_NIMCALL(void, settarget_VrZPDGVfj7q09clDXxZtPNw)(Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ o0, Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag c0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag;
Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag hostcpu_NC5ykU0V2OtuVwnPAFnkrg;
Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ targetos_PyF9cBkuAlI8I7Y7KiZHIYQ;
Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ hostos_5OFrMEFYXsDinn36E7KWLw;
NI intsize_a1bNgZBNVciKYuzCi2sD5A;
NI floatsize_9aPM39cxaqttCZlYIk3psY3g;
NI ptrsize_3AYcIlvHY9bTK1eNdc8MESQ;
NimStringDesc* tnl_Gp8EwkcsAP9am1klnCCHM4w;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg;
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_3, "i386", 4);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_4, "m68k", 4);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_5, "alpha", 5);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_6, "powerpc", 7);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_7, "powerpc64", 9);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_8, "powerpc64el", 11);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_9, "sparc", 5);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_10, "vm", 2);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_11, "ia64", 4);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_12, "amd64", 5);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_13, "mips", 4);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_14, "mipsel", 6);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_15, "arm", 3);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_16, "arm64", 5);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_17, "js", 2);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_18, "nimrodvm", 8);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_19, "avr", 3);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_20, "msp430", 6);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_21, "sparc64", 7);
NIM_CONST TY_AkFlnp1eOXOampCkGKpGYA Cpu_uYXopJX8pM87pQDCtmgWfQ = {{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_3),
((NI) 32),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_4),
((NI) 32),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_5),
((NI) 64),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_6),
((NI) 32),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_7),
((NI) 64),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_8),
((NI) 64),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_9),
((NI) 32),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_10),
((NI) 32),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_11),
((NI) 64),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_12),
((NI) 64),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_13),
((NI) 32),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_14),
((NI) 32),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_15),
((NI) 32),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_16),
((NI) 64),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 64),
((NI) 64)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_17),
((NI) 32),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_18),
((NI) 32),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 32)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_19),
((NI) 16),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 32),
((NI) 16)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_20),
((NI) 16),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 0),
((NI) 32),
((NI) 16)}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_21),
((NI) 64),
((Tendian_bQ3yFYQJojZPNYsZnS7Zjg) 1),
((NI) 64),
((NI) 64)}
}
;
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_22, "DOS", 3);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_23, "..", 2);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_24, "$1.dll", 6);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_25, "/", 1);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_26, ".obj", 4);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_27, "\015\012", 2);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_28, ";", 1);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_29, "\\", 1);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_30, ".bat", 4);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_31, ".", 1);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_32, ".exe", 4);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_33, "Windows", 7);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_34, "OS2", 3);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_35, "Linux", 5);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_36, "lib$1.so", 8);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_37, ".o", 2);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_38, "\012", 1);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_39, ":", 1);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_40, ".sh", 3);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_41, "", 0);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_42, "MorphOS", 7);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_43, "SkyOS", 5);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_44, "Solaris", 7);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_45, "Irix", 4);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_46, "NetBSD", 6);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_47, "FreeBSD", 7);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_48, "OpenBSD", 7);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_49, "AIX", 3);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_50, "PalmOS", 6);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_51, "QNX", 3);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_52, "Amiga", 5);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_53, "$1.library", 10);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_54, "Atari", 5);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_55, ".tpp", 4);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_56, "Netware", 7);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_57, "$1.nlm", 6);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_58, ".nlm", 4);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_59, "MacOS", 5);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_60, "::", 2);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_61, "$1Lib", 5);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_62, "\015", 1);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_63, ",", 1);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_64, "MacOSX", 6);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_65, "lib$1.dylib", 11);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_66, "Haiku", 5);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_67, "VxWorks", 7);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_68, ".vxe", 4);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_69, "JS", 2);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_70, "NimrodVM", 8);
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_71, "Standalone", 10);
NIM_CONST TY_lqxxFN1iDg3WCzdrp3BQKA Os_Jx0qy9c9bSo4fGkMxUfUaAaw = {{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_22),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_28),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_29),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_30),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_32),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
2}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_33),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_28),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_29),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_30),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_32),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
2}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_34),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_26),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_28),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_29),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_30),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_32),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
2}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_35),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_42),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_43),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_44),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_45),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_46),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_47),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_48),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_49),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_50),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
1}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_51),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
5}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_52),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_53),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
1}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_54),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_24),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_55),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
1}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_56),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_57),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_27),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_58),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
2}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_59),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_60),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_61),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_62),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_63),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
2}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_64),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_65),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
13}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_66),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
13}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_67),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_28),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_29),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_68),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
13}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_69),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
0}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_70),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
0}
,
{((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_71),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_23),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_36),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_37),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_38),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_39),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_25),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_40),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_41),
((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_31),
0}
}
;
STRING_LITERAL(T_LEa0rTUoGHqcCT74IoUuTg_72, "freebsd", 7);
static N_NIMCALL(void, T_LEa0rTUoGHqcCT74IoUuTg_2)(void) {
	nimGCvisit((void*)tnl_Gp8EwkcsAP9am1klnCCHM4w, 0);
}

N_NIMCALL(Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag, nametocpu_JQ5BAe9a4dm5IfbYpemguNA)(NimStringDesc* name0) {
	Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag result0;
{	result0 = (Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag)0;
	{
		Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag i_LHVtdK0x9bFBDbyBH9aBnOYA;
		NI res_AISjRNVCV6UUG84VxkR2rg;
		i_LHVtdK0x9bFBDbyBH9aBnOYA = (Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag)0;
		res_AISjRNVCV6UUG84VxkR2rg = ((NI) 1);
		{
			while (1) {
				if (!(res_AISjRNVCV6UUG84VxkR2rg <= ((NI) 19))) goto LA3;
				i_LHVtdK0x9bFBDbyBH9aBnOYA = ((Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag) (res_AISjRNVCV6UUG84VxkR2rg));
				{
					NI LOC6;
					LOC6 = (NI)0;
					LOC6 = nsuCmpIgnoreStyle(name0, Cpu_uYXopJX8pM87pQDCtmgWfQ[(i_LHVtdK0x9bFBDbyBH9aBnOYA)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result0 = i_LHVtdK0x9bFBDbyBH9aBnOYA;
					goto BeforeRet;
				}
				LA7: ;
				res_AISjRNVCV6UUG84VxkR2rg += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag) 0);
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ, nametoos_G9aqbBV7MHYHy8iWiblt9c6w)(NimStringDesc* name0) {
	Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ result0;
{	result0 = (Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ)0;
	{
		Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ i_Ljatje2K9baX59cOSKSEAxRw;
		NI res_HIx8eXJCE0tmd7ODtIahDg;
		i_Ljatje2K9baX59cOSKSEAxRw = (Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ)0;
		res_HIx8eXJCE0tmd7ODtIahDg = ((NI) 1);
		{
			while (1) {
				if (!(res_HIx8eXJCE0tmd7ODtIahDg <= ((NI) 24))) goto LA3;
				i_Ljatje2K9baX59cOSKSEAxRw = ((Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ) (res_HIx8eXJCE0tmd7ODtIahDg));
				{
					NI LOC6;
					LOC6 = (NI)0;
					LOC6 = nsuCmpIgnoreStyle(name0, Os_Jx0qy9c9bSo4fGkMxUfUaAaw[(i_Ljatje2K9baX59cOSKSEAxRw)- 1].Field0);
					if (!(LOC6 == ((NI) 0))) goto LA7;
					result0 = i_Ljatje2K9baX59cOSKSEAxRw;
					goto BeforeRet;
				}
				LA7: ;
				res_HIx8eXJCE0tmd7ODtIahDg += ((NI) 1);
			} LA3: ;
		}
	}
	result0 = ((Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ) 0);
	}BeforeRet: ;
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0;
	c0 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA3;
		rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system(c0);
	}
	LA3: ;
}

N_NIMCALL(void, settarget_VrZPDGVfj7q09clDXxZtPNw)(Tsystemos_s7Mlr1t66SUqP6BKJMXLaQ o0, Tsystemcpu_XYDt7D1G3qcClFyZy1Ky9ag c0) {
	NimStringDesc* LOC1;
	targetcpu_6ZqNUOGOAkmp4zxKVZ9cFag = c0;
	targetos_PyF9cBkuAlI8I7Y7KiZHIYQ = o0;
	intsize_a1bNgZBNVciKYuzCi2sD5A = (NI)(Cpu_uYXopJX8pM87pQDCtmgWfQ[(c0)- 1].Field1 / ((NI) 8));
	floatsize_9aPM39cxaqttCZlYIk3psY3g = (NI)(Cpu_uYXopJX8pM87pQDCtmgWfQ[(c0)- 1].Field3 / ((NI) 8));
	ptrsize_3AYcIlvHY9bTK1eNdc8MESQ = (NI)(Cpu_uYXopJX8pM87pQDCtmgWfQ[(c0)- 1].Field4 / ((NI) 8));
	LOC1 = (NimStringDesc*)0;
	LOC1 = tnl_Gp8EwkcsAP9am1klnCCHM4w; tnl_Gp8EwkcsAP9am1klnCCHM4w = copyStringRC1(Os_Jx0qy9c9bSo4fGkMxUfUaAaw[(o0)- 1].Field5);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}
NIM_EXTERNC N_NOINLINE(void, compiler_platformInit000)(void) {
nimRegisterGlobalMarker(T_LEa0rTUoGHqcCT74IoUuTg_2);
	hostcpu_NC5ykU0V2OtuVwnPAFnkrg = nametocpu_JQ5BAe9a4dm5IfbYpemguNA(((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_12));
	hostos_5OFrMEFYXsDinn36E7KWLw = nametoos_G9aqbBV7MHYHy8iWiblt9c6w(((NimStringDesc*) &T_LEa0rTUoGHqcCT74IoUuTg_72));
	settarget_VrZPDGVfj7q09clDXxZtPNw(hostos_5OFrMEFYXsDinn36E7KWLw, hostcpu_NC5ykU0V2OtuVwnPAFnkrg);
}

NIM_EXTERNC N_NOINLINE(void, compiler_platformDatInit000)(void) {
}

