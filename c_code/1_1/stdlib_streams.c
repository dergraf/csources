/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <setjmp.h>
#include <string.h>
#include <stdio.h>
#undef linux
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Streamobj_RShkcoDOPnoCVhtpN1hDPQ Streamobj_RShkcoDOPnoCVhtpN1hDPQ;
typedef struct TNimObject TNimObject;
typedef struct Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Exception Exception;
typedef struct TSafePoint TSafePoint;
typedef struct Ioerror_9czoZw3pzPyrBmb5zTHY1OQ Ioerror_9czoZw3pzPyrBmb5zTHY1OQ;
typedef struct Systemerror_Fjf9b9b2IlzRO2tspHxG3tgg Systemerror_Fjf9b9b2IlzRO2tspHxG3tgg;
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
typedef struct Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ;
typedef struct Basechunk_Sdq7WpT6qAH858F5ZEdG3w Basechunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct Freecell_u6M5LHprqzkn9axr04yg9bGQ Freecell_u6M5LHprqzkn9axr04yg9bGQ;
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
struct  TNimObject  {
TNimType* m_type;
};
typedef N_NIMCALL_PTR(void, TY_cnkJEp9bna8U6yi9aVW9cAJ0Q) (Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0);
typedef N_NIMCALL_PTR(NIM_BOOL, TY_KjFcmLOhf4VQvVcyLJWXZw) (Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0);
typedef N_NIMCALL_PTR(void, TY_jlOYFw9cHausuCbPoWx2iiA) (Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, NI pos0);
typedef N_NIMCALL_PTR(NI, TY_Xzm85qBLb9cf9cu8VOfAr8PQ) (Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0);
typedef N_NIMCALL_PTR(NI, TY_tjaJtoUzLe1BMUbItlcGhQ) (Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0);
typedef N_NIMCALL_PTR(void, TY_b9bsIuILxTLVZHPvJBW187A) (Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0);
struct  Streamobj_RShkcoDOPnoCVhtpN1hDPQ  {
  TNimObject Sup;
TY_cnkJEp9bna8U6yi9aVW9cAJ0Q closeimpl;
TY_KjFcmLOhf4VQvVcyLJWXZw atendimpl;
TY_jlOYFw9cHausuCbPoWx2iiA setpositionimpl;
TY_Xzm85qBLb9cf9cu8VOfAr8PQ getpositionimpl;
TY_tjaJtoUzLe1BMUbItlcGhQ readdataimpl;
TY_tjaJtoUzLe1BMUbItlcGhQ peekdataimpl;
TY_b9bsIuILxTLVZHPvJBW187A writedataimpl;
TY_cnkJEp9bna8U6yi9aVW9cAJ0Q flushimpl;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 Filemode_fVUBHvW79bXUw1j55Oo9avSQ;
struct  Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw  {
  Streamobj_RShkcoDOPnoCVhtpN1hDPQ Sup;
FILE* f;
};
typedef NU8 Fileseekpos_I9aQjuvWxs8BspGbxwsngWw;
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e0, void* ClEnv);
void* ClEnv;
} TY_KeeAOYBd84Ofsw6Y7LizaQ;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
struct  Systemerror_Fjf9b9b2IlzRO2tspHxG3tgg  {
  Exception Sup;
};
struct  Ioerror_9czoZw3pzPyrBmb5zTHY1OQ  {
  Systemerror_Fjf9b9b2IlzRO2tspHxG3tgg Sup;
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
struct  Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ  {
  Streamobj_RShkcoDOPnoCVhtpN1hDPQ Sup;
NimStringDesc* data;
NI pos;
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
struct  Freecell_u6M5LHprqzkn9axr04yg9bGQ  {
Freecell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zerofield;
};
static N_NIMCALL(void, Marker_TY_r3Wc5tOoxP8rz1DvGVTUvw)(void* p, NI op);
N_NIMCALL(NIM_BOOL, open_sEp0GH2306oGo9bqBpj5oTQ)(FILE** f0, NimStringDesc* filename0, Filemode_fVUBHvW79bXUw1j55Oo9avSQ mode0, NI bufsize0);
N_NIMCALL(Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*, newfilestream_j9aOzR9a9bXMSUnTXiGmXXGqQ)(FILE* f0);
static N_NIMCALL(void, Marker_TY_Z018yRjOOerOKfp9aM3JSOg)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
N_NIMCALL(void, fsclose_qQbp4Nsuc4ou9bqUUbaqJ6A)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0);
N_NIMCALL(void, close_BWnr8V7RERYno9bIdPmw8Hw_2)(FILE* f0);
N_NIMCALL(NIM_BOOL, fsatend_acl02gpfK9cCD8utiP6NxdA)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0);
N_NIMCALL(NIM_BOOL, endoffile_OpxMRqWNQzmofyVQsNQqVA)(FILE* f0);
N_NIMCALL(void, fssetposition_C0SEQJWfadg6oK29b8FuMZg)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, NI pos0);
N_NIMCALL(void, setfilepos_YAngY19cHH2nZ9bqhMgAHz8Q)(FILE* f0, NI64 pos0, Fileseekpos_I9aQjuvWxs8BspGbxwsngWw relativeto0);
N_NIMCALL(NI, fsgetposition_ht6Fg1Bmvqnb8CP4WayC2A)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0);
N_NIMCALL(NI64, getfilepos_XePgC9ccBXCgb9bEHXZpnMqA)(FILE* f0);
N_NIMCALL(NI, fsreaddata_7P4Enb2Vt3iOCL5K9cnGqYw)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0);
N_NIMCALL(NI, readbuffer_nZ0pNe9cd9cXtoayexCiaDtA_2)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(NI, fspeekdata_7P4Enb2Vt3iOCL5K9cnGqYw_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0);
static N_INLINE(void, pushSafePoint)(TSafePoint* s0);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, fswritedata_mrtMhMXvYVpi5Svw9bWueBw)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0);
N_NIMCALL(NI, writebuffer_nZ0pNe9cd9cXtoayexCiaDtA)(FILE* f0, void* buffer0, NI len0);
N_NIMCALL(Ioerror_9czoZw3pzPyrBmb5zTHY1OQ*, neweio_lOrpXone7dPkEAOURnfgBw)(NimStringDesc* msg0);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src0);
static N_INLINE(void, nimGCunrefNoCycle)(void* p0);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr0);
static N_INLINE(void, rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NOINLINE(void, addzct_fCDI7oO1NNVXXURtxSzsRw)(Cellseq_Axo1XVm9aaQueTOldv8le5w* s0, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0);
N_NIMCALL(void, raiseException)(Exception* e0, NCSTRING ename0);
N_NIMCALL(void, fsflush_qQbp4Nsuc4ou9bqUUbaqJ6A_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0);
N_NIMCALL(void, flushfile_BWnr8V7RERYno9bIdPmw8Hw)(FILE* f0);
N_NIMCALL(void, writedata_lmaRetW0vPyY5hzlu3Ik7A)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src0);
N_NIMCALL(NIM_CHAR, readchar_MXNOkfw9cIUOi4sewWv9cidw)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0);
N_NIMCALL(NI, readdata_Gnwdizh7H5Q9cYivUoGHrVA)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s0, NIM_CHAR c0);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
static N_NIMCALL(void, Marker_TY_oa89b9cIODFBktXa1hHFh9c3Q)(void* p, NI op);
N_NIMCALL(void, ssclose_qQbp4Nsuc4ou9bqUUbaqJ6A_3)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_0oKy9bw20eQoZnoPxmQTRPQ);
N_NIMCALL(NIM_BOOL, ssatend_acl02gpfK9cCD8utiP6NxdA_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_6rev1ZuxByWFQf6CowVxgw);
N_NIMCALL(void, sssetposition_C0SEQJWfadg6oK29b8FuMZg_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_8uJqD1Gkzs9bI9bzpslP39a6w, NI pos0);
N_NIMCALL(NI, clamp_RrNgT2340KObgDMnZWSK5A)(NI x0, NI a0, NI b0);
N_NIMCALL(NI, ssgetposition_ht6Fg1Bmvqnb8CP4WayC2A_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_ZozGEbyW3LBjyAXTtPgjEg);
N_NIMCALL(NI, ssreaddata_7P4Enb2Vt3iOCL5K9cnGqYw_3)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_y2kqirqL6p0kJkuwFdE8DQ, void* buffer0, NI buflen0);
static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0);
N_NIMCALL(NI, sspeekdata_7P4Enb2Vt3iOCL5K9cnGqYw_4)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_QXLskfGc1Jev0gVF9a0jofg, void* buffer0, NI buflen0);
N_NIMCALL(void, sswritedata_mrtMhMXvYVpi5Svw9bWueBw_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_TBWsPQ4EX2P6UUIoXpDeGQ, void* buffer0, NI buflen0);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s0, NI newlen0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
N_NIMCALL(NimStringDesc*, mnewString)(NI len0);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA;
TNimType NTI_RShkcoDOPnoCVhtpN1hDPQ;
TNimType NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q;
TNimType NTI_KjFcmLOhf4VQvVcyLJWXZw;
TNimType NTI_jlOYFw9cHausuCbPoWx2iiA;
TNimType NTI_Xzm85qBLb9cf9cu8VOfAr8PQ;
TNimType NTI_tjaJtoUzLe1BMUbItlcGhQ;
TNimType NTI_b9bsIuILxTLVZHPvJBW187A;
TNimType NTI_r3Wc5tOoxP8rz1DvGVTUvw;
TNimType NTI_qoDM8xYRV40zbhS9acPNT9bw;
extern TNimType NTI_7BHnQsEj49a9c6QtudqWTo1w;
TNimType NTI_Z018yRjOOerOKfp9aM3JSOg;
extern TSafePoint* exchandler_rqLlY5bs9atDw2OXYqJEn5g;
extern TNimType NTI_HX2M9cQhE3jaovp9aYJDdslA;
extern TNimType NTI_9czoZw3pzPyrBmb5zTHY1OQ;
extern Gcheap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
TNimType NTI_lGsM0FdhfyxyplfYoMsgFQ;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA;
TNimType NTI_oa89b9cIODFBktXa1hHFh9c3Q;
STRING_LITERAL(T_Ue7tnBcsL67VCiRfvt8q0A_4, "cannot write to stream", 22);
STRING_LITERAL(T_Ue7tnBcsL67VCiRfvt8q0A_5, "", 0);
static N_NIMCALL(void, Marker_TY_r3Wc5tOoxP8rz1DvGVTUvw)(void* p, NI op) {
	Streamobj_RShkcoDOPnoCVhtpN1hDPQ* a;
	a = (Streamobj_RShkcoDOPnoCVhtpN1hDPQ*)p;
}

