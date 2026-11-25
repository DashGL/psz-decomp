// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x134, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern unsigned short DAT_0211259c[];
extern void FUN_0205cfdc(unsigned short);

void FUN_0205d8e0(int mode) {
    DAT_0211259c[0] = (unsigned short)((DAT_0211259c[0] | DAT_0211259c[6]) & ~mode);
    DAT_0211259c[6] = (unsigned short)mode;
    switch (mode) {
    case 3:
        *(volatile unsigned char *)0x04000240 = 0x93;
    case 2:
        *(volatile unsigned char *)0x04000241 = 0x9b;
        *(volatile unsigned short *)0x04000060 |= 0x4000;
        break;
    case 12:
        *(volatile unsigned char *)0x04000242 = 0x93;
    case 8:
        *(volatile unsigned char *)0x04000243 = 0x9b;
        *(volatile unsigned short *)0x04000060 |= 0x4000;
        break;
    case 0:
        *(volatile unsigned short *)0x04000060 &= ~0x4000;
        break;
    case 1:
        *(volatile unsigned char *)0x04000240 = 0x9b;
        *(volatile unsigned short *)0x04000060 |= 0x4000;
        break;
    case 4:
        *(volatile unsigned char *)0x04000242 = 0x9b;
        *(volatile unsigned short *)0x04000060 |= 0x4000;
        break;
    }
    FUN_0205cfdc(DAT_0211259c[0]);
}
