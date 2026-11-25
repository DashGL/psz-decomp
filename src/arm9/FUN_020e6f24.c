// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
extern char *FUN_020e961c(void);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_020e9628(int);
extern int FUN_020e5564(int);
extern int FUN_020e88f8(int);
extern int FUN_020e6cf4(int, int, int);
extern int FUN_020e6b74(int);
extern void FUN_020e4a2c(int, int);

int FUN_020e6f24(int param_1) {
    char *s;
    *(int *)(FUN_020e961c() + 0x208) = 0;
    *(int *)(FUN_020e961c() + 0x204) = 0;
    *(unsigned char *)(FUN_020e961c() + 0x1a7) = 0;
    s = FUN_020e961c();
    *(unsigned long long *)(s + 0x1cc) = FUN_02067e0c();
    if (*(unsigned char *)(FUN_020e961c() + 0x15) == 0) {
        FUN_020e9628(3);
        if (FUN_020e88f8(FUN_020e5564(0)) != 0) {
            return 0;
        }
    } else if (*(unsigned char *)(FUN_020e961c() + 0x15) == 1) {
        if (FUN_020e6b74(FUN_020e6cf4(0, 0, param_1)) != 0) {
            return 0;
        }
    } else if (*(unsigned char *)(FUN_020e961c() + 0x15) == 3) {
        FUN_020e4a2c(6, -0x13a1a);
        return 0;
    }
    return 1;
}