N_NIMCALL(NI, readdata_Gnwdizh7H5Q9cYivUoGHrVA)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0) {
	NI result0;
	result0 = (NI)0;
	result0 = (*s0).readdataimpl(s0, buffer0, buflen0);
	return result0;
}
static N_NIMCALL(void, Marker_TY_Z018yRjOOerOKfp9aM3JSOg)(void* p, NI op) {
	Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw* a;
	a = (Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*)p;
}

N_NIMCALL(void, fsclose_qQbp4Nsuc4ou9bqUUbaqJ6A)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0) {
	{
		if (!!(((*((Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*) (s0))).f == NIM_NIL))) goto LA3;
		close_BWnr8V7RERYno9bIdPmw8Hw_2((*((Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*) (s0))).f);
		(*((Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*) (s0))).f = NIM_NIL;
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, fsatend_acl02gpfK9cCD8utiP6NxdA)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0) {
	NIM_BOOL result0;
{	result0 = (NIM_BOOL)0;
	result0 = endoffile_OpxMRqWNQzmofyVQsNQqVA((*((Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*) (s0))).f);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, fssetposition_C0SEQJWfadg6oK29b8FuMZg)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, NI pos0) {
	setfilepos_YAngY19cHH2nZ9bqhMgAHz8Q((*((Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*) (s0))).f, ((NI64) (pos0)), ((Fileseekpos_I9aQjuvWxs8BspGbxwsngWw) 0));
}

