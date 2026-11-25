// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern int D_0211d744;
extern int FUN_020c6e0c(int);
extern void FUN_020d5e9c(int);
extern int FUN_020c6e10(int, int);

void FUN_020d6054(void) {
    int i;
    if (D_0211d744 == 0 || FUN_020c6e0c(D_0211d744) == 0) {
        FUN_020d5e9c(0);
        return;
    }
    for (i = FUN_020c6e0c(D_0211d744) - 1; i >= 0; i--) {
        FUN_020d5e9c(FUN_020c6e10(D_0211d744, i));
    }
}
