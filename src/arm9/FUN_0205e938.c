// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
// flags: -noThumb
extern int DAT_020f96e4;
extern void FUN_02064eb4(int a, void *b, int c, int d, int e, int f);
extern void FUN_02064d58(int a, void *b, int c, int d);
extern void FUN_02065510(int a, void *b, int c);

void FUN_0205e938(void) {
    int i;
    if (DAT_020f96e4 != -1) {
        FUN_02064eb4(DAT_020f96e4, (void *)0x04000330, 0, 0x10, 0, 0);
        FUN_02064d58(DAT_020f96e4, (void *)0x04000360, 0, 0x60);
    } else {
        FUN_02065510(0, (void *)0x04000330, 0x10);
        FUN_02065510(0, (void *)0x04000360, 0x60);
    }
    for (i = 0; i < 0x20; i++) {
        *(volatile int *)0x040004d0 = 0;
    }
}
