/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

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
typedef struct Tidobj_raN9cHVgzmvaXisezY9aGg9cg Tidobj_raN9cHVgzmvaXisezY9aGg9cg;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TY_zuqP4Riz26Oi5fWgPYVEgA TY_zuqP4Riz26Oi5fWgPYVEgA;
typedef struct TY_DXS6mEo7PVUFJkirsQ9bNQA TY_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct Tstrtable_f07aOS3dr28kGa5wcE29aFA Tstrtable_f07aOS3dr28kGa5wcE29aFA;
typedef struct TY_sksVpmPRIkNR9axiwtD1Guw TY_sksVpmPRIkNR9axiwtD1Guw;
typedef struct Tloc_EtHNvCB0bgfu9bFjzx9cb6aA Tloc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct Ropeobj_HF4qJnb6xiOddgPmsxodtQ Ropeobj_HF4qJnb6xiOddgPmsxodtQ;
typedef struct Tlib_4f9aBgmqEuj7uWJdBBGcRgA Tlib_4f9aBgmqEuj7uWJdBBGcRgA;
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
typedef struct TY_iGkpo9aKQdr3NWelKC4cnJA TY_iGkpo9aKQdr3NWelKC4cnJA;
typedef struct Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q Tlistentry_U4JkVlrJQaACKZ9a9cwCla3Q;
typedef struct Basechunk_Sdq7WpT6qAH858F5ZEdG3w Basechunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct Freecell_u6M5LHprqzkn9axr04yg9bGQ Freecell_u6M5LHprqzkn9axr04yg9bGQ;
typedef struct TY_a09bGTAl9ceOKTAytYdkbyKg TY_a09bGTAl9ceOKTAytYdkbyKg;
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
typedef NU8 Tsymkind_cNCW9acsSznmEccl1fgQwkw;
struct  Tstrtable_f07aOS3dr28kGa5wcE29aFA  {
NI counter;
TY_sksVpmPRIkNR9axiwtD1Guw* data;
};
typedef NU16 Tmagic_shZhZOdbVC5nnFvcXQAImg;
typedef NU32 Tsymflag_K9ay6LWMat9bUiT9bIbMxpDHw_Set;
typedef NU32 Toption_WspMeQySXNP2XoTWR5MTgg_Set;
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
typedef NU8 Tnimnodekind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
Tnimnodekind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
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
typedef NU64 Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag_Set;
typedef NU8 Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 Tcallingconvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU32 Ttypeflag_x2m5g1NpbmDig4wLT3Ylhw_Set;
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
typedef NU8 Tnodeflag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU16 Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw;
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
typedef NI TY_9agrCtWKhCnWWMJpKKugJag[16];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9agrCtWKhCnWWMJpKKugJag bits;
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
TY_9agrCtWKhCnWWMJpKKugJag bits;
};
struct TY_a09bGTAl9ceOKTAytYdkbyKg {
NI Field0;
Tsym_AXG7xcvKqaxY6koRX1xkCw* Field1;
};
struct  Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA  {
Tsym_AXG7xcvKqaxY6koRX1xkCw* sym;
TY_zuqP4Riz26Oi5fWgPYVEgA* concretetypes;
NI compilesid;
};
struct  Freecell_u6M5LHprqzkn9axr04yg9bGQ  {
Freecell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zerofield;
};
struct TY_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  Tnode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct TY_zuqP4Riz26Oi5fWgPYVEgA {
  TGenericSeq Sup;
  Ttype_LTUWCZolpovw9cWE3JBWSUw* data[SEQ_DECL_SIZE];
};
struct TY_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  Tinstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct TY_sksVpmPRIkNR9axiwtD1Guw {
  TGenericSeq Sup;
  Tsym_AXG7xcvKqaxY6koRX1xkCw* data[SEQ_DECL_SIZE];
};
struct TY_iGkpo9aKQdr3NWelKC4cnJA {
  TGenericSeq Sup;
  TY_a09bGTAl9ceOKTAytYdkbyKg data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0);
