// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    char f1c;
    char f1d;
    char f1e;
    char f1f;
    short f20;
    short f22;
    int f24[3];
} S_e9d50;
extern S_e9d50 *DAT_0211e5e4;
extern int FUN_020e9bf8(int);
extern int FUN_020e99a0(void *);
extern void FUN_02065774(void *, void *, int);
void FUN_020e9d50(int a, void *b, int c) {
    S_e9d50 *r4 = &DAT_0211e5e4[a];
    r4->f1e = FUN_020e9bf8(a);
    int r5 = FUN_020e99a0(b);
    switch (r5) {
    case 0:
        break;
    case 1:
        if (c != 8) {
            return;
        }
        {
            int sp0[2];
            FUN_02065774(b, sp0, 8);
            r4->f18 = sp0[0];
            r4->f10 = 0;
            if (r4->f4 != 0 && r4->f8 >= r4->f18) {
                r4->f1d = 2;
            } else {
                r4->f1d = 4;
            }
        }
        break;
    case 2:
    case 3:
    case 4:
        r4->f1d = 3;
        break;
    }
    r4->f22 = r5;
}
