// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x32, exact bytes and relocation targets.
extern void FUN_020d3424(int *);
extern void FUN_020d4ab0(int *);
extern void FUN_020d2e00(int *, int);
extern void FUN_020d4ee4(int *);
extern void FUN_020d487c(int *);

void FUN_020d33f0(int *p, int a) {
    if (a != 0) {
        if (p[3] >= 7) {
            return;
        }
        FUN_020d3424(p);
        FUN_020d4ab0(p);
        FUN_020d2e00(p, 0);
        FUN_020d4ee4(p);
        return;
    }
    p[3] = 6;
    FUN_020d487c(p);
}