static N_INLINE(NIM_BOOL, equalmem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a0, void* b0, NI size0);
N_NIMCALL(NI, sonslen_qPWPHw7WgJeEVYUdcaRIig)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
N_NIMCALL(NIM_BOOL, exprstructuralequivalent_XApnXRaD9btY9a4pkMO0ITTg)(Tnode_bROa11lyF5vxEN9aYNbHmhw* a0, Tnode_bROa11lyF5vxEN9aYNbHmhw* b0, NIM_BOOL strictsymequality0);
N_NIMCALL(void*, newSeq)(TNimType* typ0, NI len0);
N_NIMCALL(NIM_BOOL, cyclictreeaux_fJtdv7gqXOKIakDjzod6NA)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, TY_ehmV9bTklH2Gt9cXHV9c0HLeQ** visited0);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq0, NI elemsize0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
static N_INLINE(Tnode_bROa11lyF5vxEN9aYNbHmhw*, pop_d29cpXTitwhGntYusVkzaCgtrees)(TY_ehmV9bTklH2Gt9cXHV9c0HLeQ** s0);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq0, NI elemsize0, NI newlen0);
N_NIMCALL(Tnode_bROa11lyF5vxEN9aYNbHmhw*, newnodei_PIqgSH9b0m7nFpOyXf9cpz5w)(Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw kind0, Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0);
N_NIMCALL(void, unneststmts_9c5lwXyiq4AUtthHD0LdCvQ)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, Tnode_bROa11lyF5vxEN9aYNbHmhw* result0);
static N_INLINE(NI, len_CdME9baJhvveuPEDZE9bXoxAlambdalifting)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
N_NIMCALL(void, add_gCCf68XrWL79bKes6htzFjQ_3)(Tnode_bROa11lyF5vxEN9aYNbHmhw* father0, Tnode_bROa11lyF5vxEN9aYNbHmhw* son0);
N_NIMCALL(Tnode_bROa11lyF5vxEN9aYNbHmhw*, newnodei_jIQp9ciM8if1a6TX6toZelw)(Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw kind0, Tlineinfo_T9c3PM9bs7WZ4LIQfEici9cZw info0, NI children0);
N_NIMCALL(NIM_BOOL, isdeepconstexpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
N_NIMCALL(Ttype_LTUWCZolpovw9cWE3JBWSUw*, skiptypes_pLCdCGDuirMe9cspwviV9aVA)(Ttype_LTUWCZolpovw9cWE3JBWSUw* t0, Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag_Set kinds0);
N_NIMCALL(NIM_BOOL, iscaseobj_FTbvAnf1y9b9c3Krp9bsHDTiw_3)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
static N_INLINE(NI, safelen_CdME9baJhvveuPEDZE9bXoxAsigmatch)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0);
static N_INLINE(Tnode_bROa11lyF5vxEN9aYNbHmhw*, HEX5BHEX5D_4mGh5VHoHoaSkXDYdG6pyAitersgen)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NI i0);
N_NIMCALL(Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw, whichkeyword_WhYAAh6vF1PoyH6Hsspu4Q)(Tident_4umxGerWTHGPwUms7Yqu3g* id0);
extern TNimType NTI_ehmV9bTklH2Gt9cXHV9c0HLeQ;
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;

