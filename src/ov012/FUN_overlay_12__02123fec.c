// flags: -O4,s
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3588(void *);
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *, void *);
extern void FUN_020c212c(void *, int);
#pragma thumb off
extern void *FUN_0205e260(void *);
extern void *FUN_0205e464(void *);
extern void FUN_0206557c(int, void *, int);
#pragma thumb on
typedef struct {
    unsigned char pad0[0xac];
    unsigned char *ctx;
    unsigned char obj[0x3c];
    int slots[4];
} State;
void FUN_overlay_12__02123fec(State *self) {
    int i;
    FUN_020c38f0(self->obj, 0);
    FUN_020c3588(self->obj);
    for (i = 0; i < 4; i++) {
        if (self->slots[i] != -1) {
            FUN_020c2624(FUN_020c1fc8(), &self->slots[i]);
        }
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
