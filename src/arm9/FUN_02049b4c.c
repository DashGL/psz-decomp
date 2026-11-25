// flags: -O4,p
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef short s16;

typedef struct { u32 w[12]; } MtxFx43;
typedef struct { u32 w[9]; } MtxFx33;
typedef struct { u32 x, y, z; } VecFx32;

extern void *DAT_02108c84;
extern void FUN_02034478(void *, int);
extern void FUN_0205e6b0(void);
extern void FUN_0205b16c(MtxFx43 *);
extern void FUN_0205aa80(MtxFx33 *);
extern void FUN_0204a8fc(VecFx32 *, MtxFx43 *, MtxFx33 *, VecFx32 *);
extern void FUN_0205b2c8(MtxFx43 *, int, int);
extern void FUN_0205b68c(MtxFx43 *, MtxFx43 *, MtxFx43 *);
extern void FUN_0205b1c8(MtxFx43 *, MtxFx43 *, int, int, int);
extern void FUN_02049ef0(int, int, int);
extern int FUN_0204260c(void *, u32, MtxFx43 *, MtxFx33 *);
extern u32 FUN_0205c9e4(u32, u32);
extern char *FUN_0204daa8(u32);

#define W(n) (*(u32 *)(s + (n)))
#define SI(n) (*(s32 *)(s + (n)))
#define H(n) (*(u16 *)(s + (n)))
#define SH(n) (*(s16 *)(s + (n)))
#define REG(a) (*(volatile u32 *)(a))

static inline void G3_Translate(u32 x, u32 y, u32 z) {
    REG(0x04000470) = x;
    REG(0x04000470) = y;
    REG(0x04000470) = z;
}

static inline void G3_Scale(u32 x, u32 y, u32 z) {
    REG(0x0400046c) = x;
    REG(0x0400046c) = y;
    REG(0x0400046c) = z;
}

static inline void G3_TexImageParam(u32 addr) {
    REG(0x040004a8) = (addr & 0x1fffffffu) | 0x74900000u;
}

static inline void G3_MaterialColorDiffAmb(u16 diff, u16 amb) {
    REG(0x040004c0) = diff | ((u32)amb << 16) | 0x8000u;
}

static inline void G3_Vtx(s16 x, s16 y, s16 z) {
    FUN_02049ef0(x, y, z);
}

void FUN_02049b4c(char *s) {
    MtxFx43 a;
    MtxFx33 m;
    VecFx32 v;
    MtxFx43 rotation;
    MtxFx43 base;
    MtxFx43 point;
    MtxFx43 b;
    MtxFx33 n;
    VecFx32 offset;
    VecFx32 out;
    int origin, scale, length, width, fade;
    char *obj, *part;

    if (DAT_02108c84) {
        FUN_02034478(DAT_02108c84, 1);
    }
    FUN_0205e6b0();
    REG(0x04000444) = 0;

    if (SI(152) != -1) {
        obj = FUN_0204daa8(W(232));
        if (obj) {
            part = *(char **)(obj + 140);
            if (part) {
                FUN_0205b16c(&a);
                FUN_0205aa80(&m);
                FUN_0204260c(part, W(152), &a, &m);
                FUN_0204a8fc(&v, &a, &m, (VecFx32 *)(s + 92));
                G3_Translate(v.x, v.y, v.z);
                REG(0x04000468) = m.w[0];
                REG(0x04000468) = m.w[1];
                REG(0x04000468) = m.w[2];
                REG(0x04000468) = m.w[3];
                REG(0x04000468) = m.w[4];
                REG(0x04000468) = m.w[5];
                REG(0x04000468) = m.w[6];
                REG(0x04000468) = m.w[7];
                REG(0x04000468) = m.w[8];
            }
        }
    } else {
        G3_Translate(W(92), W(96), W(100));
    }

    {
        u32 sc = (u32)(int)SH(278) << 12;
        G3_Scale(sc, sc, sc);
    }
    REG(0x04000440) = 3;
    REG(0x04000454) = 0;
    REG(0x04000440) = 2;
    G3_MaterialColorDiffAmb(H(300), H(300));
    REG(0x040004c4) = H(300);
    G3_TexImageParam((u16)W(264));
    REG(0x040004ac) = ((u32)(u16)W(268)) >> 1;
    REG(0x040004a4) = 0x0a1f80c1;
    *(volatile u16 *)0x04000060 = (*(volatile u16 *)0x04000060 & ~0x3000) | 8;
    REG(0x04000500) = 3;

    scale = SH(278);
    width = (s16)(4096 / (scale << 4));
    fade = 0;
    origin = (s16)W(288);
    length = (s16)((origin * SI(292)) / 15);
    if (SI(148) > ((SI(296) + 15) << 12)) {
        fade = (s16)(((15 - (SI(72) - SI(148)) / 4096) * origin) / 15);
    }
    W(280) = (u32)(width * scale);
    W(284) = (u32)((length - fade) * SH(278));

    FUN_0205b16c(&rotation);
    FUN_0205b2c8(&rotation, SH(274), SH(276));
    FUN_0205b16c(&base);
    FUN_0205b68c(&base, &rotation, &base);
    if (SI(152) != -1) {
        FUN_0205b16c(&base);
    }

    REG(0x04000488) = 0;
    FUN_0205b1c8(&base, &point, -width, 0, fade);
    G3_Vtx((s16)point.w[9], (s16)point.w[10], (s16)point.w[11]);
    W(304) = point.w[9];
    W(308) = point.w[11];

    REG(0x04000488) = 0x01000000;
    FUN_0205b1c8(&base, &point, width, 0, fade);
    G3_Vtx((s16)point.w[9], (s16)point.w[10], (s16)point.w[11]);

    REG(0x04000488) = 0x00000100;
    FUN_0205b1c8(&base, &point, -width, 0, length);
    G3_Vtx((s16)point.w[9], (s16)point.w[10], (s16)point.w[11]);

    REG(0x04000488) = 0x01000100;
    FUN_0205b1c8(&base, &point, width, 0, length);
    G3_Vtx((s16)point.w[9], (s16)point.w[10], (s16)point.w[11]);

    SI(304) = (SI(304) + ((s32)point.w[9] - SI(304)) / 2) * SH(278);
    SI(308) = (SI(308) + ((s32)point.w[11] - SI(308)) / 2) * SH(278);

    if (SI(152) != -1) {
        obj = FUN_0204daa8(W(232));
        if (obj) {
            part = *(char **)(obj + 140);
            if (part) {
                FUN_0205b16c(&b);
                FUN_0205aa80(&n);
                FUN_0204260c(part, W(152), &b, &n);
                {
                    u32 tmp = W(288);
                    offset.x = 0;
                    offset.y = 0;
                    offset.z = tmp;
                }
                FUN_0204a8fc(&out, &b, &n, &offset);
                W(304) = out.x - W(92);
                W(308) = out.z - W(100);
                H(272) = (u16)FUN_0205c9e4(out.x - b.w[9], out.z - b.w[11]);
                W(284) = W(288) + ((u32)(int)SH(278) << 12);
            }
        }
    }

    REG(0x04000504) = 0;
    REG(0x04000448) = 1;
}
