/*
 * Code for class WEL_GDIP_BITMAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1476_15595(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1476_15596(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1476_15597(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1476_15598(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1476_15599(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1476_15600(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1476_15601(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1476_15602(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1476_15603(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1476_15604(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1476_15605(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1476_15606(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1476_15607(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1476_15608(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1476_15609(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1476_15610(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1476_15611(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1476_15612(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1476_15613(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1476_15614(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1476_15615(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1476_15616(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1476_15617(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1476_15618(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1476_15619(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1476_15620(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1476_15621(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1476_15622(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1476(void);

#ifdef __cplusplus
}
#endif

#include <string.h>
#include "wel_gdi_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1476_15613
static EIF_POINTER inline_F1476_15613 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_INTEGER_32* arg5)
{
	{
				static FARPROC GdipCreateBitmapFromScan0 = NULL;
				GpBitmap *l_result = NULL;
				*(EIF_INTEGER *) arg5 = 1;

				if (!GdipCreateBitmapFromScan0)	{
					GdipCreateBitmapFromScan0 = GetProcAddress ((HMODULE) arg1, "GdipCreateBitmapFromScan0");
				}
				if (GdipCreateBitmapFromScan0) {
					*(EIF_INTEGER *)arg5 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (INT, INT, INT, PixelFormat, BYTE*, GpBitmap **)) GdipCreateBitmapFromScan0)
								((INT) arg2,
								(INT) arg3,
								(INT) 0,
								(PixelFormat) arg4,
								(BYTE*) NULL,
								(GpBitmap **) &l_result);
				}
				return (EIF_POINTER) l_result;
			}
	;
}
#define INLINE_F1476_15613
#endif
#ifndef INLINE_F1476_15614
static EIF_POINTER inline_F1476_15614 (EIF_POINTER arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4, EIF_INTEGER_32* arg5)
{
	{
				static FARPROC GdipCreateBitmapFromGraphics = NULL;
				GpBitmap *l_result = NULL;
				*(EIF_INTEGER *) arg5 = 1;

				if (!GdipCreateBitmapFromGraphics)	{
					GdipCreateBitmapFromGraphics = GetProcAddress ((HMODULE) arg1, "GdipCreateBitmapFromGraphics");
				}
				if (GdipCreateBitmapFromGraphics) {
					*(EIF_INTEGER *)arg5 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (INT, INT, GpGraphics *, GpBitmap **)) GdipCreateBitmapFromGraphics)
								((INT) arg2,
								(INT) arg3,
								(GpGraphics *) arg4,
								(GpBitmap **) &l_result);
				}
				return (EIF_POINTER) l_result;
			}
	;
}
#define INLINE_F1476_15614
#endif
#ifndef INLINE_F1476_15615
static EIF_POINTER inline_F1476_15615 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32* arg4)
{
	{
					static FARPROC GdipCreateBitmapFromHBITMAP = NULL;
					GpBitmap *l_result = NULL;
					*(EIF_INTEGER *) arg4 = 1;

					if (!GdipCreateBitmapFromHBITMAP)	{
						GdipCreateBitmapFromHBITMAP = GetProcAddress ((HMODULE) arg1, "GdipCreateBitmapFromHBITMAP");
					}
					if (GdipCreateBitmapFromHBITMAP) {
						*(EIF_INTEGER *)arg4 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (HBITMAP, HPALETTE, GpBitmap **)) GdipCreateBitmapFromHBITMAP)
									((HBITMAP) arg2,
									(HPALETTE) arg3,
									(GpBitmap **) &l_result);
					}
					return (EIF_POINTER) l_result;
				}
	;
}
#define INLINE_F1476_15615
#endif
#ifndef INLINE_F1476_15616
static EIF_POINTER inline_F1476_15616 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32* arg4)
{
	{
					static FARPROC GdipCreateBitmapFromGdiDib = NULL;
					GpBitmap *l_result = NULL;
					*(EIF_INTEGER *) arg4 = 1;

					if (!GdipCreateBitmapFromGdiDib)	{
						GdipCreateBitmapFromGdiDib = GetProcAddress ((HMODULE) arg1, "GdipCreateBitmapFromGdiDib");
					}
					if (GdipCreateBitmapFromGdiDib) {
						*(EIF_INTEGER *)arg4 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GDIPCONST BITMAPINFO*, VOID*, GpBitmap **)) GdipCreateBitmapFromGdiDib)
									((GDIPCONST BITMAPINFO*) arg2,
									(VOID*) arg3,
									(GpBitmap **) &l_result);
					}
					return (EIF_POINTER) l_result;
				}
	;
}
#define INLINE_F1476_15616
#endif
#ifndef INLINE_F1476_15617
static EIF_POINTER inline_F1476_15617 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32* arg3)
{
	{
				static FARPROC GdipCreateBitmapFromHICON = NULL;
				GpBitmap *l_result = NULL;
				*(EIF_INTEGER *) arg3 = 1;

				if (!GdipCreateBitmapFromHICON)	{
					GdipCreateBitmapFromHICON = GetProcAddress ((HMODULE) arg1, "GdipCreateBitmapFromHICON");
				}
				if (GdipCreateBitmapFromHICON) {
					*(EIF_INTEGER *)arg3 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (HICON, GpBitmap **)) GdipCreateBitmapFromHICON)
								((HICON) arg2,
								(GpBitmap **) &l_result);
				}
				return (EIF_POINTER) l_result;
			}
	;
}
#define INLINE_F1476_15617
#endif
#ifndef INLINE_F1476_15618
static void inline_F1476_15618 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_NATURAL_32 arg3, EIF_NATURAL_32 arg4, EIF_NATURAL_32* arg5, EIF_INTEGER_32* arg6)
{
	{
	static FARPROC GdipGetPixel = NULL;
		
	*(EIF_INTEGER *) arg6 = 1;
	
	if (!GdipGetPixel)	{
		GdipGetPixel = GetProcAddress ((HMODULE) arg1, "GdipBitmapGetPixel");
	}					
	if (GdipGetPixel) {
		*(EIF_INTEGER *)arg6 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpBitmap *, INT, INT, ARGB*)) GdipGetPixel)
					((GpBitmap *) arg2,
					(INT) arg3,
					(INT) arg4,
					(ARGB*) arg5);
	}
}
	;
}
#define INLINE_F1476_15618
#endif
#ifndef INLINE_F1476_15619
static void inline_F1476_15619 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_NATURAL_32 arg3, EIF_NATURAL_32 arg4, EIF_NATURAL_32 arg5, EIF_INTEGER_32* arg6)
{
	{
	static FARPROC GdipSetPixel = NULL;
		
	*(EIF_INTEGER *) arg6 = 1;
	
	if (!GdipSetPixel)	{
		GdipSetPixel = GetProcAddress ((HMODULE) arg1, "GdipBitmapSetPixel");
	}					
	if (GdipSetPixel) {
		*(EIF_INTEGER *)arg6 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpBitmap *, INT, INT, ARGB)) GdipSetPixel)
					((GpBitmap *) arg2,
					(INT) arg3,
					(INT) arg4,
					(ARGB) arg5);
	}
}
	;
}
#define INLINE_F1476_15619
#endif
#ifndef INLINE_F1476_15620
static void inline_F1476_15620 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_NATURAL_32 arg4, EIF_INTEGER_32 arg5, EIF_INTEGER_32* arg6, EIF_POINTER arg7)
{
	{
	static FARPROC GdipBitmapLockBits = NULL;
		
	*(EIF_INTEGER *) arg6 = 1;
	
	if (!GdipBitmapLockBits)	{
		GdipBitmapLockBits = GetProcAddress ((HMODULE) arg1, "GdipBitmapLockBits");
	}					
	if (GdipBitmapLockBits) {
		*(EIF_INTEGER *)arg6 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpBitmap *, GDIPCONST GpRect*, UINT, PixelFormat, BitmapData*)) GdipBitmapLockBits)
					((GpBitmap *) arg2,
					(GDIPCONST GpRect *) arg3,
					(UINT) arg4,
					(PixelFormat) arg5,
					(BitmapData *) arg7);
	}
}
	;
}
#define INLINE_F1476_15620
#endif
#ifndef INLINE_F1476_15621
static void inline_F1476_15621 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_POINTER arg3, EIF_INTEGER_32* arg4)
{
	{
	static FARPROC GdipBitmapUnlockBits = NULL;
	*(EIF_INTEGER *) arg4 = 1;
	
	if (!GdipBitmapUnlockBits) {
		GdipBitmapUnlockBits = GetProcAddress ((HMODULE) arg1, "GdipBitmapUnlockBits");
	}
	if (GdipBitmapUnlockBits) {
		*(EIF_INTEGER *)arg4 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (GpBitmap*, BitmapData*)) GdipBitmapUnlockBits)
					((GpBitmap*) arg2,
					(BitmapData*) arg3);				
	}
}
	;
}
#define INLINE_F1476_15621
#endif
#ifndef INLINE_F1476_15622
static void inline_F1476_15622 (EIF_POINTER arg1, EIF_NATURAL_32 arg2, EIF_NATURAL_32 arg3, EIF_NATURAL_32 arg4, EIF_NATURAL_32 arg5, EIF_INTEGER_32 arg6, EIF_POINTER arg7, EIF_POINTER* arg8, EIF_INTEGER_32* arg9)
{
	{
	static FARPROC GdipCloneBitmapAreaI = NULL;
	*(EIF_INTEGER *) arg9 = 1;
	
	if (!GdipCloneBitmapAreaI) {
		GdipCloneBitmapAreaI  = GetProcAddress ((HMODULE) arg1, "GdipCloneBitmapAreaI");
	}
	if (GdipCloneBitmapAreaI) {
		*(EIF_INTEGER *) arg9 = (FUNCTION_CAST_TYPE (GpStatus, WINGDIPAPI, (INT, INT, INT, INT, PixelFormat, GpBitmap *, GpBitmap **)) GdipCloneBitmapAreaI)
					((INT) arg2,
					(INT) arg3,
					(INT) arg4,
					(INT) arg5,
					(PixelFormat) arg6,
					(GpBitmap *) arg7,
					(GpBitmap **) arg8);
	}
}
	;
}
#define INLINE_F1476_15622
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_GDIP_BITMAP}.make_with_size */
void F1476_15595 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_with_size";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 2, 22180);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22180);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("larger_than_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("larger_than_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6917, 998))(Current)).it_i4);
	ui4_3 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12957, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.make_formatted */
void F1476_15596 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_formatted";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1475, Current, 1, 3, 22181);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22181);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("larger_than_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("larger_than_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid", EX_PRE);
		tr1 = RTLN(eif_new_type(998, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		ui4_1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6931, "is_valid_format", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, dtype))(Current);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 12307, 0x40000000, 1); /* item */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12819, dtype));
	up1 = tp1;
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	up2 = (EIF_INTEGER_32 *) &(loc1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12972, dtype))(Current, up1x, ui4_1x, ui4_2x, ui4_3x, up2x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12307, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_CHECK) {
		RTHOOK(6);
		RTCT("ok", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6821, 992))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.make_with_graphics */
