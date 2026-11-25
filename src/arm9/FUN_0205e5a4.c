// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_0205e71c(void);
extern void FUN_0205e744(void);
extern void FUN_0205e938(void);

void FUN_0205e5a4(void) {
    FUN_0205e71c();
    *(volatile unsigned int *)0x04000504 = 0;
    while (*(volatile unsigned int *)0x04000600 & 0x08000000u) {
    }
    *(volatile unsigned short *)0x04000060 = 0;
    *(volatile unsigned int *)0x04000600 = 0;
    *(volatile unsigned int *)0x04000010 = 0;
    *(volatile unsigned short *)0x04000060 |= 0x2000;
    *(volatile unsigned short *)0x04000060 |= 0x1000;
    *(volatile unsigned short *)0x04000060 &= ~0x3002;
    *(volatile unsigned short *)0x04000060 = (*(volatile unsigned short *)0x04000060 & ~0x3000) | 0x10;
    *(volatile unsigned short *)0x04000060 &= 0xcffb;
    *(volatile unsigned int *)0x04000600 |= 0x8000u;
    *(volatile unsigned int *)0x04000600 = (*(volatile unsigned int *)0x04000600 & ~0xc0000000u) | 0x80000000u;
    FUN_0205e744();
    *(volatile unsigned int *)0x04000350 = 0;
    *(volatile unsigned short *)0x04000354 = 0x7fff;
    *(volatile unsigned short *)0x04000356 = 0;
    *(volatile unsigned int *)0x04000358 = 0;
    *(volatile unsigned short *)0x0400035c = 0;
    *(volatile unsigned short *)0x04000008 &= ~3;
    FUN_0205e938();
    *(volatile unsigned int *)0x040004a4 = 0x001f0080;
    *(volatile unsigned int *)0x040004a8 = 0;
    *(volatile unsigned int *)0x040004ac = 0;
}
