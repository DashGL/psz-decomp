// flags: -O4,p -noThumb
struct S_0205a4ac {
    unsigned int f0, f4, f8, fc, f10, f14, f18;
    unsigned int low : 24;
    unsigned int flags : 8;
};
unsigned int FUN_0205a4ac(struct S_0205a4ac *p) {
    if (p->flags & 1) {
        return p->low;
    }
    return p->f8;
}
