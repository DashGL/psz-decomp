// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xe4, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe4, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void *FUN_0202153c(unsigned int);
extern int FUN_02021a08(unsigned int);
extern void FUN_02021ad8(void *);
extern short FUN_02021490(void *, int);
extern void FUN_02021f78(void *, int, int, int, unsigned int, int);

#define BSWAP16(x) ((unsigned short)(((int)(x) >> 8) | ((x) << 8)))
#define READ32_BE(p) ((BSWAP16((p)[0]) << 16) | BSWAP16((p)[1]))

void FUN_020227bc(unsigned short *a0, unsigned char *a1, int a2) {
    void *r7 = FUN_0202153c(READ32_BE(a0 + 6));
    short s;
    if (r7 == 0) {
        return;
    }
    if (FUN_02021a08(r7) == 0) {
        FUN_02021ad8(r7);
        return;
    }
    a1[0] = 0;
    *(unsigned short *)(a1 + 2) = 0;
    s = FUN_02021490(a1, a2);
    *(unsigned short *)(a1 + 2) = BSWAP16(s);
    FUN_02021f78(a1, a2, 0, 0, READ32_BE(a0 + 6), 1);
}
