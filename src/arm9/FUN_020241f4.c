// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_0202b7a4(void *);
extern void FUN_020241a4(void *);
extern int *D_021181a0[];

void FUN_020241f4(void) {
    unsigned char *p = (unsigned char *)D_021181a0[1][0x29];
    if (p == 0) {
        return;
    }
    if (p[9] != 0) {
        FUN_0202b7a4(p);
    }
    FUN_020241a4(p);
}