static N_INLINE(NIM_BOOL, equalmem_DCrUjdaMvFDHaR1hs7sQGwropes)(void* a0, void* b0, NI size0) {
	NIM_BOOL result0;
	int LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (int)0;
	LOC1 = memcmp(a0, b0, ((size_t) (size0)));
	result0 = (LOC1 == ((NI32) 0));
	return result0;
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a0, NimStringDesc* b0) {
	NIM_BOOL result0;
	NIM_BOOL LOC11;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = (NIM_BOOL)0;
		LOC7 = (a0 == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b0 == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA9: ;
	LOC11 = (NIM_BOOL)0;
	LOC11 = ((*a0).Sup.len == (*b0).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC11 = equalmem_DCrUjdaMvFDHaR1hs7sQGwropes(((void*) ((*a0).data)), ((void*) ((*b0).data)), ((NI) ((*a0).Sup.len)));
	LA12: ;
	result0 = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, exprstructuralequivalent_XApnXRaD9btY9a4pkMO0ITTg)(Tnode_bROa11lyF5vxEN9aYNbHmhw* a0, Tnode_bROa11lyF5vxEN9aYNbHmhw* b0, NIM_BOOL strictsymequality0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!(a0 == b0)) goto LA3;
		result0 = NIM_TRUE;
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		NIM_BOOL LOC7;
		LOC6 = (NIM_BOOL)0;
		LOC7 = (NIM_BOOL)0;
		LOC7 = !((a0 == NIM_NIL));
		if (!(LOC7)) goto LA8;
		LOC7 = !((b0 == NIM_NIL));
		LA8: ;
		LOC6 = LOC7;
		if (!(LOC6)) goto LA9;
		LOC6 = ((*a0).kind == (*b0).kind);
		LA9: ;
		if (!LOC6) goto LA10;
		switch ((*a0).kind) {
		case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			{
				if (!strictsymequality0) goto LA15;
				result0 = ((*a0).kindU.S4.sym == (*b0).kindU.S4.sym);
			}
			goto LA13;
			LA15: ;
			{
				result0 = ((*(*(*a0).kindU.S4.sym).name).Sup.id == (*(*(*b0).kindU.S4.sym).name).Sup.id);
			}
			LA13: ;
		}
		break;
		case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 2):
		{
			result0 = ((*(*a0).kindU.S5.ident).Sup.id == (*(*b0).kindU.S5.ident).Sup.id);
		}
		break;
		case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 10):
		{
			result0 = ((*a0).kindU.S1.intval == (*b0).kindU.S1.intval);
		}
		break;
		case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 18):
		{
			result0 = ((*a0).kindU.S2.floatval == (*b0).kindU.S2.floatval);
		}
		break;
		case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
		{
			result0 = eqStrings((*a0).kindU.S3.strval, (*b0).kindU.S3.strval);
		}
		break;
		case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 1):
		case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
		case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 4):
		{
			result0 = NIM_TRUE;
		}
		break;
		default:
		{
			{
				NI LOC26;
				NI LOC27;
				LOC26 = (NI)0;
				LOC26 = sonslen_qPWPHw7WgJeEVYUdcaRIig(a0);
				LOC27 = (NI)0;
				LOC27 = sonslen_qPWPHw7WgJeEVYUdcaRIig(b0);
				if (!(LOC26 == LOC27)) goto LA28;
				{
					NI i_6BWBwAC2AeKvx9b4tnkvHFQ;
					NI HEX3Atmp_JnaINYO5V9c1aH2LBPv7y9cg;
					NI LOC31;
					NI res_bEu9bQfPg8yncRpn9bAEPQZw;
					i_6BWBwAC2AeKvx9b4tnkvHFQ = (NI)0;
					HEX3Atmp_JnaINYO5V9c1aH2LBPv7y9cg = (NI)0;
					LOC31 = (NI)0;
					LOC31 = sonslen_qPWPHw7WgJeEVYUdcaRIig(a0);
					HEX3Atmp_JnaINYO5V9c1aH2LBPv7y9cg = (NI)(LOC31 - ((NI) 1));
					res_bEu9bQfPg8yncRpn9bAEPQZw = ((NI) 0);
					{
						while (1) {
							if (!(res_bEu9bQfPg8yncRpn9bAEPQZw <= HEX3Atmp_JnaINYO5V9c1aH2LBPv7y9cg)) goto LA33;
							i_6BWBwAC2AeKvx9b4tnkvHFQ = res_bEu9bQfPg8yncRpn9bAEPQZw;
							{
								NIM_BOOL LOC36;
								LOC36 = (NIM_BOOL)0;
								LOC36 = exprstructuralequivalent_XApnXRaD9btY9a4pkMO0ITTg((*a0).kindU.S6.sons->data[i_6BWBwAC2AeKvx9b4tnkvHFQ], (*b0).kindU.S6.sons->data[i_6BWBwAC2AeKvx9b4tnkvHFQ], strictsymequality0);
								if (!!(LOC36)) goto LA37;
								goto BeforeRet;
							}
							LA37: ;
							res_bEu9bQfPg8yncRpn9bAEPQZw += ((NI) 1);
						} LA33: ;
					}
				}
				result0 = NIM_TRUE;
			}
			LA28: ;
		}
		break;
		}
	}
	goto LA1;
	LA10: ;
	LA1: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(Tmagic_shZhZOdbVC5nnFvcXQAImg, getmagic_gSv3iFkSzJc9bXZaNBHR9bQA)(Tnode_bROa11lyF5vxEN9aYNbHmhw* op0) {
	Tmagic_shZhZOdbVC5nnFvcXQAImg result0;
	result0 = (Tmagic_shZhZOdbVC5nnFvcXQAImg)0;
	switch ((*op0).kind) {
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 27):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 29):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 30):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 31):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 26):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 28):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 32):
	{
		switch ((*(*op0).kindU.S6.sons->data[((NI) 0)]).kind) {
		case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
		{
			result0 = (*(*(*op0).kindU.S6.sons->data[((NI) 0)]).kindU.S4.sym).magic;
		}
		break;
		default:
		{
			result0 = ((Tmagic_shZhZOdbVC5nnFvcXQAImg) 0);
		}
		break;
		}
	}
	break;
	default:
	{
		result0 = ((Tmagic_shZhZOdbVC5nnFvcXQAImg) 0);
	}
	break;
	}
	return result0;
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result0;
	result0 = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result0 = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU32)(((NI) (usr0))) - (NU32)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
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
			if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA11;
			rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system(c0);
		}
		LA11: ;
	}
	LA7: ;
	(*dest0) = src0;
}

