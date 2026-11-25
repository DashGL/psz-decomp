// flags: -O4,p -noThumb
#pragma opt_dead_assignments off
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;

typedef struct {
    union {
        u32 attr01;
        struct { u16 attr0; u16 attr1; };
        struct {
            u32 y : 8; u32 rsMode : 2; u32 objMode : 2; u32 mosaic : 1; u32 colorMode : 1; u32 shape : 2;
            u32 x : 9; u32 rsParam : 5; u32 size : 2;
        };
    };
    u16 attr2;
    u16 _3;
} GXOamAttr;

typedef struct {
    u32 pad[0x40];
    GXOamAttr oam[128];
    u32 tail[0x10];
} OamBuf;

typedef struct {
    u16 fromIdx;
    u16 toIdx;
    u16 curIdx;
} Area;

typedef struct {
    u32 type;
    Area area;
} OamMgr;

extern OamBuf DAT_02103794[];

static inline BOOL IsValid(const Area *p) {
    return (BOOL)((p->curIdx <= p->toIdx + 1) && (p->fromIdx <= p->toIdx));
}

static inline u16 GetCap(const Area *p) {
    if (IsValid(p)) {
        return (u16)(p->toIdx - p->curIdx + 1);
    }
    return 0;
}

static inline BOOL HasCap(const Area *p, u16 num) {
    return (BOOL)(GetCap(p) >= num);
}

BOOL FUN_02012f40(OamMgr *pMan, const GXOamAttr *pOam, u16 affineIdx) {
    if (HasCap(&pMan->area, 1)) {
        u32 t = pMan->type;
        GXOamAttr *pDst = &DAT_02103794[t].oam[pMan->area.curIdx];
        pDst->attr0 = pOam->attr0;
        pDst->attr1 = pOam->attr1;
        pDst->attr2 = pOam->attr2;
        if (affineIdx != 0xFFFE) {
            if (pDst->rsMode & 1) {
                pDst->rsParam = affineIdx;
            }
        }
        pMan->area.curIdx++;
        return 1;
    }
    return 0;
}
