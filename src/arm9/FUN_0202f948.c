// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern char *FUN_0202e424(void);
extern void FUN_020683e8(int);
int FUN_0202f948(void) {
    int r4 = FUN_020683d4();
    char *r0 = FUN_0202e424();
    int r5 = 0;
    if (r0 == 0) {
        FUN_020683e8(r4);
        return 0;
    }
    if (*(int **)(r0 + 0x2270) != 0 && *(unsigned int *)(r0 + 0x2274) > 0xc) {
        r5 = **(int **)(r0 + 0x2270);
    }
    FUN_020683e8(r4);
    return r5;
}
