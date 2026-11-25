//cpp
// flags: -O4,p
extern "C" volatile int DAT_0219abd8[];
extern "C" void FUN_overlay_25__02198474(int *p) {
    p[53] += DAT_0219abd8[4];
    if (**(signed char **)p[5] == 14) {
        int over = 0;
        if (DAT_0219abd8[1] < p[53]) over = 1;
        if (over) p[53] = DAT_0219abd8[1];
    } else {
        int over = 0;
        if (DAT_0219abd8[2] < p[53]) over = 1;
        if (over) p[53] = DAT_0219abd8[2];
    }
}