N_NIMCALL(NI, fsgetposition_ht6Fg1Bmvqnb8CP4WayC2A)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0) {
	NI result0;
	NI64 LOC1;
{	result0 = (NI)0;
	LOC1 = (NI64)0;
	LOC1 = getfilepos_XePgC9ccBXCgb9bEHXZpnMqA((*((Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*) (s0))).f);
	result0 = ((NI) (LOC1));
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(NI, fsreaddata_7P4Enb2Vt3iOCL5K9cnGqYw)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0) {
	NI result0;
	result0 = (NI)0;
	result0 = readbuffer_nZ0pNe9cd9cXtoayexCiaDtA_2((*((Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*) (s0))).f, buffer0, ((NI) (buflen0)));
	return result0;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s0) {
	(*s0).hasRaiseAction = NIM_FALSE;
	(*s0).prev = exchandler_rqLlY5bs9atDw2OXYqJEn5g;
	exchandler_rqLlY5bs9atDw2OXYqJEn5g = s0;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_rqLlY5bs9atDw2OXYqJEn5g = (*exchandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

N_NIMCALL(NI, fspeekdata_7P4Enb2Vt3iOCL5K9cnGqYw_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0) {
	NI volatile result0;
	NI pos0;
	TSafePoint T_Ue7tnBcsL67VCiRfvt8q0A_3;
	result0 = (NI)0;
	pos0 = fsgetposition_ht6Fg1Bmvqnb8CP4WayC2A(s0);
	pushSafePoint(&T_Ue7tnBcsL67VCiRfvt8q0A_3);
	T_Ue7tnBcsL67VCiRfvt8q0A_3.status = setjmp(T_Ue7tnBcsL67VCiRfvt8q0A_3.context);
	if (T_Ue7tnBcsL67VCiRfvt8q0A_3.status == 0) {
		result0 = readbuffer_nZ0pNe9cd9cXtoayexCiaDtA_2((*((Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*) (s0))).f, buffer0, ((NI) (buflen0)));
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		fssetposition_C0SEQJWfadg6oK29b8FuMZg(s0, pos0);
	}
	if (T_Ue7tnBcsL67VCiRfvt8q0A_3.status != 0) reraiseException();
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

static N_INLINE(void, nimGCunrefNoCycle)(void* p0) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c0;
	c0 = usrtocell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p0);
	{
		(*c0).refcount -= ((NI) 8);
		if (!((NU32)((*c0).refcount) < (NU32)(((NI) 8)))) goto LA3;
		rtladdzct_MV4BBk6J1qu70IbBxwEn4w_2system(c0);
	}
	LA3: ;
}

N_NIMCALL(Ioerror_9czoZw3pzPyrBmb5zTHY1OQ*, neweio_lOrpXone7dPkEAOURnfgBw)(NimStringDesc* msg0) {
	Ioerror_9czoZw3pzPyrBmb5zTHY1OQ* result0;
	NimStringDesc* LOC1;
	result0 = (Ioerror_9czoZw3pzPyrBmb5zTHY1OQ*)0;
	result0 = (Ioerror_9czoZw3pzPyrBmb5zTHY1OQ*) newObj((&NTI_HX2M9cQhE3jaovp9aYJDdslA), sizeof(Ioerror_9czoZw3pzPyrBmb5zTHY1OQ));
	(*result0).Sup.Sup.Sup.m_type = (&NTI_9czoZw3pzPyrBmb5zTHY1OQ);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).Sup.Sup.message; (*result0).Sup.Sup.message = copyStringRC1(msg0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	return result0;
}

N_NIMCALL(void, fswritedata_mrtMhMXvYVpi5Svw9bWueBw)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0) {
	{
		NI LOC3;
		Ioerror_9czoZw3pzPyrBmb5zTHY1OQ* LOC6;
		LOC3 = (NI)0;
		LOC3 = writebuffer_nZ0pNe9cd9cXtoayexCiaDtA((*((Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*) (s0))).f, buffer0, ((NI) (buflen0)));
		if (!!((LOC3 == buflen0))) goto LA4;
		LOC6 = (Ioerror_9czoZw3pzPyrBmb5zTHY1OQ*)0;
		LOC6 = neweio_lOrpXone7dPkEAOURnfgBw(((NimStringDesc*) &T_Ue7tnBcsL67VCiRfvt8q0A_4));
		raiseException((Exception*)LOC6, "IOError");
	}
	LA4: ;
}

N_NIMCALL(void, fsflush_qQbp4Nsuc4ou9bqUUbaqJ6A_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0) {
	flushfile_BWnr8V7RERYno9bIdPmw8Hw((*((Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*) (s0))).f);
}

N_NIMCALL(Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*, newfilestream_j9aOzR9a9bXMSUnTXiGmXXGqQ)(FILE* f0) {
	Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw* result0;
	result0 = (Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*)0;
	result0 = (Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*) newObj((&NTI_Z018yRjOOerOKfp9aM3JSOg), sizeof(Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw));
	(*result0).Sup.Sup.m_type = (&NTI_qoDM8xYRV40zbhS9acPNT9bw);
	(*result0).f = f0;
	(*result0).Sup.closeimpl = fsclose_qQbp4Nsuc4ou9bqUUbaqJ6A;
	(*result0).Sup.atendimpl = fsatend_acl02gpfK9cCD8utiP6NxdA;
	(*result0).Sup.setpositionimpl = fssetposition_C0SEQJWfadg6oK29b8FuMZg;
	(*result0).Sup.getpositionimpl = fsgetposition_ht6Fg1Bmvqnb8CP4WayC2A;
	(*result0).Sup.readdataimpl = fsreaddata_7P4Enb2Vt3iOCL5K9cnGqYw;
	(*result0).Sup.peekdataimpl = fspeekdata_7P4Enb2Vt3iOCL5K9cnGqYw_2;
	(*result0).Sup.writedataimpl = fswritedata_mrtMhMXvYVpi5Svw9bWueBw;
	(*result0).Sup.flushimpl = fsflush_qQbp4Nsuc4ou9bqUUbaqJ6A_2;
	return result0;
}

N_NIMCALL(Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*, newfilestream_EYjHaJgKBbBv69c9c5DDOTIg)(NimStringDesc* filename0, Filemode_fVUBHvW79bXUw1j55Oo9avSQ mode0) {
	Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw* result0;
	FILE* f0;
	result0 = (Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*)0;
	f0 = (FILE*)0;
	{
		NIM_BOOL LOC3;
		LOC3 = (NIM_BOOL)0;
		LOC3 = open_sEp0GH2306oGo9bqBpj5oTQ(&f0, filename0, mode0, ((NI) -1));
		if (!LOC3) goto LA4;
		result0 = newfilestream_j9aOzR9a9bXMSUnTXiGmXXGqQ(f0);
	}
	LA4: ;
	return result0;
}

N_NIMCALL(void, close_4ed7IXme7lqtClFI7s2sTQ)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0) {
	{
		if (!!(((*s0).closeimpl == 0))) goto LA3;
		(*s0).closeimpl(s0);
	}
	LA3: ;
}

