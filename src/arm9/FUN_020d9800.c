// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3e, exact bytes and relocation targets.
struct Obj {
    int f0, f4, f8;
};
extern int FUN_020c6e0c(int);
extern int *FUN_020c6e10(int, int);
extern void FUN_020d910c(struct Obj *, int);
extern void FUN_020c6de0(int);

void FUN_020d9800(struct Obj *a) {
    int i;
    if (a->f8 != 0) {
        for (i = 0; i < FUN_020c6e0c(a->f8); i++) {
            int *p = FUN_020c6e10(a->f8, i);
            FUN_020d910c(a, *p);
        }
        FUN_020c6de0(a->f8);
        a->f8 = 0;
    }
}
