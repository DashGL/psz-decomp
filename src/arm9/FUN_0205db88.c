// flags: -O4,p -noThumb
extern unsigned short DAT_0211259c[];
extern void FUN_0205cfdc(unsigned short);
void FUN_0205db88(int param_1) {
    DAT_0211259c[0] = (DAT_0211259c[0] | DAT_0211259c[10]) & ~param_1;
    DAT_0211259c[10] = param_1;
    switch (param_1) {
    case 8:
        *(volatile unsigned char *)0x04000243 = 0x84;
        break;
    case 0x100:
        *(volatile unsigned char *)0x04000249 = 0x82;
        break;
    case 0:
        break;
    }
    FUN_0205cfdc(DAT_0211259c[0]);
}
