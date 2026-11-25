// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern void FUN_020e088c(void);
extern int *D_0211dc9c[];

int FUN_020e07a8(void) {
    int *p = D_0211dc9c[1];
    if (p == 0) {
        return 0;
    }
    if (p[0] != 0) {
        *(short *)((char *)p + 4) = 3;
        FUN_020e088c();
        if (((unsigned char *)D_0211dc9c[1])[0xc] != 0) {
            return 1;
        }
        return 0;
    }
    return 0;
}
