// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { short x, y; } Pt2;
#define I(p, o) (*(int *)((char *)(p) + (o)))
#define P(p, o) (*(void **)((char *)(p) + (o)))
#define H(p, o) (*(unsigned short *)((char *)(p) + (o)))
#define V(p, o) (*(Vec *)((char *)(p) + (o)))
enum { E0 = 0, E1 = 1, E_INT = 0x10000 };
#define T(c) ((c) ? E1 : E0)

extern int DAT_0219c360[], DAT_0219c8c8[], DAT_0219c364, DAT_0219c370, DAT_020ed09c, DAT_020ed0a0, DAT_020fc988;
extern short DAT_020ed83c[];
extern int FUN_02036c34(void *), FUN_020866b4(int, Vec *), FUN_02072650(void *, int, int, int), FUN_02074e9c(void *, int, int, int);
extern int FUN_02034b8c(const Vec *, int), FUN_overlay_27__021997a8(void *);
#pragma thumb off
extern unsigned short FUN_0205cc08(int);
#pragma thumb on
extern void *FUN_02075040(void *, int), *FUN_02090c20(void);
extern void FUN_overlay_27__0219982c(void *), FUN_02036348(Vec *, const Vec *, const Vec *), FUN_02036368(Vec *);
extern void FUN_02092654(Vec *, const int *), FUN_02036848(Vec *, const Vec *), FUN_02090f74(Pt2 *, void *, const Vec *, int);
extern void FUN_020c193c(int, int, int, int, int), FUN_020c1d7c(int, int, int, int, int), FUN_020bc5e8(int *, const int *);
extern void FUN_overlay_27__021997bc(void *), FUN_02037924(void *), FUN_02075068(void *, int), FUN_02072724(void *, int);
extern void FUN_overlay_27__021997a0(void *), FUN_overlay_27__02199814(void *), FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_02035408(Vec *, int, int, int), FUN_02036384(void *, const Vec *), FUN_0204bf88(void *), FUN_02072750(void *, int, const Vec *);

