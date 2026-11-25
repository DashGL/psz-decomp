// flags: -O4,s
struct S020426d8 {
    unsigned char pad0[0x78];
    unsigned int a1, b1;
    volatile unsigned int c1;
    unsigned int a2, b2, c2;
    unsigned char pad1[0x5c];
    int state;
};
void FUN_020426d8(struct S020426d8 *s, const unsigned int *src) {
    int state = s->state;
    unsigned int value;
    if (state == 3) return;
    if (state == 2) return;
    value = src[0];
    s->a1 = value;
    s->a2 = value;
    value = src[1];
    s->b1 = value;
    s->b2 = value;
    value = src[2];
    s->c1 = value;
    s->c2 = s->c1;
}