N_NIMCALL(void, writedata_lmaRetW0vPyY5hzlu3Ik7A)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, void* buffer0, NI buflen0) {
	(*s0).writedataimpl(s0, buffer0, buflen0);
}

N_NIMCALL(void, write_J8LHFlpeBAP4mtGzmgjURA)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0, NimStringDesc* x0) {
	{
		if (!(((NI) 0) < (x0 ? x0->Sup.len : 0))) goto LA3;
		writedata_lmaRetW0vPyY5hzlu3Ik7A(s0, ((void*) ((&x0->data[((NI) 0)]))), (x0 ? x0->Sup.len : 0));
	}
	LA3: ;
}

N_NIMCALL(NIM_BOOL, atend_K8dPRCnFaz50Kq9buF2PeYA)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0) {
	NIM_BOOL result0;
	result0 = (NIM_BOOL)0;
	result0 = (*s0).atendimpl(s0);
	return result0;
}

N_NIMCALL(NIM_CHAR, readchar_MXNOkfw9cIUOi4sewWv9cidw)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0) {
	NIM_CHAR result0;
	result0 = (NIM_CHAR)0;
	{
		NI LOC3;
		LOC3 = (NI)0;
		LOC3 = readdata_Gnwdizh7H5Q9cYivUoGHrVA(s0, ((void*) ((&result0))), ((NI) 1));
		if (!!((LOC3 == ((NI) 1)))) goto LA4;
		result0 = 0;
	}
	LA4: ;
	return result0;
}

