// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
struct S {
    char pad[0xd];
    unsigned char fd;
    char pad2[0xf4 - 0xe];
    int ff4[1];
};
extern struct S *FUN_020e961c(void);

int FUN_020e84e4(int a, int b) {
    int i = (b == 0) ? 1 : 0;
    for (; i <= FUN_020e961c()->fd; i++) {
        if (a == FUN_020e961c()->ff4[i]) {
            return *((unsigned char *)FUN_020e961c() + i + 0x2d0);
        }
    }
    return 0xff;
}