void F1476_15597 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_with_graphics";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,arg3);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1475, Current, 1, 3, 22182);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22182);
	RTCC(arg3, 1475, l_feature_name, 3, eif_new_type(1473, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("larger_than_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("larger_than_0", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("a_graphics_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12309, "exists", arg3))(arg3)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, dtype))(Current);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 12307, 0x40000000, 1); /* item */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12819, dtype));
	up1 = tp1;
	ui4_1 = arg1;
	ui4_2 = arg2;
	tp2 = *(EIF_POINTER *)(arg3 + RTVA(12307, "item", arg3));
	up2 = tp2;
	up3 = (EIF_INTEGER_32 *) &(loc1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12973, dtype))(Current, up1x, ui4_1x, ui4_2x, up2x, up3x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12307, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_CHECK) {
		RTHOOK(7);
		RTCT("ok", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6821, 992))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.make_from_icon */
void F1476_15598 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_icon";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1475, Current, 1, 1, 22183);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22183);
	RTCC(arg1, 1475, l_feature_name, 1, eif_new_type(1465, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_icon_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_icon_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12309, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, dtype))(Current);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 12307, 0x40000000, 1); /* item */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12819, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(arg1 + RTVA(12307, "item", arg1));
	up2 = tp2;
	up3 = (EIF_INTEGER_32 *) &(loc1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12976, dtype))(Current, up1x, up2x, up3x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12307, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_CHECK) {
		RTHOOK(5);
		RTCT("ok", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6821, 992))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef arg1
}