static N_INLINE(Tnode_bROa11lyF5vxEN9aYNbHmhw*, pop_d29cpXTitwhGntYusVkzaCgtrees)(TY_ehmV9bTklH2Gt9cXHV9c0HLeQ** s0) {
	Tnode_bROa11lyF5vxEN9aYNbHmhw* result0;
	NI L0;
	result0 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
	L0 = (NI)(((*s0) ? (*s0)->Sup.len : 0) - ((NI) 1));
	result0 = (*s0)->data[L0];
	(*s0) = (TY_ehmV9bTklH2Gt9cXHV9c0HLeQ*) setLengthSeq(&((*s0))->Sup, sizeof(Tnode_bROa11lyF5vxEN9aYNbHmhw*), ((NI) (L0)));
	return result0;
}

N_NIMCALL(NIM_BOOL, cyclictreeaux_fJtdv7gqXOKIakDjzod6NA)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, TY_ehmV9bTklH2Gt9cXHV9c0HLeQ** visited0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!(n0 == NIM_NIL)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		Tnode_bROa11lyF5vxEN9aYNbHmhw* v_Lau3B9cje7ycRHzx0Y2E0Ww;
		TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* HEX3Atmp_HVXC6c9cvKovQA62Co9ausew;
		NI i_uRWCHBHBX2vWV2WUgwQd8w;
		NI L_a0aKtqYl6snTT6FGNw0Pig;
		v_Lau3B9cje7ycRHzx0Y2E0Ww = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
		HEX3Atmp_HVXC6c9cvKovQA62Co9ausew = (TY_ehmV9bTklH2Gt9cXHV9c0HLeQ*)0;
		HEX3Atmp_HVXC6c9cvKovQA62Co9ausew = (*visited0);
		i_uRWCHBHBX2vWV2WUgwQd8w = ((NI) 0);
		L_a0aKtqYl6snTT6FGNw0Pig = (HEX3Atmp_HVXC6c9cvKovQA62Co9ausew ? HEX3Atmp_HVXC6c9cvKovQA62Co9ausew->Sup.len : 0);
		{
			while (1) {
				if (!(i_uRWCHBHBX2vWV2WUgwQd8w < L_a0aKtqYl6snTT6FGNw0Pig)) goto LA7;
				v_Lau3B9cje7ycRHzx0Y2E0Ww = HEX3Atmp_HVXC6c9cvKovQA62Co9ausew->data[i_uRWCHBHBX2vWV2WUgwQd8w];
				{
					if (!(v_Lau3B9cje7ycRHzx0Y2E0Ww == n0)) goto LA10;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA10: ;
				i_uRWCHBHBX2vWV2WUgwQd8w += ((NI) 1);
			} LA7: ;
		}
	}
	{
		Tnode_bROa11lyF5vxEN9aYNbHmhw* LOC24;
		if (!!(((*n0).kind >= ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 1) && (*n0).kind <= ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 23)))) goto LA14;
		(*visited0) = (TY_ehmV9bTklH2Gt9cXHV9c0HLeQ*) incrSeqV2(&((*visited0))->Sup, sizeof(Tnode_bROa11lyF5vxEN9aYNbHmhw*));
		asgnRefNoCycle((void**) (&(*visited0)->data[(*visited0)->Sup.len]), n0);
		++(*visited0)->Sup.len;
		{
			Tnode_bROa11lyF5vxEN9aYNbHmhw* nson_0W2njh1LyzRjEelINn6bvw;
			TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* HEX3Atmp_HVXC6c9cvKovQA62Co9ausew_2;
			NI i_uRWCHBHBX2vWV2WUgwQd8w_2;
			NI L_a0aKtqYl6snTT6FGNw0Pig_2;
			nson_0W2njh1LyzRjEelINn6bvw = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
			HEX3Atmp_HVXC6c9cvKovQA62Co9ausew_2 = (TY_ehmV9bTklH2Gt9cXHV9c0HLeQ*)0;
			HEX3Atmp_HVXC6c9cvKovQA62Co9ausew_2 = (*n0).kindU.S6.sons;
			i_uRWCHBHBX2vWV2WUgwQd8w_2 = ((NI) 0);
			L_a0aKtqYl6snTT6FGNw0Pig_2 = (HEX3Atmp_HVXC6c9cvKovQA62Co9ausew_2 ? HEX3Atmp_HVXC6c9cvKovQA62Co9ausew_2->Sup.len : 0);
			{
				while (1) {
					if (!(i_uRWCHBHBX2vWV2WUgwQd8w_2 < L_a0aKtqYl6snTT6FGNw0Pig_2)) goto LA18;
					nson_0W2njh1LyzRjEelINn6bvw = HEX3Atmp_HVXC6c9cvKovQA62Co9ausew_2->data[i_uRWCHBHBX2vWV2WUgwQd8w_2];
					{
						NIM_BOOL LOC21;
						LOC21 = (NIM_BOOL)0;
						LOC21 = cyclictreeaux_fJtdv7gqXOKIakDjzod6NA(nson_0W2njh1LyzRjEelINn6bvw, visited0);
						if (!LOC21) goto LA22;
						result0 = NIM_TRUE;
						goto BeforeRet;
					}
					LA22: ;
					i_uRWCHBHBX2vWV2WUgwQd8w_2 += ((NI) 1);
				} LA18: ;
			}
		}
		LOC24 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
		LOC24 = pop_d29cpXTitwhGntYusVkzaCgtrees(visited0);
	}
	LA14: ;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, cyclictree_FTbvAnf1y9b9c3Krp9bsHDTiw)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0) {
	NIM_BOOL result0;
	TY_ehmV9bTklH2Gt9cXHV9c0HLeQ* visited0;
	result0 = (NIM_BOOL)0;
	visited0 = (TY_ehmV9bTklH2Gt9cXHV9c0HLeQ*) newSeq((&NTI_ehmV9bTklH2Gt9cXHV9c0HLeQ), 0);
	result0 = cyclictreeaux_fJtdv7gqXOKIakDjzod6NA(n0, (&visited0));
	return result0;
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

N_NIMCALL(void, unneststmts_9c5lwXyiq4AUtthHD0LdCvQ)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, Tnode_bROa11lyF5vxEN9aYNbHmhw* result0) {
	{
		if (!((*n0).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 115))) goto LA3;
		{
			Tnode_bROa11lyF5vxEN9aYNbHmhw* x_L0fdn9avvsn3btXlMPccZNw;
			x_L0fdn9avvsn3btXlMPccZNw = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
			{
				NI i_EWs3umbSmlVrXsMq7wWquA;
				NI HEX3Atmp_xU11G30nlnU0KasrgV45kw;
				NI LOC7;
				NI res_ekwFbROBHev5OOyiBW9cTyQ;
				i_EWs3umbSmlVrXsMq7wWquA = (NI)0;
				HEX3Atmp_xU11G30nlnU0KasrgV45kw = (NI)0;
				LOC7 = (NI)0;
				LOC7 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n0);
				HEX3Atmp_xU11G30nlnU0KasrgV45kw = (LOC7 - 1);
				res_ekwFbROBHev5OOyiBW9cTyQ = ((NI) 0);
				{
					while (1) {
						if (!(res_ekwFbROBHev5OOyiBW9cTyQ <= HEX3Atmp_xU11G30nlnU0KasrgV45kw)) goto LA9;
						i_EWs3umbSmlVrXsMq7wWquA = res_ekwFbROBHev5OOyiBW9cTyQ;
						x_L0fdn9avvsn3btXlMPccZNw = (*n0).kindU.S6.sons->data[i_EWs3umbSmlVrXsMq7wWquA];
						unneststmts_9c5lwXyiq4AUtthHD0LdCvQ(x_L0fdn9avvsn3btXlMPccZNw, result0);
						res_ekwFbROBHev5OOyiBW9cTyQ += ((NI) 1);
					} LA9: ;
				}
			}
		}
	}
	goto LA1;
	LA3: ;
	{
		if (!!(((*n0).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 125) || (*n0).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 23)))) goto LA11;
		add_gCCf68XrWL79bKes6htzFjQ_3(result0, n0);
	}
	goto LA1;
	LA11: ;
	LA1: ;
}