N_NIMCALL(NimStringDesc*, readline_y6Jvjm2hmT9aQbvX9aMpHkOQ)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0) {
	NimStringDesc* result0;
	result0 = (NimStringDesc*)0;
	result0 = copyString(((NimStringDesc*) &T_Ue7tnBcsL67VCiRfvt8q0A_5));
	{
		while (1) {
			NIM_CHAR c0;
			c0 = readchar_MXNOkfw9cIUOi4sewWv9cidw(s0);
			{
				if (!((NU8)(c0) == (NU8)(13))) goto LA5;
				c0 = readchar_MXNOkfw9cIUOi4sewWv9cidw(s0);
				goto LA1;
			}
			LA5: ;
			{
				NIM_BOOL LOC9;
				LOC9 = (NIM_BOOL)0;
				LOC9 = ((NU8)(c0) == (NU8)(10));
				if (LOC9) goto LA10;
				LOC9 = ((NU8)(c0) == (NU8)(0));
				LA10: ;
				if (!LOC9) goto LA11;
				goto LA1;
			}
			goto LA7;
			LA11: ;
			{
				result0 = addChar(result0, c0);
			}
			LA7: ;
		}
	} LA1: ;
	return result0;
}
static N_NIMCALL(void, Marker_TY_oa89b9cIODFBktXa1hHFh9c3Q)(void* p, NI op) {
	Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ* a;
	a = (Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*)p;
	nimGCvisit((void*)(*a).data, op);
}

N_NIMCALL(void, ssclose_qQbp4Nsuc4ou9bqUUbaqJ6A_3)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_0oKy9bw20eQoZnoPxmQTRPQ) {
	Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ* s0;
	NimStringDesc* LOC1;
	s0 = ((Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*) (s_0oKy9bw20eQoZnoPxmQTRPQ));
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*s0).data; (*s0).data = copyStringRC1(NIM_NIL);
	if (LOC1) nimGCunrefNoCycle(LOC1);
}

N_NIMCALL(NIM_BOOL, ssatend_acl02gpfK9cCD8utiP6NxdA_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_6rev1ZuxByWFQf6CowVxgw) {
	NIM_BOOL result0;
	Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ* s0;
{	result0 = (NIM_BOOL)0;
	s0 = ((Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*) (s_6rev1ZuxByWFQf6CowVxgw));
	result0 = (((*s0).data ? (*s0).data->Sup.len : 0) <= (*s0).pos);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, sssetposition_C0SEQJWfadg6oK29b8FuMZg_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_8uJqD1Gkzs9bI9bzpslP39a6w, NI pos0) {
	Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ* s0;
	s0 = ((Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*) (s_8uJqD1Gkzs9bI9bzpslP39a6w));
	(*s0).pos = clamp_RrNgT2340KObgDMnZWSK5A(pos0, ((NI) 0), ((*s0).data ? (*s0).data->Sup.len : 0));
}

N_NIMCALL(NI, ssgetposition_ht6Fg1Bmvqnb8CP4WayC2A_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_ZozGEbyW3LBjyAXTtPgjEg) {
	NI result0;
	Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ* s0;
{	result0 = (NI)0;
	s0 = ((Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*) (s_ZozGEbyW3LBjyAXTtPgjEg));
	result0 = (*s0).pos;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

N_NIMCALL(NI, ssreaddata_7P4Enb2Vt3iOCL5K9cnGqYw_3)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_y2kqirqL6p0kJkuwFdE8DQ, void* buffer0, NI buflen0) {
	NI result0;
	Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ* s0;
	result0 = (NI)0;
	s0 = ((Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*) (s_y2kqirqL6p0kJkuwFdE8DQ));
	result0 = ((buflen0 <= (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos)) ? buflen0 : (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos));
	{
		if (!(((NI) 0) < result0)) goto LA3;
		copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem(buffer0, ((void*) ((&(*s0).data->data[(*s0).pos]))), ((NI) (result0)));
		(*s0).pos += result0;
	}
	LA3: ;
	return result0;
}

N_NIMCALL(NI, sspeekdata_7P4Enb2Vt3iOCL5K9cnGqYw_4)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_QXLskfGc1Jev0gVF9a0jofg, void* buffer0, NI buflen0) {
	NI result0;
	Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ* s0;
	result0 = (NI)0;
	s0 = ((Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*) (s_QXLskfGc1Jev0gVF9a0jofg));
	result0 = ((buflen0 <= (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos)) ? buflen0 : (NI)(((*s0).data ? (*s0).data->Sup.len : 0) - (*s0).pos));
	{
		if (!(((NI) 0) < result0)) goto LA3;
		copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem(buffer0, ((void*) ((&(*s0).data->data[(*s0).pos]))), ((NI) (result0)));
	}
	LA3: ;
	return result0;
}

N_NIMCALL(void, sswritedata_mrtMhMXvYVpi5Svw9bWueBw_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s_TBWsPQ4EX2P6UUIoXpDeGQ, void* buffer0, NI buflen0) {
	Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ* s0;
{	s0 = ((Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*) (s_TBWsPQ4EX2P6UUIoXpDeGQ));
	{
		if (!(buflen0 <= ((NI) 0))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		if (!(((*s0).data ? (*s0).data->Sup.len : 0) < (NI)((*s0).pos + buflen0))) goto LA7;
		(*s0).data = setLengthStr((*s0).data, ((NI) ((NI)((*s0).pos + buflen0))));
	}
	LA7: ;
	copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*s0).data->data[(*s0).pos]))), buffer0, ((NI) (buflen0)));
	(*s0).pos += buflen0;
	}BeforeRet: ;
}

