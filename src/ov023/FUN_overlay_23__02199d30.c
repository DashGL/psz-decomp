// flags: -O4,s
struct Vec { int x, y, z; };
struct Sub {
    char *effect;
    int idx;
};
struct Obj {
    char pad[0xe0];
    struct Sub sub;
};
extern unsigned char *FUN_0208555c(int);
extern void FUN_020345f0(struct Vec *, const void *);
void FUN_overlay_23__02199d30(struct Obj *p) {
    struct Sub *sub = &p->sub;
    if (sub->effect) {
        unsigned char *player = FUN_0208555c(sub->idx);
        if (player) {
            struct Vec v;
            FUN_020345f0(&v, player + 0x9c);
            v.y = 4096;
            *(struct Vec *)(sub->effect + 0x5c) = v;
        }
    }
}
