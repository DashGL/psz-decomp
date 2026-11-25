// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_0205cf7c(void);
extern int FUN_020661c4(void);
extern void FUN_02068728(void);
extern void FUN_02064d58(int a, const void *b, void *c, int d);
extern void FUN_02065510(int a, void *b, int c);
extern unsigned short DAT_02112598[];
extern int DAT_020f96e0[];

void FUN_0205cc88(void) {
    *(volatile unsigned short *)0x04000304 |= 0x8000;
    *(volatile unsigned short *)0x04000304 = (*(volatile unsigned short *)0x04000304 & ~0x020e) | 0x020e;
    *(volatile unsigned short *)0x04000304 |= 1;
    FUN_0205cf7c();
    while (*(volatile unsigned short *)((char *)DAT_02112598 + 2) == 0) {
        int r6 = FUN_020661c4();
        if (r6 == -3) {
            FUN_02068728();
        }
        *(volatile unsigned short *)((char *)DAT_02112598 + 2) = r6;
    }
    *(volatile unsigned short *)0x04000004 = 0;
    *(volatile unsigned int *)0x04000000 = 0;
    if (DAT_020f96e0[1] != -1) {
        FUN_02064d58(DAT_020f96e0[1], (void *)0x04000008, 0, 0x60);
        *(volatile unsigned short *)0x0400006c = 0;
        FUN_02064d58(DAT_020f96e0[1], (void *)0x04001000, 0, 0x70);
    } else {
        FUN_02065510(0, (void *)0x04000008, 0x60);
        *(volatile unsigned short *)0x0400006c = 0;
        FUN_02065510(0, (void *)0x04001000, 0x70);
    }
    *(volatile unsigned short *)0x04000020 = 0x100;
    *(volatile unsigned short *)0x04000026 = 0x100;
    *(volatile unsigned short *)0x04000030 = 0x100;
    *(volatile unsigned short *)0x04000036 = 0x100;
    *(volatile unsigned short *)0x04001020 = 0x100;
    *(volatile unsigned short *)0x04001026 = 0x100;
    *(volatile unsigned short *)0x04001030 = 0x100;
    *(volatile unsigned short *)0x04001036 = 0x100;
}
