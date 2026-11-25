// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
struct State {
    unsigned char pad0[0x15];
    unsigned char f15;
    unsigned char pad1[0x193];
    unsigned char f1a9;
    unsigned char pad2[0x62];
    int f20c;
    unsigned char pad3[0x254];
    void (*f464)(int, int, int, int, int, int);
    int f468;
};
extern int FUN_020e2ab8(int, const void *, int);
extern int FUN_020e88a4(int);
extern void FUN_020e54f8(void);
extern struct State *FUN_020e961c(void);
extern int FUN_020e2a58(int);
extern const char DAT_02101748[];

void FUN_020e7960(void) {
    if (FUN_020e88a4(FUN_020e2ab8(1, DAT_02101748, 0)) == 0) {
        int r5;
        int r6;
        FUN_020e54f8();
        r5 = FUN_020e961c()->f20c != 0 ? 1 : (FUN_020e961c()->f15 == 2);
        r6 = FUN_020e961c()->f20c == 0;
        FUN_020e961c()->f464(
            0,
            1,
            r6,
            r5,
            FUN_020e2a58(FUN_020e961c()->f20c),
            FUN_020e961c()->f468
        );
        FUN_020e961c()->f1a9 = 0;
    }
}