/* {WEL_GDIP_BITMAP}.make_from_pointer */
void F1476_15599 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_pointer";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 1, 22184);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22184);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_pointer_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 12307, 0x40000000, 1); /* item */
	*(EIF_POINTER *)(Current + RTWA(12307, dtype)) = (EIF_POINTER) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {WEL_GDIP_BITMAP}.make_from_bitmap */
void F1476_15600 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_from_bitmap";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1475, Current, 2, 2, 22185);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22185);
	RTCC(arg1, 1475, l_feature_name, 1, eif_new_type(1460, 0x01), 0x01);
	if (arg2) {
		RTCC(arg2, 1475, l_feature_name, 2, eif_new_type(1459, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_bitmap_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_bitmap_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11579, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_palette_valid", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11579, "exists", arg2))(arg2)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, dtype))(Current);
	RTHOOK(5);
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		RTHOOK(6);
		RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
		tp1 = *(EIF_POINTER *)(arg2 + RTVA(12307, "item", arg2));
		loc2 = (EIF_POINTER) tp1;
	}
	RTHOOK(7);
	RTDBGAA(Current, dtype, 12307, 0x40000000, 1); /* item */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12819, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(arg1 + RTVA(12307, "item", arg1));
	up2 = tp2;
	up3 = loc2;
	up4 = (EIF_INTEGER_32 *) &(loc1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12974, dtype))(Current, up1x, up2x, up3x, up4x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12307, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_CHECK) {
		RTHOOK(8);
		RTCT("ok", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6821, 992))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.make_from_dib_bitmap */
void F1476_15601 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_from_dib_bitmap";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1475, Current, 1, 2, 22186);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22186);
	RTCC(arg1, 1475, l_feature_name, 1, eif_new_type(1546, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12309, "exists", arg1))(arg1)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("exists", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg2 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(32, dtype))(Current);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 12307, 0x40000000, 1); /* item */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12819, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(arg1 + RTVA(12307, "item", arg1));
	up2 = tp2;
	up3 = arg2;
	up4 = (EIF_INTEGER_32 *) &(loc1);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12975, dtype))(Current, up1x, up2x, up3x, up4x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12307, dtype)) = (EIF_POINTER) tp1;
	if (RTAL & CK_CHECK) {
		RTHOOK(5);
		RTCT("ok", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6821, 992))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.make_from_bitmap_with_alpha */
