// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;

typedef struct {
    union {
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
    };
    u32 charNo : 10;
    u32 priority : 2;
    u32 cParam : 4;
    u32 _3 : 16;
} GXOamAttr;

typedef struct {
    u32 texSizeS;
    u32 texSizeT;
    u32 fmt;
    u32 plttUse;
    u32 plttColor0;
    u32 mappingType;
} TexAttr;

typedef struct {
    s32 u0, v0, u1, v1;
    s32 sx, sy;
} OutParam;

extern const u16 UNK_020ebe34[3][4];
extern const u16 UNK_020ebe1c[3][4];
extern const u32 UNK_020ebe5c[];
extern const u32 UNK_020ebe7c[3][4];
extern const u32 UNK_020ebeac[3][4];
extern const u32 UNK_020ebe54[];
typedef void (*Adjust)(s32 *, s32 *, s32 *, s32 *, u32, u32);
extern Adjust UNK_021056f8;

static inline u32 GetOamShape(const GXOamAttr *pOam) {
    return pOam->attr01 & 0xc000c000u;
}
static inline s32 GetOamSizeX(u32 shape) {
    return UNK_020ebe34[(s32)(shape & 0x0000c000u) >> 14][(shape & 0xc0000000u) >> 30];
}
static inline s32 GetOamSizeY(u32 shape) {
    return UNK_020ebe1c[(s32)(shape & 0x0000c000u) >> 14][(shape & 0xc0000000u) >> 30];
}
static inline u32 GetTexS(u16 sh, u16 sz) {
    return UNK_020ebe7c[sh][sz];
}
static inline u32 GetTexT(u16 sh, u16 sz) {
    return UNK_020ebeac[sh][sz];
}

void FUN_02014b98(const GXOamAttr *pOam, const TexAttr *pTex, u32 imageBase, u32 paletteBase, OutParam *out)
{
    u32 shape = GetOamShape(pOam);
    u16 charNo = pOam->charNo;
    u32 flipH, flipV;
    u16 pltt;
    u32 fmt;

    out->sx = GetOamSizeX(shape);
    out->sy = GetOamSizeY(shape);

    if (pTex->mappingType == 0) {
        *(volatile u32 *)0x040004a8 = ((imageBase >> 3) | (pTex->fmt << 26)) | 0x40000000u | (pTex->texSizeS << 20) | (pTex->texSizeT << 23) | (pTex->plttColor0 << 29);
        if (pTex->fmt == 4) {
            charNo >>= 1;
        }
        out->u0 = (charNo & (UNK_020ebe5c[pTex->texSizeS] - 1)) << 15;
        out->v0 = ((s32)charNo >> pTex->texSizeS) << 15;
    } else {
        u32 addr = imageBase + (charNo << (((s32)(pTex->mappingType & 0x00700000u) >> 20) + 5));
        u16 sh = (u16)((s32)(shape & 0x0000c000u) >> 14);
        u16 sz = (u16)((shape & 0xc0000000u) >> 30);
        *(volatile u32 *)0x040004a8 = (pTex->fmt << 26) | (addr >> 3) | 0x40000000u |
                                      (GetTexS(sh, sz) << 20) | (GetTexT(sh, sz) << 23) | (pTex->plttColor0 << 29);
        out->u0 = 0;
        out->v0 = 0;
    }

    out->u1 = out->u0 + (out->sx << 12);
    out->v1 = out->v0 + (out->sy << 12);

    flipV = pOam->flipV;
    flipH = pOam->flipH;
    if (flipH) {
        s32 temp = out->u0;
        out->u0 = out->u1;
        out->u1 = temp;
    }
    if (flipV) {
        s32 temp = out->v0;
        out->v0 = out->v1;
        out->v1 = temp;
    }
    if (UNK_021056f8 != 0) {
        UNK_021056f8(&out->u0, &out->v0, &out->u1, &out->v1, flipH, flipV);
    }

    pltt = pOam->cParam;
    fmt = UNK_020ebe54[pOam->colorMode];
    {
        u32 off = pltt;
        if (pTex->plttUse) {
            off <<= 9;
        } else if (fmt == 4) {
            off = 0;
        } else {
            off <<= 5;
        }
        *(volatile u32 *)0x040004ac = (paletteBase + off) >> (4 - (fmt == 2));
    }
}
