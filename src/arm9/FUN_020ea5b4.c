// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
extern int FUN_020ea514(int, int, int);
extern int FUN_020015ac(int, int, int);

int FUN_020ea5b4(int a, int b, int c, int d) {
    if (FUN_020ea514(b, c, d) == 0) {
        return 0;
    }
    if (FUN_020015ac(a, d, c) == 0) {
        return 1;
    }
    return 0;
}
