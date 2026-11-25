// flags: -O4,s
struct A_0209c864 {
    short f0;
    short f2;
};
struct Inner_0209c864 {
    signed char f0;
    signed char f1;
};
struct B_0209c864 {
    int f0;
    struct Inner_0209c864 inner;
};
int FUN_0209c864(void *unused, struct A_0209c864 *a, struct B_0209c864 *b) {
    struct Inner_0209c864 *in = &b->inner;
    (void)unused;
    if (in->f0 == 5 && in->f1 == 0 && a->f2 == 0) {
        return 0;
    }
    return 1;
}
