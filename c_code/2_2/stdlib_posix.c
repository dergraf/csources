/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/types.h>
#undef linux
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
TNimType NTI_CHeEDdL3roTPu81s9cOH0Bw;
NIM_EXTERNC N_NOINLINE(void, stdlib_posixInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_posixDatInit000)(void) {
NTI_CHeEDdL3roTPu81s9cOH0Bw.size = sizeof(pid_t);
NTI_CHeEDdL3roTPu81s9cOH0Bw.kind = 31;
NTI_CHeEDdL3roTPu81s9cOH0Bw.base = 0;
NTI_CHeEDdL3roTPu81s9cOH0Bw.flags = 3;
}

