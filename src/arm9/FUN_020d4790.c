// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020d4584(void *, int, int, int *);
extern void FUN_020d2b30(void *, int, int);
extern int FUN_020d4640(void *);
int FUN_020d4790(char *a, int b, int c, int d) {
    int sp0;
    if (FUN_020d4584(a, 3, d + 0x27 + *(int *)(*(int *)(a + 8) + 0x44), &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    FUN_020d2b30(a + 0x50, b, 0x20);
    FUN_020d2b30(a + 0x50, c, d);
    if (FUN_020d4640(a) != 0) {
        return 1;
    }
    return 0;
}
