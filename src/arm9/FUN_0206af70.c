// flags: -O4,p -noThumb
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef short s16;

typedef struct {
    s16 x0;
    s16 y0;
    s16 xDotSize;
    s16 yDotSize;
} TPCalibrateParam;

extern u32 FUN_020683d4(void);
extern void FUN_020683e8(u32);

static inline void CP_SetDiv32_32(u32 numer, u32 denom) {
    *(volatile u16 *)0x04000280 = 0;
    *(volatile u32 *)0x04000290 = numer;
    *(u64 *)0x04000298 = denom;
}

static inline void CP_WaitDiv(void) {
    while (*(volatile u16 *)0x04000280 & 0x8000) {
    }
}

static inline s32 CP_GetDivResult32(void) {
    CP_WaitDiv();
    return *(volatile s32 *)0x040002a0;
}

u32 FUN_0206af70(TPCalibrateParam *calibrate, u16 raw_x1, u16 raw_y1, u16 dx1, u16 dy1, u16 raw_x2, u16 raw_y2, u16 dx2, u16 dy2) {
    s32 ry_width, dy_width, tmp32;
    u32 enabled;

    if (raw_x1 >= 4096 || raw_y1 >= 4096 || raw_x2 >= 4096 || raw_y2 >= 4096) {
        return 1;
    }
    if (dx1 >= 256 || dx2 >= 256 || dy1 >= 192 || dy2 >= 192) {
        return 1;
    }
    if (dx1 == dx2 || dy1 == dy2 || raw_x1 == raw_x2 || raw_y1 == raw_y2) {
        return 1;
    }

    enabled = FUN_020683d4();
    CP_SetDiv32_32((u32)(raw_x1 - raw_x2) << 8, (u32)(dx1 - dx2));
    ry_width = raw_y1 - raw_y2;
    dy_width = dy1 - dy2;
    tmp32 = CP_GetDivResult32();
    CP_SetDiv32_32((u32)ry_width << 8, (u32)dy_width);

    if (tmp32 >= 0x8000 || tmp32 < -0x8000) {
        FUN_020683e8(enabled);
        return 1;
    }
    calibrate->xDotSize = (s16)tmp32;
    tmp32 = (s32)(s16)((((s32)(raw_x1 + raw_x2) << 8) - (s32)calibrate->xDotSize * (dx1 + dx2)) >> 7);
    if (tmp32 >= 0x8000 || tmp32 < -0x8000) {
        FUN_020683e8(enabled);
        return 1;
    }
    calibrate->x0 = (s16)tmp32;

    tmp32 = CP_GetDivResult32();
    FUN_020683e8(enabled);
    if (tmp32 >= 0x8000 || tmp32 < -0x8000) {
        return 1;
    }
    calibrate->yDotSize = (s16)tmp32;
    tmp32 = (s32)(s16)((((s32)(raw_y1 + raw_y2) << 8) - (s32)calibrate->yDotSize * (dy1 + dy2)) >> 7);
    if (tmp32 >= 0x8000 || tmp32 < -0x8000) {
        return 1;
    }
    calibrate->y0 = (s16)tmp32;
    return 0;
}
