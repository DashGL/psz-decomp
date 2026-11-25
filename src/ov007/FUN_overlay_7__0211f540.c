// flags: -O4,s
extern unsigned int DAT_0211fe88[];
extern void FUN_020ba8ac(void *);
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3588(void *);
extern void FUN_020c2624(void *, void *);
extern void FUN_overlay_7__0211fbf4(void *);
extern void FUN_020c3578(void *);
extern void FUN_020c2b68(void *);
extern void *FUN_020c1fc8(void);

struct S_f540 {
    void *vtbl;
    unsigned char pad[0x88];
    int arr[2];
};

void *FUN_overlay_7__0211f540(struct S_f540 *self) {
    int i;
    char *base = (char *)self;
    self->vtbl = DAT_0211fe88;
    FUN_020c38f0(base + 20, 0);
    FUN_020c3588(base + 20);
    FUN_020c38f0(base + 80, 0);
    FUN_020c3588(base + 80);
    for (i = 0; i < 2; i++) {
        if (self->arr[i] != -1) {
            FUN_020c2624(FUN_020c1fc8(), &self->arr[i]);
        }
    }
    FUN_overlay_7__0211fbf4(base);
    FUN_020c3578(base + 80);
    FUN_020c3578(base + 20);
    FUN_020c2b68(base + 16);
    FUN_020ba8ac(base);
    return base;
}
