// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
struct S {
    char pad[0xd];
    unsigned char fd;
    char pad2[0x2d0 - 0xe];
    unsigned char f2d0[0x20];
    unsigned int f2f0;
};
extern struct S *FUN_020e961c(void);

unsigned int FUN_020e852c(int a) {
    unsigned int r = 0;
    int i;
    if (a != 0) {
        return FUN_020e961c()->f2f0 & ~1u;
    }
    for (i = 1; i <= FUN_020e961c()->fd; i++) {
        r |= 1 << FUN_020e961c()->f2d0[i];
    }
    return r;
}
