// flags: -O4,p -noThumb
extern unsigned char DAT_021116a0[];
struct S558f8 {
    int *f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
};
extern int FUN_020683d4(void);
extern void FUN_02068728(void);
extern void FUN_02066a2c(int *);
extern void FUN_020683e8(int);

void FUN_0205597c(int r7, int r6) {
    struct S558f8 *r4 = (struct S558f8 *)((unsigned int)DAT_021116a0 + 0u);
    int r5 = FUN_020683d4();
    if (r4->f8 != r7 || r4->fc == 0) {
        FUN_02068728();
    } else {
        if (r4->f18 != r6) {
            FUN_02068728();
        }
        if (--r4->fc == 0) {
            r4->f8 = -3;
            r4->f18 = 0;
            FUN_02066a2c(&r4->f10);
        }
    }
    *r4->f0 = 0;
    FUN_020683e8(r5);
}
