/* Clean-room #define symbol bridges and prototypes for proven NitroSDK 4.2,
 * MSL_C runtime, and GameSpy/DWC library functions in Phantasy Star Zero (C24E).
 *
 * Every entry here is backed by concrete disassembly, ROM string, or verified
 * relocation evidence in config/symbol_map.json.
 */
#ifndef NITRO_SDK_H
#define NITRO_SDK_H

#include <psz_types.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ---- MSL_C / CRT runtime ---- */
#define crt_snprintf          FUN_020038ec
#define crt_strncpy           FUN_02003d54
#define crt_memcmp            FUN_02003f38
#define crt_clear             FUN_0200c938
extern int FUN_020038ec(char *dst, u32 size, const char *fmt, ...);
extern char *FUN_02003d54(char *dst, const char *src, u32 n);
extern int FUN_02003f38(const void *a, const void *b, u32 n);
extern u8 *FUN_0200c938(u8 *dst, int n);

/* ---- NitroSystem: NNS_FndArchive ---- */
#define NNS_FndMountArchive          FUN_02012600
#define NNS_FndUnmountArchive        FUN_02012748
#define NNS_FndGetArchiveFileByName  FUN_02012770
#define NNS_FndGetArchiveFileByIndex FUN_020127c0

extern int FUN_02012600(void *archive, const char *name, void *binary);
extern int FUN_02012748(void *archive);
extern void *FUN_02012770(const char *path);
extern void *FUN_020127c0(void *archive, u32 index);

/* ---- NitroSDK 4.2: CP (Coprocessor / Divider-Sqrt Context) ---- */
#define CP_SaveContext        FUN_02056f40
#define CP_RestoreContext     FUN_02056f80

/* ---- NitroSDK 4.2: CTRDG ---- */
#define CTRDGi_InitModuleInfo FUN_02057388

/* ---- NitroSDK 4.2: FS (File System & Overlays) ---- */
#define MI_PROCESSOR_ARM9     0
#define MI_PROCESSOR_ARM7     1

typedef struct FSFile {
    u32 _opaque_00[3];
    u32 stat;                 /* +0x0c: bit 0 = FS_FILE_STATUS_BUSY */
    u32 _opaque_10[14];
} FSFile;                     /* 0x48 (72) bytes */

typedef struct FSOverlayInfo {
    u32 _opaque[11];
} FSOverlayInfo;              /* 0x2c (44) bytes */

#define FS_FILE_STATUS_BUSY   1u

#define FS_InitFile           FUN_02059cd4
#define FS_OpenFileFast       FUN_02059f44
#define FS_OpenFile           FUN_02059fb4
#define FS_CloseFile          FUN_02059ffc
#define FS_ReadFileAsync      FUN_0205a140
#define FS_ReadFile           FUN_0205a150
#define FS_SeekFile           FUN_0205a160
#define FS_LoadOverlayInfo    FUN_0205a624
#define FS_LoadOverlayImageAsync FUN_0205a720
#define FS_StartOverlay       FUN_0205a840
#define FS_UnloadOverlayImage FUN_0205aa24
#define FS_UnloadOverlay      FUN_0205aa34

#define FS_SEEK_SET           0

extern void FUN_02059cd4(FSFile *file);
extern int FUN_02059fb4(FSFile *file, const char *path);
extern int FUN_02059ffc(FSFile *file);
extern int FUN_0205a150(FSFile *file, void *dst, s32 len);
extern int FUN_0205a160(FSFile *file, s32 offset, int origin);
extern int FUN_0205a624(FSOverlayInfo *ov, u32 target, u32 id);
extern int FUN_0205a720(FSOverlayInfo *ov, FSFile *file);
extern void FUN_0205a840(FSOverlayInfo *ov);
extern int FUN_0205aa24(FSOverlayInfo *ov);
extern int FUN_0205aa34(u32 target, u32 id);

/* ---- NitroSDK 4.2: MATH SHA-1 ---- */
typedef struct MATHSHA1Context {
    u32 _opaque[26];
} MATHSHA1Context;

