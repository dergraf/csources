/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef linux
typedef struct Tnode_bROa11lyF5vxEN9aYNbHmhw Tnode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct Ttype_LTUWCZolpovw9cWE3JBWSUw Ttype_LTUWCZolpovw9cWE3JBWSUw;
typedef struct Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Tsym_AXG7xcvKqaxY6koRX1xkCw Tsym_AXG7xcvKqaxY6koRX1xkCw;
typedef struct Tident_4umxGerWTHGPwUms7Yqu3g Tident_4umxGerWTHGPwUms7Yqu3g;
typedef struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ TY_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct TNimType TNimType;
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
typedef struct Tidobj_raN9cHVgzmvaXisezY9aGg9cg Tidobj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct TNimNode TNimNode;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct Tloc_EtHNvCB0bgfu9bFjzx9cb6aA Tloc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct Ropeobj_HF4qJnb6xiOddgPmsxodtQ Ropeobj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct TY_XOVT24GHXwqiEj5GCsEGCA TY_XOVT24GHXwqiEj5GCsEGCA;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct Tstrtable_f07aOS3dr28kGa5wcE29aFA Tstrtable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct Tlib_4f9aBgmqEuj7uWJdBBGcRgA Tlib_4f9aBgmqEuj7uWJdBBGcRgA;
typedef struct Basechunk_Sdq7WpT6qAH858F5ZEdG3w Basechunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct Freecell_u6M5LHprqzkn9axr04yg9bGQ Freecell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
typedef struct Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q;
typedef NU64 Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag_Set;
struct  Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw  {
NI16 line;
NI16 col;
NI32 fileindex;
};
typedef NU16 Tnodeflag_jyh9acXHkhZANSSvPIY7ZLg_Set;
typedef NU8 Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  Tnode_bROa11lyF5vxEN9aYNbHmhw  {
Ttype_LTUWCZolpovw9cWE3JBWSUw* typ;
Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
Tnodeflag_jyh9acXHkhZANSSvPIY7ZLg_Set flags;
Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intval;
} S1;
struct {NF floatval;
} S2;
struct {NimStringDesc* strval;
} S3;
struct {Tsym_AXG7xcvKqaxY6koRX1xkCw* sym;
} S4;
struct {Tident_4umxGerWTHGPwUms7Yqu3g* ident;
} S5;
struct {TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
} S6;
} kindU;
NimStringDesc* comment;
};
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
struct  TNimObject  {
TNimType* m_type;
};
struct  Tidobj_raN9cHVgzmvaXisezY9aGg9cg  {
  TNimObject Sup;
NI id;
};
typedef NU8 Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 Tcallingconvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU32 Ttypeflag_x2m5g1NpbmDig4wLT3Ylhw_Set;
typedef NU8 Tlockind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 Tstorageloc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 Tlocflag_o2bqJgR4ceIupnUSpxiudA_Set;
struct  Tloc_EtHNvCB0bgfu9bFjzx9cb6aA  {
Tlockind_O7PRFZKuiBBWbku09cayVBg k;
Tstorageloc_JK9cKMX3XnqHaUky9b6gkGEw s;
Tlocflag_o2bqJgR4ceIupnUSpxiudA_Set flags;
Ttype_LTUWCZolpovw9cWE3JBWSUw* t;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* r;
};
struct  Ttype_LTUWCZolpovw9cWE3JBWSUw  {
  Tidobj_raN9cHVgzmvaXisezY9aGg9cg Sup;
Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag kind;
Tcallingconvention_yjAJ8w0h1PBaSwSGJ3P7IA callconv;
Ttypeflag_x2m5g1NpbmDig4wLT3Ylhw_Set flags;
TY_zuqP4Riz26Oi5fWgPYVEgA* sons;
Tnode_bROa11lyF5vxEN9aYNbHmhw* n;
Tsym_AXG7xcvKqaxY6koRX1xkCw* owner;
Tsym_AXG7xcvKqaxY6koRX1xkCw* sym;
Tsym_AXG7xcvKqaxY6koRX1xkCw* destructor;
Tsym_AXG7xcvKqaxY6koRX1xkCw* deepcopy;
Tsym_AXG7xcvKqaxY6koRX1xkCw* assignment;
TY_iGkpo9aKQdr3NWelKC4cnJA* methods;
NI64 size;
NI16 align;
NI16 locklevel;
Tloc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
Ttype_LTUWCZolpovw9cWE3JBWSUw* typeinst;
};
struct TY_XOVT24GHXwqiEj5GCsEGCA {
NimStringDesc* Field0;
NI Field1;
};
typedef NU8 Tsymkind_cNCW9acsSznmEccl1fgQwkw;
struct  Tstrtable_f07aOS3dr28kGa5wcE29aFA  {
NI counter;
TY_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 Tmagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU32 Tsymflag_K9ay6LWMat9bUiT9bIbMxpDHw_Set;
typedef NU32 Toption_WspMeQySXNP2XoTWR5MTgg_Set;
struct  Tsym_AXG7xcvKqaxY6koRX1xkCw  {
  Tidobj_raN9cHVgzmvaXisezY9aGg9cg Sup;
Tsymkind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {TY_zuqP4Riz26Oi5fWgPYVEgA* typeinstcache;
} S1;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* procinstcache;
Tsym_AXG7xcvKqaxY6koRX1xkCw* gcunsafetyreason;
} S2;
struct {TY_DXS6mEo7PVUFJkirsQ9bNQA* usedgenerics;
Tstrtable_f07aOS3dr28kGa5wcE29aFA tab;
} S3;
struct {Tsym_AXG7xcvKqaxY6koRX1xkCw* guard;
NI bitsize;
} S4;
} kindU;
Tmagic_shZhZOdbVC5nnFvcXQAImg magic;
Ttype_LTUWCZolpovw9cWE3JBWSUw* typ;
Tident_4umxGerWTHGPwUms7Yqu3g* name;
Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info;
Tsym_AXG7xcvKqaxY6koRX1xkCw* owner;
Tsymflag_K9ay6LWMat9bUiT9bIbMxpDHw_Set flags;
Tnode_bROa11lyF5vxEN9aYNbHmhw* ast;
Toption_WspMeQySXNP2XoTWR5MTgg_Set options;
NI position;
NI offset;
Tloc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
Tlib_4f9aBgmqEuj7uWJdBBGcRgA* annex;
Tnode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
struct  Tident_4umxGerWTHGPwUms7Yqu3g  {
  Tidobj_raN9cHVgzmvaXisezY9aGg9cg Sup;
NimStringDesc* s;
Tident_4umxGerWTHGPwUms7Yqu3g* next;
NI h;
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
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
Tsym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct  Ropeobj_HF4qJnb6xiOddgPmsxodtQ  {
  TNimObject Sup;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* left;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* right;
NI length;
NimStringDesc* data;
};
struct  Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q  {
  TNimObject Sup;
Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q* prev;
Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q* next;
};
typedef NU8 Tlibkind_9b8v60kso59bBaw9cp8B9a9apKQ;
struct  Tlib_4f9aBgmqEuj7uWJdBBGcRgA  {
  Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q Sup;
Tlibkind_9b8v60kso59bBaw9cp8B9a9apKQ kind;
NIM_BOOL generated;
NIM_BOOL isoverriden;
Ropeobj_HF4qJnb6xiOddgPmsxodtQ* name;
Tnode_bROa11lyF5vxEN9aYNbHmhw* path;
};
struct  Freecell_u6M5LHprqzkn9axr04yg9bGQ  {
Freecell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zerofield;
};
struct  Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA  {
Tsym_AXG7xcvKqaxY6koRX1xkCw* sym;
TY_zuqP4Riz26Oi5fWgPYVEgA* concretetypes;
NI compilesid;
};
struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  Tnode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct TY_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  Ttype_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
struct TY_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct TY_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  Tsym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
N_NIMCALL(Ttype_LTUWCZolpovw9cWE3JBWSUw*, skiptypes_pLCdCGDuirMe9cspwviV9aVA)(Ttype_LTUWCZolpovw9cWE3JBWSUw* t0, Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag_Set kinds0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
N_NIMCALL(Tsym_AXG7xcvKqaxY6koRX1xkCw*, ithfield_dVbj6zm1IqxrJtEDcHXhiQ)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NI* field0);
N_NIMCALL(NI, sonslen_qPWPHw7WgJeEVYUdcaRIig)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
N_NIMCALL(void, internalerror_MXmtqrCmYwtOPkDCFgUWKQ)(Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0, NimStringDesc* errmsg0);
N_NIMCALL(Tnode_bROa11lyF5vxEN9aYNbHmhw*, lastson_esDJA7239bJDiq4UrX9aHCjg)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
N_NIMCALL(void, globalerror_GarD0CQJ5aQhoHekHYinVQ_2)(Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0, NimStringDesc* arg0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
N_NIMCALL(void, internalerror_5XY9cUy7hZmUusM38U9cYYdw)(NimStringDesc* errmsg0);
N_NIMCALL(NimStringDesc*, HEX24_k53Ge4e9cDjc7y9c5uML7sPQ)(TY_XOVT24GHXwqiEj5GCsEGCA x0);
N_NIMCALL(void, annotatetype_7COu9arEnQ1XMww311ztLAg)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, Ttype_LTUWCZolpovw9cWE3JBWSUw* t0);
N_NIMCALL(NI, len_gG7hUAX9cA629ahMLVL3xN4w_2)(Ttype_LTUWCZolpovw9cWE3JBWSUw* n0);
N_NIMCALL(Ttype_LTUWCZolpovw9cWE3JBWSUw*, elemtype_46gPaVDDGhiU69b2oKDJZuA_2)(Ttype_LTUWCZolpovw9cWE3JBWSUw* t0);
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(T_gkmEeaIyT0wHpJzs9ciIEJg_2, "ithField", 8);
STRING_LITERAL(T_gkmEeaIyT0wHpJzs9ciIEJg_3, "ithField(record case branch)", 28);
STRING_LITERAL(T_gkmEeaIyT0wHpJzs9ciIEJg_4, "invalid field at index ", 23);
STRING_LITERAL(T_gkmEeaIyT0wHpJzs9ciIEJg_6, "semmacrosanity.nim", 18);
NIM_CONST TY_XOVT24GHXwqiEj5GCsEGCA T_gkmEeaIyT0wHpJzs9ciIEJg_5 = {((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_6),
((NI) 51)}
;
STRING_LITERAL(T_gkmEeaIyT0wHpJzs9ciIEJg_7, "() must have a tuple type", 25);
STRING_LITERAL(T_gkmEeaIyT0wHpJzs9ciIEJg_8, "[] must have some form of array type", 36);
STRING_LITERAL(T_gkmEeaIyT0wHpJzs9ciIEJg_9, "{} must have the set type", 25);
STRING_LITERAL(T_gkmEeaIyT0wHpJzs9ciIEJg_10, "float literal must have some float type", 39);
STRING_LITERAL(T_gkmEeaIyT0wHpJzs9ciIEJg_11, "integer literal must have some int type", 39);
STRING_LITERAL(T_gkmEeaIyT0wHpJzs9ciIEJg_12, "string literal must be of some string type", 42);
STRING_LITERAL(T_gkmEeaIyT0wHpJzs9ciIEJg_13, "nil literal must be of some pointer type", 40);

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

static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0) {
	NI result0;
	result0 = (NI)0;
	{
		if (!((*n0).kindU.S6.sons == 0)) goto LA3;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA3: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

N_NIMCALL(Tsym_AXG7xcvKqaxY6koRX1xkCw*, ithfield_dVbj6zm1IqxrJtEDcHXhiQ)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NI* field0) {
	Tsym_AXG7xcvKqaxY6koRX1xkCw* result0;
{	result0 = (Tsym_AXG7xcvKqaxY6koRX1xkCw*)0;
	result0 = NIM_NIL;
	switch ((*n0).kind) {
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 138):
	{
		{
			NI i_5M1Q39a38XnDTLT39bx5Of2g;
			NI HEX3Atmp_Pdi9b8enJ39a4BPR69buMUH8w;
			NI LOC3;
			NI res_wmHNF0yxZFOhJROjDAEFrQ;
			i_5M1Q39a38XnDTLT39bx5Of2g = (NI)0;
			HEX3Atmp_Pdi9b8enJ39a4BPR69buMUH8w = (NI)0;
			LOC3 = (NI)0;
			LOC3 = sonslen_qPWPHw7WgJeEVYUdcaRIig(n0);
			HEX3Atmp_Pdi9b8enJ39a4BPR69buMUH8w = (NI)(LOC3 - ((NI) 1));
			res_wmHNF0yxZFOhJROjDAEFrQ = ((NI) 0);
			{
				while (1) {
					if (!(res_wmHNF0yxZFOhJROjDAEFrQ <= HEX3Atmp_Pdi9b8enJ39a4BPR69buMUH8w)) goto LA5;
					i_5M1Q39a38XnDTLT39bx5Of2g = res_wmHNF0yxZFOhJROjDAEFrQ;
					result0 = ithfield_dVbj6zm1IqxrJtEDcHXhiQ((*n0).kindU.S6.sons->data[i_5M1Q39a38XnDTLT39bx5Of2g], field0);
					{
						if (!!((result0 == NIM_NIL))) goto LA8;
						goto BeforeRet;
					}
					LA8: ;
					res_wmHNF0yxZFOhJROjDAEFrQ += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 139):
	{
		{
			if (!!(((*(*n0).kindU.S6.sons->data[((NI) 0)]).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 3)))) goto LA13;
			internalerror_MXmtqrCmYwtOPkDCFgUWKQ((*n0).info, ((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_2));
		}
		LA13: ;
		result0 = ithfield_dVbj6zm1IqxrJtEDcHXhiQ((*n0).kindU.S6.sons->data[((NI) 0)], field0);
		{
			if (!!((result0 == NIM_NIL))) goto LA17;
			goto BeforeRet;
		}
		LA17: ;
		{
			NI i_5M1Q39a38XnDTLT39bx5Of2g_2;
			NI HEX3Atmp_Pdi9b8enJ39a4BPR69buMUH8w_2;
			NI LOC20;
			NI res_wmHNF0yxZFOhJROjDAEFrQ_2;
			i_5M1Q39a38XnDTLT39bx5Of2g_2 = (NI)0;
			HEX3Atmp_Pdi9b8enJ39a4BPR69buMUH8w_2 = (NI)0;
			LOC20 = (NI)0;
			LOC20 = sonslen_qPWPHw7WgJeEVYUdcaRIig(n0);
			HEX3Atmp_Pdi9b8enJ39a4BPR69buMUH8w_2 = (NI)(LOC20 - ((NI) 1));
			res_wmHNF0yxZFOhJROjDAEFrQ_2 = ((NI) 1);
			{
				while (1) {
					if (!(res_wmHNF0yxZFOhJROjDAEFrQ_2 <= HEX3Atmp_Pdi9b8enJ39a4BPR69buMUH8w_2)) goto LA22;
					i_5M1Q39a38XnDTLT39bx5Of2g_2 = res_wmHNF0yxZFOhJROjDAEFrQ_2;
					switch ((*(*n0).kindU.S6.sons->data[i_5M1Q39a38XnDTLT39bx5Of2g_2]).kind) {
					case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 85):
					case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 88):
					{
						Tnode_bROa11lyF5vxEN9aYNbHmhw* LOC24;
						LOC24 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
						LOC24 = lastson_esDJA7239bJDiq4UrX9aHCjg((*n0).kindU.S6.sons->data[i_5M1Q39a38XnDTLT39bx5Of2g_2]);
						result0 = ithfield_dVbj6zm1IqxrJtEDcHXhiQ(LOC24, field0);
						{
							if (!!((result0 == NIM_NIL))) goto LA27;
							goto BeforeRet;
						}
						LA27: ;
					}
					break;
					default:
					{
						internalerror_MXmtqrCmYwtOPkDCFgUWKQ((*n0).info, ((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_3));
					}
					break;
					}
					res_wmHNF0yxZFOhJROjDAEFrQ_2 += ((NI) 1);
				} LA22: ;
			}
		}
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		{
			if (!((*field0) == ((NI) 0))) goto LA33;
			result0 = (*n0).kindU.S4.sym;
		}
		goto LA31;
		LA33: ;
		{
			(*field0) -= ((NI) 1);
		}
		LA31: ;
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, copymem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

N_NIMCALL(void, annotatetype_7COu9arEnQ1XMww311ztLAg)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, Ttype_LTUWCZolpovw9cWE3JBWSUw* t0) {
	Ttype_LTUWCZolpovw9cWE3JBWSUw* x_TrkexJcopsrVrQ9bTo1marg;
	x_TrkexJcopsrVrQ9bTo1marg = skiptypes_pLCdCGDuirMe9cspwviV9aVA(t0, 1091856);
	switch ((*n0).kind) {
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 38):
	{
		Ttype_LTUWCZolpovw9cWE3JBWSUw* x0;
		x0 = skiptypes_pLCdCGDuirMe9cspwviV9aVA(t0, 14723344);
		asgnRefNoCycle((void**) (&(*n0).typ), t0);
		{
			NI i_kUf0lS505yB69cQAhB6HX8Q;
			NI HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag;
			NI LOC3;
			NI res_YwAZ2nFBRXVfR4KhSUchXg;
			i_kUf0lS505yB69cQAhB6HX8Q = (NI)0;
			HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag = (NI)0;
			LOC3 = (NI)0;
			LOC3 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n0);
			HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag = (LOC3 - 1);
			res_YwAZ2nFBRXVfR4KhSUchXg = ((NI) 1);
			{
				while (1) {
					NI j0;
					Tsym_AXG7xcvKqaxY6koRX1xkCw* field0;
					if (!(res_YwAZ2nFBRXVfR4KhSUchXg <= HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag)) goto LA5;
					i_kUf0lS505yB69cQAhB6HX8Q = res_YwAZ2nFBRXVfR4KhSUchXg;
					j0 = (NI)(i_kUf0lS505yB69cQAhB6HX8Q - ((NI) 1));
					field0 = ithfield_dVbj6zm1IqxrJtEDcHXhiQ((*x0).n, (&j0));
					{
						NimStringDesc* LOC10;
						NimStringDesc* LOC11;
						if (!(field0 == 0)) goto LA8;
						LOC10 = (NimStringDesc*)0;
						LOC11 = (NimStringDesc*)0;
						LOC11 = nimIntToStr(i_kUf0lS505yB69cQAhB6HX8Q);
						LOC10 = rawNewString(LOC11->Sup.len + 23);
appendString(LOC10, ((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_4));
appendString(LOC10, LOC11);
						globalerror_GarD0CQJ5aQhoHekHYinVQ_2((*n0).info, LOC10);
					}
					goto LA6;
					LA8: ;
					{
						{
							NimStringDesc* LOC17;
							if (!!(((*(*n0).kindU.S6.sons->data[i_kUf0lS505yB69cQAhB6HX8Q]).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 34)))) goto LA15;
							LOC17 = (NimStringDesc*)0;
							LOC17 = HEX24_k53Ge4e9cDjc7y9c5uML7sPQ(T_gkmEeaIyT0wHpJzs9ciIEJg_5);
							internalerror_5XY9cUy7hZmUusM38U9cYYdw(LOC17);
						}
						LA15: ;
						annotatetype_7COu9arEnQ1XMww311ztLAg((*(*n0).kindU.S6.sons->data[i_kUf0lS505yB69cQAhB6HX8Q]).kindU.S6.sons->data[((NI) 1)], (*field0).typ);
					}
					LA6: ;
					res_YwAZ2nFBRXVfR4KhSUchXg += ((NI) 1);
				} LA5: ;
			}
		}
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 37):
	{
		{
			if (!((*x_TrkexJcopsrVrQ9bTo1marg).kind == ((Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag) 18))) goto LA21;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				NI i_kUf0lS505yB69cQAhB6HX8Q_2;
				NI HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_2;
				NI LOC24;
				NI res_YwAZ2nFBRXVfR4KhSUchXg_2;
				i_kUf0lS505yB69cQAhB6HX8Q_2 = (NI)0;
				HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_2 = (NI)0;
				LOC24 = (NI)0;
				LOC24 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n0);
				HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_2 = (LOC24 - 1);
				res_YwAZ2nFBRXVfR4KhSUchXg_2 = ((NI) 0);
				{
					while (1) {
						if (!(res_YwAZ2nFBRXVfR4KhSUchXg_2 <= HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_2)) goto LA26;
						i_kUf0lS505yB69cQAhB6HX8Q_2 = res_YwAZ2nFBRXVfR4KhSUchXg_2;
						{
							NI LOC29;
							NimStringDesc* LOC32;
							NimStringDesc* LOC33;
							LOC29 = (NI)0;
							LOC29 = len_gG7hUAX9cA629ahMLVL3xN4w_2(x_TrkexJcopsrVrQ9bTo1marg);
							if (!(LOC29 <= i_kUf0lS505yB69cQAhB6HX8Q_2)) goto LA30;
							LOC32 = (NimStringDesc*)0;
							LOC33 = (NimStringDesc*)0;
							LOC33 = nimIntToStr(i_kUf0lS505yB69cQAhB6HX8Q_2);
							LOC32 = rawNewString(LOC33->Sup.len + 23);
appendString(LOC32, ((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_4));
appendString(LOC32, LOC33);
							globalerror_GarD0CQJ5aQhoHekHYinVQ_2((*n0).info, LOC32);
						}
						goto LA27;
						LA30: ;
						{
							annotatetype_7COu9arEnQ1XMww311ztLAg((*n0).kindU.S6.sons->data[i_kUf0lS505yB69cQAhB6HX8Q_2], (*x_TrkexJcopsrVrQ9bTo1marg).sons->data[i_kUf0lS505yB69cQAhB6HX8Q_2]);
						}
						LA27: ;
						res_YwAZ2nFBRXVfR4KhSUchXg_2 += ((NI) 1);
					} LA26: ;
				}
			}
		}
		goto LA19;
		LA21: ;
		{
			NIM_BOOL LOC36;
			LOC36 = (NIM_BOOL)0;
			LOC36 = ((*x_TrkexJcopsrVrQ9bTo1marg).kind == ((Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag) 25));
			if (!(LOC36)) goto LA37;
			LOC36 = ((*x_TrkexJcopsrVrQ9bTo1marg).callconv == ((Tcallingconvention_yjAJ8w0h1PBaSwSGJ3P7IA) 8));
			LA37: ;
			if (!LOC36) goto LA38;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA19;
		LA38: ;
		{
			globalerror_GarD0CQJ5aQhoHekHYinVQ_2((*n0).info, ((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_7));
		}
		LA19: ;
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 41):
	{
		{
			if (!((151060480 &((NU64)1<<((NU)((*x_TrkexJcopsrVrQ9bTo1marg).kind)&63U)))!=0)) goto LA44;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode_bROa11lyF5vxEN9aYNbHmhw* m_1D8W5e9aGL3Te6BIaZYuL9bg;
				m_1D8W5e9aGL3Te6BIaZYuL9bg = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
				{
					NI i_kUf0lS505yB69cQAhB6HX8Q_3;
					NI HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_3;
					NI LOC48;
					NI res_YwAZ2nFBRXVfR4KhSUchXg_3;
					i_kUf0lS505yB69cQAhB6HX8Q_3 = (NI)0;
					HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_3 = (NI)0;
					LOC48 = (NI)0;
					LOC48 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n0);
					HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_3 = (LOC48 - 1);
					res_YwAZ2nFBRXVfR4KhSUchXg_3 = ((NI) 0);
					{
						while (1) {
							Ttype_LTUWCZolpovw9cWE3JBWSUw* LOC51;
							if (!(res_YwAZ2nFBRXVfR4KhSUchXg_3 <= HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_3)) goto LA50;
							i_kUf0lS505yB69cQAhB6HX8Q_3 = res_YwAZ2nFBRXVfR4KhSUchXg_3;
							m_1D8W5e9aGL3Te6BIaZYuL9bg = (*n0).kindU.S6.sons->data[i_kUf0lS505yB69cQAhB6HX8Q_3];
							LOC51 = (Ttype_LTUWCZolpovw9cWE3JBWSUw*)0;
							LOC51 = elemtype_46gPaVDDGhiU69b2oKDJZuA_2(x_TrkexJcopsrVrQ9bTo1marg);
							annotatetype_7COu9arEnQ1XMww311ztLAg(m_1D8W5e9aGL3Te6BIaZYuL9bg, LOC51);
							res_YwAZ2nFBRXVfR4KhSUchXg_3 += ((NI) 1);
						} LA50: ;
					}
				}
			}
		}
		goto LA42;
		LA44: ;
		{
			globalerror_GarD0CQJ5aQhoHekHYinVQ_2((*n0).info, ((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_8));
		}
		LA42: ;
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 39):
	{
		{
			if (!((524288 &((NU64)1<<((NU)((*x_TrkexJcopsrVrQ9bTo1marg).kind)&63U)))!=0)) goto LA56;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
			{
				Tnode_bROa11lyF5vxEN9aYNbHmhw* m_1D8W5e9aGL3Te6BIaZYuL9bg_2;
				m_1D8W5e9aGL3Te6BIaZYuL9bg_2 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
				{
					NI i_kUf0lS505yB69cQAhB6HX8Q_4;
					NI HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_4;
					NI LOC60;
					NI res_YwAZ2nFBRXVfR4KhSUchXg_4;
					i_kUf0lS505yB69cQAhB6HX8Q_4 = (NI)0;
					HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_4 = (NI)0;
					LOC60 = (NI)0;
					LOC60 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n0);
					HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_4 = (LOC60 - 1);
					res_YwAZ2nFBRXVfR4KhSUchXg_4 = ((NI) 0);
					{
						while (1) {
							Ttype_LTUWCZolpovw9cWE3JBWSUw* LOC63;
							if (!(res_YwAZ2nFBRXVfR4KhSUchXg_4 <= HEX3Atmp_ncv6LFvitMAnaYbW5BwT9ag_4)) goto LA62;
							i_kUf0lS505yB69cQAhB6HX8Q_4 = res_YwAZ2nFBRXVfR4KhSUchXg_4;
							m_1D8W5e9aGL3Te6BIaZYuL9bg_2 = (*n0).kindU.S6.sons->data[i_kUf0lS505yB69cQAhB6HX8Q_4];
							LOC63 = (Ttype_LTUWCZolpovw9cWE3JBWSUw*)0;
							LOC63 = elemtype_46gPaVDDGhiU69b2oKDJZuA_2(x_TrkexJcopsrVrQ9bTo1marg);
							annotatetype_7COu9arEnQ1XMww311ztLAg(m_1D8W5e9aGL3Te6BIaZYuL9bg_2, LOC63);
							res_YwAZ2nFBRXVfR4KhSUchXg_4 += ((NI) 1);
						} LA62: ;
					}
				}
			}
		}
		goto LA54;
		LA56: ;
		{
			globalerror_GarD0CQJ5aQhoHekHYinVQ_2((*n0).info, ((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_9));
		}
		LA54: ;
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 19):
	{
		{
			if (!((IL64(1030792151040) &((NU64)1<<((NU)((*x_TrkexJcopsrVrQ9bTo1marg).kind)&63U)))!=0)) goto LA68;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA66;
		LA68: ;
		{
			globalerror_GarD0CQJ5aQhoHekHYinVQ_2((*n0).info, ((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_10));
		}
		LA66: ;
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 15):
	{
		{
			if (!((IL64(35182224621574) &((NU64)1<<((NU)((*x_TrkexJcopsrVrQ9bTo1marg).kind)&63U)))!=0)) goto LA74;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA72;
		LA74: ;
		{
			globalerror_GarD0CQJ5aQhoHekHYinVQ_2((*n0).info, ((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_11));
		}
		LA72: ;
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
	{
		{
			if (!((805306368 &((NU64)1<<((NU)((*x_TrkexJcopsrVrQ9bTo1marg).kind)&63U)))!=0)) goto LA80;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA78;
		LA80: ;
		{
			globalerror_GarD0CQJ5aQhoHekHYinVQ_2((*n0).info, ((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_12));
		}
		LA78: ;
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
	{
		{
			if (!((IL64(1125900835880960) &((NU64)1<<((NU)((*x_TrkexJcopsrVrQ9bTo1marg).kind)&63U)))!=0)) goto LA86;
			asgnRefNoCycle((void**) (&(*n0).typ), t0);
		}
		goto LA84;
		LA86: ;
		{
			globalerror_GarD0CQJ5aQhoHekHYinVQ_2((*n0).info, ((NimStringDesc*) &T_gkmEeaIyT0wHpJzs9ciIEJg_13));
		}
		LA84: ;
	}
	break;
	default:
	{
	}
	break;
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_semmacrosanityDatInit000)(void) {
}

