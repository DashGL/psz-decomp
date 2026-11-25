// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern unsigned short DAT_0211259c[];
extern void FUN_0205cfdc(unsigned short);

void FUN_0205d574(int param_1) {
    DAT_0211259c[0] = (unsigned short)(~param_1 & (DAT_0211259c[0] | DAT_0211259c[8]));
    DAT_0211259c[8] = (unsigned short)param_1;
    switch (param_1) {
    case 0x20:
        *(volatile unsigned int *)0x04000000 |= 0x80000000u;
        *(volatile unsigned char *)0x04000245 = 0x85;
        break;
    case 0x40:
        *(volatile unsigned int *)0x04000000 |= 0x80000000u;
        *(volatile unsigned char *)0x04000246 = 0x85;
        break;
    case 0:
        *(volatile unsigned int *)0x04000000 &= ~0x80000000u;
        break;
    }
    FUN_0205cfdc(DAT_0211259c[0]);
}
