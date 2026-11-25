//cpp
// flags: -O4,s
extern "C" int FUN_0209ed38(short *pair) {
    int r2 = 0;
    int r3 = 0;
    int r4 = 0;
    if (pair[0] >= 0 && pair[0] < 5) r4 = 1;
    if (r4) {
        if (pair[1] > 0) r3 = 1;
    }
    if (r3) {
        if (pair[1] <= 24) r2 = 1;
    }
    return r2;
}
