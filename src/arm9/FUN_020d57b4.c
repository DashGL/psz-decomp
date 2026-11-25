// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,p
extern void *D_0211d744;
extern void *FUN_020c6da8(int, int, int);
extern void FUN_020c6e28(void *, void *);
extern int FUN_020c6e0c(void *);
extern void *FUN_020c6e10(void *, int);
void *FUN_020d57b4(void) {
    int s[21] = {0};
    if (D_0211d744 == 0) {
        D_0211d744 = FUN_020c6da8(0x54, 4, 0);
    }
    FUN_020c6e28(D_0211d744, s);
    return FUN_020c6e10(D_0211d744, FUN_020c6e0c(D_0211d744) - 1);
}
