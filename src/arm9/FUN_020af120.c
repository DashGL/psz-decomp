//cpp
// flags: -O4,s
extern "C" {
extern char DAT_020fc4e0[];
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3588(void *);
extern void FUN_020aecb8(void *);
extern void FUN_020ba8ac(void *);
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *, int *);
extern void FUN_020af55c(void *);
extern void FUN_020c3578(void *);
extern void FUN_020c2b68(void *);
}
struct Sub {
    inline ~Sub() { FUN_020aecb8(this); }
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
};
struct S {
    void *vtbl;
    int pad0[4];
    unsigned char ctx[4];
    unsigned char obj[0x40];
    int slot;
    int pad1[3];
    Sub *subs[4];
};
extern "C" S *FUN_020af120(S *self) {
    self->vtbl = DAT_020fc4e0;
    FUN_020c38f0(self->obj, 0);
    FUN_020c3588(self->obj);
    for (int i = 0; i < 4; i++) {
        if (self->subs[i] != 0) {
            if (self->subs[i] != 0) {
                delete self->subs[i];
                self->subs[i] = 0;
            }
        }
    }
    if (self->slot != -1) {
        FUN_020c2624(FUN_020c1fc8(), &self->slot);
    }
    FUN_020af55c(self);
    FUN_020c3578(self->obj);
    FUN_020c2b68(self->ctx);
    return self;
}
