// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3a, exact bytes and relocation targets.
extern int FUN_020e961c(void);
extern int FUN_020e59d8(int, int, int, int, int, int);

int FUN_020e6fc4(int a) {
    int res = FUN_020e59d8(5, a, *(int *)(FUN_020e961c() + 0x24), *(unsigned short *)(FUN_020e961c() + 0xa4), 0, 0);
    *(int *)(FUN_020e961c() + 0x204) = 0;
    return res;
}
