// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,p
extern unsigned char *FUN_020e961c(void);
extern int FUN_020e59d8(int, int, int, unsigned short, void *, int);
extern void FUN_020d36ec(int);

int FUN_020e7224(void) {
    int i;
    int err;
    for (i = 1; i <= FUN_020e961c()[0xd]; i++) {
        err = FUN_020e59d8(
            10,
            *(int *)(FUN_020e961c() + i * 4 + 0xf4),
            *(int *)(FUN_020e961c() + i * 4 + 0x24),
            *(unsigned short *)(FUN_020e961c() + i * 2 + 0xa4),
            FUN_020e961c() + 0x348,
            *(int *)(FUN_020e961c() + 0x348) + 1);
        if (err != 0) {
            return err;
        }
    }
    FUN_020e961c()[0x17] = 0;
    *(int *)(FUN_020e961c() + 0x20) = 0;
    FUN_020e961c()[0x1a8] = 1;
    FUN_020d36ec(**(int **)(FUN_020e961c() + 4));
    FUN_020e961c()[0x1a8] = 0;
    return 0;
}
