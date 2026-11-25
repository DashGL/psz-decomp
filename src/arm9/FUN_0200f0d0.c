// FUN_0200f0d0 @ 0x0200f0d0 (0xbc, arm) - ported from FUN_02029760 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned int u32;
extern void *FUN_02011b38(void *, void *);
extern void FUN_02011ac0(void *, void *);
extern void FUN_02012488(u32, int);
extern void FUN_0200f3a0(void);
extern void FUN_0200f364(void *);

struct Item {
    u32 f0;
    u32 f4;
    u32 f8;
    void (*cb)(void *, u32, u32, u32);
    u32 f10;
    u32 f14;
    u32 f18;
    u32 f1c;
    u8 data[1];
};
struct S {
    u32 f0;
    u32 list;
};

void FUN_0200f0d0(struct S *s) {
    void *grp;
    int called = 0;
    grp = FUN_02011b38(&s->list, 0);
    while (grp != 0) {
        struct Item *it = (struct Item *)FUN_02011b38(grp, 0);
        while (it != 0) {
            if (it->cb != 0) {
                it->cb(it->data, it->f8, it->f10, it->f14);
                called = 1;
            }
            it = (struct Item *)FUN_02011b38(grp, it);
        }
        FUN_02011ac0(&s->list, grp);
        grp = FUN_02011b38(&s->list, 0);
    }
    FUN_02012488(s->f0, 3);
    if (called != 0) {
        FUN_0200f3a0();
    }
    FUN_0200f364(s);
}
