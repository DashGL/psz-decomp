//cpp
// flags: -O4,p
extern "C" int FUN_020c3788(void *, signed char *, int, int, int);
extern "C" int FUN_020c3864(void *, signed char *, int, int, int);
extern "C" int FUN_020c38a0(void *a, signed char *b, int c, int d, int e) {
    int mode = 0;
    if (*b == 1) {
        mode = 1;
    }
    if (mode == 1) {
        return FUN_020c3788(a, b + 2, c, d, e);
    }
    return FUN_020c3864(a, b + 2, c, d, e);
}
