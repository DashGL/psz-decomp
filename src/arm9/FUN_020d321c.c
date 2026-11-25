// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3a, exact bytes and relocation targets.
struct S16 { int a[4]; };
struct Obj {
    int f0, f4, f8, f0c, f10, f14;
    int f18, f1c, f20, f24;
    struct S16 f28;
};
extern void FUN_020d47e8(struct Obj *);

int FUN_020d321c(struct Obj *a, struct S16 *b) {
    if (a->f14 != 0) {
        a->f14 = 0;
        return 0;
    }
    a->f14 = 0;
    if (a->f0c != 4) {
        return 0;
    }
    FUN_020d47e8(a);
    a->f0c = 5;
    if (b != 0) {
        a->f28 = *b;
    }
    return 1;
}
