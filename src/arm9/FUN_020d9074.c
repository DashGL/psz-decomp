// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern int FUN_020c6e0c(int);
extern int *FUN_020c6e10(int, int);
extern void FUN_020d8fc8(int *, int);
extern void FUN_020c6ff4(int);
extern void FUN_020d903c(int *);

void FUN_020d9074(int *p) {
    int n = FUN_020c6e0c(p[1]);
    int i = 0;
    for (; i < n; i++) {
        FUN_020d8fc8(p, *FUN_020c6e10(p[1], i));
    }
    FUN_020c6ff4(p[1]);
    FUN_020d903c(p);
}
