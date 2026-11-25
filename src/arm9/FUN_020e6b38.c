// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
extern int FUN_020e961c(void);
extern void FUN_0206552c(int *, int, int);

void FUN_020e6b38(int a, int *b) {
    int n = b[0] + 2;
    if ((unsigned int)n > 2) {
        FUN_0206552c(b + 1, FUN_020e961c() + 0x350, (n - 2) * 4);
    }
    *(int *)(FUN_020e961c() + 0x348) = n - 1;
    *(int *)(FUN_020e961c() + 0x34c) = a;
}
