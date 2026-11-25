// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8e, exact bytes and relocation targets.
struct State {
    unsigned char pad0[0xd];
    unsigned char f0d;
    unsigned char pad1[9];
    unsigned char f17;
    unsigned char pad2[8];
    int f20;
    int f24[32];
    unsigned short fa4[0xae];
    int f200;
};
extern struct State *FUN_020e961c(void);
extern int FUN_020e59d8(int, int, int, int, int *, int);

int FUN_020e79fc(void) {
    int r4 = 0;
    int sp8 = 0;
    if (FUN_020e961c()->f17 != 0 &&
        FUN_020e961c()->f20 != 0 &&
        FUN_020e961c()->f20 != FUN_020e961c()->f200) {
        struct State *r5 = FUN_020e961c();
        struct State *s4 = FUN_020e961c();
        struct State *r6 = FUN_020e961c();
        struct State *r7 = FUN_020e961c();
        struct State *r3 = FUN_020e961c();
        r4 = FUN_020e59d8(0xc, r5->f20, s4->f24[r6->f0d + 1], r7->fa4[r3->f0d + 1], &sp8, 1);
        FUN_020e961c()->f17 = 0;
        FUN_020e961c()->f20 = 0;
    }
    return r4;
}
