// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x36, exact bytes and relocation targets.
extern void FUN_020d7e90(int *, int);
extern void FUN_020d7f88(int *);
extern void FUN_020d7fdc(int *);

void FUN_020d8004(int *p) {
    if (p[4] != 0) {
        FUN_020d7e90(p, 0);
        FUN_020d7f88(p);
        if (p[7] > 0) {
            FUN_020d7fdc(p);
        }
        if (p[4] == 0) {
            ((void (*)(int *, int, int, int))p[0x11])(p, 2, 0, p[0x12]);
        }
    }
}
