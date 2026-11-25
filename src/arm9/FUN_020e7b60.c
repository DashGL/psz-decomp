// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x88, exact bytes and relocation targets.
extern char *FUN_020e961c(void);
extern void FUN_020e9628(int);
extern int FUN_020e5564(int);
extern int FUN_020e88f8(int);
extern int FUN_020e6b94(int, int);
extern int FUN_020e6b74(int);
extern void FUN_020e7a8c(int);

int FUN_020e7b60(void) {
    *(unsigned char *)(FUN_020e961c() + 0x17) = 0;
    *(int *)(FUN_020e961c() + 0x20) = 0;
    *(unsigned char *)(FUN_020e961c() + 0x1a8) = 0;
    if (*(int *)(FUN_020e961c() + 0x208) != 0) {
        if (*(unsigned char *)(FUN_020e961c() + 0x15) == 0) {
            FUN_020e9628(3);
            int r4 = FUN_020e5564(0);
            if (FUN_020e88f8(r4) != 0) {
                return r4;
            }
        } else if (*(unsigned char *)(FUN_020e961c() + 0x15) == 1) {
            FUN_020e9628(4);
            int r4 = FUN_020e6b94(*(int *)(FUN_020e961c() + 0x208), 0);
            if (FUN_020e6b74(r4) != 0) {
                return r4;
            }
        }
    } else {
        FUN_020e7a8c(1);
    }
    return 0;
}
