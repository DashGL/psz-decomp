// flags: -O4,s
struct S02042710 {
    unsigned char pad0[0x78];
    unsigned int a1, b1;
    volatile unsigned int c1;
    unsigned int a2, b2, c2;
    unsigned char pad1[0x5c];
    int state;
};
void FUN_02042710(struct S02042710 *s, unsigned int a, unsigned int b, unsigned int c) {
    int state = s->state;
    if (state == 3) return;
    if (state == 2) return;
    s->a1 = a;
    s->a2 = a;
    s->b1 = b;
    s->b2 = b;
    s->c1 = c;
    s->c2 = s->c1;
}
