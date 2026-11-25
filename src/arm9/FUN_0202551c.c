// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xfc, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02024028(void);
extern void FUN_02023f9c(void);
extern void FUN_02023fc8(int, int, int);
extern int FUN_0202506c(int);
extern int FUN_02025174(int, int);
extern void FUN_0202405c(void);
extern unsigned int DAT_02107054[];

int FUN_0202551c(unsigned int *arg0, int arg1) {
    int res;
    int i;

    FUN_02024028();
    FUN_02023f9c();
    if (arg1 == 1) {
        FUN_02023fc8(0x44, 0x43, DAT_02107054[8]);
    } else {
        FUN_02023fc8(0x44, 0x43, -1);
    }
    for (i = 0; i < 4; i++) {
        res = FUN_02025174(FUN_0202506c(arg1), i);
        if (res != 0) {
            break;
        }
    }
    FUN_0202405c();
    if (res == 2) {
        *arg0 = *(volatile unsigned int *)&DAT_02107054[0x13] >> 1;
        DAT_02107054[0xe] = (*(volatile unsigned int *)&DAT_02107054[0x13] * 3) >> 3;
        return 1;
    }
    {
        unsigned int v = (DAT_02107054[0xe] >>= 1);
        *arg0 = v;
        switch (arg1) {
        case 1:
            if (v < 0x3c) {
                *arg0 = 1;
                DAT_02107054[0xe] = DAT_02107054[0x13] >> 3;
            }
            break;
        case 2:
            if (v < 0x3c) {
                *arg0 = 1;
            }
            break;
        }
    }
    return 0;
}
