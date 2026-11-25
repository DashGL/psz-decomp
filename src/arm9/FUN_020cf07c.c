// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020c8668(void *);
extern void FUN_020cefe0(void *, int *);
extern int FUN_020cef64(void *, int *);
extern int FUN_020c7788(int);
int FUN_020cf07c(int *a) {
    int r4_base = *a;
    int *r4;
    FUN_020c8668(a);
    r4 = *(int **)(r4_base + 0x5d4);
    while (r4 != 0) {
        int *r6 = (int *)r4[0x13];
        if (r4[0] == 0x6a) {
            FUN_020cefe0(a, r4);
        } else {
            int res = FUN_020cef64(a, r4);
            if (r4[0] == 0x6a || res != 0 || FUN_020c7788(0) > r4[5]) {
                FUN_020cefe0(a, r4);
            }
        }
        r4 = r6;
    }
    return 0;
}
