// flags: -O4,s
struct Entry02083168 {
    unsigned char pad[0x33];
    unsigned char flag;
};
struct Self02083168 {
    unsigned char pad[0x4ec];
    struct Entry02083168 *base;
    int count;
};
void FUN_02083168(struct Self02083168 *self, int index) {
    struct Entry02083168 *base = self->base;
    struct Entry02083168 *p;
    if (base && index >= 0 && index < self->count) {
        p = &base[index];
    } else {
        p = 0;
    }
    if (p) {
        p->flag |= 1;
    }
}
