/* Clean-room shared base types, DS fixed-point geometry structs, and
 * ARM9 hardware MMIO register definitions for Phantasy Star Zero (C24E).
 * Safe to include from both matching (src/) and readable (src-readable/) C/C++.
 */
#ifndef PSZ_TYPES_H
#define PSZ_TYPES_H

#include <nds/ndstypes.h>

typedef volatile u64 vu64;
typedef volatile s64 vs64;

typedef s32 BOOL;
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
typedef s64 fx64c;

#define FX32_SHIFT        12
#define FX32_ONE          0x1000
#define FX32_HALF         0x0800
#define FX_DIV_ROUND_BIAS (1u << 19)
#define FX_DIV_ROUND_32   (1LL << 31)
#define FX_INV_NUMER      ((u64)FX32_ONE << 32)

typedef struct VecFx32 {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;

typedef struct VecFx16 {
    fx16 x;
    fx16 y;
    fx16 z;
} VecFx16;

typedef struct MtxFx33 {
    fx32 m[3][3];
} MtxFx33;

typedef struct MtxFx43 {
    fx32 m[4][3];
} MtxFx43;

typedef struct MtxFx44 {
    fx32 m[4][4];
} MtxFx44;

/* ARM9 hardware MMIO registers (GBATEK / public Nintendo DS memory map) */
#define REG_DISPCNT      (*(vu32 *)0x04000000)
#define REG_DISPSTAT     (*(vu16 *)0x04000004)
#define REG_VCOUNT       (*(vu16 *)0x04000006)
#define REG_DISP3DCNT    (*(vu16 *)0x04000060)
#define REG_AUXSPICNT    (*(vu16 *)0x040001A0)
#define REG_ROMCTRL      (*(vu32 *)0x040001A4)
#define REG_EXMEMCNT     (*(vu16 *)0x04000204)
#define REG_IME          (*(vu32 *)0x04000208)
#define REG_IE           (*(vu32 *)0x04000210)
#define REG_IF           (*(vu32 *)0x04000214)

/* Hardware divider & square-root accelerators (CP_*) */
#define REG_DIVCNT        (*(vu16 *)0x04000280)
#define REG_DIV_NUMER     (*(vu64 *)0x04000290)
#define REG_DIV_NUMER_NV  (*(u64 *)0x04000290)
#define REG_DIV_NUMER_L   (*(vu32 *)0x04000290)
#define REG_DIV_NUMER_H   (*(vu32 *)0x04000294)
#define REG_DIV_DENOM     (*(vs64 *)0x04000298)
#define REG_DIV_DENOM_U64 (*(vu64 *)0x04000298)
#define REG_DIV_DENOM_L   (*(vu32 *)0x04000298)
#define REG_DIV_DENOM_H   (*(vu32 *)0x0400029C)
#define REG_DIV_RESULT    (*(vs64 *)0x040002A0)
#define REG_DIV_RESULT_NV (*(s64 *)0x040002A0)
#define REG_DIV_RESULT_U64 (*(vu64 *)0x040002A0)
#define REG_DIV_RESULT_32 (*(vu32 *)0x040002A0)
#define REG_DIVREM_RESULT (*(vs64 *)0x040002A8)
#define REG_DIVREM_RESULT_32 (*(vu32 *)0x040002A8)
#define REG_SQRTCNT       (*(vu16 *)0x040002B0)
#define REG_SQRT_RESULT   (*(vs32 *)0x040002B4)
#define REG_SQRT_RESULT_U32 (*(vu32 *)0x040002B4)
#define REG_SQRT_PARAM    (*(vu64 *)0x040002B8)
#define REG_SQRT_PARAM_S64 (*(vs64 *)0x040002B8)
#define REG_SQRT_PARAM_NV (*(u64 *)0x040002B8)
#define REG_SQRT_PARAM_L  (*(vu32 *)0x040002B8)
#define REG_SQRT_PARAM_H  (*(vu32 *)0x040002BC)

typedef struct CPDivRegs {
    vu16 cnt;
    u16 _pad[7];
    vu32 numer_l;
    vu32 numer_h;
    vu64 denom;
} CPDivRegs;

typedef struct CPSqrtRegs {
    vu16 cnt;
    u16 _pad;
    vu32 result;
    vu32 param_l;
    vu32 param_h;
} CPSqrtRegs;

#define CP_DIV_REGS       ((CPDivRegs *)0x04000280)
#define CP_SQRT_REGS      ((CPSqrtRegs *)0x040002B0)

#define DIVCNT_MODE_32_32 0
#define DIVCNT_MODE_64_32 1
#define DIVCNT_MODE_64_64 2
#define DIVCNT_BUSY_BIT   0x8000
#define SQRTCNT_MODE_64   1
#define SQRTCNT_BUSY_BIT  0x8000

static inline void CP_WaitDiv(void)
{
    while (REG_DIVCNT & DIVCNT_BUSY_BIT) {
    }
}

static inline void CP_WaitDivRegs(CPDivRegs *regs)
{
    while (regs->cnt & DIVCNT_BUSY_BIT) {
    }
}

static inline void CP_WaitSqrt(void)
{
    while (REG_SQRTCNT & SQRTCNT_BUSY_BIT) {
    }
}

#define REG_DB_DISPCNT   (*(vu32 *)0x04001000)

#endif /* PSZ_TYPES_H */
