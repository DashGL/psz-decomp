// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_020e7960(void);
extern void FUN_020e5138(int);
extern unsigned char *FUN_020e961c(void);
extern int FUN_020e2a58(int);
extern int FUN_020e5564(int);
extern int FUN_020e88f8(int);
extern void FUN_020e6cf4(int, int, int);

void FUN_020e7a8c(int p0) {
    if (p0 == 0) {
        FUN_020e7960();
        return;
    }
    FUN_020e5138(p0);
    if (FUN_020e961c()[0x15] == 2 || FUN_020e961c()[0x15] == 3) {
        int v5 = *(int *)(FUN_020e961c() + 0x20c) == 0 ? 1 : 0;
        (*(void (**)(int, int, int, int, int, int))(FUN_020e961c() + 0x464))(
            0, 1, v5, 0,
            FUN_020e2a58(*(int *)(FUN_020e961c() + 0x20c)),
            *(int *)(FUN_020e961c() + 0x468));
    } else if (FUN_020e961c()[0x15] == 0) {
        if (p0 == 1) {
            if (FUN_020e88f8(FUN_020e5564(0)) == 0) {
                return;
            }
        }
    } else if (FUN_020e961c()[0x15] == 1) {
        if (p0 == 1) {
            FUN_020e6cf4(0, 0, 0);
        }
    }
}
