// flags: -O4,s
struct S_be14c { int x[4]; signed char f10; signed char f11; short f12; };
extern void FUN_020c4450(struct S_be14c *, char *);
extern void FUN_020e26a8(const signed char *, unsigned int, struct S_be14c *, int);
extern void FUN_020be21c(char *, int, struct S_be14c *, char *);

void FUN_020be14c(char *a, int b, int c, const signed char *d) {
    struct S_be14c sp0;
    char *p = *(char **)(a + 0xf50);
    if (p != 0 && b >= 0 && b < 64) {
        char *r4 = p + b * 24;
        const signed char *r2;
        unsigned int r1;
        
        FUN_020c4450(&sp0, r4 + 4);
        sp0.f10 = *(signed char *)(r4 + 0x14);
        sp0.f11 = *(signed char *)(r4 + 0x15);
        sp0.f12 = *(short *)(r4 + 0x16);
        r2 = d;
        for (r1 = 0; r1 < 0xff && *r2 != 0; r1++, r2++) {}
        FUN_020e26a8(d, (r1 + 3) & ~3u, &sp0, 0x14);
        FUN_020be21c(r4, c, &sp0, a + 0xf00);
    }
}
