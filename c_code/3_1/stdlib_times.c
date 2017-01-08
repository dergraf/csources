/* Generated by Nim Compiler v0.16.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

#include "nimbase.h"
#include <string.h>
#include <time.h>
#include <sys/select.h>
#include <sys/time.h>
#undef linux
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct Timeinfo_sGezGiKtnmyCJvsDB0xApg Timeinfo_sGezGiKtnmyCJvsDB0xApg;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
struct  TNimObject  {
TNimType* m_type;
};
typedef NU8 Month_JS0JuFvCBbC2GL3xXBnPQw;
typedef NU8 Weekday_SVfemTA9aCOyua2TJYa6yBg;
struct  Timeinfo_sGezGiKtnmyCJvsDB0xApg  {
  TNimObject Sup;
NI second;
NI minute;
NI hour;
NI monthday;
Month_JS0JuFvCBbC2GL3xXBnPQw month;
NI year;
Weekday_SVfemTA9aCOyua2TJYa6yBg weekday;
NI yearday;
NIM_BOOL isdst;
NI timezone;
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
typedef Weekday_SVfemTA9aCOyua2TJYa6yBg TY_GGEBht517aMvSZUh5qcO0A[7];
N_NIMCALL(void, getlocaltime_Ql5lAb5s0QPmy9b8QhS3ucg)(time_t t0, Timeinfo_sGezGiKtnmyCJvsDB0xApg* Result);
N_NIMCALL(void, tmtotimeinfo_qFsEbGfYkdT2YiBOfTVRZQ)(struct tm* tm0, NIM_BOOL local0, Timeinfo_sGezGiKtnmyCJvsDB0xApg* Result);
N_NIMCALL(NI, gettimezone_mKxN2AZMCSmCGOUS2uUP7w)(void);
N_NIMCALL(void, genericShallowAssign)(void* dest0, void* src0, TNimType* mt0);
N_NOINLINE(void, chckNil)(void* p0);
N_NIMCALL(void, genericReset)(void* dest0, TNimType* mt0);
N_NIMCALL(time_t, gettime_wqmoaGqnr3gMTpWruGQ3FA)(void);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x0);
static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0);
static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0);
static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0);
N_NIMCALL(NimStringDesc*, nsuIntToStr)(NI x0, NI minchars0);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space0);
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA;
TNimType NTI_sGezGiKtnmyCJvsDB0xApg;
extern TNimType NTI_Uk8TiHqxGdO37NabyvfS5g;
extern TNimType NTI_LBgXxpmYOpS8xroRZgNvbg;
extern TNimType NTI_Gz6vwaK0PZQIDIwfuvKsOg;
extern TNimType NTI_DcZ5N67dL3rBj9bxGtx09bFg;
TNimType NTI_JS0JuFvCBbC2GL3xXBnPQw;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA;
TNimType NTI_SVfemTA9aCOyua2TJYa6yBg;
extern TNimType NTI_g9buja9c9aeh0rkDpqsXOJF9bA;
extern TNimType NTI_VaVACK0bpYmqIQ0mKcHfQQ;
NIM_CONST TY_GGEBht517aMvSZUh5qcO0A weekdays_bqPkAYhTkibk0Ue2wrgY9cQ = {((Weekday_SVfemTA9aCOyua2TJYa6yBg) 6),
((Weekday_SVfemTA9aCOyua2TJYa6yBg) 0),
((Weekday_SVfemTA9aCOyua2TJYa6yBg) 1),
((Weekday_SVfemTA9aCOyua2TJYa6yBg) 2),
((Weekday_SVfemTA9aCOyua2TJYa6yBg) 3),
((Weekday_SVfemTA9aCOyua2TJYa6yBg) 4),
((Weekday_SVfemTA9aCOyua2TJYa6yBg) 5)}
;

N_NIMCALL(NI, gettimezone_mKxN2AZMCSmCGOUS2uUP7w)(void) {
	NI result0;
{	result0 = (NI)0;
	result0 = timezone;
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

N_NIMCALL(void, tmtotimeinfo_qFsEbGfYkdT2YiBOfTVRZQ)(struct tm* tm0, NIM_BOOL local0, Timeinfo_sGezGiKtnmyCJvsDB0xApg* Result) {
	Timeinfo_sGezGiKtnmyCJvsDB0xApg LOC1;
	LOC1.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg);
	memset((void*)(&LOC1), 0, sizeof(LOC1));
	LOC1.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg);
	LOC1.second = ((NI) (((NI) ((*tm0).tm_sec))));
	LOC1.minute = ((NI) (((NI) ((*tm0).tm_min))));
	LOC1.hour = ((NI) (((NI) ((*tm0).tm_hour))));
	LOC1.monthday = ((NI) (((NI) ((*tm0).tm_mday))));
	LOC1.month = ((Month_JS0JuFvCBbC2GL3xXBnPQw) ((*tm0).tm_mon));
	LOC1.year = ((NI) ((NI32)((*tm0).tm_year + ((NI32) 1900))));
	LOC1.weekday = weekdays_bqPkAYhTkibk0Ue2wrgY9cQ[(((NI) ((*tm0).tm_wday)))- 0];
	LOC1.yearday = ((NI) (((NI) ((*tm0).tm_yday))));
	LOC1.isdst = (((NI32) 0) < (*tm0).tm_isdst);
	{
		if (!local0) goto LA4;
		LOC1.timezone = gettimezone_mKxN2AZMCSmCGOUS2uUP7w();
	}
	goto LA2;
	LA4: ;
	{
		LOC1.timezone = ((NI) 0);
	}
	LA2: ;
	genericShallowAssign((void*)Result, (void*)(&LOC1), (&NTI_sGezGiKtnmyCJvsDB0xApg));
}

N_NIMCALL(void, getlocaltime_Ql5lAb5s0QPmy9b8QhS3ucg)(time_t t0, Timeinfo_sGezGiKtnmyCJvsDB0xApg* Result) {
	time_t a0;
	struct tm* lt0;
	a0 = t0;
	lt0 = localtime((&a0));
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_sGezGiKtnmyCJvsDB0xApg));
	(*Result).Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg);
	tmtotimeinfo_qFsEbGfYkdT2YiBOfTVRZQ((&(*lt0)), NIM_TRUE, Result);
}

N_NIMCALL(time_t, gettime_wqmoaGqnr3gMTpWruGQ3FA)(void) {
	time_t result0;
{	result0 = (time_t)0;
	result0 = time(NIM_NIL);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}

static N_INLINE(void, copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem)(void* dest0, void* source0, NI size0) {
	void* LOC1;
	LOC1 = (void*)0;
	LOC1 = memcpy(dest0, source0, ((size_t) (size0)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest0, NimStringDesc* src0) {
	copymem_fPlwH3r9agN9aEHB6yCPMh0wsystem(((void*) ((&(*dest0).data[((*dest0).Sup.len)- 0]))), ((void*) ((*src0).data)), ((NI) ((NI)((*src0).Sup.len + ((NI) 1)))));
	(*dest0).Sup.len += (*src0).Sup.len;
}

static N_INLINE(void, appendChar)(NimStringDesc* dest0, NIM_CHAR c0) {
	(*dest0).data[((*dest0).Sup.len)- 0] = c0;
	(*dest0).data[((NI)((*dest0).Sup.len + ((NI) 1)))- 0] = 0;
	(*dest0).Sup.len += ((NI) 1);
}

N_NIMCALL(NimStringDesc*, ntgetDateStr)(void) {
	NimStringDesc* result0;
	Timeinfo_sGezGiKtnmyCJvsDB0xApg ti0;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result0 = (NimStringDesc*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg);
	LOC1 = (time_t)0;
	LOC1 = gettime_wqmoaGqnr3gMTpWruGQ3FA();
	chckNil((void*)(&ti0));
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg);
	getlocaltime_Ql5lAb5s0QPmy9b8QhS3ucg(LOC1, (&ti0));
	LOC2 = (NimStringDesc*)0;
	LOC3 = (NimStringDesc*)0;
	LOC3 = nimIntToStr(ti0.year);
	LOC4 = (NimStringDesc*)0;
	LOC4 = nsuIntToStr(((NI) ((NI)(((NI) (ti0.month)) + ((NI) 1)))), ((NI) 2));
	LOC5 = (NimStringDesc*)0;
	LOC5 = nsuIntToStr(((NI) (ti0.monthday)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 45);
appendString(LOC2, LOC4);
appendChar(LOC2, 45);
appendString(LOC2, LOC5);
	result0 = LOC2;
	return result0;
}

N_NIMCALL(NimStringDesc*, ntgetClockStr)(void) {
	NimStringDesc* result0;
	Timeinfo_sGezGiKtnmyCJvsDB0xApg ti0;
	time_t LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	result0 = (NimStringDesc*)0;
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg);
	LOC1 = (time_t)0;
	LOC1 = gettime_wqmoaGqnr3gMTpWruGQ3FA();
	chckNil((void*)(&ti0));
	memset((void*)(&ti0), 0, sizeof(ti0));
	ti0.Sup.m_type = (&NTI_sGezGiKtnmyCJvsDB0xApg);
	getlocaltime_Ql5lAb5s0QPmy9b8QhS3ucg(LOC1, (&ti0));
	LOC2 = (NimStringDesc*)0;
	LOC3 = (NimStringDesc*)0;
	LOC3 = nsuIntToStr(((NI) (ti0.hour)), ((NI) 2));
	LOC4 = (NimStringDesc*)0;
	LOC4 = nsuIntToStr(((NI) (ti0.minute)), ((NI) 2));
	LOC5 = (NimStringDesc*)0;
	LOC5 = nsuIntToStr(((NI) (ti0.second)), ((NI) 2));
	LOC2 = rawNewString(LOC3->Sup.len + LOC4->Sup.len + LOC5->Sup.len + 2);
appendString(LOC2, LOC3);
appendChar(LOC2, 58);
appendString(LOC2, LOC4);
appendChar(LOC2, 58);
appendString(LOC2, LOC5);
	result0 = LOC2;
	return result0;
}

N_NIMCALL(NF, toseconds_Gg29bvJbPEnFoG9aNRGMxIFw)(time_t time0) {
	NF result0;
	result0 = (NF)0;
	result0 = ((NF) (time0));
	return result0;
}

N_NIMCALL(NF, ntepochTime)(void) {
	NF result0;
	struct timeval a0;
	result0 = (NF)0;
	memset((void*)(&a0), 0, sizeof(a0));
	gettimeofday((&a0), NIM_NIL);
	result0 = ((NF)(((double) (a0.tv_sec))) + (NF)(((NF)(((double) (a0.tv_usec))) * (NF)(9.9999999999999995e-07))));
	return result0;
}

N_NIMCALL(NI64, ntDiffTime)(time_t a0, time_t b0) {
	NI64 result0;
	NF LOC1;
{	result0 = (NI64)0;
	LOC1 = (NF)0;
	LOC1 = difftime(a0, b0);
	result0 = float64ToInt64(LOC1);
	goto BeforeRet;
	}BeforeRet: ;
	return result0;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void) {
static TNimNode* T_6NbDwwj5FY059b1gz2AsAZQ_2[10];
static TNimNode* T_6NbDwwj5FY059b1gz2AsAZQ_3[12];
NI T_6NbDwwj5FY059b1gz2AsAZQ_5;
static char* NIM_CONST T_6NbDwwj5FY059b1gz2AsAZQ_4[12] = {
"mJan", 
"mFeb", 
"mMar", 
"mApr", 
"mMay", 
"mJun", 
"mJul", 
"mAug", 
"mSep", 
"mOct", 
"mNov", 
"mDec"};
static TNimNode* T_6NbDwwj5FY059b1gz2AsAZQ_6[7];
NI T_6NbDwwj5FY059b1gz2AsAZQ_8;
static char* NIM_CONST T_6NbDwwj5FY059b1gz2AsAZQ_7[7] = {
"dMon", 
"dTue", 
"dWed", 
"dThu", 
"dFri", 
"dSat", 
"dSun"};
static TNimNode T_6NbDwwj5FY059b1gz2AsAZQ_0[32];
NTI_sGezGiKtnmyCJvsDB0xApg.size = sizeof(Timeinfo_sGezGiKtnmyCJvsDB0xApg);
NTI_sGezGiKtnmyCJvsDB0xApg.kind = 17;
NTI_sGezGiKtnmyCJvsDB0xApg.base = (&NTI_13RNkKqUOX1TtorOUlKtqA);
NTI_sGezGiKtnmyCJvsDB0xApg.flags = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_2[0] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[1];
T_6NbDwwj5FY059b1gz2AsAZQ_0[1].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[1].offset = offsetof(Timeinfo_sGezGiKtnmyCJvsDB0xApg, second);
T_6NbDwwj5FY059b1gz2AsAZQ_0[1].typ = (&NTI_Uk8TiHqxGdO37NabyvfS5g);
T_6NbDwwj5FY059b1gz2AsAZQ_0[1].name = "second";
T_6NbDwwj5FY059b1gz2AsAZQ_2[1] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[2];
T_6NbDwwj5FY059b1gz2AsAZQ_0[2].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[2].offset = offsetof(Timeinfo_sGezGiKtnmyCJvsDB0xApg, minute);
T_6NbDwwj5FY059b1gz2AsAZQ_0[2].typ = (&NTI_LBgXxpmYOpS8xroRZgNvbg);
T_6NbDwwj5FY059b1gz2AsAZQ_0[2].name = "minute";
T_6NbDwwj5FY059b1gz2AsAZQ_2[2] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[3];
T_6NbDwwj5FY059b1gz2AsAZQ_0[3].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[3].offset = offsetof(Timeinfo_sGezGiKtnmyCJvsDB0xApg, hour);
T_6NbDwwj5FY059b1gz2AsAZQ_0[3].typ = (&NTI_Gz6vwaK0PZQIDIwfuvKsOg);
T_6NbDwwj5FY059b1gz2AsAZQ_0[3].name = "hour";
T_6NbDwwj5FY059b1gz2AsAZQ_2[3] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[4];
T_6NbDwwj5FY059b1gz2AsAZQ_0[4].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[4].offset = offsetof(Timeinfo_sGezGiKtnmyCJvsDB0xApg, monthday);
T_6NbDwwj5FY059b1gz2AsAZQ_0[4].typ = (&NTI_DcZ5N67dL3rBj9bxGtx09bFg);
T_6NbDwwj5FY059b1gz2AsAZQ_0[4].name = "monthday";
T_6NbDwwj5FY059b1gz2AsAZQ_2[4] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[5];
NTI_JS0JuFvCBbC2GL3xXBnPQw.size = sizeof(Month_JS0JuFvCBbC2GL3xXBnPQw);
NTI_JS0JuFvCBbC2GL3xXBnPQw.kind = 14;
NTI_JS0JuFvCBbC2GL3xXBnPQw.base = 0;
NTI_JS0JuFvCBbC2GL3xXBnPQw.flags = 3;
for (T_6NbDwwj5FY059b1gz2AsAZQ_5 = 0; T_6NbDwwj5FY059b1gz2AsAZQ_5 < 12; T_6NbDwwj5FY059b1gz2AsAZQ_5++) {
T_6NbDwwj5FY059b1gz2AsAZQ_0[T_6NbDwwj5FY059b1gz2AsAZQ_5+6].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[T_6NbDwwj5FY059b1gz2AsAZQ_5+6].offset = T_6NbDwwj5FY059b1gz2AsAZQ_5;
T_6NbDwwj5FY059b1gz2AsAZQ_0[T_6NbDwwj5FY059b1gz2AsAZQ_5+6].name = T_6NbDwwj5FY059b1gz2AsAZQ_4[T_6NbDwwj5FY059b1gz2AsAZQ_5];
T_6NbDwwj5FY059b1gz2AsAZQ_3[T_6NbDwwj5FY059b1gz2AsAZQ_5] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[T_6NbDwwj5FY059b1gz2AsAZQ_5+6];
}
T_6NbDwwj5FY059b1gz2AsAZQ_0[18].len = 12; T_6NbDwwj5FY059b1gz2AsAZQ_0[18].kind = 2; T_6NbDwwj5FY059b1gz2AsAZQ_0[18].sons = &T_6NbDwwj5FY059b1gz2AsAZQ_3[0];
NTI_JS0JuFvCBbC2GL3xXBnPQw.node = &T_6NbDwwj5FY059b1gz2AsAZQ_0[18];
T_6NbDwwj5FY059b1gz2AsAZQ_0[5].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[5].offset = offsetof(Timeinfo_sGezGiKtnmyCJvsDB0xApg, month);
T_6NbDwwj5FY059b1gz2AsAZQ_0[5].typ = (&NTI_JS0JuFvCBbC2GL3xXBnPQw);
T_6NbDwwj5FY059b1gz2AsAZQ_0[5].name = "month";
T_6NbDwwj5FY059b1gz2AsAZQ_2[5] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[19];
T_6NbDwwj5FY059b1gz2AsAZQ_0[19].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[19].offset = offsetof(Timeinfo_sGezGiKtnmyCJvsDB0xApg, year);
T_6NbDwwj5FY059b1gz2AsAZQ_0[19].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_6NbDwwj5FY059b1gz2AsAZQ_0[19].name = "year";
T_6NbDwwj5FY059b1gz2AsAZQ_2[6] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[20];
NTI_SVfemTA9aCOyua2TJYa6yBg.size = sizeof(Weekday_SVfemTA9aCOyua2TJYa6yBg);
NTI_SVfemTA9aCOyua2TJYa6yBg.kind = 14;
NTI_SVfemTA9aCOyua2TJYa6yBg.base = 0;
NTI_SVfemTA9aCOyua2TJYa6yBg.flags = 3;
for (T_6NbDwwj5FY059b1gz2AsAZQ_8 = 0; T_6NbDwwj5FY059b1gz2AsAZQ_8 < 7; T_6NbDwwj5FY059b1gz2AsAZQ_8++) {
T_6NbDwwj5FY059b1gz2AsAZQ_0[T_6NbDwwj5FY059b1gz2AsAZQ_8+21].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[T_6NbDwwj5FY059b1gz2AsAZQ_8+21].offset = T_6NbDwwj5FY059b1gz2AsAZQ_8;
T_6NbDwwj5FY059b1gz2AsAZQ_0[T_6NbDwwj5FY059b1gz2AsAZQ_8+21].name = T_6NbDwwj5FY059b1gz2AsAZQ_7[T_6NbDwwj5FY059b1gz2AsAZQ_8];
T_6NbDwwj5FY059b1gz2AsAZQ_6[T_6NbDwwj5FY059b1gz2AsAZQ_8] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[T_6NbDwwj5FY059b1gz2AsAZQ_8+21];
}
T_6NbDwwj5FY059b1gz2AsAZQ_0[28].len = 7; T_6NbDwwj5FY059b1gz2AsAZQ_0[28].kind = 2; T_6NbDwwj5FY059b1gz2AsAZQ_0[28].sons = &T_6NbDwwj5FY059b1gz2AsAZQ_6[0];
NTI_SVfemTA9aCOyua2TJYa6yBg.node = &T_6NbDwwj5FY059b1gz2AsAZQ_0[28];
T_6NbDwwj5FY059b1gz2AsAZQ_0[20].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[20].offset = offsetof(Timeinfo_sGezGiKtnmyCJvsDB0xApg, weekday);
T_6NbDwwj5FY059b1gz2AsAZQ_0[20].typ = (&NTI_SVfemTA9aCOyua2TJYa6yBg);
T_6NbDwwj5FY059b1gz2AsAZQ_0[20].name = "weekday";
T_6NbDwwj5FY059b1gz2AsAZQ_2[7] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[29];
T_6NbDwwj5FY059b1gz2AsAZQ_0[29].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[29].offset = offsetof(Timeinfo_sGezGiKtnmyCJvsDB0xApg, yearday);
T_6NbDwwj5FY059b1gz2AsAZQ_0[29].typ = (&NTI_g9buja9c9aeh0rkDpqsXOJF9bA);
T_6NbDwwj5FY059b1gz2AsAZQ_0[29].name = "yearday";
T_6NbDwwj5FY059b1gz2AsAZQ_2[8] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[30];
T_6NbDwwj5FY059b1gz2AsAZQ_0[30].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[30].offset = offsetof(Timeinfo_sGezGiKtnmyCJvsDB0xApg, isdst);
T_6NbDwwj5FY059b1gz2AsAZQ_0[30].typ = (&NTI_VaVACK0bpYmqIQ0mKcHfQQ);
T_6NbDwwj5FY059b1gz2AsAZQ_0[30].name = "isDST";
T_6NbDwwj5FY059b1gz2AsAZQ_2[9] = &T_6NbDwwj5FY059b1gz2AsAZQ_0[31];
T_6NbDwwj5FY059b1gz2AsAZQ_0[31].kind = 1;
T_6NbDwwj5FY059b1gz2AsAZQ_0[31].offset = offsetof(Timeinfo_sGezGiKtnmyCJvsDB0xApg, timezone);
T_6NbDwwj5FY059b1gz2AsAZQ_0[31].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA);
T_6NbDwwj5FY059b1gz2AsAZQ_0[31].name = "timezone";
T_6NbDwwj5FY059b1gz2AsAZQ_0[0].len = 10; T_6NbDwwj5FY059b1gz2AsAZQ_0[0].kind = 2; T_6NbDwwj5FY059b1gz2AsAZQ_0[0].sons = &T_6NbDwwj5FY059b1gz2AsAZQ_2[0];
NTI_sGezGiKtnmyCJvsDB0xApg.node = &T_6NbDwwj5FY059b1gz2AsAZQ_0[0];
}

