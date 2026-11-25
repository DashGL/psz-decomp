// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int m[12]; } Mtx43;
typedef struct { int m[9]; } Mtx33;

extern int DAT_021a1538[];
extern const short DAT_020ed83c[];
extern Vec DAT_021a0094;

extern void FUN_overlay_21__0219b25c(void *, Vec *);
extern void FUN_02035408(Vec *, int, int, int);
extern int FUN_overlay_21__0219b56c(void *, unsigned short);
extern void FUN_02072724(void *, int);
extern int FUN_overlay_21__0219b65c(void *);
extern int FUN_02072650(void *, int, int, int);
extern int FUN_02074e9c(void *, int, int, int);
extern void FUN_02072750(void *, int, void *);
extern void *FUN_02075040(void *, int);
extern void *FUN_02036c88(void *, int);
extern void FUN_0204260c(void *, int, Mtx43 *, Mtx33 *);
extern void FUN_020345f0(Vec *, const Vec *);
extern void FUN_0204bf88(void *);
extern void *FUN_02090c20(void);
extern void FUN_02090f74(short *, void *, void *, int);
extern void FUN_020c1d7c(int, int, int, int, int);
extern int FUN_02040d2c(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);

#pragma thumb off
extern void FUN_0205c8cc(const Vec *, Vec *);
extern unsigned short FUN_0205c9e4(int, int);
extern void FUN_0200c938(void *, int);
extern void FUN_0205b960(const Vec *, const Mtx43 *, Vec *);
extern void FUN_0205b0f0(const Vec *, const Mtx33 *, Vec *);
#pragma thumb on

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * (long long)b + 0x800LL) >> 12);
}

void FUN_overlay_21__0219cfd4(char *self) {
    char *child = *(char **)(self + 4);
    char *parent = *(char **)(self + 8);
    Vec target;
    Vec cur;
    Vec diff;
    Mtx43 mtx43;
    Mtx33 rotMtx;
    Vec nodePos;
    Vec effPos;
    Vec fwd;
    Vec dirOut;
    Vec vel;
    short screen[2];

    switch (*(int *)(self + 0xc)) {
    case 0: {
        unsigned int timer = *(unsigned int *)(self + 0x38);
        if (timer < 0x2d) {
            unsigned short yaw;
            unsigned short angle;
            FUN_overlay_21__0219b25c(parent, &target);
            cur = *(Vec *)(parent + 0x60);
            FUN_02035408(&diff, target.x - cur.x, target.y - cur.y, target.z - cur.z);
            if (diff.x != 0 || diff.y != 0 || diff.z != 0) {
                FUN_0205c8cc(&diff, &diff);
            }
            yaw = (unsigned short)(*(unsigned short *)(parent + 0x4c) + 0x8000 + *(unsigned short *)(child + 0x108));
            angle = (unsigned short)(FUN_0205c9e4(diff.x, diff.z) - yaw);
            FUN_overlay_21__0219b56c(parent, angle);
        } else if (timer == 0x2d) {
            int idx;
            int speed;
            if (*(int *)(self + 0x18) != -1) {
                FUN_02072724(child, *(int *)(self + 0x18));
                *(int *)(self + 0x18) = -1;
            }
            idx = (FUN_overlay_21__0219b65c(parent) >> 4) << 1;
            *(Vec *)(self + 0x20) = *(Vec *)(parent + 0x60);
            speed = DAT_021a1538[1];
            FUN_02035408(&vel, fx_mul(DAT_020ed83c[idx], speed), 0, fx_mul(DAT_020ed83c[idx + 1], speed));
            *(Vec *)(self + 0x2c) = vel;
            *(int *)(self + 0x18) = FUN_02072650(child, 3, 0, 0);
            *(int *)(self + 0x1c) = FUN_02074e9c(child, 0xc, 0, 0);
        } else if (timer >= 0x2d && timer < 0x41) {
            char *eff;
            *(int *)(self + 0x20) += *(int *)(self + 0x2c);
            *(int *)(self + 0x24) += *(int *)(self + 0x30);
            *(int *)(self + 0x28) += *(int *)(self + 0x34);
            FUN_02072750(child, *(int *)(self + 0x18), self + 0x20);
            eff = (char *)FUN_02075040(child, *(int *)(self + 0x1c));
            if (eff != 0) {
                FUN_0204260c(FUN_02036c88(child, *(int *)(parent + 0x28)), 8, &mtx43, &rotMtx);
                FUN_0200c938(&nodePos, 12);
                FUN_0205b960(&nodePos, &mtx43, &nodePos);
                FUN_020345f0(&effPos, &nodePos);
                fwd = DAT_021a0094;
                FUN_0205b0f0(&fwd, &rotMtx, &fwd);
                fwd.y = 0;
                FUN_020345f0(&dirOut, &fwd);
                *(Vec *)(eff + 0x5c) = effPos;
                *(unsigned short *)(eff + 0x6a) = FUN_0205c9e4(dirOut.x, dirOut.z);
                FUN_0204bf88(eff);
            }
            FUN_02090f74(screen, FUN_02090c20(), self + 0x20, 0);
            FUN_020c1d7c(0x1a, 1, screen[0], screen[1], 4);
        } else if (timer == 0x41) {
            if (*(int *)(self + 0x18) != -1) {
                FUN_02072724(child, *(int *)(self + 0x18));
                *(int *)(self + 0x18) = -1;
            }
        }
        break;
    }
    case 1:
        if (FUN_overlay_21__0219b56c(parent, 0) != 0) {
            *(int *)(parent + 0x1c) = 7;
            *(int *)(parent + 0x18) = 2;
        }
        break;
    }

    if (FUN_02040d2c(child, *(int *)(self + 0x10)) != 0) {
        if (*(int *)(self + 0x18) != -1) {
            FUN_02072724(child, *(int *)(self + 0x18));
            *(int *)(self + 0x18) = -1;
        }
        *(int *)(self + 0xc) = 1;
        FUN_02040c0c(child, *(int *)(self + 0x10), 0x2c, 0x1000, 0);
        *(int *)(self + 0x38) = 0;
    }
    *(int *)(self + 0x38) += 1;
}
