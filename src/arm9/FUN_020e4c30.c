// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x12c, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020e1534(void);
extern char *FUN_020e961c(void);
extern void FUN_020e4a2c(int, int);
extern void FUN_020d5e78(int);
extern void FUN_020d36ec(int);
extern void FUN_020e7b60(void);
extern void FUN_020e9628(int);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_020e7a8c(int);

int FUN_020e4c30(int arg0, int arg1) {
    if (FUN_020e1534() != 5) {
        return 0;
    }
    if (*(unsigned char *)(FUN_020e961c() + 0x15) == 2) {
        return 1;
    }
    if (arg0 != 0) {
        FUN_020e4a2c(arg0, arg1 - 0x13880);
        return 1;
    }
    *(unsigned char *)(FUN_020e961c() + 0x2d0) = 0;
    if (*(unsigned char *)(FUN_020e961c() + 0x1a9) == 1 ||
        *(unsigned char *)(FUN_020e961c() + 0x1a8) == 1 ||
        *(unsigned char *)(FUN_020e961c() + 0x1a8) == 2) {
        return 1;
    }
    if (*(int *)(FUN_020e961c() + 0x19c) != 0) {
        FUN_020d5e78(*(int *)(FUN_020e961c() + 0x19c));
        *(int *)(FUN_020e961c() + 0x19c) = 0;
    }
    if (*(unsigned char *)(FUN_020e961c() + 0xd) != 0) {
        if (*(unsigned char *)(FUN_020e961c() + 0x1a8) == 0) {
            *(unsigned char *)(FUN_020e961c() + 0x1a8) = 3;
            FUN_020d36ec(**(int **)(FUN_020e961c() + 4));
        }
    } else if (*(unsigned char *)(FUN_020e961c() + 0x15) == 3) {
        FUN_020e4a2c(6, -0x13a2e);
    } else if (*(int *)(FUN_020e961c() + 0x208) != 0) {
        FUN_020e7b60();
    } else if (*(int *)(FUN_020e961c() + 0x1a0) == 1) {
        FUN_020e9628(0x12);
        *(unsigned long long *)(FUN_020e961c() + 0x1f0) = FUN_02067e0c();
    } else {
        FUN_020e7a8c(1);
    }
    return 1;
}
