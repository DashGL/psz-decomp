// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
// FUN_02098154: full 0xc0 bytes + relocation targets verified 2.0/sp2p3.
// ABI evidence: notes/sessions/matching-upper-continue-2026-11-12.md
//cpp
// flags: -O4,s

struct Vec3_98154_02098154 {
    int x, y, z;
};

struct Obj98154_02098154 {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual int v1c(struct Vec3_98154_02098154 *, int *, int);
};

struct Slot98154_02098154 {
    int f0;
    int f4;
};

struct Self98154_02098154 {
    unsigned char pad[0x28];
    struct Slot98154_02098154 slots[5];
};

extern "C" {
extern int DAT_020fc988;
extern int FUN_02078198(int);
extern struct Obj98154_02098154 *FUN_020b7c38(int);
extern int FUN_020983f8(void *, int);
extern void FUN_02036348(struct Vec3_98154_02098154 *, struct Vec3_98154_02098154 *, const struct Vec3_98154_02098154 *);
extern int FUN_0205c86c(struct Vec3_98154_02098154 *);
extern int FUN_02078188(int);
extern int FUN_020980dc(void *, int, struct Vec3_98154_02098154 *);
}

extern "C" int FUN_02098154(struct Self98154_02098154 *self, int idx, const struct Vec3_98154_02098154 *a2, int *min_p, int *max_p) {
    struct Vec3_98154_02098154 sp34;
    struct Vec3_98154_02098154 sp28;
    struct Vec3_98154_02098154 sp1c;
    struct Vec3_98154_02098154 sp10;
    int sp0c;
    int val = DAT_020fc988;
    if (idx >= 0 && idx < 5) {
        if (FUN_02078198(self->slots[idx].f0) != 0) {
            struct Obj98154_02098154 *obj = FUN_020b7c38(self->slots[idx].f0);
            if (obj != 0) {
                if (obj->v1c(&sp34, &sp0c, FUN_020983f8(self, idx)) != 0) {
                    FUN_02036348(&sp1c, &sp34, a2);
                    val = FUN_0205c86c(&sp1c) - sp0c;
                }
            }
        } else if (FUN_02078188(self->slots[idx].f0) != 0) {
            if (FUN_020980dc(self, idx, &sp28) != 0) {
                FUN_02036348(&sp10, &sp28, a2);
                val = FUN_0205c86c(&sp10);
            }
        }
    }
    if (((val < *min_p) ? 1 : 0) != 0) {
        return -1;
    }
    if (((val > *max_p) ? 1 : 0) != 0) {
        return 1;
    }
    return 0;
}
