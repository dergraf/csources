/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include "winsock2.h"
#undef linux
typedef struct Guid_J2WQBMgezjwf6Trblkflgg Guid_J2WQBMgezjwf6Trblkflgg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA;
typedef struct Securityattributes_P4HW9ceaevTBZ5O3kGC8yyw Securityattributes_P4HW9ceaevTBZ5O3kGC8yyw;
typedef struct Startupinfo_WGlpKvY9cdd69bAwMQMNLYoQ Startupinfo_WGlpKvY9cdd69bAwMQMNLYoQ;
typedef struct Processinformation_rpgAdaffN9b79bo2kEQiFsMg Processinformation_rpgAdaffN9b79bo2kEQiFsMg;
typedef struct Filetime_bs4NMleDDVF7xsEK0SGLBw Filetime_bs4NMleDDVF7xsEK0SGLBw;
typedef NI8 TY_9cWG514ToTTjfTPLhXXV0IQ[8];
struct  Guid_J2WQBMgezjwf6Trblkflgg  {
NI32 D1;
NI16 D2;
NI16 D3;
TY_9cWG514ToTTjfTPLhXXV0IQ D4;
};
typedef N_STDCALL_PTR(NCSTRING, TY_5ctyytqoGFQ0BA1imFGbVw) (int family0, void* paddr0, NCSTRING pstringbuffer0, NI32 stringbufsize0);
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_STDCALL_PTR(NI, TY_zP2zGemcuVRvOUE82f9a0Pw) (NI32 nstdhandle0);
typedef N_STDCALL_PTR(int, TY_As5z9bYt859cLKWaorPRgQYA) (NI16 wversionrequired0, WSADATA* Wsdata0);
typedef N_STDCALL_PTR(NI32, TY_aO673xGTLLxou7P7GxoCXA) (NI32 dwflags0, void* lpsource0, NI32 dwmessageid0, NI32 dwlanguageid0, void* lpbuffer0, NI32 nsize0, void* Arguments0);
typedef N_STDCALL_PTR(void, TY_im9buRnIvptJfzdASYMEbBA) (void* p0);
typedef N_STDCALL_PTR(NI32, TY_9bXer9a4ps9aSGctILcxWReVw) (void);
typedef N_STDCALL_PTR(NI32, TY_W1Y0YSv0z9cf3pqKJgjGdqQ) (NI16* lpfilename0, NI32 nbufferlength0, NI16* lpbuffer0, NI16** lpfilepart0);
typedef N_STDCALL_PTR(NI, TY_YTOHOMfxh6yqeIrwoF3EQw) (NI16* lpfilename0, Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA* lpfindfiledata0);
typedef N_STDCALL_PTR(void, TY_ofoySXaAAlxxs9bQS9a1etlg) (NI hfindfile0);
typedef N_STDCALL_PTR(NI32, TY_jwEWAkul5J6p6K0UfXa1tw) (NI hfindfile0, Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA* lpfindfiledata0);
typedef N_STDCALL_PTR(NI32, TY_2xBzxeMx4l7D6jwHak3G2g) (NI handle0, NI16* buf0, NI32 size0);
typedef N_STDCALL_PTR(NI32, TY_SQvdXqIshqDsOrj27LgeLQ) (NI16* pathname0, void* security0);
typedef N_STDCALL_PTR(NI32, TY_fRm1QK2sgVg9aFiEV5T74jA) (NI16* lpfilename0);
typedef N_STDCALL_PTR(NI, TY_jZjaRJIBSgYA1p8iXwsy9cA) (NI16* lpfilename0, NI32 dwdesiredaccess0, NI32 dwsharemode0, void* lpsecurityattributes0, NI32 dwcreationdisposition0, NI32 dwflagsandattributes0, NI htemplatefile0);
typedef N_STDCALL_PTR(NI32, TY_P13srMBg9b3d3yEV9aW4NCoA) (NI hobject0);
typedef N_STDCALL_PTR(NI32, TY_ZF830CPGZda8saokdzv3Nw) (NI hfile0, NI32 ldistancetomove0, NI32* lpdistancetomovehigh0, NI32 dwmovemethod0);
typedef N_STDCALL_PTR(NI, TY_rQv4HdT3JZB1EnhSb4r4Gg) (NI hfile0, void* lpfilemappingattributes0, NI32 flprotect0, NI32 dwmaximumsizehigh0, NI32 dwmaximumsizelow0, void* lpname0);
typedef N_STDCALL_PTR(void*, TY_N3uS69bw8S7evCEnH5Rc6Mg) (NI hfilemappingobject0, NI32 dwdesiredaccess0, NI32 dwfileoffsethigh0, NI32 dwfileoffsetlow0, NI32 dwnumberofbytestomap0, void* lpbaseaddress0);
typedef N_STDCALL_PTR(NI32, TY_I8CYTKrqz0DV8EyysIRhJw) (NI hfile0, NI32* lpfilesizehigh0);
typedef N_STDCALL_PTR(NI32, TY_ah5wcFv3UG20t2vgXBy0Fg) (void* lpbaseaddress0);
typedef N_STDCALL_PTR(NI16*, TY_C6bRt4Mqo6LDqlyl9bIOYWQ) (void);
typedef N_STDCALL_PTR(NI32, TY_l1Nv6c9cTPsVTSfpp9bI8Q7Q) (NI16* lpname0, NI16* lpvalue0);
typedef N_STDCALL_PTR(NI32, TY_UWgwsOCvecqqlVsXbs132A) (NI32 nbufferlength0, NI16* lpbuffer0);
typedef N_STDCALL_PTR(NI32, TY_C5kM33gEhlSKPXwfDNHofQ) (NI* hreadpipe0, NI* hwritepipe0, Securityattributes_P4HW9ceaevTBZ5O3kGC8yyw* lppipeattributes0, NI32 nsize0);
typedef N_STDCALL_PTR(NI, TY_zbOhGDO3f3Asi0OF5kiN4w) (NI16* lpname0, NI32 dwopenmode0, NI32 dwpipemode0, NI32 nmaxinstances0, NI32 noutbuffersize0, NI32 ninbuffersize0, NI32 ndefaulttimeout0, Securityattributes_P4HW9ceaevTBZ5O3kGC8yyw* lpsecurityattributes0);
typedef N_STDCALL_PTR(NI, TY_uryidYWkntM7ddjZSyxvyQ) (void);
typedef N_STDCALL_PTR(NI32, TY_oew1DfaGl5XhHmnBK0HYXQ) (NI hsourceprocesshandle0, NI hsourcehandle0, NI htargetprocesshandle0, NI* lptargethandle0, NI32 dwdesiredaccess0, NI32 binherithandle0, NI32 dwoptions0);
typedef N_STDCALL_PTR(NI32, TY_sZsab4827ISgT5SnxCijjg) (NI16* lpapplicationname0, NI16* lpcommandline0, Securityattributes_P4HW9ceaevTBZ5O3kGC8yyw* lpprocessattributes0, Securityattributes_P4HW9ceaevTBZ5O3kGC8yyw* lpthreadattributes0, NI32 binherithandles0, NI32 dwcreationflags0, NI16* lpenvironment0, NI16* lpcurrentdirectory0, Startupinfo_WGlpKvY9cdd69bAwMQMNLYoQ* lpstartupinfo0, Processinformation_rpgAdaffN9b79bo2kEQiFsMg* lpprocessinformation0);
typedef N_STDCALL_PTR(NI32, TY_9ajZYMGL5GqiRFqiCC367oA) (NI hfile0, void* Buffer0, NI32 nnumberofbytestoread0, NI32* lpnumberofbytesread0, void* lpoverlapped0);
typedef N_STDCALL_PTR(NI32, TY_FprzxJFfqQdWyyGxiUsmeQ) (NI hhandle0, NI32 dwmilliseconds0);
typedef N_STDCALL_PTR(NI32, TY_KxeGXN001TReCr89ca9c5bng) (NI hprocess0, NI32* lpexitcode0);
typedef N_STDCALL_PTR(NI32, TY_VxkwbRWIB7oY6WmptBE73A) (NI16* lpfilename0, NI32 dwfileattributes0);
typedef N_STDCALL_PTR(NI32, TY_UVtmMfBlnKqZ4ulTGMgcRw) (NI16* lpexistingfilename0, NI16* lpnewfilename0, NI32 bfailifexists0);
struct  Filetime_bs4NMleDDVF7xsEK0SGLBw  {
NI32 dwlowdatetime;
NI32 dwhighdatetime;
};
typedef N_STDCALL_PTR(void, TY_9bc9cLDdaqTE6n5J78feKRYg) (Filetime_bs4NMleDDVF7xsEK0SGLBw* lpsystemtimeasfiletime0);
typedef N_STDCALL_PTR(void, TY_Tjolzh1w2dIIpj3oCDGPFw) (NI32 dwmilliseconds0);
typedef NIM_CHAR TY_EWK8XzFKXCg2WflN3ijhqA[257];
typedef NIM_CHAR TY_4249al09aeC68W9cvqMnjIYOA[129];
typedef NI16 TY_EKfNt9b8uxndgFbu2Ky3XAQ[260];
typedef NI16 TY_Get9cpRTS5VjGKP6CDsI9bYA[14];
struct  Win32finddata_aYwmSz9bIz0JHAL9ciwIrnhA  {
NI32 dwfileattributes;
Filetime_bs4NMleDDVF7xsEK0SGLBw ftcreationtime;
Filetime_bs4NMleDDVF7xsEK0SGLBw ftlastaccesstime;
Filetime_bs4NMleDDVF7xsEK0SGLBw ftlastwritetime;
NI32 nfilesizehigh;
NI32 nfilesizelow;
NI32 dwreserved0;
NI32 dwreserved1;
TY_EKfNt9b8uxndgFbu2Ky3XAQ cfilename;
TY_Get9cpRTS5VjGKP6CDsI9bYA calternatefilename;
};
struct  Securityattributes_P4HW9ceaevTBZ5O3kGC8yyw  {
NI32 nlength;
void* lpsecuritydescriptor;
NI32 binherithandle;
};
struct  Startupinfo_WGlpKvY9cdd69bAwMQMNLYoQ  {
NI32 cb;
NCSTRING lpreserved;
NCSTRING lpdesktop;
NCSTRING lptitle;
NI32 dwx;
NI32 dwy;
NI32 dwxsize;
NI32 dwysize;
NI32 dwxcountchars;
NI32 dwycountchars;
NI32 dwfillattribute;
NI32 dwflags;
NI16 wshowwindow;
NI16 cbreserved2;
void* lpreserved2;
NI hstdinput;
NI hstdoutput;
NI hstderror;
};
struct  Processinformation_rpgAdaffN9b79bo2kEQiFsMg  {
NI hprocess;
NI hthread;
NI32 dwprocessid;
NI32 dwthreadid;
};
N_NIMCALL(void*, loadlib_lSvQvOASnMsmHZsCRL59ctQ)(NimStringDesc* path0, NIM_BOOL globalsymbols0);
N_NIMCALL(void*, symaddr_NHfjIU1Uh0ju9azgMjiSkQA)(void* lib0, NCSTRING name0);
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path0);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path0);
N_NIMCALL(void*, nimGetProcAddr)(void* lib0, NCSTRING name0);
Guid_J2WQBMgezjwf6Trblkflgg Wsaidconnectex_YmR9c9crObjjK9ckt1ygsPQKg;
Guid_J2WQBMgezjwf6Trblkflgg Wsaidacceptex_pwoOiDuyZgHBOLaI2GSBpg;
Guid_J2WQBMgezjwf6Trblkflgg Wsaidgetacceptexsockaddrs_rSjtFMq7pCHQR2EQvcKbDg;
TY_5ctyytqoGFQ0BA1imFGbVw inetntopreal_FVXn9aJ5AOo23ScDsZUc9aZw;
void* ws2_hGspZUrVrEMpO9aP9c3dJQPQ;
static void* T_k6kyf4Co79a84IkK9blFuQVA_5;
TY_zP2zGemcuVRvOUE82f9a0Pw Dl_119820;
static void* T_k6kyf4Co79a84IkK9blFuQVA_11;
TY_As5z9bYt859cLKWaorPRgQYA Dl_121344;
TY_aO673xGTLLxou7P7GxoCXA Dl_119835;
TY_im9buRnIvptJfzdASYMEbBA Dl_120001;
TY_9bXer9a4ps9aSGctILcxWReVw Dl_119830;
TY_W1Y0YSv0z9cf3pqKJgjGdqQ Dl_120604;
TY_YTOHOMfxh6yqeIrwoF3EQw Dl_120432;
TY_ofoySXaAAlxxs9bQS9a1etlg Dl_120601;
TY_jwEWAkul5J6p6K0UfXa1tw Dl_120437;
TY_2xBzxeMx4l7D6jwHak3G2g Dl_120022;
TY_SQvdXqIshqDsOrj27LgeLQ Dl_120011;
TY_fRm1QK2sgVg9aFiEV5T74jA Dl_120611;
TY_jZjaRJIBSgYA1p8iXwsy9cA Dl_121421;
TY_P13srMBg9b3d3yEV9aW4NCoA Dl_119603;
TY_ZF830CPGZda8saokdzv3Nw Dl_121604;
TY_P13srMBg9b3d3yEV9aW4NCoA Dl_121601;
TY_rQv4HdT3JZB1EnhSb4r4Gg Dl_121624;
TY_N3uS69bw8S7evCEnH5Rc6Mg Dl_121616;
TY_I8CYTKrqz0DV8EyysIRhJw Dl_121611;
TY_ah5wcFv3UG20t2vgXBy0Fg Dl_121801;
TY_C6bRt4Mqo6LDqlyl9bIOYWQ Dl_120632;
TY_C6bRt4Mqo6LDqlyl9bIOYWQ Dl_120627;
TY_fRm1QK2sgVg9aFiEV5T74jA Dl_120629;
TY_l1Nv6c9cTPsVTSfpp9bI8Q7Q Dl_120018;
TY_UWgwsOCvecqqlVsXbs132A Dl_120004;
TY_C5kM33gEhlSKPXwfDNHofQ Dl_119622;
TY_zbOhGDO3f3Asi0OF5kiN4w Dl_119630;
TY_uryidYWkntM7ddjZSyxvyQ Dl_121419;
TY_oew1DfaGl5XhHmnBK0HYXQ Dl_121409;
TY_sZsab4827ISgT5SnxCijjg Dl_119652;
TY_9ajZYMGL5GqiRFqiCC367oA Dl_119606;
TY_9ajZYMGL5GqiRFqiCC367oA Dl_119614;
TY_FprzxJFfqQdWyyGxiUsmeQ Dl_119807;
TY_KxeGXN001TReCr89ca9c5bng Dl_119815;
TY_fRm1QK2sgVg9aFiEV5T74jA Dl_121430;
TY_VxkwbRWIB7oY6WmptBE73A Dl_120614;
TY_fRm1QK2sgVg9aFiEV5T74jA Dl_120015;
TY_fRm1QK2sgVg9aFiEV5T74jA Dl_120008;
TY_l1Nv6c9cTPsVTSfpp9bI8Q7Q Dl_120623;
TY_UVtmMfBlnKqZ4ulTGMgcRw Dl_120618;
TY_9bc9cLDdaqTE6n5J78feKRYg Dl_120827;
TY_Tjolzh1w2dIIpj3oCDGPFw Dl_120831;
NIM_CONST TY_9cWG514ToTTjfTPLhXXV0IQ T_k6kyf4Co79a84IkK9blFuQVA_2 = {((NI8) -114),
((NI8) -23),
((NI8) 118),
((NI8) -27),
((NI8) -116),
((NI8) 116),
((NI8) 6),
((NI8) 62)}
;
NIM_CONST TY_9cWG514ToTTjfTPLhXXV0IQ T_k6kyf4Co79a84IkK9blFuQVA_3 = {((NI8) -107),
((NI8) -54),
((NI8) 0),
((NI8) -128),
((NI8) 95),
((NI8) 72),
((NI8) -95),
((NI8) -110)}
;
STRING_LITERAL(T_k6kyf4Co79a84IkK9blFuQVA_4, "Ws2_32.dll", 10);
STRING_LITERAL(T_k6kyf4Co79a84IkK9blFuQVA_7, "kernel32", 8);
STRING_LITERAL(T_k6kyf4Co79a84IkK9blFuQVA_8, "kernel32", 8);
STRING_LITERAL(T_k6kyf4Co79a84IkK9blFuQVA_13, "Ws2_32.dll", 10);
STRING_LITERAL(T_k6kyf4Co79a84IkK9blFuQVA_14, "Ws2_32.dll", 10);

