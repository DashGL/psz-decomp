// flags: -O4,s
typedef struct { int x, y, z; } Vec;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define U(p,o) (*(unsigned int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec *)((char *)(p)+(o)))

extern short DAT_020ed83c[];
extern int DAT_020fc988, DAT_020ed0a0, DAT_0219fb00[];
extern unsigned int DAT_0219ff58[];
extern Vec DAT_0219fb48;

extern int FUN_02036c34(void *);
extern int FUN_020866b4(int, Vec *);
extern int FUN_02034b8c(const Vec *, int);
extern int FUN_02040d2c(void *, int);
extern int FUN_02074e9c(void *, int, int, int);
extern unsigned short FUN_0205cc08(int);
extern void *FUN_02075040(void *, int);
extern void *FUN_02090c20(void);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_02036368(Vec *);
extern void FUN_020bc658(int *, const int *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_02083a70(Vec *, int);
extern void FUN_overlay_20__02199070(void *, const Vec *);
extern void FUN_0203647c(Vec *, const Vec *, const Vec *);
extern void FUN_overlay_20__02199030(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_overlay_20__0219e7e8(void *, const Vec *, int);
extern void FUN_02072724(void *, int);
extern void FUN_overlay_20__02199084(void *);
extern void FUN_02037924(void *);
extern void FUN_02090f74(short *, void *, const Vec *, int);
extern void FUN_020c1d7c(int, int, int, int, int);

void FUN_overlay_20__0219b574(void *self)
{
    enum { E0 = 0, E1 = 1 };
    Vec forward, target, direction, motion, probe, flat, back, end, pos_clamp, trail, tmp0, tmp1, tmp2;
    int delta, difference;
    short screen[2];
    int absolute, amount, end_scaled, end_x, factor;
    void *manager = P(self, 8);
    int positive;
    void *owner = P(self, 4);
    Vec *live = &V(owner, 0x38);
    unsigned short oldyaw = H(owner, 0x44);
    unsigned short yaw, diff, step;
    int index = (oldyaw >> 4) * 2;
    void *effect;

    forward.x = DAT_020ed83c[index];
    forward.y = 0;
    forward.z = DAT_020ed83c[index + 1];
    delta = FUN_02036c34(owner);

    if (((I(self, 0x14) == 0 || I(self, 0x14) == 1) ? 1 : 0) && FUN_020866b4(I(self, 0x20), &target)) {
        FUN_02036348(&direction, &target, live);
        direction.y = DAT_020fc988;
        FUN_02036368(&direction);
        yaw = FUN_0205cc08(direction.z);
        if (((direction.x < DAT_020fc988) ? E1 : E0) != 0) {
            yaw = (unsigned short)(0x10000 - yaw);
        }
        positive = 1;
        diff = (unsigned short)(yaw - oldyaw);
        if (diff >= 0x8000) {
            diff = (unsigned short)(0x10000 - diff);
            positive = 0;
        }
        step = (unsigned short)(((long long)delta * 0x1c7 + 2048) >> 12);
        if (diff <= 4096) {
            step = (unsigned short)((step * diff) / 4096);
        }
        if (diff >= step) {
            if (positive) {
                yaw = (unsigned short)(oldyaw + step);
            } else {
                yaw = (unsigned short)(oldyaw - step);
            }
        }
        H(owner, 0x44) = yaw;
    }

    if (((I(self, 0x1c) != I(self, 0x18)) ? E1 : E0) != 0) {
        difference = I(self, 0x1c) - I(self, 0x18);
        FUN_020bc658(&absolute, &difference);
        if (((absolute <= DAT_0219fb00[9]) ? E1 : E0) != 0) {
            I(self, 0x18) = I(self, 0x1c);
        } else if (((difference >= DAT_020fc988) ? E1 : E0) != 0) {
            I(self, 0x18) += DAT_0219fb00[9];
        } else {
            I(self, 0x18) -= DAT_0219fb00[9];
        }
    }

    motion = forward;
    FUN_020bc5cc(&amount, &I(self, 0x18), &delta);
    FUN_02083a70(&motion, amount);
    FUN_overlay_20__02199070(owner, &motion);
    probe = forward;

    if (I(self, 0x14) == 0) {
        FUN_02083a70(&probe, DAT_0219fb00[8]);
        FUN_0203647c(&tmp0, &probe, live);
        probe = tmp0;
        if (((FUN_02034b8c(&probe, 256) == 0) ? E1 : E0) != 0) {
            V(self, 0x2c) = *live;
            I(self, 0x30) = 0;
            I(self, 0x14) = 1;
        }
    } else if (I(self, 0x14) == 1) {
        FUN_02083a70(&probe, DAT_0219fb00[7]);
        FUN_0203647c(&tmp1, &probe, live);
        probe = tmp1;
        if (((FUN_02034b8c(&probe, 256) == 0) ? E1 : E0) != 0) {
            I(owner, 0xec) &= ~0x10;
            FUN_overlay_20__02199030(owner, 0);
            FUN_02040c0c(owner, 0, 21, 4096, 10);
            I(self, 0x1c) = DAT_020fc988;
            I(self, 0x14) = 2;
        }
    } else if (I(self, 0x14) == 2) {
        if (((I(self, 0x18) == DAT_020fc988) ? E1 : E0) != 0) {
            flat = *live;
            flat.y = 0;
            FUN_02036348(&back, &V(self, 0x2c), &flat);
            FUN_02036368(&back);
            yaw = FUN_0205cc08(back.z);
            if (back.x < 0) {
                yaw = (unsigned short)(0x10000 - yaw);
            }
            if (!(DAT_0219ff58[0] & 1)) {
                DAT_0219fb00[3] = 0x5000;
                DAT_0219ff58[0] |= 1;
            }
            FUN_02083a70(&back, DAT_0219fb00[3]);
            FUN_0203647c(&end, &flat, &back);
            factor = 0xccd;
            end_x = end.x;
            FUN_020bc5cc(&end_scaled, &end_x, &factor);
            end.x = end_scaled;
            FUN_overlay_20__0219e7e8(owner, &end, yaw);
            FUN_02072724(owner, I(self, 0x38));
            I(self, 0x38) = DAT_020ed0a0;
            FUN_overlay_20__02199084(owner);
            FUN_02037924(manager);
        }
    } else if (I(self, 0x14) == 3 && FUN_02040d2c(owner, 0)) {
        FUN_02037924(manager);
    }

    pos_clamp = V(owner, 0x38);
    if (pos_clamp.y < 0) {
        pos_clamp.y = 0;
        V(owner, 0x38) = pos_clamp;
    }

    if (I(self, 0x14) == 1) {
        I(self, 0x3c) -= 4096;
        if (((I(self, 0x3c) <= DAT_020fc988) ? E1 : E0) != 0) {
            I(self, 0x3c) = DAT_0219fb00[6];
            effect = FUN_02075040(owner, FUN_02074e9c(owner, 12, 0, 0));
            if (effect) {
                index = (H(owner, 0x44) >> 4) * 2;
                trail.x = DAT_020ed83c[index];
                trail.y = 0;
                trail.z = DAT_020ed83c[index + 1];
                FUN_02083a70(&trail, 0xa000);
                FUN_0203647c(&tmp2, &V(owner, 0x38), &trail);
                V(effect, 0x5c) = tmp2;
                if (!(DAT_0219ff58[3] & 1)) {
                    DAT_0219fb00[18] = 8192;
                    DAT_0219fb00[19] = 8192;
                    DAT_0219fb00[20] = 8192;
                    DAT_0219ff58[3] |= 1;
                }
                V(effect, 0x50) = DAT_0219fb48;
            }
        }
    }

    if (U(self, 0x14) <= 1) {
        FUN_02090f74(screen, FUN_02090c20(), live, 1);
        FUN_020c1d7c(25, 5, screen[0], screen[1], 4);
    }
}
