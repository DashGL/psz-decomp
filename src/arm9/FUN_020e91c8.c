// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
extern int FUN_020e961c(void);
extern void FUN_020e9628(int);
extern int FUN_020e5714(int, int);
extern int FUN_020e8a00(int);

void FUN_020e91c8(int param_1) {
    if (*(int *)(FUN_020e961c() + 0x1a0) == 1) {
        FUN_020e9628(6);
    } else if (*(int *)(FUN_020e961c() + 0x1a0) != 6 && *(int *)(FUN_020e961c() + 0x1a0) != 0xb) {
        return;
    }
    if (param_1 == *(int *)(FUN_020e961c() + 0x180)) {
        (*(unsigned char *)(FUN_020e961c() + 0x17c))++;
    } else {
        *(unsigned char *)(FUN_020e961c() + 0x17c) = 0;
        *(int *)(FUN_020e961c() + 0x180) = param_1;
    }
    {
        int p = FUN_020e961c();
        *(int *)(p + 0x184) = 0;
        *(int *)(p + 0x188) = 0;
    }
    if (FUN_020e8a00(FUN_020e5714(1, param_1)) == 0) {
        *(unsigned char *)(FUN_020e961c() + 0x3cc) = 0xff;
    }
}
