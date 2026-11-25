// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct S8 {
    int a;
    int b;
};
int FUN_02016e2c(int *a, int b, int c) {
    int r6;
    int (*fn)(int *);
    int sp8 = c;
    struct S8 s = {0, 0};
    fn = (int (*)(int *))a[1];
    r6 = 1;
    for (int r0 = fn(&sp8); r0 != 0; r0 = fn(&sp8)) {
        if (r0 == 10) {
            r6++;
        }
    }
    return r6 * (b + ((signed char *)a[0])[1]) - b;
}
