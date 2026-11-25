// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef short s16;
typedef unsigned char u8;

typedef union {
    struct {
        u32 y : 8;
        u32 rsMode : 2;
        u32 objMode : 2;
        u32 mosaic : 1;
        u32 colorMode : 1;
        u32 shape : 2;
        u32 x : 9;
        u32 rsParam : 3;
        u32 flipH : 1;
        u32 flipV : 1;
        u32 size : 2;
    };
    u32 attr01;
} GXOamAttr;

typedef struct {
    u32 f00;
    u32 f04;
    u8 *f08;
    u32 f0c;
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1c;
    u32 f20;
    u32 f24;
    u32 f28[6];
    u8 f40;
} Renderer;

extern Renderer *DAT_02105718;
extern const u16 DAT_020ebe34[4][4];
extern const u16 DAT_020ebe1c[4][4];
extern void FUN_0205e550(void *);
extern void FUN_02014e44(int, int, int, GXOamAttr *, void *, u32, u32);
extern int FUN_020168cc(Renderer *);
extern int FUN_020168e0(Renderer *);

static inline s16 GetOamX(const GXOamAttr *pOam) {
    s16 x = (s16)pOam->x;
    if (x > 255) {
        x |= 0xff00;
    }
    return x;
}

static inline s16 GetOamY(const GXOamAttr *pOam) {
    s16 y = (s16)pOam->y;
    if (y > 127) {
        y |= 0xff00;
    }
    return y;
}

static inline u16 GetOamSizeX(u32 shape) {
    return DAT_020ebe34[(int)(shape & 0xc000) >> 14][(shape & 0xc0000000u) >> 30];
}

static inline u16 GetOamSizeY(u32 shape) {
    return DAT_020ebe1c[(int)(shape & 0xc000) >> 14][(shape & 0xc0000000u) >> 30];
}

static inline void UpdateFlip(GXOamAttr *pOam) {
    u32 flipH = pOam->flipH;
    u32 flipV;
    flipH ^= FUN_020168cc(DAT_02105718);
    flipV = pOam->flipV;
    flipV ^= FUN_020168e0(DAT_02105718);
    pOam->attr01 &= ~0x10000000u;
    pOam->attr01 |= (flipH << 28);
    pOam->attr01 &= ~0x20000000u;
    pOam->attr01 |= (flipV << 29);
}
void FUN_020164d8(GXOamAttr *pOam) {
    FUN_0205e550(&DAT_02105718->f40);
    if (DAT_02105718->f24) {
        u32 shape = pOam->attr01 & 0xc000c000u;
        int posX;
        u16 posY;


        posX = (s16)(FUN_020168cc(DAT_02105718) ? (u16)(-(GetOamX(pOam) + GetOamSizeX(shape))) : (u16)GetOamX(pOam));
        posY = FUN_020168e0(DAT_02105718) ? (u16)(-(GetOamY(pOam) + GetOamSizeY(shape))) : (u16)GetOamY(pOam);

        UpdateFlip(pOam);

        FUN_02014e44(posX, (s16)posY, -1, pOam, DAT_02105718->f08 + 12, DAT_02105718->f14, DAT_02105718->f18);
    } else {
        FUN_02014e44(GetOamX(pOam), GetOamY(pOam), -1, pOam, DAT_02105718->f08 + 12, DAT_02105718->f14, DAT_02105718->f18);
    }
}
