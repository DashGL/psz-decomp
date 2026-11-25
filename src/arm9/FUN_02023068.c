// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd8, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020229a0(unsigned int, unsigned int);
extern int FUN_02022fe0(void *, int, int);
extern int FUN_02022a90(void *, int);
extern void FUN_02022ef4(void *, int, int);
extern void FUN_02066b00(void);

#define BSWAP16(x) ((unsigned short)(((int)(x) >> 8) | ((x) << 8)))
#define READ32_BE(p) ((BSWAP16((p)[0]) << 16) | BSWAP16((p)[1]))

void FUN_02023068(unsigned short *a0, int a1, int a2) {
    int r2;
    if (FUN_020229a0(READ32_BE(a0 + 6), READ32_BE(a0 + 8)) == 0) {
        return;
    }
    if (FUN_02022fe0(a0, a1, a2) != 0) {
        return;
    }
    r2 = FUN_02022a90(a0, a1);
    if (r2 != 0) {
        FUN_02022ef4(a0, a1, r2);
        return;
    }
    FUN_02066b00();
    r2 = FUN_02022a90(a0, a1);
    if (r2 == 0) {
        return;
    }
    FUN_02022ef4(a0, a1, r2);
}
