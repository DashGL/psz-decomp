// flags: -O4,p -noThumb
extern unsigned short DAT_0211259c[];
extern void FUN_0205cfdc(unsigned short);

void FUN_0205dae0(int param_1) {
    DAT_0211259c[0] = (unsigned short)(~param_1 & (DAT_0211259c[0] | DAT_0211259c[9]));
    DAT_0211259c[9] = (unsigned short)param_1;
    if (param_1 > 0x80) {
        goto gt80;
    }
    if (param_1 >= 0x80) {
        goto case80;
    }
    if (param_1 > 4) {
        goto done;
    }
    if (param_1 < 0) {
        goto done;
    }
    if (param_1 == 0) {
        goto done;
    }
    if (param_1 != 4) {
        goto done;
    }
    goto case4;
gt80:
    if (param_1 != 0x180) {
        goto done;
    }
    goto case180;
case4:
    *(volatile unsigned char *)0x04000242 = 0x84;
    goto done;
case180:
    *(volatile unsigned char *)0x04000249 = 0x81;
case80:
    *(volatile unsigned char *)0x04000248 = 0x81;
done:
    FUN_0205cfdc(DAT_0211259c[0]);
}
