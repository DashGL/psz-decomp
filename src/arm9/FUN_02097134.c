// flags: -O4,p
struct S_02097134 {
    short f0;
    union {
        signed char b;
        short s;
    } u;
};
int FUN_02097134(struct S_02097134 *p) {
    if (p->f0 == 0) {
        return p->u.b == 0;
    }
    return p->u.s < 0 || p->u.s >= 0x20;
}
