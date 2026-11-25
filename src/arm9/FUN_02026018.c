// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02066f0c(void *, void *, int);
extern int FUN_02025fb4(void *, void *);
extern void FUN_02066fc8(void *, void *, int);
int FUN_02026018(void *a, char *b) {
    int sp4;
    int sp0;
    char sp8[0x20];
    if (b[0xd] == 1) {
        FUN_02066f0c(sp8, &sp0, 1);
        *(void **)(b + 8) = sp8;
        FUN_02025fb4(a, b);
        FUN_02066fc8(sp8, &sp4, 1);
    } else {
        *(void **)(b + 8) = 0;
        sp4 = FUN_02025fb4(a, b);
    }
    return sp4;
}
