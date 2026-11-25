// flags: -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;

typedef struct {
    s32 x;
    s32 y;
} Vec2;

typedef struct {
    s32 _00, _01;
    s32 _10, _11;
} Mtx22;

typedef struct {
    Mtx22 mtx;
    Vec2 trans;
} Mtx32;

typedef struct {
    Mtx22 mtx;
    u16 affineIdx[4][2];
} MtxCache;

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
        u32 cParam : 10;
        u32 priority : 2;
        u32 pltt : 4;
        u32 _pad : 16;
    };
    struct {
        u16 attr0;
        u16 attr1;
        u16 attr2;
        u16 _attr3;
    };
    struct {
        u32 attr01;
        u32 attr23;
    };
} GXOamAttr;

typedef struct {
    u8 pad00[0x10];
    u32 baseTex;
    u8 pad14[0x08];
    int (*pFuncOamRegister)(GXOamAttr *, u32, int);
    u32 (*pFuncOamAffineRegister)(const Mtx22 *);
    u32 flipFlag;
    MtxCache *pMtxCache;
    Mtx32 *pMtx32;
    u32 bDrawEnable;
    u32 pad34;
    GXOamAttr oam;
} RndCore;

typedef struct {
    Vec2 viewPos;
    u8 pad08[0x0c];
    u32 surfaceType;
    u8 pad18[0x08];
    void (*pBeforeDrawCellBackFunc)(RndCore *, void *, u16);
    void (*pAfterDrawCellBackFunc)(RndCore *, void *, u16);
} Surface;

typedef struct {
    u16 attr0;
    u16 attr1;
    u16 attr2;
} CellOam;

typedef struct {
    u16 numOAMAttrs;
    u16 cellAttr;
    CellOam *pOamAttrArray;
} CellData;

extern RndCore *DAT_02105718;
extern Mtx32 DAT_020ebf7c;
extern const u16 DAT_020ebe34[3][4];
extern const u16 DAT_020ebe1c[3][4];
extern u32 FUN_020168cc(RndCore *);
extern u32 FUN_020168e0(RndCore *);
extern void FUN_02015dfc(const Mtx22 *, GXOamAttr *, const Vec2 *);

static inline int IsAffine(const RndCore *p) {
    return (p->flipFlag == 0 && p->pMtxCache != 0) ? 1 : 0;
}

void FUN_020160bc(const Surface *surface, const CellData *cell) {
    const Mtx32 *mtx = DAT_02105718->pMtx32 ? DAT_02105718->pMtx32 : &DAT_020ebf7c;
    Mtx22 copy;
    Mtx22 local;
    Vec2 pos;
    pos.x = mtx->trans.x;
    pos.y = mtx->trans.y;
    pos.x -= surface->viewPos.x;
    pos.y -= surface->viewPos.y;
    const u32 baseTex = DAT_02105718->baseTex;
    const int affineMode = IsAffine(DAT_02105718);
    GXOamAttr *pTempOam = &DAT_02105718->oam;
    u16 i;
    for (i = 0; i < cell->numOAMAttrs; i++) {
        u32 affineIdx;
        CellOam *entry;

        DAT_02105718->bDrawEnable = 1;
        entry = &cell->pOamAttrArray[i];
        pTempOam->attr0 = entry->attr0;
        pTempOam->attr1 = entry->attr1;
        pTempOam->attr2 = entry->attr2;

        if (surface->pBeforeDrawCellBackFunc != 0) {
            surface->pBeforeDrawCellBackFunc(DAT_02105718, cell, i);
        }

        if (!DAT_02105718->bDrawEnable) {
            continue;
        }

        pTempOam->cParam += baseTex;

        if (affineMode) {
            u32 flip = (pTempOam->flipV << 1) | pTempOam->flipH;
            RndCore *cur = DAT_02105718;
            MtxCache *cache = cur->pMtxCache;
            affineIdx = cache->affineIdx[flip][surface->surfaceType - 1];
            if (affineIdx == 0xffff) {
                if (flip == 0) {
                    affineIdx = cur->pFuncOamAffineRegister(&cache->mtx);
                } else {
                    local = cache->mtx;
                    if (flip & 1) {
                        local._00 = -local._00;
                        local._01 = -local._01;
                    }
                    if (flip & 2) {
                        local._10 = -local._10;
                        local._11 = -local._11;
                    }
                    affineIdx = cur->pFuncOamAffineRegister(&local);
                }
                cache->affineIdx[flip][surface->surfaceType - 1] = (u16)affineIdx;
            }
            copy._00 = mtx->mtx._00;
            copy._01 = mtx->mtx._01;
            copy._10 = mtx->mtx._10;
            copy._11 = mtx->mtx._11;
            FUN_02015dfc(&copy, pTempOam, &pos);
        } else {
            affineIdx = 0xfffe;
            if (DAT_02105718->flipFlag) {
                u32 shape = pTempOam->attr01 & 0xc000c000;
                u32 hflip = pTempOam->flipH;
                u32 vflip;
                hflip ^= FUN_020168cc(DAT_02105718);
                vflip = pTempOam->flipV;
                vflip ^= FUN_020168e0(DAT_02105718);
                pTempOam->attr01 = (((pTempOam->attr01 & ~0x10000000u) | (hflip << 28)) & ~0x20000000u) | (vflip << 29);
                if (FUN_020168cc(DAT_02105718)) {
                    u32 w = DAT_020ebe34[(s32)(shape & 0xc000) >> 14][(shape & 0xc0000000) >> 30];
                    u32 a = pTempOam->attr01;
                    pTempOam->attr01 = (a & 0xfe00ffff) | ((-(w + pTempOam->x) << 23) >> 7);
                }
                if (FUN_020168e0(DAT_02105718)) {
                    u32 h = DAT_020ebe1c[(s32)(shape & 0xc000) >> 14][(shape & 0xc0000000) >> 30];
                    GXOamAttr *o = pTempOam;
                    o->y = -(h + o->y);
                }
            }
            pTempOam->x += (pos.x >> 12);
            pTempOam->y += (pos.y >> 12);
        }

        if (DAT_02105718->pFuncOamRegister(pTempOam, affineIdx, 0) != 1) {
            return;
        }

        if (surface->pAfterDrawCellBackFunc != 0) {
            surface->pAfterDrawCellBackFunc(DAT_02105718, cell, i);
        }
    }
}

