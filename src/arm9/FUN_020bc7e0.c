//cpp
// flags: -O4,s
struct Pair8 {
    int a, b;
    inline Pair8(int x, int y) : a(x), b(y) {}
};
struct Sub10 { int x[4]; };
struct SrcBC {
    int f0; void *f4; int f8; void *fc;
    int f10a, f10b; int f18a, f18b;
    int count; Pair8 *items;
    unsigned short f28; unsigned short f2a; int f2c;
};
struct DstBC {
    int f0; int f4; char f8[0x20]; char f28[0x10];
    void *f38; unsigned short f3c; unsigned short f3e; int f40;
};
extern "C" {
extern void FUN_020bc764(void *, void *, int);
extern void FUN_020bc7b4(void *, void *, int);
extern void FUN_020bc750(Sub10 *, const Pair8 &, const Pair8 &);
extern void FUN_020bc7a0(void *, Sub10 *);
extern void *FUN_020bc6d4(int);

DstBC *FUN_020bc7e0(DstBC *dst, SrcBC *src) {
    Sub10 tmp;
    int n;
    dst->f0 = src->f0;
    dst->f4 = src->f8;
    FUN_020bc764(dst->f8, src->f4, src->f0);
    FUN_020bc7b4(dst->f28, src->fc, src->f8);
    dst->f38 = 0;
    dst->f3c = src->f28;
    dst->f3e = src->f2a;
    dst->f40 = src->f2c;
    FUN_020bc750(&tmp, Pair8(src->f10a, src->f10b), Pair8(src->f18a, src->f18b));
    FUN_020bc7a0(dst->f8, &tmp);
    n = src->count;
    if (n != 0) {
        Pair8 *p = src->items;
        while (n != 0) {
            int k = p->a;
            n--;
            if (k == 0) dst->f38 = FUN_020bc6d4(p->b);
            p++;
        }
    }
    return dst;
}
}