void F1476_15602 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_from_bitmap_with_alpha";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_POINTER loc3 = (EIF_POINTER) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc10 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,loc7);
	RTLR(2,tr1);
	RTLR(3,loc8);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,Current);
	RTLR(7,loc9);
	RTLR(8,loc6);
	RTLR(9,loc2);
	RTLR(10,loc1);
	RTLIU(11);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_POINTER, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_INT32, &loc10);
	
	RTEAA(l_feature_name, 1475, Current, 10, 1, 22187);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22187);
	RTCC(arg1, 1475, l_feature_name, 1, eif_new_type(1460, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11579, "exists", arg1))(arg1)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(4, 0x10000000, 1, 0); /* loc4 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12739, "width", arg1))(arg1)).it_i4);
	loc4 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(5, 0x10000000, 1, 0); /* loc5 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12740, "height", arg1))(arg1)).it_i4);
	loc5 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(7, 0xF80005A8, 0, 0); /* loc7 */
	tr1 = RTLN(eif_new_type(1448, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12616, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(8, 0xF800060A, 0, 0); /* loc8 */
	tr1 = RTLN(eif_new_type(1546, 0x01).id);
	ur1 = RTCCL(loc7);
	ur2 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11536, 1306))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14334, Dtype(tr1)))(tr1, ur1x, ur2x, ui4_1x);
	RTNHOOK(5,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(9, 0xF800060B, 0, 0); /* loc9 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14335, "header", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ui4_1 = (EIF_INTEGER_32) -loc5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14366, "set_height", loc9))(loc9, ui4_1x);
	RTHOOK(8);
	RTDBGAL(6, 0xF80000AB, 0, 0); /* loc6 */
	ur1 = RTCCL(arg1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = loc5;
	ur2 = RTCCL(loc8);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11536, 1306))(Current)).it_i4);
	ui4_3 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12525, "di_bits_pointer", loc7))(loc7, ur1x, ui4_1x, ui4_2x, ur2x, ui4_3x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14357, "bit_count", loc9))(loc9)).it_i4);
	switch (ti4_1) {
		case 1L:
			RTHOOK(10);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6915, 998))(Current)).it_i4);
			loc10 = (EIF_INTEGER_32) ti4_1;
			break;
		case 4L:
			RTHOOK(11);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6921, 998))(Current)).it_i4);
			loc10 = (EIF_INTEGER_32) ti4_1;
			break;
		case 8L:
			RTHOOK(12);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6924, 998))(Current)).it_i4);
			loc10 = (EIF_INTEGER_32) ti4_1;
			break;
		case 16L:
			RTHOOK(13);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14358, "compression", loc9))(loc9)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7470, 1021))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTHOOK(14);
				tb1 = '\0';
				tb2 = '\0';
				ui4_1 = ((EIF_INTEGER_32) 0L);
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14338, "rgb_quad_natural", loc8))(loc8, ui4_1x)).it_n4);
				if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 63488L))) {
					ui4_1 = ((EIF_INTEGER_32) 1L);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14338, "rgb_quad_natural", loc8))(loc8, ui4_1x)).it_n4);
					tb2 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 2016L));
				}
				if (tb2) {
					ui4_1 = ((EIF_INTEGER_32) 2L);
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14338, "rgb_quad_natural", loc8))(loc8, ui4_1x)).it_n4);
					tb1 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L));
				}
				if (tb1) {
					RTHOOK(15);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6914, 998))(Current)).it_i4);
					loc10 = (EIF_INTEGER_32) ti4_1;
				} else {
					if (RTAL & CK_CHECK) {
						RTHOOK(16);
						RTCT("expected_555_format", EX_CHECK);
						tb1 = '\0';
						tb2 = '\0';
						ui4_1 = ((EIF_INTEGER_32) 0L);
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14338, "rgb_quad_natural", loc8))(loc8, ui4_1x)).it_n4);
						if ((EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 31744L))) {
							ui4_1 = ((EIF_INTEGER_32) 1L);
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14338, "rgb_quad_natural", loc8))(loc8, ui4_1x)).it_n4);
							tb2 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 992L));
						}
						if (tb2) {
							ui4_1 = ((EIF_INTEGER_32) 2L);
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14338, "rgb_quad_natural", loc8))(loc8, ui4_1x)).it_n4);
							tb1 = (EIF_BOOLEAN)(tu4_1 == (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L));
						}
						if (tb1) {
							RTCK;
						} else {
							RTCF;
						}
					}
					RTHOOK(17);
					RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6913, 998))(Current)).it_i4);
					loc10 = (EIF_INTEGER_32) ti4_1;
				}
			} else {
				RTHOOK(18);
				RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6913, 998))(Current)).it_i4);
				loc10 = (EIF_INTEGER_32) ti4_1;
			}
			break;
		case 24L:
			RTHOOK(19);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6916, 998))(Current)).it_i4);
			loc10 = (EIF_INTEGER_32) ti4_1;
			break;
		case 32L:
			RTHOOK(20);
			RTDBGAL(10, 0x10000000, 1, 0); /* loc10 */
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6917, 998))(Current)).it_i4);
			loc10 = (EIF_INTEGER_32) ti4_1;
			break;
		default:
			if (RTAL & CK_CHECK) {
				RTHOOK(21);
				RTCT("False", EX_CHECK);
					RTCF;
			}
			break;
	}
	RTHOOK(22);
	ui4_1 = loc4;
	ui4_2 = loc5;
	ui4_3 = loc10;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12957, dtype))(Current, ui4_1x, ui4_2x, ui4_3x);
	RTHOOK(23);
	RTDBGAL(2, 0xF80003E3, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(995, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = loc4;
	ui4_4 = loc5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6873, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTNHOOK(23,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(24);
	RTDBGAL(1, 0xF80003E7, 0, 0); /* loc1 */
	ur1 = RTCCL(loc2);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6903, 997))(Current)).it_n4);
	uu4_1 = tu4_1;
	ui4_1 = loc10;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12965, dtype))(Current, ur1x, uu4_1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(25);
	RTDBGAL(3, 0x40000000, 1, 0); /* loc3 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6945, "scan_0", loc1))(loc1)).it_p);
	loc3 = (EIF_POINTER) tp1;
	RTHOOK(26);
	tp1 = *(EIF_POINTER *)(loc6 + RTVA(3282, "item", loc6));
	up1 = tp1;
	ti4_1 = *(EIF_INTEGER_32 *)(loc6 + RTVA(3283, "count", loc6));
	ui4_1 = ti4_1;
	memcpy((void *)loc3, (const void *) up1, (size_t) ui4_1);
	RTHOOK(27);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12966, dtype))(Current, ur1x);
	RTHOOK(28);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3246, "dispose", loc8))(loc8);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef arg1
}

/* {WEL_GDIP_BITMAP}.set_with_icon */
void F1476_15603 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_with_icon";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 1, 22188);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22188);
	RTCC(arg1, 1475, l_feature_name, 1, eif_new_type(1465, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_icon_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_icon_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12309, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12309, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12314, dtype))(Current);
	RTHOOK(5);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12959, dtype))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {WEL_GDIP_BITMAP}.load_image_from_path */