N_NIMCALL(Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*, newstringstream_0dQ0A0pna0dG9cMxo4TbLKQ)(NimStringDesc* s0) {
	Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ* result0;
	NimStringDesc* LOC1;
	result0 = (Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*)0;
	result0 = (Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*) newObj((&NTI_oa89b9cIODFBktXa1hHFh9c3Q), sizeof(Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ));
	(*result0).Sup.Sup.m_type = (&NTI_lGsM0FdhfyxyplfYoMsgFQ);
	LOC1 = (NimStringDesc*)0;
	LOC1 = (*result0).data; (*result0).data = copyStringRC1(s0);
	if (LOC1) nimGCunrefNoCycle(LOC1);
	(*result0).pos = ((NI) 0);
	(*result0).Sup.closeimpl = ssclose_qQbp4Nsuc4ou9bqUUbaqJ6A_3;
	(*result0).Sup.atendimpl = ssatend_acl02gpfK9cCD8utiP6NxdA_2;
	(*result0).Sup.setpositionimpl = sssetposition_C0SEQJWfadg6oK29b8FuMZg_2;
	(*result0).Sup.getpositionimpl = ssgetposition_ht6Fg1Bmvqnb8CP4WayC2A_2;
	(*result0).Sup.readdataimpl = ssreaddata_7P4Enb2Vt3iOCL5K9cnGqYw_3;
	(*result0).Sup.peekdataimpl = sspeekdata_7P4Enb2Vt3iOCL5K9cnGqYw_4;
	(*result0).Sup.writedataimpl = sswritedata_mrtMhMXvYVpi5Svw9bWueBw_2;
	return result0;
}

