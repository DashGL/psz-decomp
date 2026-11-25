// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef short s16;

extern const u16 UNK_020ebe34[4][4];
extern const u16 UNK_020ebe1c[4][4];
extern volatile int UNK_021056f8[];
extern int UNK_020f66f4;
extern void FUN_02014b98(const u32 *, const void *, u32, u32, u32 *);

static inline int get_w_val(u32 s) {
    return UNK_020ebe34[(int)(s & 0xc000) >> 14][(s & 0xc0000000) >> 30];
}

static inline int get_h_val(u32 s) {
    return UNK_020ebe1c[(int)(s & 0xc000) >> 14][(s & 0xc0000000) >> 30];
}

static inline void G3_Translate(int x, int y, int z) {
    *(volatile int *)0x04000470 = x;
    *(volatile int *)0x04000470 = y;
    *(volatile int *)0x04000470 = z;
}

static inline void G3_Scale(int x, int y, int z) {
    *(volatile int *)0x0400046c = x;
    *(volatile int *)0x0400046c = y;
    *(volatile int *)0x0400046c = z;
}

static inline void G3_TexCoord(int s, int t) {
    *(volatile u32 *)0x04000488 = ((u32)(u16)((s16)(s >> 8))) | (((u32)(u16)((s16)(t >> 8))) << 16);
}

static inline int get_z(int z) {
    if (UNK_021056f8[2] != 0) {
        return (z << 12) + UNK_021056f8[1];
    } else {
        return z << 12;
    }
}

void FUN_02014e44(int x, int y, int z, const u32 *oam, const void *texture, u32 textureBase, u32 paletteBase) {
    u32 uv[6];
    u32 attr, mode;

    FUN_02014b98(oam, texture, textureBase, paletteBase, uv);

    attr = oam[0];
    mode = attr & 0x300;
    if (mode != 0x100 && mode != 0x300) {
        mode |= attr & 0x30000000;
    }
    if (mode == 0x300) {
        u32 shapeSize = attr & 0xc000c000;
        int hw = get_w_val(shapeSize) >> 1;
        int hh = get_h_val(shapeSize) >> 1;
        G3_Translate((x + hw) << 12, (y + hh) << 12, get_z(z));
    } else {
        G3_Translate(x << 12, y << 12, get_z(z));
    }

    G3_Scale(uv[4] << 12, uv[5] << 12, 0x1000);
    *(volatile u32 *)0x04000500 = 1;

    G3_TexCoord(uv[0], uv[3]);
    *(volatile u32 *)0x04000490 = 0x10000;

    G3_TexCoord(uv[2], uv[3]);
    *(volatile u32 *)0x04000490 = 0x10040;

    G3_TexCoord(uv[2], uv[1]);
    *(volatile u32 *)0x04000490 = 0x40;

    G3_TexCoord(uv[0], uv[1]);
    *(volatile u32 *)0x04000490 = 0;

    *(volatile u32 *)0x04000504 = 0;

    if (UNK_021056f8[2] != 0) {
        UNK_021056f8[1] += UNK_020f66f4;
    }
}
