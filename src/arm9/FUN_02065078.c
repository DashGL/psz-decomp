// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);

void FUN_02065078(int a) {
    int r0 = FUN_020683d4();
    volatile unsigned short *cnt = (volatile unsigned short *)(0x040000b0 + ((a * 6 + 5) << 1));
    *cnt &= ~0x3a00;
    *cnt &= ~0x8000;
    {
        unsigned short d1 = *cnt;
        unsigned short d2 = *cnt;
    }
    if (a == 0) {
        volatile int *p = (volatile int *)(0x040000b0 + a * 0xc);
        *(volatile int *)(0x040000b0 + a * 0xc) = 0;
        p[1] = 0;
        p[2] = 0x81400001;
    }
    FUN_020683e8(r0);
}
