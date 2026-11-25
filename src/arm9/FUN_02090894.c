// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf8, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_0200c938(void *, int);
extern void *FUN_020ba894(int);
extern void *FUN_020c2b50(void *);
extern void FUN_02090848(int);
extern void FUN_02090870(int, int, int, int);
extern void *FUN_0200d16c(void);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *, int, int, int);
extern void *FUN_020b3044(void *);
extern void FUN_020c2b84(int, void *, int, int, int);

extern int DAT_020f43f0[];
extern int ARR_020f43f0[];
extern int DAT_020f4400[];
extern int DAT_020fac44[];
extern int DAT_020fac64[];
extern int DAT_020fac80[];
extern int DAT_020fac9c[];

int *FUN_02090894(int *a0) {
    void *r0;
    int i;
    int *r7;
    FUN_0200c938(a0, 0x10);
    a0[4] = 0;
    a0[5] = 0;
    a0[6] = 0;
    r0 = FUN_020ba894(4);
    if (r0 != 0) {
        r0 = FUN_020c2b50(r0);
    }
    a0[4] = (int)r0;
    FUN_02090848(8);
    FUN_02090870(0, 1, 4, 4);
    FUN_02090848(0x10);
    for (i = 0; i < 4; i++) {
        a0[i] = -1;
    }
    switch (*(int *)((char *)FUN_0200d16c() + 0xc)) {
    case 0:
        r0 = FUN_020c1fc8();
        a0[0] = FUN_020c2438(r0, DAT_020f43f0[0], DAT_020f43f0[4], 2);
        r7 = DAT_020fac44;
        break;
    case 3:
        r7 = DAT_020fac64;
        for (i = 1; i <= 2; i++) {
            a0[i] = FUN_020c2438(FUN_020c1fc8(), ARR_020f43f0[i], DAT_020f4400[i], 2);
        }
        break;
    case 4:
    case 5:
        r7 = DAT_020fac80;
        r0 = FUN_020c1fc8();
        a0[3] = FUN_020c2438(r0, DAT_020f43f0[3], DAT_020f43f0[7], 2);
        r0 = FUN_020ba894(8);
        if (r0 != 0) {
            r0 = FUN_020b3044(r0);
        }
        a0[6] = (int)r0;
        break;
    default:
        r7 = DAT_020fac9c;
        break;
    }
    FUN_020c2b84(a0[4], r7, 7, 4, 4);
    return a0;
}