void F1476_15604 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "load_image_from_path";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_POINTER loc5 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,loc3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_POINTER, &loc5);
	
	RTEAA(l_feature_name, 1475, Current, 5, 1, 22189);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22189);
	RTCC(arg1, 1475, l_feature_name, 1, eif_new_type(185, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF80005C3, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1475, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12956, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12940, "load_image_from_file_original", loc1))(loc1, ur1x);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 12971, 0xF80003E1, 0); /* raw_format_recorded */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12939, "raw_format_orignal", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(12971, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	RTDBGAL(2, 0xF80003E7, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(999, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6932, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(4, 0xF80003E3, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(995, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12933, "width", loc1))(loc1)).it_i4);
	ui4_3 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12934, "height", loc1))(loc1)).it_i4);
	ui4_4 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6873, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTNHOOK(5,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(2, 0xF80003E7, 0, 0); /* loc2 */
	ur1 = RTCCL(loc4);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6902, 997))(Current)).it_n4);
	uu4_1 = tu4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6917, 998))(Current)).it_i4);
	ui4_1 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12965, "lock_bits", loc1))(loc1, ur1x, uu4_1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12314, dtype))(Current);
	RTHOOK(8);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12933, "width", loc1))(loc1)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12934, "height", loc1))(loc1)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12956, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(9);
	RTDBGAL(3, 0xF80003E7, 0, 0); /* loc3 */
	ur1 = RTCCL(loc4);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6903, 997))(Current)).it_n4);
	uu4_1 = tu4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6917, 998))(Current)).it_i4);
	ui4_1 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12965, dtype))(Current, ur1x, uu4_1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(5, 0x40000000, 1, 0); /* loc5 */
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6945, "scan_0", loc3))(loc3)).it_p);
	loc5 = (EIF_POINTER) tp1;
	RTHOOK(11);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6945, "scan_0", loc2))(loc2)).it_p);
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12933, "width", loc1))(loc1)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12934, "height", loc1))(loc1)).it_i4);
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ti4_2) * ((EIF_INTEGER_32) 4L));
	memcpy((void *)loc5, (const void *) up1, (size_t) ui4_1);
	RTHOOK(12);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12966, dtype))(Current, ur1x);
	RTHOOK(13);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12966, "unlock_bits", loc1))(loc1, ur1x);
	RTHOOK(14);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3246, "dispose", loc1))(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef arg1
}

