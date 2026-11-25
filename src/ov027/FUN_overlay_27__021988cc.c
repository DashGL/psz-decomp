#pragma opt_propagation off
// flags: -O4,s
typedef struct { int x, y, z; } Vec;
enum { E0 = 0, E1 = 1, E_INT = 0x10000 };
#define T(c) ((c) ? E1 : E0)
#define I(p,o) (*(int *)((char *)(p) + (o)))
#define P(p,o) (*(void **)((char *)(p) + (o)))
#define H(p,o) (*(unsigned short *)((char *)(p) + (o)))
#define V(p,o) (*(Vec *)((char *)(p) + (o)))

extern int DAT_0219c318[];
extern int DAT_0219c8c0[];
extern const int DAT_020ed09c;
extern const int DAT_020ed0a0;
extern const int DAT_020fc988;
extern Vec DAT_0219c338;
extern const short DAT_020ed83c[];

extern int FUN_02036c34(void *);
extern int FUN_020866b4(int, Vec *);
extern int FUN_02074e9c(void *, int, int, int);
extern int FUN_02072650(void *, int, int, int);
extern int FUN_02035b60(int);
extern int FUN_overlay_27__021997a8(void *);
#pragma thumb off
extern unsigned short FUN_0205cc08(int);
#pragma thumb on
extern void *FUN_02075040(void *, int);
extern void *FUN_02090c20(void);
extern void FUN_overlay_27__0219982c(void *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_02036368(Vec *);
extern void FUN_02072724(void *, int);
extern void FUN_02072750(void *, int, const Vec *);
extern void FUN_0204bf88(void *);
extern void FUN_02090f74(short *, void *, const Vec *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_020c1d7c(int, int, int, int, int);
extern void FUN_02075068(void *, int);
extern void FUN_overlay_27__021997a0(void *);
extern void FUN_overlay_27__02199814(void *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_020bc5e8(int *, const int *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02036384(void *, const Vec *);
extern void FUN_overlay_27__021997bc(void *);
extern void FUN_overlay_27__021997fc(void *);
extern void FUN_02037924(void *);

void FUN_overlay_27__021988cc(void *self) {
    void *owner = P(self, 4);
    void *manager = P(self, 8);
    int delta;
    short screen1[2];
    int amplitude;
    int height;
    short screen2[2];
    int amount;
    delta = FUN_02036c34(owner);
    switch (I(self, 0xc)) {
    case 0: {
        Vec target;
        if (T(I(self, 0x10) >= DAT_0219c318[0])) {
            FUN_overlay_27__0219982c(owner);
            I(self, 0xc) = 1;
        } else if (I(self, 0x14) == DAT_020ed09c && T(I(self, 0x10) >= DAT_0219c318[7])) {
            I(self, 0x14) = FUN_02074e9c(owner, 1, 1, 1);
        }
        if (FUN_020866b4(I(manager, 0x34), &target)) {
            Vec direction;
            unsigned short oldyaw = H(owner, 0x44);
            unsigned short yaw, diff;
            int positive;
            FUN_02036348(&direction, &target, &V(owner, 0x38));
            FUN_02036368(&direction);
            yaw = FUN_0205cc08(direction.z);
            if (direction.x < 0) yaw = (unsigned short)(0x10000 - yaw);
            diff = (unsigned short)(yaw - oldyaw);
            positive = 1;
            if (diff >= 0x8000) {
                diff = (unsigned short)(0x10000 - diff);
                positive = 0;
            }
            if (diff >= 0x38e) {
                if (positive) yaw = (unsigned short)(oldyaw + 0x38e);
                else yaw = (unsigned short)(oldyaw - 0x38e);
            }
            H(owner, 0x44) = yaw;
            H(self, 0x28) = yaw;
        }
        break;
    }
    case 1: {
        I(self, 0x20) += delta;
        if (T(I(self, 0x20) >= DAT_0219c318[2])) {
            Vec position = V(owner, 0x38);
            unsigned short oldyaw = H(owner, 0x44);
            void *effect;
            if (!T(I(manager, 0x2c) & 2)) {
                FUN_02072724(owner, I(self, 0x18));
                I(self, 0x18) = FUN_02072650(owner, 1, 0, 0);
                FUN_02072750(owner, I(self, 0x18), &position);
                I(self, 0x1c) = DAT_0219c318[5];
            }
            effect = FUN_02075040(owner, FUN_02074e9c(owner, 2, 0, 0));
            if (effect) {
                if (!(DAT_0219c8c0[1] & 1)) {
                    DAT_0219c318[8] = 0x59a;
                    DAT_0219c318[9] = 0x59a;
                    DAT_0219c318[10] = 0x59a;
                    DAT_0219c8c0[1] |= 1;
                }
                V(effect, 0x5c) = position;
                H(effect, 0x6a) = oldyaw;
                FUN_0204bf88(effect);
                V(effect, 0x50) = DAT_0219c338;
            }
            FUN_02090f74(screen1, FUN_02090c20(), &position, 0);
            FUN_020c193c(8, 2, screen1[0], screen1[1], 4);
            I(self, 0x30)++;
            if (I(self, 0x30) >= I(self, 0x2c) || T(I(manager, 0x2c) & 2)) {
                I(self, 0x34) = 1;
            }
            if (I(self, 0x34)) {
                Vec flat = position;
                flat.y = 0;
                V(owner, 0x38) = flat;
                FUN_02075068(owner, I(self, 0x14));
                I(self, 0x14) = DAT_020ed09c;
                FUN_overlay_27__021997a0(owner);
                FUN_overlay_27__02199814(owner);
                I(self, 0xc) = 2;
            } else {
                Vec target;
                I(self, 0x20) = DAT_020fc988;
                if (FUN_020866b4(I(manager, 0x34), &target)) {
                    Vec direction;
                    unsigned short yaw, diff;
                    int positive;
                    FUN_02036348(&direction, &target, &position);
                    FUN_02036368(&direction);
                    yaw = FUN_0205cc08(direction.z);
                    if (direction.x < 0) yaw = (unsigned short)(0x10000 - yaw);
                    diff = (unsigned short)(yaw - oldyaw);
                    positive = 1;
                    if (diff >= 0x8000) {
                        diff = (unsigned short)(0x10000 - diff);
                        positive = 0;
                    }
                    if (diff >= 0x2000) {
                        if (positive) yaw = (unsigned short)(oldyaw + 0x2000);
                        else yaw = (unsigned short)(oldyaw - 0x2000);
                    }
                    H(self, 0x28) = (unsigned short)(yaw + FUN_02035b60(0x4000) - 0x2000);
                }
            }
        } else {
            long long dz;
            long long dx;
            int sz;
            int sx;
            Vec *pos;
            long long amount64;
            unsigned short phase;
            int index = (((int)H(self, 0x28)) >> 4) * 2;
            Vec next;
            unsigned short oldyaw;
            unsigned short diff;
            int positive;
            unsigned short yaw;
            FUN_020bc5cc(&amount, &I(self, 0x24), &delta);
            amount64 = amount;
            phase = (unsigned short)(((I(self, 0x20) >> 12) << 15) / (DAT_0219c318[2] >> 12));
            amplitude = DAT_0219c318[4];
            height = DAT_020ed83c[(((int)phase) >> 4) * 2];
            FUN_020bc5e8(&height, &amplitude);
            pos = &V(owner, 0x38);
            sx = DAT_020ed83c[index]; dx = (long long)sx * amount64;
            sz = DAT_020ed83c[index + 1]; dz = (long long)sz * amount64;
            FUN_02035408(&next, pos->x + (int)((dx + 2048) >> 12), pos->y, pos->z + (int)((dz + 2048) >> 12));
            next.y = height;
            FUN_02036384(owner, &next);
            oldyaw = H(owner, 0x44);
            yaw = H(self, 0x28);
            positive = 1;
            diff = (unsigned short)(yaw - oldyaw);
            if (diff >= 0x8000) {
                diff = (unsigned short)(0x10000 - diff);
                positive = 0;
            }
            if (diff >= 0xaaa) {
                if (positive) yaw = (unsigned short)(oldyaw + 0xaaa);
                else yaw = (unsigned short)(oldyaw - 0xaaa);
            }
            H(owner, 0x44) = yaw;
        }
        break;
    }
    case 2:
        if (!FUN_overlay_27__021997a8(owner)) {
            FUN_overlay_27__021997bc(owner);
            FUN_02037924(manager);
        }
        break;
    }
    {
        void *effect = FUN_02075040(owner, I(self, 0x14));
        if (effect) {
            Vec position;
            if (!(DAT_0219c8c0[0] & 1)) {
                DAT_0219c318[3] = 5120;
                DAT_0219c8c0[0] |= 1;
            }
            position = V(owner, 0x38);
            position.y += DAT_0219c318[3];
            V(effect, 0x5c) = position;
            H(effect, 0x6a) = H(owner, 0x44);
            FUN_0204bf88(effect);
            FUN_02090f74(screen2, FUN_02090c20(), &position, 0);
            FUN_020c1d7c(8, 4, screen2[0], screen2[1], 4);
        }
    }
    if (I(self, 0x18) != DAT_020ed0a0) {
        I(self, 0x1c) -= delta;
        if (T(I(self, 0x1c) <= DAT_020fc988)) {
            FUN_02072724(owner, I(self, 0x18));
            I(self, 0x18) = DAT_020ed0a0;
        }
    }
    if (!T(I(manager, 0x2c) & 2)) {
        Vec position = V(owner, 0x38);
        if (T(position.y >= DAT_0219c318[1])) {
            FUN_overlay_27__021997fc(owner);
        } else {
            FUN_overlay_27__021997bc(owner);
        }
    }
    I(self, 0x10) += delta;
}
