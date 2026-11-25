// flags: -O4,p -noThumb
#pragma opt_dead_assignments off
typedef unsigned short u16;
typedef unsigned int u32;
struct ManageArea {
    u16 fromIdx;
    u16 toIdx;
    u16 currentIdx;
};
struct Obj130e8 {
    int type;
    struct ManageArea attrArea;
    struct ManageArea affineArea;
    int f10;
    int fast;
};
struct Entry130e8 {
    u16 f0, f2, f4, f6;
};
struct Affine130e8 {
    u16 pad0[3], pa;
    u16 pad1[3], pb;
    u16 pad2[3], pc;
    u16 pad3[3], pd;
};
struct Table130e8 {
    unsigned char pad[0x100];
    struct Entry130e8 entries[0x88];
};
extern struct Table130e8 DAT_02103794[];
extern void (*DAT_020f66c0[])(const void *, u32, u32);
extern void FUN_0206740c(const void *, u32);
extern void FUN_0205ecc0(const void *, u32, u32);
extern void FUN_0205ed14(const void *, u32, u32);

static inline int IsManageAreaValid_(const struct ManageArea *pArea) {
    return (pArea->currentIdx <= pArea->toIdx + 1) && (pArea->fromIdx <= pArea->toIdx);
}

static inline void LoadOam_(struct Obj130e8 *self) {
    struct Entry130e8 *p = &DAT_02103794[self->type].entries[self->attrArea.fromIdx];
    u16 count = (u16)(self->attrArea.toIdx - self->attrArea.fromIdx + 1);
    u16 offset = (u16)(self->attrArea.fromIdx * 8);
    u16 i;
    void (*upload)(const void *, u32, u32) = DAT_020f66c0[self->type];
    for (i = 0; i < count; i++) {
        upload(p, offset, 6);
        offset += 8;
        p++;
    }
}

static inline void LoadAffine_(struct Obj130e8 *self) {
    struct Affine130e8 *p = &((struct Affine130e8 *)DAT_02103794[self->type].entries)[self->affineArea.fromIdx];
    u16 count = (u16)(self->affineArea.toIdx - self->affineArea.fromIdx + 1);
    u16 offset = (u16)(self->affineArea.fromIdx * 32);
    u16 i;
    void (*upload)(const void *, u32, u32) = DAT_020f66c0[self->type];
    for (i = 0; i < count; i++) {
        upload(&p->pa, offset + 6, 2);
        upload(&p->pb, offset + 14, 2);
        upload(&p->pc, offset + 22, 2);
        upload(&p->pd, offset + 30, 2);
        offset += 32;
        p++;
    }
}

static inline void ApplyFast_(struct Obj130e8 *self) {
    int engine = self->type;
    u16 start = self->attrArea.fromIdx;
    struct Entry130e8 *base = DAT_02103794[engine].entries;
    u16 offset = (u16)(start * 8);
    u16 size = (u16)((self->attrArea.toIdx - start + 1) * 8);
    FUN_0206740c(&base[start], size);
    switch (engine) {
    case 0:
        FUN_0205ecc0(&base[start], offset, size);
        break;
    case 1:
        FUN_0205ed14(&base[start], offset, size);
        break;
    }
}

void FUN_020130e8(struct Obj130e8 *self) {
    if (self->fast != 0) {
        ApplyFast_(self);
    } else {
        LoadOam_(self);
        if (IsManageAreaValid_(&self->affineArea)) {
            LoadAffine_(self);
        }
    }
}