/* {WEL_GDIP_BITMAP}.lock_bits */
EIF_TYPED_VALUE F1476_15605 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "lock_bits";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE up5x = {{0}, SK_POINTER};
#define up5 up5x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1475, Current, 1, 3, 22190);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22190);
	RTCC(arg1, 1475, l_feature_name, 1, eif_new_type(995, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_vaild", EX_PRE);
		tr1 = RTLN(eif_new_type(997, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		uu4_1 = arg2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6906, "is_valid", tr1))(tr1, uu4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("is_valid", EX_PRE);
		tr1 = RTLN(eif_new_type(998, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		ui4_1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6930, "is_valid", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12309, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAL(0, 0xF80003E7, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(999, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6932, Dtype(tr1)))(tr1);
	RTNHOOK(5,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12819, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Current + RTWA(12307, dtype));
	up2 = tp2;
	tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6883, "item", arg1))(arg1)).it_p);
	up3 = tp3;
	uu4_1 = arg2;
	ui4_1 = arg3;
	up4 = (EIF_INTEGER_32 *) &(loc1);
	tp4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6947, "item", Result))(Result)).it_p);
	up5 = tp4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12979, dtype))(Current, up1x, up2x, up3x, uu4_1x, ui4_1x, up4x, up5x);
	if (RTAL & CK_CHECK) {
		RTHOOK(7);
		RTCT("ok", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6821, 992))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef up5
#undef ui4_1
#undef uu4_1
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.unlock_bits */
void F1476_15606 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "unlock_bits";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1475, Current, 1, 1, 22191);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22191);
	RTCC(arg1, 1475, l_feature_name, 1, eif_new_type(999, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12309, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12819, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Current + RTWA(12307, dtype));
	up2 = tp2;
	tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6947, "item", arg1))(arg1)).it_p);
	up3 = tp3;
	up4 = (EIF_INTEGER_32 *) &(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12980, dtype))(Current, up1x, up2x, up3x, up4x);
	if (RTAL & CK_CHECK) {
		RTHOOK(4);
		RTCT("ok", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6821, 992))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef arg1
}

/* {WEL_GDIP_BITMAP}.set_pixel */
void F1476_15607 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_pixel";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1475, Current, 1, 3, 22192);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22192);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12309, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12819, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Current + RTWA(12307, dtype));
	up2 = tp2;
	uu4_1 = arg1;
	uu4_2 = arg2;
	uu4_3 = arg3;
	up3 = (EIF_INTEGER_32 *) &(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12978, dtype))(Current, up1x, up2x, uu4_1x, uu4_2x, uu4_3x, up3x);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("ok", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6821, 992))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.get_pixel */
EIF_TYPED_VALUE F1476_15608 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_pixel";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1475, Current, 1, 2, 22193);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22193);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12309, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12819, dtype));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Current + RTWA(12307, dtype));
	up2 = tp2;
	uu4_1 = arg1;
	uu4_2 = arg2;
	up3 = (EIF_NATURAL_32 *) &(Result);
	up4 = (EIF_INTEGER_32 *) &(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12977, dtype))(Current, up1x, up2x, uu4_1x, uu4_2x, up3x, up4x);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("ok", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6821, 992))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef uu4_1
