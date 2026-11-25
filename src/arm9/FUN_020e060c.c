// flags: -O4,s
extern void *FUN_020e05b8(int, unsigned int, int);
extern unsigned int FUN_020e0594(void *);
extern void FUN_02065774(void *, void *, unsigned int);
extern void FUN_020e05d8(int, void *, unsigned int);
void *FUN_020e060c(int a, void *b, unsigned int c, unsigned int d, int e) {
    void *p = FUN_020e05b8(a, d, e);
    if (p == 0) return 0;
    if (b != 0) {
        c = FUN_020e0594(b);
        if (c <= d) d = c;
        FUN_02065774(b, p, d);
        FUN_020e05d8(a, b, c);
    }
    return p;
}
