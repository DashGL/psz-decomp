// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,p
extern unsigned char *FUN_020e961c(void);
extern int FUN_020e59d8(int, int, int, int, int *, int);
extern int FUN_020e6b74(int);
extern long long FUN_02067e0c(void);
int FUN_020e7fd0(int a, int b) {
    int sp8;
    int r1;
    unsigned char *r4;
    if (b == 0xd) {
        sp8 = *(int *)(FUN_020e961c() + 0x20c);
        r1 = 1;
    } else {
        r1 = 0;
    }
    if (FUN_020e6b74(FUN_020e59d8(b, a, 0, 0, &sp8, r1)) != 0) {
        return 0;
    }
    r4 = FUN_020e961c();
    *(long long *)(r4 + 0x1e8) = FUN_02067e0c();
    return 1;
}
