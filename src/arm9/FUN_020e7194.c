// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
struct State {
    unsigned char pad0[0xd];
    unsigned char f0d;
    unsigned char pad1[6];
    unsigned char f14;
    unsigned char f15;
    unsigned char pad2[0x186];
    void *f19c;
    unsigned char pad3[0x68];
    int f208;
};
extern struct State *FUN_020e961c(void);
extern void FUN_020e7c40(void);
extern void FUN_020e4a2c(int, int);
extern void FUN_020d5e78(void *);
extern void FUN_020e7b3c(void);
extern void FUN_020e9628(int);
extern int FUN_020e6f24(int);

int FUN_020e7194(int unused_peer) {
    int res = 1;
    if (FUN_020e961c()->f15 == 3) {
        if (FUN_020e961c()->f0d != 0) {
            FUN_020e7c40();
        }
        FUN_020e4a2c(6, -0x13a2e);
        return 0;
    }
    FUN_020e961c()->f14 = FUN_020e961c()->f0d;
    FUN_020e961c()->f208 = 0;
    if (FUN_020e961c()->f19c != 0) {
        FUN_020d5e78(FUN_020e961c()->f19c);
        FUN_020e961c()->f19c = 0;
    }
    if (FUN_020e961c()->f0d != 0) {
        FUN_020e7b3c();
    } else {
        FUN_020e9628(4);
        res = FUN_020e6f24(0);
    }
    return res;
}
