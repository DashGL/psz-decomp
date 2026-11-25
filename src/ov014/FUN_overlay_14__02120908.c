// flags: -O4,s
typedef struct Child_02120908 Child_02120908;
struct Child_02120908 {
    Child_02120908 *(**vtable)(Child_02120908 *);
};
typedef struct {
    unsigned w[8];
} Config8_02120908;
extern unsigned DAT_02122188;
extern const Config8_02120908 DAT_02121934;
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3588(void *);
extern void FUN_020c35ac(void *, int);
extern void FUN_020c35d4(void *, const void *);
extern void *FUN_020ba894(unsigned);
extern void *FUN_020c3564(void *);
extern int FUN_020c38c8(void *, int, int);
void FUN_overlay_14__02120908(char *self) {
    Config8_02120908 config;
    int x, y, a, b;
    Child_02120908 *child = *(Child_02120908 **)self;
    if (child) {
        FUN_020c38f0(child, 0);
        FUN_020c3588(*(Child_02120908 **)self);
        child = *(Child_02120908 **)self;
        if (child) {
            if (child) {
                child->vtable[1](child);
            }
            *(Child_02120908 **)self = 0;
        }
    }
    DAT_02122188 -= *(unsigned *)(self + 64);
    child = FUN_020ba894(60);
    if (child) {
        child = FUN_020c3564(child);
    }
    *(Child_02120908 **)self = child;
    FUN_020c35ac(child, 1);
    x = (unsigned char)self[5] - 104;
    y = (unsigned char)self[6] - 4;
    config = DAT_02121934;
    config.w[3] = x;
    config.w[4] = y;
    config.w[0] = DAT_02122188 + 1;
    a = FUN_020c38c8(*(Child_02120908 **)self, 210, x);
    *(unsigned *)(self + 64) = a;
    b = FUN_020c38c8(*(Child_02120908 **)self, 10, y);
    *(unsigned *)(self + 64) *= (unsigned)b;
    DAT_02122188 += *(unsigned *)(self + 64);
    FUN_020c35d4(*(Child_02120908 **)self, &config);
    FUN_020c38f0(*(Child_02120908 **)self, 0);
}