#define MATH_SHA1Init         FUN_02057d30
#define MATH_SHA1Update       FUN_02057d80
#define MATH_SHA1GetHash      FUN_02057ed4
#define OS_GetLowEntropyData  FUN_02068658

extern void FUN_02057d30(MATHSHA1Context *ctx);
extern void FUN_02057d80(MATHSHA1Context *ctx, const void *input, u32 len);
extern void FUN_02057ed4(MATHSHA1Context *ctx, void *digest);
extern void FUN_02068658(u32 buffer[8]);

/* ---- NitroSDK 4.2: MTX (3x3, 4x3, 4x4 Fixed-Point Matrices) ---- */
#define MTX_Identity33_       FUN_0205aa80
#define MTX_Copy33_           FUN_0205aaa4
#define MTX_ScaleApply33      FUN_0205aad0
#define MTX_RotX33_           FUN_0205ab90
#define MTX_Inverse33         FUN_0205abe0
#define MTX_Concat33          FUN_0205aed0
#define MTX_MultVec33         FUN_0205b0f0
#define MTX_Identity43_       FUN_0205b16c
#define MTX_TransApply43      FUN_0205b1c8
#define MTX_ScaleApply43      FUN_0205b274
#define MTX_Inverse43         FUN_0205b300
#define MTX_Concat43          FUN_0205b68c
#define MTX_MultVec43         FUN_0205b960
#define MTX_LookAt            FUN_0205ba00
#define MTX_Identity44_       FUN_0205bb08
#define MTX_Concat44          FUN_0205bb68
#define MTX_PerspectiveW      FUN_0205c1cc
#define MTX_OrthoW            FUN_0205c318

extern void FUN_0205aad0(const MtxFx33 *pSrc, MtxFx33 *pDst, fx32 x, fx32 y, fx32 z);
extern void FUN_0205ab90(MtxFx33 *pDst, fx32 sinVal, fx32 cosVal);
extern s32 FUN_0205abe0(const MtxFx33 *pSrc, MtxFx33 *pDst);
extern void FUN_0205aed0(const MtxFx33 *a, const MtxFx33 *b, MtxFx33 *ab);
extern void FUN_0205b0f0(const VecFx32 *vec, const MtxFx33 *m, VecFx32 *dst);
extern void FUN_0205b1c8(const MtxFx43 *pSrc, MtxFx43 *pDst, fx32 x, fx32 y, fx32 z);
extern void FUN_0205b274(const MtxFx43 *pSrc, MtxFx43 *pDst, fx32 x, fx32 y, fx32 z);
extern void FUN_0205b68c(const MtxFx43 *a, const MtxFx43 *b, MtxFx43 *ab);
extern void FUN_0205b960(const VecFx32 *vec, const MtxFx43 *m, VecFx32 *dst);
extern void FUN_0205ba00(const VecFx32 *camPos, const VecFx32 *camUp, const VecFx32 *target, MtxFx43 *mtx);
extern void FUN_0205bb68(const MtxFx44 *a, const MtxFx44 *b, MtxFx44 *ab);
extern void FUN_0205c1cc(fx32 fovySin, fx32 fovyCos, fx32 aspect, fx32 n, fx32 f, fx32 scaleW, MtxFx44 *mtx);
extern void FUN_0205c318(fx32 t, fx32 b, fx32 l, fx32 r, fx32 n, fx32 f, fx32 scaleW, MtxFx44 *mtx);

/* ---- NitroSDK 4.2: FX / VEC (Fixed-point math & 3D vectors) ---- */
#define FX_Div                FUN_0205c520
#define FX_Inv                FUN_0205c530
#define FX_Sqrt               FUN_0205c540
#define FX_InvSqrt            FUN_0205c574
#define FX_GetDivResultFx64c  FUN_0205c5dc
#define FX_GetDivResult       FUN_0205c600
#define FX_InvAsync           FUN_0205c638
#define FX_SqrtAsync          FUN_0205c668
#define FX_GetSqrtResult      FUN_0205c6ac
#define FX_DivAsync           FUN_0205c6d8
#define FX_DivS32             FUN_0205c700
#define FX_ModS32             FUN_0205c73c
#define VEC_Add               FUN_0205c778
#define VEC_DotProduct        FUN_0205c7ac
#define VEC_CrossProduct      FUN_0205c7e8
#define VEC_Mag               FUN_0205c86c
#define VEC_Normalize         FUN_0205c8cc