#undef uu4_2
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.sub_gdip_bitmap */
EIF_TYPED_VALUE F1476_15609 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "sub_gdip_bitmap";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_TYPED_VALUE uu4_4x = {{0}, SK_UINT32};
#define uu4_4 uu4_4x.it_n4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1475, Current, 2, 4, 22194);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22194);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12309, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12819, dtype));
	up1 = tp1;
	uu4_1 = arg1;
	uu4_2 = arg2;
	uu4_3 = arg3;
	uu4_4 = arg4;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6917, 998))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp2 = *(EIF_POINTER *)(Current + RTWA(12307, dtype));
	up2 = tp2;
	up3 = (EIF_POINTER *) &(loc2);
	up4 = (EIF_INTEGER_32 *) &(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12981, dtype))(Current, up1x, uu4_1x, uu4_2x, uu4_3x, uu4_4x, ui4_1x, up2x, up3x, up4x);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("ok", EX_CHECK);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6821, 992))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(4);
	RTDBGAL(0, 0xF80005C3, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1475, 0x01).id);
	up1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12960, Dtype(tr1)))(tr1, up1x);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef up3
#undef up4
#undef ui4_1
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef uu4_4
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.new_bitmap */
EIF_TYPED_VALUE F1476_15610 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "new_bitmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1475, Current, 4, 0, 22195);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22195);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12309, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0xF800060B, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1547, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14353, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14367, "set_planes", loc1))(loc1, ui4_1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14368, "set_bit_count", loc1))(loc1, ui4_1x);
	RTHOOK(5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7467, 1021))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14369, "set_compression", loc1))(loc1, ui4_1x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14370, "set_size_image", loc1))(loc1, ui4_1x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14371, "set_x_pels_per_meter", loc1))(loc1, ui4_1x);
	RTHOOK(8);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14372, "set_y_pels_per_meter", loc1))(loc1, ui4_1x);
	RTHOOK(9);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14373, "set_clr_used", loc1))(loc1, ui4_1x);
	RTHOOK(10);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14374, "set_clr_important", loc1))(loc1, ui4_1x);
	RTHOOK(11);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12933, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14365, "set_width", loc1))(loc1, ui4_1x);
	RTHOOK(12);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12934, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14366, "set_height", loc1))(loc1, ui4_1x);
	RTHOOK(13);
	RTDBGAL(0, 0xF80005B4, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1460, 0x01).id);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12738, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(13,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3246, "dispose", loc1))(loc1);
	RTHOOK(15);
	RTDBGAL(2, 0x40000000, 1, 0); /* loc2 */
	tp1 = *(EIF_POINTER *)(Result + RTVA(12742, "ppv_bits", Result));
	loc2 = (EIF_POINTER) tp1;
	RTHOOK(16);
	RTDBGAL(3, 0xF80003E7, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(995, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12933, dtype))(Current)).it_i4);
	ui4_3 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12934, dtype))(Current)).it_i4);
	ui4_4 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6873, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTNHOOK(16,1);
	ur1 = RTCCL(tr1);
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6902, 997))(Current)).it_n4);
	uu4_1 = tu4_1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6918, 998))(Current)).it_i4);
	ui4_1 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12965, dtype))(Current, ur1x, uu4_1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6945, "scan_0", loc3))(loc3)).it_p);
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12933, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12934, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ti4_2) * ((EIF_INTEGER_32) 4L));
	memcpy((void *)loc2, (const void *) up1, (size_t) ui4_1);
	RTHOOK(18);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12966, dtype))(Current, ur1x);
	RTHOOK(19);
	RTDBGAL(4, 0xF80003DF, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(991, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(19,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(20);
	ur1 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6815, "mirror_image", loc4))(loc4, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
}

/* {WEL_GDIP_BITMAP}.raw_format */
EIF_TYPED_VALUE F1476_15611 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "raw_format";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 0, 22196);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1475, Current, 22196);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12309, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF80003E1, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12971, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {WEL_GDIP_BITMAP}.raw_format_recorded */
EIF_TYPED_VALUE F1476_15612 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(12971,Dtype(Current)));
	return r;
}


/* {WEL_GDIP_BITMAP}.c_gdip_create_bitmap_from_scan0 */
EIF_TYPED_VALUE F1476_15613 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "c_gdip_create_bitmap_from_scan0";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_p = * (EIF_INTEGER_32* *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_POINTER,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 5, 22198);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1475, Current, 22198);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_gdiplus_handle_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid", EX_PRE);
		tr1 = RTLN(eif_new_type(998, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(2,1);
		ui4_1 = arg4;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(6931, "is_valid_format", tr1))(tr1, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F1476_15613 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_INTEGER_32) arg4, (EIF_INTEGER_32*) arg5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef ui4_1
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.c_gdip_create_bitmap_from_graphics */
EIF_TYPED_VALUE F1476_15614 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "c_gdip_create_bitmap_from_graphics";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_p
#define arg5 arg5x.it_p
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_p = * (EIF_INTEGER_32* *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU(SK_POINTER,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 5, 22199);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1475, Current, 22199);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_gdiplus_handle_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F1476_15614 ((EIF_POINTER) arg1, (EIF_INTEGER_32) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER) arg4, (EIF_INTEGER_32*) arg5);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.c_gdip_create_bitmap_from_bitmap */
EIF_TYPED_VALUE F1476_15615 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_gdip_create_bitmap_from_bitmap";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_INTEGER_32* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 4, 22200);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1475, Current, 22200);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_gdiplus_handle_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F1476_15615 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32*) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.c_gdip_create_bitmap_from_dib_bitmap */
EIF_TYPED_VALUE F1476_15616 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_gdip_create_bitmap_from_dib_bitmap";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_INTEGER_32* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 4, 22201);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1475, Current, 22201);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_gdiplus_handle_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F1476_15616 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32*) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.c_gdip_create_bitmap_from_hicon */
EIF_TYPED_VALUE F1476_15617 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "c_gdip_create_bitmap_from_hicon";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
	EIF_POINTER tp1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_INTEGER_32* *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 3, 22202);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1475, Current, 22202);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_gdiplus_handle_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	Result = inline_F1476_15617 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32*) arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.c_gdip_bitmap_get_pixel */
