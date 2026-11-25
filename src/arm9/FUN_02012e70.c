// flags: -O4,p -noThumb
#pragma opt_dead_assignments off
typedef unsigned short u16;
typedef int BOOL;

struct ManageArea {
    u16 fromIdx;
    u16 toIdx;
    u16 currentIdx;
};
struct Obj12e70 {
    int type;
    struct ManageArea attrArea;
    struct ManageArea affineArea;
    int f10;
    int fast;
};
struct OamAttr {
    u16 attr0, attr1, attr2, pad;
};
struct Table12e70 {
    unsigned char pad[0x100];
    struct OamAttr entries[0x88];
};
extern struct Table12e70 DAT_02103794[];

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

static inline struct OamAttr *GetOamBuf_(int type) {
    return DAT_02103794[type].entries;
}

BOOL FUN_02012e70(struct Obj12e70 *self, const struct OamAttr *src, u16 num) {
    if (HasEnoughCapacity_(&self->attrArea, num)) {
        int i;
        struct OamAttr *dst = &GetOamBuf_(self->type)[self->attrArea.currentIdx];
        for (i = 0; i < num; i++) {
            dst[i].attr0 = src->attr0;
            dst[i].attr1 = src->attr1;
            dst[i].attr2 = src->attr2;
            src++;
            self->attrArea.currentIdx++;
        }
        return 1;
    }
    return 0;
}
