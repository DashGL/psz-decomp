// flags: -O4,p -noThumb
#pragma opt_dead_assignments off
typedef unsigned short u16;
typedef unsigned int u32;
typedef int BOOL;

struct ManageArea {
    u16 fromIdx;
    u16 toIdx;
    u16 currentIdx;
};
struct Obj13024 {
    int type;
    struct ManageArea attrArea;
    struct ManageArea affineArea;
    int f10;
    int fast;
};
struct Entry13024 {
    u16 f0, f2, f4, f6;
};
struct Affine13024 {
    u16 pad0[3], pa;
    u16 pad1[3], pb;
    u16 pad2[3], pc;
    u16 pad3[3], pd;
};
struct Table13024 {
    unsigned char pad[0x100];
    struct Entry13024 entries[0x88];
};
typedef struct {
    int _00, _01;
    int _10, _11;
} MtxFx22;

extern struct Table13024 DAT_02103794[];

static inline BOOL IsManageAreaValid_(const struct ManageArea *pArea) {
    return (pArea->currentIdx <= pArea->toIdx + 1) && (pArea->fromIdx <= pArea->toIdx);
}

static inline u16 GetNumManageAreaCapacity_(const struct ManageArea *pArea) {
    if (IsManageAreaValid_(pArea)) {
        return (u16)(pArea->toIdx - pArea->currentIdx + 1);
    }
    return 0;
}

static inline BOOL HasEnoughCapacity_(const struct ManageArea *pArea, u16 num) {
    return (GetNumManageAreaCapacity_(pArea) >= num) ? 1 : 0;
}

static inline struct Entry13024 *GetOamBuf_(int type) {
    return DAT_02103794[type].entries;
}

u16 FUN_02013024(struct Obj13024 *self, const MtxFx22 *mtx) {
    if (HasEnoughCapacity_(&self->affineArea, 1)) {
        u16 idx = self->affineArea.currentIdx;
        struct Affine13024 *p = &((struct Affine13024 *)GetOamBuf_(self->type))[idx];
        p->pa = (u16)(mtx->_00 >> 4);
        p->pb = (u16)(mtx->_01 >> 4);
        p->pc = (u16)(mtx->_10 >> 4);
        p->pd = (u16)(mtx->_11 >> 4);
        self->affineArea.currentIdx++;
        return idx;
    }
    return 0xfffe;
}