N_NIMCALL(NI64, rdfiletime_8xfVp1z4bc5fRCRgoEFhIQ)(Filetime_bs4NMleDDVF7xsEK0SGLBw f0) {
	NI64 result0;
	result0 = (NI64)0;
	result0 = (NI64)(((NI64)(NU64)(NU32)(f0.dwlowdatetime)) | (NI64)((NU64)(((NI64)(NU64)(NU32)(f0.dwhighdatetime))) << (NU64)(((NI) 32))));
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanInit000)(void) {
	Guid_J2WQBMgezjwf6Trblkflgg LOC1;
	Guid_J2WQBMgezjwf6Trblkflgg LOC2;
	Guid_J2WQBMgezjwf6Trblkflgg LOC3;
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.D1 = ((NI32) 631375801);
	LOC1.D2 = ((NI16) -8717);
	LOC1.D3 = ((NI16) 18016);
	memcpy((void*)LOC1.D4, (NIM_CONST void*)T_k6kyf4Co79a84IkK9blFuQVA_2, sizeof(TY_9cWG514ToTTjfTPLhXXV0IQ));
	Wsaidconnectex_YmR9c9crObjjK9ckt1ygsPQKg = LOC1;
	memset((void*)(&LOC2), 0, sizeof(LOC2));
	LOC2.D1 = ((NI32) -1254720015);
	LOC2.D2 = ((NI16) -13396);
	LOC2.D3 = ((NI16) 4559);
	memcpy((void*)LOC2.D4, (NIM_CONST void*)T_k6kyf4Co79a84IkK9blFuQVA_3, sizeof(TY_9cWG514ToTTjfTPLhXXV0IQ));
	Wsaidacceptex_pwoOiDuyZgHBOLaI2GSBpg = LOC2;
	memset((void*)(&LOC3), 0, sizeof(LOC3));
	LOC3.D1 = ((NI32) -1254720014);
	LOC3.D2 = ((NI16) -13396);
	LOC3.D3 = ((NI16) 4559);
	memcpy((void*)LOC3.D4, (NIM_CONST void*)T_k6kyf4Co79a84IkK9blFuQVA_3, sizeof(TY_9cWG514ToTTjfTPLhXXV0IQ));
	Wsaidgetacceptexsockaddrs_rSjtFMq7pCHQR2EQvcKbDg = LOC3;
	inetntopreal_FVXn9aJ5AOo23ScDsZUc9aZw = NIM_NIL;
	ws2_hGspZUrVrEMpO9aP9c3dJQPQ = loadlib_lSvQvOASnMsmHZsCRL59ctQ(((NimStringDesc*) &T_k6kyf4Co79a84IkK9blFuQVA_4), NIM_FALSE);
	{
		void* LOC8;
		if (!!((ws2_hGspZUrVrEMpO9aP9c3dJQPQ == NIM_NIL))) goto LA6;
		LOC8 = (void*)0;
		LOC8 = symaddr_NHfjIU1Uh0ju9azgMjiSkQA(ws2_hGspZUrVrEMpO9aP9c3dJQPQ, "inet_ntop");
		inetntopreal_FVXn9aJ5AOo23ScDsZUc9aZw = ((TY_5ctyytqoGFQ0BA1imFGbVw) (LOC8));
	}
	LA6: ;
}

