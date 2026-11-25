// flags: -O4,s
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *, int *);
extern void FUN_020c212c(void *, int);
#pragma thumb off
extern void *FUN_0205e260(void *);
extern void *FUN_0205e464(void *);
extern void FUN_0206557c(int, void *, int);
#pragma thumb on
typedef struct { int pad0; unsigned char *ctx; int pad1[15]; int slot; } S;
void FUN_overlay_18__0211ede0(S *self) {
    if (self->slot != -1) {
        FUN_020c2624(FUN_020c1fc8(), &self->slot);
    }
    FUN_020c212c(FUN_020c1fc8(), 2);
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
}
