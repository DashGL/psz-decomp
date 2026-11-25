// flags: -O4,s
extern int DAT_020f91d8[];
extern void *DAT_0210e234;
struct S {
    void *vtbl;
    unsigned int f4;
    unsigned short f8, fa, fc, fe;
    int a[10];
    int b[10];
    unsigned int f60;
    unsigned int f64;
};
void *FUN_0204a704(struct S *s) {
    int i;
    s->vtbl = DAT_020f91d8;
    s->f4 = 0;
    s->f8 = 0;
    s->fa = 0;
    s->fc = 0;
    s->fe = 0;
    s->f60 = 1;
    s->f64 = 0;
    for (i = 0; i < 10; i++) {
        s->a[i] = -1;
        s->b[i] = -1;
    }
    DAT_0210e234 = s;
    return s;
}