void FUN_overlay_27__02198e88(void *self) {
    Vec target0, direction0, target1, direction1, front, left, right, motion, position, next;
    int delta;
    Pt2 screen1, screen2;
    int amount;
    void *owner = P(self, 4);
    void *manager = P(self, 8);
    void *effect;
    unsigned short oldyaw;

    delta = FUN_02036c34(owner);

    switch (I(self, 0xc)) {
    case 0: {
        if (T(I(self, 0x14) >= DAT_0219c360[6])) {
            FUN_overlay_27__0219982c(owner);
            I(self, 0x20) = DAT_0219c360[5];
            I(self, 0xc) = 1;
        } else if (I(self, 0x18) == DAT_020ed09c && T(I(self, 0x14) >= DAT_0219c360[0])) {
            I(self, 0x1c) = FUN_02072650(owner, 0, 0, 0);
            I(self, 0x18) = FUN_02074e9c(owner, 1, 1, 1);
        }
        if (FUN_020866b4(I(manager, 0x34), &target0)) {
            unsigned short yaw, diff;
            int positive;
            oldyaw = H(owner, 0x44);
            FUN_02036348(&direction0, &target0, &V(owner, 0x38));
            FUN_02036368(&direction0);
            yaw = FUN_0205cc08(direction0.z);
            if (direction0.x < 0) {
                yaw = (unsigned short)(0x10000 - yaw);
            }
            diff = (unsigned short)(yaw - oldyaw);
            positive = 1;
            if (diff >= 0x8000) {
                diff = (unsigned short)(0x10000 - diff);
                positive = 0;
            }
            if (diff >= 0x38e) {
                yaw = positive ? (unsigned short)(oldyaw + 0x38e) : (unsigned short)(oldyaw - 0x38e);
            }
            H(owner, 0x44) = yaw;
        }
        break;
    }
    case 1: {
        unsigned short diff;
        int positive;
        int turnDelta;
        const Vec *owner_pos;
        int index, avoided;
        if (FUN_020866b4(0, &target1)) {
            unsigned short yaw, step, limit;
            turnDelta = FUN_02036c34(owner);
            oldyaw = H(owner, 0x44);
            FUN_02036348(&direction1, &target1, &V(owner, 0x38));
            direction1.y = 0;
            FUN_02036368(&direction1);
            yaw = FUN_0205cc08(direction1.z);
            if (direction1.x < 0) {
                yaw = (unsigned short)(0x10000 - yaw);
            }
            diff = (unsigned short)(yaw - oldyaw);
            positive = 1;
            if (diff >= 0x8000) {
                diff = (unsigned short)(0x10000 - diff);
                positive = 0;
            }
            step = (unsigned short)(((long long)turnDelta * 182 + 2048) >> 12);
            limit = (unsigned short)(((long long)turnDelta * 0x38e + 2048) >> 12);
            if (diff < limit) {
                step = (unsigned short)((step * diff) / 0x38e);
            }
            if (positive) {
                oldyaw += step;
            } else {
                oldyaw -= step;
            }
            H(owner, 0x44) = oldyaw;
        }
        if (!(DAT_0219c8c8[1] & 1)) {
            DAT_0219c360[1] = 8192;
            DAT_0219c8c8[1] |= 1;
        }
        owner_pos = &V(owner, 0x38);
        oldyaw = H(owner, 0x44);
        index = ((int)oldyaw >> 4) * 2;
        front.x = DAT_020ed83c[index];
        front.y = 0;
        front.z = DAT_020ed83c[index + 1];
        FUN_02092654(&front, &DAT_0219c364);
        FUN_02036848(&front, owner_pos);

        index = ((int)(unsigned short)(oldyaw - 0x2000U) >> 4) * 2;
        left.x = DAT_020ed83c[index];
        left.y = 0;
        left.z = DAT_020ed83c[index + 1];
        FUN_02092654(&left, &DAT_0219c364);
        FUN_02036848(&left, owner_pos);

        index = ((int)(unsigned short)(oldyaw + 0x2000U) >> 4) * 2;
        right.x = DAT_020ed83c[index];
        right.y = 0;
        right.z = DAT_020ed83c[index + 1];
        FUN_02092654(&right, &DAT_0219c364);
        FUN_02036848(&right, owner_pos);

        avoided = 0;
        if (!FUN_02034b8c(&front, 256)) {
            H(owner, 0x44) = oldyaw + 0x8000;
            avoided = 1;
        } else if (!FUN_02034b8c(&left, 256)) {
            H(owner, 0x44) = oldyaw + 0x2000;
            avoided = 1;
        } else if (!FUN_02034b8c(&right, 256)) {
            H(owner, 0x44) = oldyaw - 0x2000;
            avoided = 1;
        }
        if (avoided) {
            FUN_02090f74(&screen1, FUN_02090c20(), owner_pos, 0);
            FUN_020c193c(8, 2, screen1.x, screen1.y, 4);
        }
        if (I(self, 0x24)) {
            if (FUN_overlay_27__021997a8(owner)) {
                FUN_020bc5e8(&I(self, 0x20), &DAT_0219c370);
            } else {
                FUN_overlay_27__021997bc(owner);
                FUN_02037924(manager);
                I(self, 0x20) = DAT_020fc988;
            }
        } else if (T(I(self, 0x14) >= I(self, 0x10)) || T(I(manager, 0x2c) & 2)) {
            FUN_02075068(owner, I(self, 0x18));
            I(self, 0x18) = DAT_020ed09c;
            FUN_02072724(owner, I(self, 0x1c));
            I(self, 0x1c) = DAT_020ed0a0;
            FUN_overlay_27__021997a0(owner);
            FUN_overlay_27__02199814(owner);
            I(self, 0x24) = 1;
        }
        break;
    }
    }

    if (I(self, 0x20) > 0) {
        int index = ((int)H(owner, 0x44) >> 4) * 2;
        const Vec *pos;
        motion.x = DAT_020ed83c[index];
        motion.y = 0;
        motion.z = DAT_020ed83c[index + 1];
        FUN_020bc5cc(&amount, &I(self, 0x20), &delta);
        FUN_02092654(&motion, &amount);
        pos = &V(owner, 0x38);
        FUN_02035408(&next, pos->x + motion.x, pos->y + motion.y, pos->z + motion.z);
        FUN_02036384(owner, &next);
    }

    effect = FUN_02075040(owner, I(self, 0x18));
    if (effect) {
        if (!(DAT_0219c8c8[0] & 1)) {
            DAT_0219c360[2] = 5120;
            DAT_0219c8c8[0] |= 1;
        }
        position = V(owner, 0x38);
        position.y = DAT_0219c360[2];
        V(effect, 0x5c) = position;
        H(effect, 0x6a) = H(owner, 0x44);
        FUN_0204bf88(effect);
        FUN_02090f74(&screen2, FUN_02090c20(), &position, 0);
        FUN_020c1d7c(8, 4, screen2.x, screen2.y, 4);
    }

    FUN_02072750(owner, I(self, 0x1c), &V(owner, 0x38));
    I(self, 0x14) += delta;
}
