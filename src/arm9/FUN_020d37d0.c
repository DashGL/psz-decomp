// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0[3];
    int fc;
    int f10;
    int f14;
} S_d37d0;
extern void FUN_020d3424(S_d37d0 *);
extern int FUN_020d2cf0(S_d37d0 *, int, int, int);
extern int FUN_020d2e00(S_d37d0 *, int);
int FUN_020d37d0(S_d37d0 *a, int b, int c) {
    int v = a->fc;
    if (v < 5) {
        if (a->f10 != 0) {
            FUN_020d3424(a);
            if (FUN_020d2cf0(a, b, 0, 0) == 0) {
                return 0;
            }
        } else {
            if (v == 4) {
                a->f14 = 1;
            }
            FUN_020d3424(a);
        }
    } else if (v != 7) {
        FUN_020d3424(a);
        if (FUN_020d2e00(a, c) == 0) {
            return 0;
        }
    }
    return 1;
}
