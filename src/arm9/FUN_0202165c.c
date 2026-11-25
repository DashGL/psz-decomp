// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern const void *D_020f6950;
extern unsigned char D_02107054;
extern void FUN_02065774(const void *, char *, int);
extern int FUN_0202ff1c(char *, char *, int, int, int);
void FUN_0202165c(char *a, int b, int c, int d) {
    FUN_02065774(&D_020f6950, a + 6, 6);
    D_02107054 = (FUN_0202ff1c(a, a + 6, b - 6, c, d) < 0);
}
