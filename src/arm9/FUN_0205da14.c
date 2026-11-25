// flags: -O4,p -noThumb
extern unsigned short DAT_0211259c[];
extern void FUN_0205cfdc(unsigned short);

void FUN_0205da14(int param_1) {
    DAT_0211259c[0] = (unsigned short)(~param_1 & (DAT_0211259c[0] | DAT_0211259c[3]));
    DAT_0211259c[3] = (unsigned short)param_1;
    if (param_1 > 8) {
        goto gt8;
    }
    if (param_1 >= 8) {
        goto case8;
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
gt8:
    if (param_1 != 0xc) {
        goto done;
    }
    *(volatile unsigned char *)0x04000243 = 0x8a;
    *(volatile unsigned char *)0x04000242 = 0x82;
    goto done;
case4:
    *(volatile unsigned char *)0x04000242 = 0x82;
    goto done;
case8:
    *(volatile unsigned char *)0x04000243 = 0x82;
done:
    FUN_0205cfdc(DAT_0211259c[0]);
}
