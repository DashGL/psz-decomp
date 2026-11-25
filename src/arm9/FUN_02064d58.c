// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_01ff80d4(int, volatile unsigned int *, int, unsigned int);

void FUN_02064d58(int chan, int dest, int val, unsigned int size) {
    volatile unsigned int *cnt;
    int s;
    if (size == 0) {
        return;
    }
    cnt = (volatile unsigned int *)(0x040000b0 + ((chan * 3 + 2) << 2));
    while (*cnt & 0x80000000u) {
    }
    s = FUN_020683d4();
    *(volatile int *)(0x040000e0 + (chan << 2)) = val;
    FUN_01ff80d4(chan, (volatile unsigned int *)(0x040000e0 + (chan << 2)), dest, (size >> 2) | 0x85000000u);
    FUN_020683e8(s);
    while (*cnt & 0x80000000u) {
    }
}
