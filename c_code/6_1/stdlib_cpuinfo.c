/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#undef linux
typedef int TY_VR9bNthWayFgb5M9avIR8bkA[4];
#include <sys/param.h>
#include <sys/sysctl.h>

N_NIMCALL(NI, ncpicountProcessors)(void) {
	NI result0;
	TY_VR9bNthWayFgb5M9avIR8bkA mib0;
	NI numcpu0;
	size_t len0;
	int LOC1;
	result0 = (NI)0;
	memset((void*)mib0, 0, sizeof(mib0));
	numcpu0 = (NI)0;
	len0 = (size_t)0;
	mib0[(((NI) 0))- 0] = ((int) 6);
	mib0[(((NI) 1))- 0] = ((int) 25);
	len0 = ((NI) 4);
	LOC1 = (int)0;
	LOC1 = sysctl(mib0, ((int) 2), ((void*) ((&numcpu0))), (&len0), NIM_NIL, ((NI) 0));
	{
		int LOC6;
		if (!(numcpu0 < ((NI) 1))) goto LA4;
		mib0[(((NI) 1))- 0] = ((int) 3);
		LOC6 = (int)0;
		LOC6 = sysctl(mib0, ((int) 2), ((void*) ((&numcpu0))), (&len0), NIM_NIL, ((NI) 0));
	}
	LA4: ;
	result0 = numcpu0;
	{
		if (!(result0 <= ((NI) 0))) goto LA9;
		result0 = ((NI) 1);
	}
	LA9: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cpuinfoDatInit000)(void) {
}

