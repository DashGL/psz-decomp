// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x108, exact bytes and relocation targets.
// flags: -O4,s -noThumb
#pragma opt_propagation off
extern unsigned char *FUN_02024de8(unsigned char *, int, int *);
extern unsigned char *FUN_02024f74(int, int, unsigned char *, int);
extern void FUN_02024890(unsigned char *, int);
extern unsigned char DAT_021075aa[];
extern volatile unsigned int DAT_02107054[];

int FUN_0202506c(int arg0) {
    int res;
    unsigned char *buf = DAT_021075aa;
    unsigned char *p = FUN_02024de8(buf, 3, &res);
    if (arg0 == 0) {
        p[0] = 0x32;
        p[1] = 4;
        p[2] = (int)(unsigned short)(DAT_02107054[0xd] >> 16) >> 8;
        p[3] = (unsigned char)(DAT_02107054[0xd] >> 16);
        p[4] = (int)(unsigned short)DAT_02107054[0xd] >> 8;
        p[5] = (unsigned char)DAT_02107054[0xd];
        p[6] = 0x36;
        p[7] = 4;
        p[8] = (int)(unsigned short)(DAT_02107054[8] >> 16) >> 8;
        p[9] = (unsigned char)(DAT_02107054[8] >> 16);
        p[10] = (int)(unsigned short)DAT_02107054[8] >> 8;
        p[11] = (unsigned char)DAT_02107054[8];
        p += 12;
    }
    *p = 0xff;
    p = FUN_02024f74(0, 0x12c, p + 1, (p + 1) - buf);
    FUN_02024890(buf, p - buf);
    return res;
}
