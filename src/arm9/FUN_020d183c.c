// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern void FUN_02003d54(char *, const char *, int);
extern const int D_020fe568;
extern const int D_020fe578;
extern const int D_020fe53c;
extern const int D_020fe588;

void FUN_020d183c(char *a, const char *b, int c) {
    if (a == 0) {
        FUN_02000edc(&D_020fe568, &D_020fe578, &D_020fe53c, 0x2f);
    }
    if (b == 0) {
        FUN_02000edc(&D_020fe588, &D_020fe578, &D_020fe53c, 0x30);
    }
    FUN_02003d54(a, b, c);
    *(a + c - 1) = 0;
}