N_NIMCALL(Tnode_bROa11lyF5vxEN9aYNbHmhw*, flattenstmts_kDuk7Mp6Hb4CD2EwZbGQ3g)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0) {
	Tnode_bROa11lyF5vxEN9aYNbHmhw* result0;
	result0 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result0 = newnodei_PIqgSH9b0m7nFpOyXf9cpz5w(((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 115), (*n0).info);
	unneststmts_9c5lwXyiq4AUtthHD0LdCvQ(n0, result0);
	{
		NI LOC3;
		LOC3 = (NI)0;
		LOC3 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(result0);
		if (!(LOC3 == ((NI) 1))) goto LA4;
		result0 = (*result0).kindU.S6.sons->data[((NI) 0)];
	}
	LA4: ;
	return result0;
}

N_NIMCALL(Tnode_bROa11lyF5vxEN9aYNbHmhw*, extractrange_hXdHXhYIaWyizlIOoxd1YA)(Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw k0, Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NI a0, NI b0) {
	Tnode_bROa11lyF5vxEN9aYNbHmhw* result0;
	result0 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result0 = newnodei_jIQp9ciM8if1a6TX6toZelw(k0, (*n0).info, (NI)((NI)(b0 - a0) + ((NI) 1)));
	{
		NI i_zhWsL7SNlNrDwrG8MaWSRQ;
		NI HEX3Atmp_oIDqg4vZ0o0itS5K1MZoBg;
		NI res_cs9bo9c9bGOR5zuwzcU49c7BRw;
		i_zhWsL7SNlNrDwrG8MaWSRQ = (NI)0;
		HEX3Atmp_oIDqg4vZ0o0itS5K1MZoBg = (NI)0;
		HEX3Atmp_oIDqg4vZ0o0itS5K1MZoBg = (NI)(b0 - a0);
		res_cs9bo9c9bGOR5zuwzcU49c7BRw = ((NI) 0);
		{
			while (1) {
				if (!(res_cs9bo9c9bGOR5zuwzcU49c7BRw <= HEX3Atmp_oIDqg4vZ0o0itS5K1MZoBg)) goto LA3;
				i_zhWsL7SNlNrDwrG8MaWSRQ = res_cs9bo9c9bGOR5zuwzcU49c7BRw;
				asgnRefNoCycle((void**) (&(*result0).kindU.S6.sons->data[i_zhWsL7SNlNrDwrG8MaWSRQ]), (*n0).kindU.S6.sons->data[(NI)(i_zhWsL7SNlNrDwrG8MaWSRQ + a0)]);
				res_cs9bo9c9bGOR5zuwzcU49c7BRw += ((NI) 1);
			} LA3: ;
		}
	}
	return result0;
}

static N_INLINE(NI, safelen_CdME9baJhvveuPEDZE9bXoxAsigmatch)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0) {
	NI result0;
	result0 = (NI)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = ((*n0).kind >= ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 0) && (*n0).kind <= ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 23));
		if (LOC3) goto LA4;
		LOC3 = ((*n0).kindU.S6.sons == 0);
		LA4: ;
		if (!LOC3) goto LA5;
		result0 = ((NI) 0);
	}
	goto LA1;
	LA5: ;
	{
		result0 = ((*n0).kindU.S6.sons ? (*n0).kindU.S6.sons->Sup.len : 0);
	}
	LA1: ;
	return result0;
}

