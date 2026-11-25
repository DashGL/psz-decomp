// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_0205cfdc(unsigned short);
extern unsigned short DAT_0211259c[];
void FUN_0205dbf8(unsigned short a) {
    DAT_0211259c[0] = (DAT_0211259c[0] | DAT_0211259c[0xb]) & ~a;
    DAT_0211259c[0xb] = a;
    if (a != 0) {
        if (a == 0x80) {
            *(volatile unsigned int *)0x04001000 |= 0x40000000u;
            *(volatile unsigned char *)0x04000248 = 0x82;
        }
    } else {
        *(volatile unsigned int *)0x04001000 &= ~0x40000000u;
    }
    FUN_0205cfdc(DAT_0211259c[0]);
}
