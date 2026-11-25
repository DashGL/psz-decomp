// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x46, exact bytes and relocation targets.
struct S {
    char pad[0x14];
    unsigned char f14;
    char pad2[0x2d0 - 0x15];
    unsigned char f2d0[1];
};
extern struct S *FUN_020e961c(void);

int FUN_020e83a8(void) {
    unsigned char i = 0;
    int j;
    for (; i < 0x20; i++) {
        for (j = 0; j <= FUN_020e961c()->f14; j++) {
            if (i == FUN_020e961c()->f2d0[j]) {
                break;
            }
        }
        if (j > FUN_020e961c()->f14) {
            break;
        }
    }
    return i;
}