static N_INLINE(Tnode_bROa11lyF5vxEN9aYNbHmhw*, HEX5BHEX5D_4mGh5VHoHoaSkXDYdG6pyAitersgen)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0, NI i0) {
	Tnode_bROa11lyF5vxEN9aYNbHmhw* result0;
	result0 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
	result0 = (*n0).kindU.S6.sons->data[i0];
	return result0;
}

N_NIMCALL(NIM_BOOL, iscaseobj_FTbvAnf1y9b9c3Krp9bsHDTiw_3)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	{
		if (!((*n0).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 139))) goto LA3;
		result0 = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI i_Rl9cQbxoDzZQYhf0Q01Al6g;
		NI HEX3Atmp_Tlj6g79c9cRMo19aNB9bsYn7ng;
		NI i_Rl9cQbxoDzZQYhf0Q01Al6g_2;
		i_Rl9cQbxoDzZQYhf0Q01Al6g = (NI)0;
		HEX3Atmp_Tlj6g79c9cRMo19aNB9bsYn7ng = (NI)0;
		HEX3Atmp_Tlj6g79c9cRMo19aNB9bsYn7ng = safelen_CdME9baJhvveuPEDZE9bXoxAsigmatch(n0);
		i_Rl9cQbxoDzZQYhf0Q01Al6g_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_Rl9cQbxoDzZQYhf0Q01Al6g_2 < HEX3Atmp_Tlj6g79c9cRMo19aNB9bsYn7ng)) goto LA7;
				i_Rl9cQbxoDzZQYhf0Q01Al6g = i_Rl9cQbxoDzZQYhf0Q01Al6g_2;
				{
					Tnode_bROa11lyF5vxEN9aYNbHmhw* LOC10;
					NIM_BOOL LOC11;
					LOC10 = (Tnode_bROa11lyF5vxEN9aYNbHmhw*)0;
					LOC10 = HEX5BHEX5D_4mGh5VHoHoaSkXDYdG6pyAitersgen(n0, i_Rl9cQbxoDzZQYhf0Q01Al6g);
					LOC11 = (NIM_BOOL)0;
					LOC11 = iscaseobj_FTbvAnf1y9b9c3Krp9bsHDTiw_3(LOC10);
					if (!LOC11) goto LA12;
					result0 = NIM_TRUE;
					goto BeforeRet;
				}
				LA12: ;
				i_Rl9cQbxoDzZQYhf0Q01Al6g_2 += ((NI) 1);
			} LA7: ;
		}
	}
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NIM_BOOL, isdeepconstexpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	switch ((*n0).kind) {
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 5) ... ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 10):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 20) ... ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 22):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 16) ... ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 18):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 23):
	{
		result0 = NIM_TRUE;
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 33):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 34):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 58):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 59):
	{
		result0 = isdeepconstexpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*n0).kindU.S6.sons->data[((NI) 1)]);
	}
	break;
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 39):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 41):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 37):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 38):
	case ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 155):
	{
		{
			NI i_rbJQs9bVikYer6r9a79cFnLiA;
			NI HEX3Atmp_8PtFyqxQrbcZQ9cNZ9aHnWzQ;
			NI HEX3Atmp_8PtFyqxQrbcZQ9cNZ9aHnWzQ_2;
			NI LOC5;
			NI res_xOfmIi9bwp0PSAW8lzS6cqg;
			i_rbJQs9bVikYer6r9a79cFnLiA = (NI)0;
			HEX3Atmp_8PtFyqxQrbcZQ9cNZ9aHnWzQ = (NI)0;
			HEX3Atmp_8PtFyqxQrbcZQ9cNZ9aHnWzQ_2 = (NI)0;
			HEX3Atmp_8PtFyqxQrbcZQ9cNZ9aHnWzQ = ((*n0).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 38));
			LOC5 = (NI)0;
			LOC5 = len_CdME9baJhvveuPEDZE9bXoxAlambdalifting(n0);
			HEX3Atmp_8PtFyqxQrbcZQ9cNZ9aHnWzQ_2 = (LOC5 - 1);
			res_xOfmIi9bwp0PSAW8lzS6cqg = ((NI) (HEX3Atmp_8PtFyqxQrbcZQ9cNZ9aHnWzQ));
			{
				while (1) {
					if (!(res_xOfmIi9bwp0PSAW8lzS6cqg <= HEX3Atmp_8PtFyqxQrbcZQ9cNZ9aHnWzQ_2)) goto LA7;
					i_rbJQs9bVikYer6r9a79cFnLiA = res_xOfmIi9bwp0PSAW8lzS6cqg;
					{
						NIM_BOOL LOC10;
						LOC10 = (NIM_BOOL)0;
						LOC10 = isdeepconstexpr_FTbvAnf1y9b9c3Krp9bsHDTiw_2((*n0).kindU.S6.sons->data[i_rbJQs9bVikYer6r9a79cFnLiA]);
						if (!!(LOC10)) goto LA11;
						result0 = NIM_FALSE;
						goto BeforeRet;
					}
					LA11: ;
					res_xOfmIi9bwp0PSAW8lzS6cqg += ((NI) 1);
				} LA7: ;
			}
		}
		{
			if (!((*n0).typ == 0)) goto LA15;
			result0 = NIM_TRUE;
		}
		goto LA13;
		LA15: ;
		{
			Ttype_LTUWCZolpovw9cWE3JBWSUw* t0;
			t0 = skiptypes_pLCdCGDuirMe9cspwviV9aVA((*n0).typ, 10256);
			{
				if (!((*t0).kind == ((Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag) 22) || (*t0).kind == ((Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag) 21))) goto LA20;
				result0 = NIM_FALSE;
				goto BeforeRet;
			}
			LA20: ;
			{
				NIM_BOOL LOC24;
				NIM_BOOL LOC26;
				LOC24 = (NIM_BOOL)0;
				LOC24 = !(((*t0).kind == ((Ttypekind_9a3YiReNVD0IJHWFKgXRe9ag) 17)));
				if (LOC24) goto LA25;
				LOC26 = (NIM_BOOL)0;
				LOC26 = iscaseobj_FTbvAnf1y9b9c3Krp9bsHDTiw_3((*t0).n);
				LOC24 = !(LOC26);
				LA25: ;
				if (!LOC24) goto LA27;
				result0 = NIM_TRUE;
			}
			LA27: ;
		}
		LA13: ;
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

