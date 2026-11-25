// flags: -O4,s
typedef struct {
    char pad[16];
    char m16[4];
    char m20[60];
    char m80[60];
    int ids[2];
} Obj;
extern unsigned int DAT_0211fe88[];
extern void FUN_020c38f0(void *, int), FUN_020c3588(void *), FUN_020c2624(void *, void *);
extern void FUN_overlay_7__0211fbf4(void *), FUN_020c3578(void *), FUN_020c2b68(void *);
extern void *FUN_020c1fc8(void);
void *FUN_overlay_7__0211f4c8(Obj *self) {
    int i;
    *(void **)self = DAT_0211fe88;
    FUN_020c38f0(self->m20, 0);
    FUN_020c3588(self->m20);
    FUN_020c38f0(self->m80, 0);
    FUN_020c3588(self->m80);
    for (i = 0; i < 2; i++) {
        if (self->ids[i] != -1) FUN_020c2624(FUN_020c1fc8(), &self->ids[i]);
    }
    FUN_overlay_7__0211fbf4(self);
    FUN_020c3578(self->m80);
    FUN_020c3578(self->m20);
    FUN_020c2b68(self->m16);
    return self;
}
