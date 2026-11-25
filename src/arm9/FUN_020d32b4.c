// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0[3];
    int fc;
    int f10;
    int f14[2];
    unsigned int f1c;
    unsigned int f20;
} S_d32b4;
extern void FUN_020d4ab0(S_d32b4 *);
extern void FUN_020d3424(S_d32b4 *);
extern int FUN_020d2cf0(S_d32b4 *, int, int, int);
int FUN_020d32b4(S_d32b4 *a, unsigned int b) {
    if (a->fc < 5) {
        int r0 = 0;
        if (a->f10 != 0) {
            if (a->f20 != 0 && b - a->f1c > a->f20) {
                r0 = 1;
            }
        } else if (a->fc < 4 && b - a->f1c > 60000u) {
            r0 = 1;
        }
        if (r0 != 0) {
            FUN_020d4ab0(a);
            FUN_020d3424(a);
            if (FUN_020d2cf0(a, 6, 0, 0) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
