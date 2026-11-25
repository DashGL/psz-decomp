// version: 2.0/sp1p5
// flags: -O4,p -noThumb
extern int FUN_02069324(int);
extern int FUN_020693b8(int);
long long FUN_020693d0(int a, int b) {
    int r4 = FUN_02069324(a);
    int r0;
    if (r4 == -1) {
        return -1LL;
    }
    r0 = FUN_020693b8(b);
    if (r0 == -1) {
        return -1LL;
    }
    return (long long)r4 * 86400LL + r0;
}
