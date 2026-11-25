// flags: -O4,p -noThumb
extern unsigned short DAT_0211259c[];
extern void FUN_0205cfdc(unsigned short);
void FUN_0205d324(int p0) {
    DAT_0211259c[0] = (DAT_0211259c[0] | DAT_0211259c[2]) & ~p0;
    DAT_0211259c[2] = p0;
    switch (p0) {
    case 0: break;
    case 3: *(volatile unsigned char *)0x04000241 = 0x8a;
    case 1: *(volatile unsigned char *)0x04000240 = 0x82; break;
    case 2: *(volatile unsigned char *)0x04000241 = 0x82; break;
    case 0x70: *(volatile unsigned char *)0x04000246 = 0x9a;
    case 0x30: *(volatile unsigned char *)0x04000245 = 0x92;
    case 0x10: *(volatile unsigned char *)0x04000244 = 0x82; break;
    case 0x50: *(volatile unsigned char *)0x04000246 = 0x92; *(volatile unsigned char *)0x04000244 = 0x82; break;
    case 0x60: *(volatile unsigned char *)0x04000246 = 0x8a;
    case 0x20: *(volatile unsigned char *)0x04000245 = 0x82; break;
    case 0x40: *(volatile unsigned char *)0x04000246 = 0x82; break;
    }
    FUN_0205cfdc(DAT_0211259c[0]);
}
