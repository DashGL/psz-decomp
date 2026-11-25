// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_0202b460(int, void *);
extern void FUN_020243ec(int, void *);
extern int *D_021181a0[];

void FUN_0202447c(int a) {
    unsigned char *p = (unsigned char *)D_021181a0[1][0x29];
    if (p == 0) {
        return;
    }
    if (p[9] != 0) {
        FUN_0202b460(a, p);
        return;
    }
    FUN_020243ec(a, p);
}
