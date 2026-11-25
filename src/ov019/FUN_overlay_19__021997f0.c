// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct {
    unsigned short h0;
    unsigned short h2;
    unsigned short h4[5];
    unsigned short pad0e;
    int f10;
    int f14;
    int f18;
    int f1c;
    Vec3 v20;
    Vec3 v2c;
    unsigned short h38;
    unsigned short h3a;
    unsigned short h3c;
    unsigned short h3e;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
} Request;

extern void *FUN_02036c88(void *, int);
extern void *FUN_02046d94(void *, int, int);
extern void *FUN_02075040(void *, int);
extern int FUN_0204260c(void *, int, int *, int *);
extern int FUN_02074f94(void *);
extern int FUN_02074fc4(void *, void *, int, int);
extern int FUN_02074e9c(void *, int, int, int);
extern int FUN_02036c34(void *);
#pragma thumb off
extern void FUN_0200c938(void *, int);
extern void FUN_0205b960(Vec3 *, int *, Vec3 *);
#pragma thumb on
extern void FUN_020345f0(Vec3 *, Vec3 *);
extern void FUN_02035408(Vec3 *, int, int, int);

#define I(p,o) (*(int *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

void FUN_overlay_19__021997f0(void *self, void *actor)
{
    void *model;
    Vec3 position;
    int matrix[12];
    int rotation[9];
    Vec3 origin;
    Vec3 scale;
    Vec3 converted;
    Request request;
    int slot, i, size, delta;
    void *effect;

    model = FUN_02036c88(actor, 0);
    if (!model || !FUN_0204260c(model, 1, matrix, rotation)) {
        return;
    }
    FUN_0200c938(&origin, 12);
    FUN_0205b960(&origin, matrix, &origin);
    FUN_020345f0(&converted, &origin);
    position = converted;
    if (I(self, 0x20) <= I(self, 0x34)) {
        if (I(self, 0x30) == -1) {
            if (I(self, 0x38) == 1) {
                slot = FUN_02074f94(actor);
                if (slot != -1) {
                    request.h0 = 0xffff;
                    request.h2 = 0xffff;
                    for (i = 0; i < 5; i++) {
                        request.h4[i] = 0xffff;
                    }
                    request.f10 = -1;
                    request.f14 = -1;
                    request.f18 = 0x1000;
                    request.f1c = 0;
                    FUN_02035408(&request.v20, 0, 0, 0);
                    FUN_02035408(&request.v2c, 0x1000, 0x1000, 0x1000);
                    request.h38 = 0;
                    request.h3a = 0;
                    request.h3c = 0;
                    request.h3e = 0;
                    request.f40 = -1;
                    request.f1c |= 2;
                    request.f44 = -1;
                    request.f48 = -1;
                    request.f4c = -1;
                    request.f50 = 0;
                    request.f58 = -1;
                    request.f5c = 0;
                    request.f60 = 0;
                    request.f54 = 149;
                    request.f58 = I(actor, 0xc);
                    request.f54 = 144;
                    effect = FUN_02046d94(&request, 0, 0);
                    if (effect) {
                        I(self, 0x30) = FUN_02074fc4(actor, effect, slot, 0);
                    }
                }
            } else {
                I(self, 0x30) = FUN_02074e9c(actor, 2, 1, 0);
            }
        }
        effect = FUN_02075040(actor, I(self, 0x30));
        if (effect) {
            I(effect, 0xe4) |= 2;
            I(effect, 0xe4) |= 0x10000;
            I(effect, 0xe4) |= 0x20000;
            I(effect, 0xe4) |= 0x8000;
            V(effect, 0x5c) = position;
            size = (I(self, 0x20) << 12) / I(self, 0x34);
            if (I(self, 0x38) == 1) {
                size *= 3;
            }
            if (size >= 0x14000) {
                size = 0x14000;
            }
            scale.x = size;
            scale.y = size;
            scale.z = 0x1000;
            V(effect, 0x50) = scale;
        }
    } else {
        I(self, 0x1c) = 1;
    }
    delta = FUN_02036c34(actor);
    I(self, 0x20) += delta;
}
