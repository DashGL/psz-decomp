// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x148, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x148, exact bytes and relocation targets.
// flags: -O4,p
extern unsigned char *FUN_020e961c(void);
extern void FUN_020e7960(void);
extern void FUN_020d36ec(int a);
extern int FUN_020e6fc4(int a);
extern int FUN_020e6b74(int);
extern int FUN_020e79fc(void);
extern void FUN_020d5e78(int a);

void FUN_020e7818(void) {
    *(int *)(FUN_020e961c() + 0x20c) = 0;
    if (*(int *)(FUN_020e961c() + 0x1a0) == 2) {
        FUN_020e7960();
        return;
    }
    FUN_020e961c()[0x1a9] = 1;
    if (FUN_020e961c()[0x15] == 3) {
        FUN_020e961c()[0x1a9] = 1;
        if (FUN_020e961c()[0xd] != 0) {
            FUN_020d36ec(**(int **)(FUN_020e961c() + 4));
        } else {
            if (FUN_020e6b74(FUN_020e6fc4(*(int *)(FUN_020e961c() + 0xf4))) != 0) {
                return;
            }
        }
        FUN_020e7960();
        return;
    } else {
        if (*(int *)(FUN_020e961c() + 0x1a0) == 4 ||
            *(int *)(FUN_020e961c() + 0x1a0) == 5 ||
            *(int *)(FUN_020e961c() + 0x1a0) == 6 ||
            *(int *)(FUN_020e961c() + 0x1a0) == 7 ||
            *(int *)(FUN_020e961c() + 0x1a0) == 0xb ||
            *(int *)(FUN_020e961c() + 0x1a0) == 0xc) {
            if (*(int *)(FUN_020e961c() + 0x204) != 0) {
                if (FUN_020e6b74(FUN_020e6fc4(*(int *)(FUN_020e961c() + 0xf4))) != 0) {
                    return;
                }
            }
            if (FUN_020e6b74(FUN_020e79fc()) != 0) {
                return;
            }
        }
        if (*(int *)(FUN_020e961c() + 0x19c) != 0) {
            FUN_020d5e78(*(int *)(FUN_020e961c() + 0x19c));
            *(int *)(FUN_020e961c() + 0x19c) = 0;
        }
        if (FUN_020e961c()[0xd] != 0) {
            FUN_020e961c()[0x1a9] = 1;
            FUN_020d36ec(**(int **)(FUN_020e961c() + 4));
        }
    }
    FUN_020e7960();
}
