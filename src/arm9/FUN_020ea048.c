// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
extern int DAT_0211e5e8[];
extern void FUN_020ea56c(int, int, int);
extern int FUN_020ea5b4(int, int, int, int);
extern int FUN_020ea5e4(void);
int FUN_020ea048(int a, int *b, int c) {
    int r4 = DAT_0211e5e8[2];
    int sp4 = 0;
    for (; sp4 < 4; b++, a += 0x100, sp4++, r4 += 0x100) {
        if (*b != 0) {
            do {
                FUN_020ea56c(r4, 0x100, a);
            } while (FUN_020ea5b4(a, r4, 0x100, c) == 0);
        }
    }
    if (FUN_020ea5e4() != 0) {
        return 1;
    }
    return 0;
}