N_NIMCALL(NIM_BOOL, isconstexpr_FTbvAnf1y9b9c3Krp9bsHDTiw_4)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0) {
	NIM_BOOL result0;
	NIM_BOOL LOC1;
	result0 = (NIM_BOOL)0;
	LOC1 = (NIM_BOOL)0;
	LOC1 = ((*n0).kind >= ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 5) && (*n0).kind <= ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 23));
	if (LOC1) goto LA2;
	LOC1 = (((*n0).flags &(1U<<((NU)(((Tnodeflag_jyh9acXHkhZANSSvPIY7ZLg) 4))&15U)))!=0);
	LA2: ;
	result0 = LOC1;
	return result0;
}

N_NIMCALL(Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw, whichpragma_tadMdqrtQd2cek9aFwyE1XQ)(Tnode_bROa11lyF5vxEN9aYNbHmhw* n0) {
	Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw result0;
	Tnode_bROa11lyF5vxEN9aYNbHmhw* key0;
	result0 = (Tspecialword_ycbpMCRV6Cd2eBh3X9biEiw)0;
	{
		if (!((*n0).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 34))) goto LA3;
		key0 = (*n0).kindU.S6.sons->data[((NI) 0)];
	}
	goto LA1;
	LA3: ;
	{
		key0 = n0;
	}
	LA1: ;
	{
		if (!((*key0).kind == ((Tnodekind_G4E4Gxe7oI2Cm03rkiOzQw) 2))) goto LA8;
		result0 = whichkeyword_WhYAAh6vF1PoyH6Hsspu4Q((*key0).kindU.S5.ident);
	}
	LA8: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, compiler_treesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_treesDatInit000)(void) {
}