extern fx32 FUN_0205c520(fx32 numer, fx32 denom);
extern fx32 FUN_0205c530(fx32 denom);
extern fx32 FUN_0205c540(fx32 x);
extern fx32 FUN_0205c574(fx32 x);
extern fx64c FUN_0205c5dc(void);
extern fx32 FUN_0205c600(void);
extern void FUN_0205c638(fx32 denom);
extern void FUN_0205c668(fx32 x);
extern fx32 FUN_0205c6ac(void);
extern void FUN_0205c6d8(fx32 numer, fx32 denom);
extern s32 FUN_0205c700(s32 numer, s32 denom);
extern s32 FUN_0205c73c(s32 numer, s32 denom);
extern void FUN_0205c778(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern fx32 FUN_0205c7ac(const VecFx32 *a, const VecFx32 *b);
extern void FUN_0205c7e8(const VecFx32 *a, const VecFx32 *b, VecFx32 *axb);
extern fx32 FUN_0205c86c(const VecFx32 *v);
extern void FUN_0205c8cc(const VecFx32 *pSrc, VecFx32 *pDst);

/* ---- NitroSDK 4.2: MB ---- */
#define MB_ReadSegment        FUN_0206132c

/* ---- NitroSDK 4.2: MI (Memory Interface) ---- */
#define MI_CpuFill16          FUN_020654b4
#define MI_CpuCopy16          FUN_020654dc
#define MI_CpuFill32          FUN_02065510
#define MI_CpuCopy32          FUN_0206552c
#define MI_CpuSend32          FUN_02065554
#define MI_CpuFillFast        FUN_0206557c
#define MI_CpuCopyFast        FUN_020655d8
#define MI_Copy36B            FUN_0206564c
#define MI_Copy48B            FUN_02065668
#define MI_Copy64B            FUN_0206568c
#define MI_CpuFill8           FUN_020656b8
#define MI_CpuCopy8           FUN_02065774
#define MI_Zero36B            FUN_020658f4
#define MI_SwapWord           FUN_02065904
#define MI_UncompressLZ8      FUN_0206590c
#define DC_FlushRange         FUN_0206740c

extern void FUN_020654b4(void *dest, u16 data, u32 size);
extern void FUN_020654dc(const void *src, void *dest, u32 size);
extern void FUN_02065510(void *dest, u32 data, u32 size);
extern void FUN_0206552c(const void *src, void *dest, u32 size);
extern void FUN_0206557c(void *dest, u32 data, u32 size);
extern void FUN_020655d8(const void *src, void *dest, u32 size);
extern void FUN_0206564c(const void *src, void *dest);
extern void FUN_02065668(const void *src, void *dest);
extern void FUN_0206568c(const void *src, void *dest);
extern void FUN_020656b8(void *dest, u8 data, u32 size);
extern void FUN_02065774(const void *src, void *dest, u32 size);
extern void FUN_020658f4(void *dest);
extern void FUN_0206590c(const void *src, void *dest);
extern void FUN_0206740c(const void *start_addr, u32 nbytes);

/* ---- NitroSDK 4.2: OS / MATH ---- */
#define OS_SNPrintf           FUN_020662b4
#define OS_DisableInterrupts  FUN_020683d4
#define OS_RestoreInterrupts  FUN_020683e8
#define OS_SpinWait           FUN_02068444
#define MATH_CountLeadingZeros FUN_02068594

typedef u32 OSIntrMode;
extern int FUN_020662b4(char *dst, u32 len, const char *fmt, ...);
extern OSIntrMode FUN_020683d4(void);
extern OSIntrMode FUN_020683e8(OSIntrMode enable);
extern void FUN_02068444(u32 cycles);
extern u32 FUN_02068594(u32 x);

#ifdef __cplusplus
}
#endif

#endif /* NITRO_SDK_H */
