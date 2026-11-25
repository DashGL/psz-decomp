// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,s
extern int DAT_0211a51c;
extern int FUN_02084be4(void *);
extern int FUN_02073218(int);
extern int FUN_020e2628(void);
extern int FUN_020c0da8(void *, int, int, void *, void *, int *);
extern void FUN_020bde84(int);

void FUN_020745ac(char *param_1) {
    int r6;
    int i;
    if (FUN_02084be4(&DAT_0211a51c) != 0) {
        return;
    }
    r6 = 0;
    for (i = 0; i < 4; i++) {
        if (FUN_02073218(i) == 0) {
            param_1[i * 0x3c + 0x72] = 1;
        }
        if (param_1[i * 0x3c + 0x70] == 3) {
            r6 = 1;
        }
    }
    if (r6 == 1 && FUN_020e2628() == 1) {
        int flag = 0;
        for (i = 0; i < 4; i++) {
            char *entry = param_1 + 0x70 + i * 0x3c;
            if (*entry == 3) {
                int minus1 = -1;
                if (FUN_020c0da8(entry + 0xc, *(int *)(entry + 4), *(int *)(entry + 8), entry + 0x18, entry + 0x2c, &minus1) >= 0) {
                    flag = 1;
                    FUN_020bde84(*(int *)(param_1 + 0x2c));
                }
                *entry = 4;
            }
        }
        if (flag == 1) {
            *(int *)(param_1 + 0x38) = 1;
        }
    }
}
