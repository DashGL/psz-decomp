// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
extern char DAT_02101748[];
extern char *FUN_020e961c(void);
extern void FUN_020e7c40(void);
extern void FUN_020e056c(int, int);
extern void FUN_020e2ab8(int, const char *, int);
extern int FUN_020e2a58(int);
extern void FUN_020e54f8(void);

void FUN_020e4a2c(int r5, int r4) {
    if (FUN_020e961c() != 0 && r5 != 0) {
        FUN_020e7c40();
        FUN_020e056c(r5, r4);
        FUN_020e2ab8(1, DAT_02101748, 0);
        int r7 = *(unsigned char *)(FUN_020e961c() + 0x15) == 2 ? 1 : 0;
        int r6 = *(int *)(FUN_020e961c() + 0x20c) == 0 ? 1 : 0;
        (*(void (**)(int, int, int, int, int, int))(FUN_020e961c() + 0x464))(
            r5, 0, r6, r7,
            FUN_020e2a58(*(int *)(FUN_020e961c() + 0x20c)),
            *(int *)(FUN_020e961c() + 0x468)
        );
        FUN_020e54f8();
    }
}