NIM_EXTERNC N_NOINLINE(void, stdlib_winleanDatInit000)(void) {
if (!((T_k6kyf4Co79a84IkK9blFuQVA_5 = nimLoadLibrary((NimStringDesc*) &T_k6kyf4Co79a84IkK9blFuQVA_7))
)) nimLoadLibraryError((NimStringDesc*) &T_k6kyf4Co79a84IkK9blFuQVA_8);
	Dl_119820 = (TY_zP2zGemcuVRvOUE82f9a0Pw) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetStdHandle");
if (!((T_k6kyf4Co79a84IkK9blFuQVA_11 = nimLoadLibrary((NimStringDesc*) &T_k6kyf4Co79a84IkK9blFuQVA_13))
)) nimLoadLibraryError((NimStringDesc*) &T_k6kyf4Co79a84IkK9blFuQVA_14);
	Dl_121344 = (TY_As5z9bYt859cLKWaorPRgQYA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_11, "WSAStartup");
	Dl_119835 = (TY_aO673xGTLLxou7P7GxoCXA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "FormatMessageW");
	Dl_120001 = (TY_im9buRnIvptJfzdASYMEbBA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "LocalFree");
	Dl_119830 = (TY_9bXer9a4ps9aSGctILcxWReVw) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetLastError");
	Dl_120604 = (TY_W1Y0YSv0z9cf3pqKJgjGdqQ) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetFullPathNameW");
	Dl_120432 = (TY_YTOHOMfxh6yqeIrwoF3EQw) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "FindFirstFileW");
	Dl_120601 = (TY_ofoySXaAAlxxs9bQS9a1etlg) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "FindClose");
	Dl_120437 = (TY_jwEWAkul5J6p6K0UfXa1tw) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "FindNextFileW");
	Dl_120022 = (TY_2xBzxeMx4l7D6jwHak3G2g) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetModuleFileNameW");
	Dl_120011 = (TY_SQvdXqIshqDsOrj27LgeLQ) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "CreateDirectoryW");
	Dl_120611 = (TY_fRm1QK2sgVg9aFiEV5T74jA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetFileAttributesW");
	Dl_121421 = (TY_jZjaRJIBSgYA1p8iXwsy9cA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "CreateFileW");
	Dl_119603 = (TY_P13srMBg9b3d3yEV9aW4NCoA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "CloseHandle");
	Dl_121604 = (TY_ZF830CPGZda8saokdzv3Nw) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "SetFilePointer");
	Dl_121601 = (TY_P13srMBg9b3d3yEV9aW4NCoA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "SetEndOfFile");
	Dl_121624 = (TY_rQv4HdT3JZB1EnhSb4r4Gg) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "CreateFileMappingW");
	Dl_121616 = (TY_N3uS69bw8S7evCEnH5Rc6Mg) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "MapViewOfFileEx");
	Dl_121611 = (TY_I8CYTKrqz0DV8EyysIRhJw) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetFileSize");
	Dl_121801 = (TY_ah5wcFv3UG20t2vgXBy0Fg) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "UnmapViewOfFile");
	Dl_120632 = (TY_C6bRt4Mqo6LDqlyl9bIOYWQ) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetCommandLineW");
	Dl_120627 = (TY_C6bRt4Mqo6LDqlyl9bIOYWQ) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetEnvironmentStringsW");
	Dl_120629 = (TY_fRm1QK2sgVg9aFiEV5T74jA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "FreeEnvironmentStringsW");
	Dl_120018 = (TY_l1Nv6c9cTPsVTSfpp9bI8Q7Q) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "SetEnvironmentVariableW");
	Dl_120004 = (TY_UWgwsOCvecqqlVsXbs132A) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetCurrentDirectoryW");
	Dl_119622 = (TY_C5kM33gEhlSKPXwfDNHofQ) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "CreatePipe");
	Dl_119630 = (TY_zbOhGDO3f3Asi0OF5kiN4w) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "CreateNamedPipeW");
	Dl_121419 = (TY_uryidYWkntM7ddjZSyxvyQ) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetCurrentProcess");
	Dl_121409 = (TY_oew1DfaGl5XhHmnBK0HYXQ) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "DuplicateHandle");
	Dl_119652 = (TY_sZsab4827ISgT5SnxCijjg) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "CreateProcessW");
	Dl_119606 = (TY_9ajZYMGL5GqiRFqiCC367oA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "ReadFile");
	Dl_119614 = (TY_9ajZYMGL5GqiRFqiCC367oA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "WriteFile");
	Dl_119807 = (TY_FprzxJFfqQdWyyGxiUsmeQ) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "WaitForSingleObject");
	Dl_119815 = (TY_KxeGXN001TReCr89ca9c5bng) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetExitCodeProcess");
	Dl_121430 = (TY_fRm1QK2sgVg9aFiEV5T74jA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "DeleteFileW");
	Dl_120614 = (TY_VxkwbRWIB7oY6WmptBE73A) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "SetFileAttributesW");
	Dl_120015 = (TY_fRm1QK2sgVg9aFiEV5T74jA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "RemoveDirectoryW");
	Dl_120008 = (TY_fRm1QK2sgVg9aFiEV5T74jA) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "SetCurrentDirectoryW");
	Dl_120623 = (TY_l1Nv6c9cTPsVTSfpp9bI8Q7Q) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "MoveFileW");
	Dl_120618 = (TY_UVtmMfBlnKqZ4ulTGMgcRw) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "CopyFileW");
	Dl_120827 = (TY_9bc9cLDdaqTE6n5J78feKRYg) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "GetSystemTimeAsFileTime");
	Dl_120831 = (TY_Tjolzh1w2dIIpj3oCDGPFw) nimGetProcAddr(T_k6kyf4Co79a84IkK9blFuQVA_5, "Sleep");
}