void F1476_15618 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "c_gdip_bitmap_get_pixel";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_p
#define arg6 arg6x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_p = * (EIF_INTEGER_32* *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_p = * (EIF_NATURAL_32* *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU(SK_POINTER,&arg5);
	RTLU(SK_POINTER,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 6, 22203);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1475, Current, 22203);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_gdiplus_handle_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_bitmap_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg2 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F1476_15618 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_NATURAL_32) arg3, (EIF_NATURAL_32) arg4, (EIF_NATURAL_32*) arg5, (EIF_INTEGER_32*) arg6);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.c_gdip_bitmap_set_pixel */
void F1476_15619 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "c_gdip_bitmap_set_pixel";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_n4
#define arg6 arg6x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_p = * (EIF_INTEGER_32* *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_n4 = * (EIF_NATURAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU(SK_UINT32,&arg5);
	RTLU(SK_POINTER,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 6, 22204);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1475, Current, 22204);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_gdiplus_handle_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_bitmap_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg2 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F1476_15619 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_NATURAL_32) arg3, (EIF_NATURAL_32) arg4, (EIF_NATURAL_32) arg5, (EIF_INTEGER_32*) arg6);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.c_gdip_bitmap_lock_bits */
void F1476_15620 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "c_gdip_bitmap_lock_bits";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_p
#define arg7 arg7x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_p = * (EIF_POINTER *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_p = * (EIF_INTEGER_32* *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_POINTER,&arg6);
	RTLU(SK_POINTER,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 7, 22177);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1475, Current, 22177);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_gdiplus_handle_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_bitmap_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg2 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F1476_15620 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_NATURAL_32) arg4, (EIF_INTEGER_32) arg5, (EIF_INTEGER_32*) arg6, (EIF_POINTER) arg7);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.c_gdip_bitmap_unlock_bits */
void F1476_15621 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "c_gdip_bitmap_unlock_bits";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_INTEGER_32* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 4, 22178);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1475, Current, 22178);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_gdiplus_handle_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_bitmap_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg2 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F1476_15621 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_POINTER) arg3, (EIF_INTEGER_32*) arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_GDIP_BITMAP}.c_gdip_clone_bitmap_area_i */
void F1476_15622 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x, EIF_TYPED_VALUE arg9x)
{
	GTCX
	char *l_feature_name = "c_gdip_clone_bitmap_area_i";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_n4
#define arg4 arg4x.it_n4
#define arg5 arg5x.it_n4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_p
#define arg8 arg8x.it_p
#define arg9 arg9x.it_p
	EIF_POINTER tp1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg9x.type & SK_HEAD) == SK_REF) arg9x.it_p = * (EIF_INTEGER_32* *) arg9x.it_r;
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_p = * (EIF_POINTER* *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_p = * (EIF_POINTER *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_n4 = * (EIF_NATURAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_n4 = * (EIF_NATURAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU(SK_UINT32,&arg4);
	RTLU(SK_UINT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_POINTER,&arg7);
	RTLU(SK_POINTER,&arg8);
	RTLU(SK_POINTER,&arg9);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1475, Current, 0, 9, 22179);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 1);
	RTDBGEAA(1475, Current, 22179);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_gdiplus_handle_not_null", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg1 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	inline_F1476_15622 ((EIF_POINTER) arg1, (EIF_NATURAL_32) arg2, (EIF_NATURAL_32) arg3, (EIF_NATURAL_32) arg4, (EIF_NATURAL_32) arg5, (EIF_INTEGER_32) arg6, (EIF_POINTER) arg7, (EIF_POINTER*) arg8, (EIF_INTEGER_32*) arg9);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(11);
	RTEE;
#undef arg9
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1476 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
