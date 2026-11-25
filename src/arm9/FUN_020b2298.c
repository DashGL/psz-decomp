// flags: -O4,s
#pragma thumb off
extern void FUN_020144f0(void);
extern void FUN_02014714(void);
#pragma thumb reset
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_020c32b4(void *, int);
int FUN_020b2298(int *s) {
    int b[4], a[4], show;
    FUN_020144f0();
    show = (s[4] == 1 || s[4] == 2);
    if (show) {
        FUN_02071d0c(b);
        FUN_02090b44(b);
        b[2] = 0x70000;
        b[3] = 0x133000;
        if (s[4] == 1)
            *(short *)b = 1;
        else if (s[4] == 2)
            *(short *)b = 0;
        FUN_020c32b4(b, s[6]);
    }
    if (show) {
        FUN_02071d0c(a);
        FUN_02090b44(a);
        a[2] = 0x11000;
        a[3] = 0x136000 + (s[1] * 3 << 14);
        *(short *)a = 3;
        FUN_020c32b4(a, s[6]);
    }
    FUN_02014714();
    return 0;
}
