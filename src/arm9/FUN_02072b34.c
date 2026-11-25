// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6e, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int f0;
    int f4;
    int f8;
    int fc[5];
    int f20;
} S_72b34;
extern void FUN_02072d60(S_72b34 *);
extern void FUN_02072bf8(S_72b34 *, int);
extern int FUN_020c2e38(void);
extern void FUN_02072bd0(S_72b34 *, int);
extern void FUN_02072ba4(S_72b34 *, int);
void FUN_02072b34(S_72b34 *a) {
    FUN_02072d60(a);
    switch (a->f20) {
    case 0:
        FUN_02072bf8(a, a->f8);
        break;
    case 4:
        if (FUN_020c2e38() == 0) {
            a->f20 = 1;
        } else {
            FUN_02072bf8(a, a->f8);
            break;
        }
    case 1:
        FUN_02072bd0(a, a->f8);
        a->f20 = 2;
    case 2:
        a->f20 = 3;
    case 3:
        a->f8 = a->f4;
        a->f4 = -1;
        a->f20 = 0;
        FUN_02072ba4(a, a->f8);
        break;
    }
}
