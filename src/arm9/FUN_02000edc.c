// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_0200376c(void *, int, int, int, int);
extern void FUN_02000cac(void);
extern int D_020f61e4;

void FUN_02000edc(int a, int b, int c, int d) {
    FUN_0200376c(&D_020f61e4, a, b, c, d);
    FUN_02000cac();
}
