// flags: -O4,s
struct S_020360b8 {
    int a;
    int b;
    signed char c[4];
};
void FUN_020360b8(struct S_020360b8 *s) {
    s->a = -1;
    s->b = -1;
    s->c[0] = -1;
    s->c[1] = -1;
    s->c[2] = -1;
    s->c[3] = -1;
}
