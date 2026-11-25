// flags: -O4,p
struct S_02131bbc {
    unsigned int a;
    unsigned int b;
    unsigned int arr[8];
};
struct S_02131bbc *FUN_overlay_12__02131bbc(struct S_02131bbc *p, unsigned int value) {
    unsigned int *q;
    p->a = value;
    p->b = 0;
    q = p->arr;
    do {
        *q++ = 0xFFFFFFFFU;
    } while (q < p->arr + 8);
    return p;
}
