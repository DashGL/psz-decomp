// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern struct {
    char pad0[0x30];
    volatile unsigned int f30;
    char pad1[0x24];
    int f58;
    unsigned int f5c;
} D_02107054;

void FUN_020219c4(void) {
    int s = FUN_020683d4();
    D_02107054.f30 += *(unsigned short *)(D_02107054.f58 + D_02107054.f30);
    if (D_02107054.f30 >= D_02107054.f5c) {
        D_02107054.f30 = 0;
    }
    FUN_020683e8(s);
}