N_NIMCALL(NimStringDesc*, readall_y6Jvjm2hmT9aQbvX9aMpHkOQ_2)(Streamobj_RShkcoDOPnoCVhtpN1hDPQ* s0) {
	NimStringDesc* result0;
	NI r0;
	result0 = (NimStringDesc*)0;
	result0 = mnewString(((NI) 1000));
	r0 = ((NI) 0);
	{
		while (1) {
			NI readbytes0;
			readbytes0 = readdata_Gnwdizh7H5Q9cYivUoGHrVA(s0, ((void*) ((&result0->data[r0]))), ((NI) 1000));
			{
				if (!(readbytes0 < ((NI) 1000))) goto LA5;
				result0 = setLengthStr(result0, ((NI) ((NI)(r0 + readbytes0))));
				goto LA1;
			}
			LA5: ;
			r0 += ((NI) 1000);
			result0 = setLengthStr(result0, ((NI) ((NI)(r0 + ((NI) 1000)))));
		}
	} LA1: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_streamsInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_streamsDatInit000)(void) {
static TNimNode* T_Ue7tnBcsL67VCiRfvt8q0A_2[8];
static TNimNode* T_Ue7tnBcsL67VCiRfvt8q0A_6[2];
static TNimNode T_Ue7tnBcsL67VCiRfvt8q0A_0[13];
NTI_RShkcoDOPnoCVhtpN1hDPQ.size = sizeof(Streamobj_RShkcoDOPnoCVhtpN1hDPQ);
NTI_RShkcoDOPnoCVhtpN1hDPQ.kind = 17;
NTI_RShkcoDOPnoCVhtpN1hDPQ.base = (&NTI_13RNkKqUOX1TtorOUlKtqA);
NTI_RShkcoDOPnoCVhtpN1hDPQ.flags = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_2[0] = &T_Ue7tnBcsL67VCiRfvt8q0A_0[1];
NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q.size = sizeof(TY_cnkJEp9bna8U6yi9aVW9cAJ0Q);
NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q.kind = 25;
NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q.base = 0;
NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q.flags = 3;
T_Ue7tnBcsL67VCiRfvt8q0A_0[1].kind = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[1].offset = offsetof(Streamobj_RShkcoDOPnoCVhtpN1hDPQ, closeimpl);
T_Ue7tnBcsL67VCiRfvt8q0A_0[1].typ = (&NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q);
T_Ue7tnBcsL67VCiRfvt8q0A_0[1].name = "closeImpl";
T_Ue7tnBcsL67VCiRfvt8q0A_2[1] = &T_Ue7tnBcsL67VCiRfvt8q0A_0[2];
NTI_KjFcmLOhf4VQvVcyLJWXZw.size = sizeof(TY_KjFcmLOhf4VQvVcyLJWXZw);
NTI_KjFcmLOhf4VQvVcyLJWXZw.kind = 25;
NTI_KjFcmLOhf4VQvVcyLJWXZw.base = 0;
NTI_KjFcmLOhf4VQvVcyLJWXZw.flags = 3;
T_Ue7tnBcsL67VCiRfvt8q0A_0[2].kind = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[2].offset = offsetof(Streamobj_RShkcoDOPnoCVhtpN1hDPQ, atendimpl);
T_Ue7tnBcsL67VCiRfvt8q0A_0[2].typ = (&NTI_KjFcmLOhf4VQvVcyLJWXZw);
T_Ue7tnBcsL67VCiRfvt8q0A_0[2].name = "atEndImpl";
T_Ue7tnBcsL67VCiRfvt8q0A_2[2] = &T_Ue7tnBcsL67VCiRfvt8q0A_0[3];
NTI_jlOYFw9cHausuCbPoWx2iiA.size = sizeof(TY_jlOYFw9cHausuCbPoWx2iiA);
NTI_jlOYFw9cHausuCbPoWx2iiA.kind = 25;
NTI_jlOYFw9cHausuCbPoWx2iiA.base = 0;
NTI_jlOYFw9cHausuCbPoWx2iiA.flags = 3;
T_Ue7tnBcsL67VCiRfvt8q0A_0[3].kind = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[3].offset = offsetof(Streamobj_RShkcoDOPnoCVhtpN1hDPQ, setpositionimpl);
T_Ue7tnBcsL67VCiRfvt8q0A_0[3].typ = (&NTI_jlOYFw9cHausuCbPoWx2iiA);
T_Ue7tnBcsL67VCiRfvt8q0A_0[3].name = "setPositionImpl";
T_Ue7tnBcsL67VCiRfvt8q0A_2[3] = &T_Ue7tnBcsL67VCiRfvt8q0A_0[4];
NTI_Xzm85qBLb9cf9cu8VOfAr8PQ.size = sizeof(TY_Xzm85qBLb9cf9cu8VOfAr8PQ);
NTI_Xzm85qBLb9cf9cu8VOfAr8PQ.kind = 25;
NTI_Xzm85qBLb9cf9cu8VOfAr8PQ.base = 0;
NTI_Xzm85qBLb9cf9cu8VOfAr8PQ.flags = 3;
T_Ue7tnBcsL67VCiRfvt8q0A_0[4].kind = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[4].offset = offsetof(Streamobj_RShkcoDOPnoCVhtpN1hDPQ, getpositionimpl);
T_Ue7tnBcsL67VCiRfvt8q0A_0[4].typ = (&NTI_Xzm85qBLb9cf9cu8VOfAr8PQ);
T_Ue7tnBcsL67VCiRfvt8q0A_0[4].name = "getPositionImpl";
T_Ue7tnBcsL67VCiRfvt8q0A_2[4] = &T_Ue7tnBcsL67VCiRfvt8q0A_0[5];
NTI_tjaJtoUzLe1BMUbItlcGhQ.size = sizeof(TY_tjaJtoUzLe1BMUbItlcGhQ);
NTI_tjaJtoUzLe1BMUbItlcGhQ.kind = 25;
NTI_tjaJtoUzLe1BMUbItlcGhQ.base = 0;
NTI_tjaJtoUzLe1BMUbItlcGhQ.flags = 3;
T_Ue7tnBcsL67VCiRfvt8q0A_0[5].kind = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[5].offset = offsetof(Streamobj_RShkcoDOPnoCVhtpN1hDPQ, readdataimpl);
T_Ue7tnBcsL67VCiRfvt8q0A_0[5].typ = (&NTI_tjaJtoUzLe1BMUbItlcGhQ);
T_Ue7tnBcsL67VCiRfvt8q0A_0[5].name = "readDataImpl";
T_Ue7tnBcsL67VCiRfvt8q0A_2[5] = &T_Ue7tnBcsL67VCiRfvt8q0A_0[6];
T_Ue7tnBcsL67VCiRfvt8q0A_0[6].kind = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[6].offset = offsetof(Streamobj_RShkcoDOPnoCVhtpN1hDPQ, peekdataimpl);
T_Ue7tnBcsL67VCiRfvt8q0A_0[6].typ = (&NTI_tjaJtoUzLe1BMUbItlcGhQ);
T_Ue7tnBcsL67VCiRfvt8q0A_0[6].name = "peekDataImpl";
T_Ue7tnBcsL67VCiRfvt8q0A_2[6] = &T_Ue7tnBcsL67VCiRfvt8q0A_0[7];
NTI_b9bsIuILxTLVZHPvJBW187A.size = sizeof(TY_b9bsIuILxTLVZHPvJBW187A);
NTI_b9bsIuILxTLVZHPvJBW187A.kind = 25;
NTI_b9bsIuILxTLVZHPvJBW187A.base = 0;
NTI_b9bsIuILxTLVZHPvJBW187A.flags = 3;
T_Ue7tnBcsL67VCiRfvt8q0A_0[7].kind = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[7].offset = offsetof(Streamobj_RShkcoDOPnoCVhtpN1hDPQ, writedataimpl);
T_Ue7tnBcsL67VCiRfvt8q0A_0[7].typ = (&NTI_b9bsIuILxTLVZHPvJBW187A);
T_Ue7tnBcsL67VCiRfvt8q0A_0[7].name = "writeDataImpl";
T_Ue7tnBcsL67VCiRfvt8q0A_2[7] = &T_Ue7tnBcsL67VCiRfvt8q0A_0[8];
T_Ue7tnBcsL67VCiRfvt8q0A_0[8].kind = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[8].offset = offsetof(Streamobj_RShkcoDOPnoCVhtpN1hDPQ, flushimpl);
T_Ue7tnBcsL67VCiRfvt8q0A_0[8].typ = (&NTI_cnkJEp9bna8U6yi9aVW9cAJ0Q);
T_Ue7tnBcsL67VCiRfvt8q0A_0[8].name = "flushImpl";
T_Ue7tnBcsL67VCiRfvt8q0A_0[0].len = 8; T_Ue7tnBcsL67VCiRfvt8q0A_0[0].kind = 2; T_Ue7tnBcsL67VCiRfvt8q0A_0[0].sons = &T_Ue7tnBcsL67VCiRfvt8q0A_2[0];
NTI_RShkcoDOPnoCVhtpN1hDPQ.node = &T_Ue7tnBcsL67VCiRfvt8q0A_0[0];
NTI_r3Wc5tOoxP8rz1DvGVTUvw.size = sizeof(Streamobj_RShkcoDOPnoCVhtpN1hDPQ*);
NTI_r3Wc5tOoxP8rz1DvGVTUvw.kind = 22;
NTI_r3Wc5tOoxP8rz1DvGVTUvw.base = (&NTI_RShkcoDOPnoCVhtpN1hDPQ);
NTI_r3Wc5tOoxP8rz1DvGVTUvw.marker = Marker_TY_r3Wc5tOoxP8rz1DvGVTUvw;
NTI_qoDM8xYRV40zbhS9acPNT9bw.size = sizeof(Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw);
NTI_qoDM8xYRV40zbhS9acPNT9bw.kind = 17;
NTI_qoDM8xYRV40zbhS9acPNT9bw.base = (&NTI_RShkcoDOPnoCVhtpN1hDPQ);
NTI_qoDM8xYRV40zbhS9acPNT9bw.flags = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[9].kind = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[9].offset = offsetof(Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw, f);
T_Ue7tnBcsL67VCiRfvt8q0A_0[9].typ = (&NTI_7BHnQsEj49a9c6QtudqWTo1w);
T_Ue7tnBcsL67VCiRfvt8q0A_0[9].name = "f";
NTI_qoDM8xYRV40zbhS9acPNT9bw.node = &T_Ue7tnBcsL67VCiRfvt8q0A_0[9];
NTI_Z018yRjOOerOKfp9aM3JSOg.size = sizeof(Filestreamobj_qoDM8xYRV40zbhS9acPNT9bw*);
NTI_Z018yRjOOerOKfp9aM3JSOg.kind = 22;
NTI_Z018yRjOOerOKfp9aM3JSOg.base = (&NTI_qoDM8xYRV40zbhS9acPNT9bw);
NTI_Z018yRjOOerOKfp9aM3JSOg.marker = Marker_TY_Z018yRjOOerOKfp9aM3JSOg;
NTI_lGsM0FdhfyxyplfYoMsgFQ.size = sizeof(Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ);
NTI_lGsM0FdhfyxyplfYoMsgFQ.kind = 17;
NTI_lGsM0FdhfyxyplfYoMsgFQ.base = (&NTI_RShkcoDOPnoCVhtpN1hDPQ);
T_Ue7tnBcsL67VCiRfvt8q0A_6[0] = &T_Ue7tnBcsL67VCiRfvt8q0A_0[11];
T_Ue7tnBcsL67VCiRfvt8q0A_0[11].kind = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[11].offset = offsetof(Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ, data);
T_Ue7tnBcsL67VCiRfvt8q0A_0[11].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg);
T_Ue7tnBcsL67VCiRfvt8q0A_0[11].name = "data";
T_Ue7tnBcsL67VCiRfvt8q0A_6[1] = &T_Ue7tnBcsL67VCiRfvt8q0A_0[12];
T_Ue7tnBcsL67VCiRfvt8q0A_0[12].kind = 1;
T_Ue7tnBcsL67VCiRfvt8q0A_0[12].offset = offsetof(Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ, pos);
T_Ue7tnBcsL67VCiRfvt8q0A_0[12].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_Ue7tnBcsL67VCiRfvt8q0A_0[12].name = "pos";
T_Ue7tnBcsL67VCiRfvt8q0A_0[10].len = 2; T_Ue7tnBcsL67VCiRfvt8q0A_0[10].kind = 2; T_Ue7tnBcsL67VCiRfvt8q0A_0[10].sons = &T_Ue7tnBcsL67VCiRfvt8q0A_6[0];
NTI_lGsM0FdhfyxyplfYoMsgFQ.node = &T_Ue7tnBcsL67VCiRfvt8q0A_0[10];
NTI_oa89b9cIODFBktXa1hHFh9c3Q.size = sizeof(Stringstreamobj_lGsM0FdhfyxyplfYoMsgFQ*);
NTI_oa89b9cIODFBktXa1hHFh9c3Q.kind = 22;
NTI_oa89b9cIODFBktXa1hHFh9c3Q.base = (&NTI_lGsM0FdhfyxyplfYoMsgFQ);
NTI_oa89b9cIODFBktXa1hHFh9c3Q.marker = Marker_TY_oa89b9cIODFBktXa1hHFh9c3Q;
}

