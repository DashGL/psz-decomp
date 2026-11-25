// flags: -O4,s -noThumb
extern int FUN_020213c0(void *, int, int);
int FUN_020214ac(void *a, int b, char *c, int d) {
    int r0 = FUN_020213c0(a, b, d);
    int t = FUN_020213c0(c + 0xc, 8, r0);
    int r1 = t + b;
    if (r1 & 0x10000) {
        r1 = (unsigned short)(r1 + 1);
    }
    return (r1 != 0xffff) ? 1 : 0;
}
