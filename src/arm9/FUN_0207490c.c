// flags: -O4,p
struct Item_0207490c {
    signed char f0;
    unsigned char pad[0x3b];
};
struct S_0207490c {
    unsigned char pad[0x70];
    struct Item_0207490c arr[4];
};
extern int FUN_02073fd8(struct S_0207490c *);
int FUN_0207490c(struct S_0207490c *s, int idx) {
    if (idx >= 0 && idx < 4 && idx != FUN_02073fd8(s)) {
        return s->arr[idx].f0;
    }
    return 0;
}
