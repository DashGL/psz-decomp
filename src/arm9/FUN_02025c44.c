// flags: -O4,p -noThumb
#pragma opt_propagation off
typedef unsigned int U;
extern U *DAT_020f6968;
extern volatile U DAT_02108890[];
extern volatile U DAT_02108880[];
extern U DAT_021070a4;
extern unsigned short DAT_020f6988[];
extern void FUN_020656b8(void *, int, U);
extern void FUN_02021388(int);
extern void FUN_0202fefc(void *);
extern void FUN_02021330(void *);
extern void FUN_020210a4(void *);
extern void FUN_02025e24(void);
extern void FUN_02025e0c(void);
extern void FUN_02025da0(void);
extern void FUN_020218ac(void);
extern void FUN_02027a14(void);

void FUN_02025c44(void) {
    volatile U *q = DAT_02108890;
    U *p = DAT_020f6968;
    U val;
    int mtu;
    int rwin;

    FUN_020656b8((void *)q, 0, 0x30);
    DAT_02108880[5] = p[6];
    DAT_02108880[6] = p[7];
    DAT_02108880[8] = (U)FUN_02025e24;
    DAT_02108880[9] = 0;
    DAT_02108880[10] = 0;
    DAT_02108880[15] = DAT_02108880[0];

    val = p[9];
    if (val == 0) {
        val = 0x4000;
    }
    q[8] = val;

    val = p[10];
    if (val == 0) {
        val = ((U (*)(U))DAT_020f6968[6])(q[8]);
    }
    q[7] = val;

    mtu = p[12];
    rwin = p[13];
    if (mtu == 0) {
        mtu = 0x240;
    }
    if (rwin == 0) {
        rwin = 0x10c0;
    }
    DAT_020f6988[1] = (unsigned short)rwin;
    DAT_020f6988[2] = (unsigned short)(rwin / 2);
    q[9] = mtu - 0x28;
    DAT_021070a4 = 0;

    {
        U flag = p[0];
        U one = 1;
        if (flag != 0) {
            q[0] = 0;
            q[3] = (U)FUN_02025e0c;
            DAT_02108880[2] = one;
            q[10] = DAT_02108880[1];
        } else {
            DAT_02108880[2] = 0;
            q[0] = one;
            q[3] = (U)FUN_02025da0;
        }
    }

    val = p[11];
    if (val == 0) {
        val = 11;
    }
    FUN_02021388(val);
    FUN_0202fefc((void *)FUN_020218ac);
    FUN_02021330((void *)FUN_02027a14);
    FUN_020210a4((void *)q);
}
