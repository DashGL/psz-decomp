// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,p
extern unsigned char *FUN_020e961c(void);
extern int FUN_020e2a24(int);
int FUN_020e83f0(int a) {
    int i;
    if (*(int *)(FUN_020e961c() + 0x2fc) == 0) {
        return 0;
    }
    for (i = 0; i < *(int *)(FUN_020e961c() + 0x344); i++) {
        int v = FUN_020e2a24((FUN_020e961c() + i)[0x304]);
        if (v > 0 && v == a) {
            return 1;
        }
    }
    return 0;
}
