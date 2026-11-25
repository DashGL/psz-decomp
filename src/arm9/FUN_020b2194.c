// flags: -O4,s
extern char DAT_020fc68c[];
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3588(void *);
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *, int *);
#pragma thumb off
extern void *FUN_0205e260(void *);
extern void *FUN_0205e464(void *);
extern void FUN_0206557c(int, void *, int);
#pragma thumb on
extern void FUN_020c3578(void *);
extern void FUN_020c2b68(void *);
typedef struct {
    void *vtbl;
    int pad0[4];
    unsigned char *ctx;
    int slot;
    unsigned char obj[4];
} S;
S *FUN_020b2194(S *self) {
    self->vtbl = DAT_020fc68c;
    FUN_020c38f0(self->obj, 0);
    FUN_020c3588(self->obj);
    if (self->slot != -1) {
        FUN_020c2624(FUN_020c1fc8(), &self->slot);
    }
    {
        unsigned char *p = self->ctx;
        int n = *(volatile int *)(p + 0x50);
        FUN_0206557c(0, FUN_0205e260(p), n);
    }
    {
        unsigned char *p = self->ctx;
        int n = *(volatile int *)(p + 0x54);
        FUN_0206557c(0, FUN_0205e464(p), n);
    }
    FUN_020c3578(self->obj);
    FUN_020c2b68(&self->ctx);
    return self;
}
