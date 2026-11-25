// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc4, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02065010(int);
extern void FUN_02065d44(int, void *, int);
extern int FUN_020683d4(void);
extern void FUN_01ff80b0(int, int, int, unsigned int);
extern void FUN_020683e8(int);

void FUN_02064eb4(int a0, int a1, int a2, unsigned int a3, void (*a4)(int), int a5) {
    if (a3 == 0) {
        if (a4 != 0) {
            a4(a5);
        }
        return;
    }
    FUN_02065010(a0);
    if (a4 != 0) {
        int r4;
        FUN_02065d44(a0, (void *)a4, a5);
        r4 = FUN_020683d4();
        *(volatile int *)(0x040000e0 + (a0 << 2)) = a2;
        FUN_01ff80b0(a0, 0x040000e0 + (a0 << 2), a1, (a3 >> 2) | 0xc5000000u);
        FUN_020683e8(r4);
    } else {
        int r4 = FUN_020683d4();
        *(volatile int *)(0x040000e0 + (a0 << 2)) = a2;
        FUN_01ff80b0(a0, 0x040000e0 + (a0 << 2), a1, (a3 >> 2) | 0x85000000u);
        FUN_020683e8(r4);
    }
}
