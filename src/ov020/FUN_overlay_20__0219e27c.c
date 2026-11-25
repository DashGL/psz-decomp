// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} VecFx32;

typedef struct {
    int m[9];
    VecFx32 t;
} MtxFx43;

typedef struct {
    int pad0;
    unsigned char *actor;
    void *owner;
    int state;
    int f10;
    int f14;
    int f18;
} Task;

extern VecFx32 DAT_020fc958;
extern unsigned int DAT_0219ff84;
extern int DAT_0219fe34;
extern unsigned char DAT_0211a51c[];

extern void *FUN_02036c88(void *, int);
extern void FUN_0204260c(void *, int, MtxFx43 *, int);
#pragma thumb off
extern void FUN_0205c8cc(const VecFx32 *, VecFx32 *);
#pragma thumb on
extern void FUN_overlay_20__0219c2e8(void *, const VecFx32 *, const VecFx32 *, int);
extern int FUN_02074e9c(void *, int, int, int);
extern unsigned char *FUN_02075040(void *, int);
extern int FUN_overlay_20__0219c3a4(void *);
extern int FUN_02084cc0(void *);
extern void FUN_overlay_20__0219e1bc(void *, int);
extern int FUN_02040d2c(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern int FUN_02040cd4(void *, int);
extern void FUN_02037924(void *);

static inline int FX_Mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

void FUN_overlay_20__0219e27c(Task *self) {
    unsigned char *actor = self->actor;
    void *owner = self->owner;

    switch (self->state) {
    case 0: {
        int b = (*(unsigned int *)(actor + 0xec) & 2) ? 1 : 0;
        if (b != 0) {
            MtxFx43 mtx;
            VecFx32 pos;
            VecFx32 dir;
            int spd;
            unsigned char *obj;

            FUN_0204260c(FUN_02036c88(actor, 0), 0xb, &mtx, 0);
            pos.x = mtx.t.x;
            pos.y = mtx.t.y;
            pos.z = mtx.t.z;
            dir.x = DAT_020fc958.x - pos.x;
            dir.y = DAT_020fc958.y - pos.y;
            dir.z = DAT_020fc958.z - pos.z;
            if (dir.x != 0 || dir.y != 0 || dir.z != 0) {
                FUN_0205c8cc(&dir, &dir);
            }
            if ((DAT_0219ff84 & 1) == 0) {
                DAT_0219fe34 = 0x1400;
                DAT_0219ff84 |= 1;
            }
            spd = DAT_0219fe34;
            dir.x = FX_Mul(dir.x, spd);
            dir.y = FX_Mul(dir.y, spd);
            dir.z = FX_Mul(dir.z, spd);
            FUN_overlay_20__0219c2e8(actor, &pos, &dir, self->f10);
            obj = FUN_02075040(actor, FUN_02074e9c(actor, 5, 0, 0));
            if (obj != 0) {
                *(VecFx32 *)(obj + 0x5c) = pos;
                *(unsigned int *)(obj + 0xe4) |= 0x10000;
            }
            self->state = 1;
        }
        break;
    }
    case 1:
        if (self->f14 == 0 && FUN_overlay_20__0219c3a4(actor) == 0) {
            FUN_overlay_20__0219e1bc(actor, FUN_02084cc0(DAT_0211a51c));
            self->f14 = 1;
        }
        if (FUN_02040d2c(actor, 0) != 0) {
            FUN_02040c0c(actor, 0, 0x12, 0x1000, 10);
        }
        if (FUN_02040cd4(actor, 0) == 0x12 && self->f14 != 0) {
            self->f18++;
            if (self->f18 > 10) {
                FUN_02037924(owner);
            }
        }
        break;
    }
}
