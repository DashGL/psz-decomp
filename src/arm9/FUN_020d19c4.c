// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
extern char DAT_020fe5ec[];
extern int FUN_020c75b4(int, int, int *, int *);
extern void FUN_020d1b58(void *, int, char *);
extern void FUN_020cb778(void *, int, int);
int FUN_020d19c4(void *a, int b, int *c) {
    int sp4 = 0;
    int sp0 = 0;
    int r0 = FUN_020c75b4(b, 0, &sp4, &sp0);
    if (r0 == -1) {
        FUN_020d1b58(a, 5, DAT_020fe5ec);
        FUN_020cb778(a, 3, 1);
        return 3;
    }
    if (r0 > 0) {
        if (sp0 != 0) {
            *c = 4;
            return 0;
        }
        if (sp4 != 0) {
            *c = 3;
            return 0;
        }
    }
    *c = 0;
    return 0;
}
