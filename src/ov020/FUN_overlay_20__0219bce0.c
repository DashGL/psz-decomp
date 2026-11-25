//cpp
// flags: -O4,s
extern "C" {

typedef union { struct { int x, y, z; }; int v[3]; } Vec;
typedef struct { int m[9]; } Mat;

extern const int DAT_020ed0a0;
extern int DAT_0219fbe8[];
extern int DAT_020fc988;
extern const short DAT_020ed83c[];
extern unsigned int DAT_0219ff74;
extern Vec DAT_020fc958;

extern void FUN_020bc658(int *, int *);
extern void FUN_02072724(void *, int);
extern void FUN_02075068(void *, int);
extern int FUN_0207281c(void *, int);
extern int FUN_02074e9c(void *, int, int, int);
extern int FUN_02072650(void *, int, int, int);
extern char *FUN_02075040(void *, int);
extern void *FUN_02090c20(void);
extern void FUN_02090f74(short *, void *, Vec *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_02072750(void *, int, Vec *);
extern void FUN_overlay_20__0219bc7c(void *);
extern int FUN_02036c64(void *);
extern int FUN_020866b4(int, Vec *);
extern void FUN_02036348(Vec *, Vec *, Vec *);
extern void FUN_02036368(Vec *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_0205ab90(Mat *, int, int);
extern void FUN_0205abac(Mat *, int, int);

#pragma thumb off
extern int FUN_0205c86c(Vec *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_0205aed0(Mat *, Mat *, Mat *);
#pragma thumb on

#define W(p, n) (*(int *)((char *)(p) + (n)))
#define H(p, n) (*(unsigned short *)((char *)(p) + (n)))
#define FX(a, b) ((int)(((long long)(a) * (b) + 2048LL) >> 12))

static inline int fx_gt(int a, int b) { return a > b ? 1 : 0; }
static inline int fx_lt(int a, int b) { return a < b ? 1 : 0; }
static inline int fx_le(int a, int b) { return a <= b ? 1 : 0; }
static inline int fx_abs(int in_val) { int a; FUN_020bc658(&a, &in_val); return a; }

void FUN_overlay_20__0219bce0(char *self)
{
    int i;
    unsigned short difference;
    bool positive;
    unsigned short turn;
    int sentinel;

    i = 0;
    sentinel = DAT_020ed0a0;
    for (; i < 6; i++) {
        char *record = *(char **)(self + 216) + 72 * i;
        if ((*(volatile int *)(record + 60) != 0 ? 1 : 0) != 0) {
            switch (W(record, 60)) {
            case 1:
                {
                    int invalid = 0;
                    int hit;
                    int low;
                    Vec position;
                    Vec target;
                    Vec direction;
                    Vec old;
                    Mat pitch;
                    Vec dir2;
                    Vec vertical;
                    Vec dir3;
                    Mat yaw;
                    Vec dir;
                    Vec delta;
                    short screen[2];

                    
                    if (W(record, 52) != 0) {
                        int cond = 1;
                        if (!fx_gt(fx_abs(W(record, 20)), DAT_0219fbe8[12] + DAT_0219fbe8[2])) {
                            if (!fx_gt(fx_abs(W(record, 12)), DAT_0219fbe8[11] + DAT_0219fbe8[2])) {
                                cond = 0;
                            }
                        }
                        if (cond) {
                            invalid = 1;
                        }
                    }
                    hit = (W(record, 52) != 0 && FUN_0207281c(self, W(record, 0)) > 0);
                    low = fx_lt(W(record, 16), DAT_020fc988);
                    if (invalid || hit || low) {
                        char *effect;
                        FUN_02072724(self, W(record, 0));
                        W(record, 0) = sentinel;
                        FUN_02075068(self, W(record, 4));
                        W(record, 4) = FUN_02074e9c(self, 8, 0, 0);
                        effect = FUN_02075040(self, W(record, 4));
                        if (effect) {
                            position = *(Vec *)(record + 12);
                            position.y = 0;
                            *(Vec *)(effect + 92) = position;
                        }
                        FUN_02090f74(screen, FUN_02090c20(), (Vec *)(record + 12), 1);
                        FUN_020c193c(25, 10, screen[0], screen[1], 4);
                        W(record, 60) = 2;
                    } else {
                        int step = FUN_02036c64(self);
                        char *effect;
                        if (W(record, 52) != 0) {
                            if (FUN_020866b4(W(record, 44), &target)) {
                                volatile unsigned short *pYaw = (volatile unsigned short *)&H(record, 36);
                                unsigned short angle;
                                unsigned short threshold;
                                unsigned short cur;
                                FUN_02036348(&direction, &target, (Vec *)(record + 12));
                                direction.y = 0;
                                FUN_02036368(&direction);
                                angle = FUN_0205cc08(direction.z);
                                if (direction.x < 0) {
                                    angle = (unsigned short)(65536 - angle);
                                }
                                difference = (unsigned short)(angle - *pYaw);
                                positive = 1;
                                if (difference >= 32768) {
                                    difference = (unsigned short)(65536 - difference);
                                    positive = 0;
                                }
                                turn = (unsigned short)FX(H(record, 48), step);
                                threshold = (unsigned short)FX(step, 910);
                                if (difference < threshold) {
                                    turn = (unsigned short)((int)(turn * difference) / 910);
                                }
                                if (positive) {
                                    *(unsigned short *)pYaw = (unsigned short)(*(unsigned short *)pYaw + turn);
                                } else {
                                    *(unsigned short *)pYaw = (unsigned short)(*(unsigned short *)pYaw - turn);
                                }
                            }
                            {
                                int j = H(record, 36) >> 4;
                                int speed;
                                dir.x = DAT_020ed83c[2 * j];
                                dir.y = 0;
                                dir.z = DAT_020ed83c[2 * j + 1];
                                *(Vec *)(record + 24) = dir;
                                speed = W(record, 40);
                                W(record, 24) = FX(W(record, 24), speed);
                                W(record, 28) = FX(W(record, 28), speed);
                                W(record, 32) = FX(W(record, 32), speed);
                            }
                        }
                        if (!(DAT_0219ff74 & 1)) {
                            DAT_0219fbe8[0] = 8192;
                            DAT_0219ff74 |= 1;
                        }
                        if (fx_le(W(record, 16), DAT_0219fbe8[0])) {
                            if (W(record, 0) == sentinel) {
                                W(record, 0) = FUN_02072650(self, (W(record, 64) == 1 ? 1 : 0) ? 3 : 2, 0, 0);
                            }
                        } else {
                            FUN_02072724(self, W(record, 0));
                            W(record, 0) = sentinel;
                        }
                        old = *(Vec *)(record + 12);
                        FUN_02035408(&delta, FX(W(record, 24), step), FX(W(record, 28), step), FX(W(record, 32), step));
                        W(record, 12) += delta.x;
                        W(record, 16) += delta.y;
                        W(record, 20) += delta.z;
                        FUN_02072750(self, W(record, 0), (Vec *)(record + 12));
                        effect = FUN_02075040(self, W(record, 4));
                        if (effect) {
                            *(Vec *)(effect + 92) = *(Vec *)(record + 12);
                        }
                        if (effect) {
                            unsigned short angle;
                            int j;
                            FUN_02036348(&dir2, (Vec *)(record + 12), &old);
                            vertical = DAT_020fc958;
                            vertical.y = dir2.y;
                            dir2.y = 0;
                            vertical.z = FUN_0205c86c(&dir2);
                            FUN_02036368(&vertical);
                            angle = FUN_0205cc08(vertical.z);
                            if (vertical.y > 0) {
                                angle = (unsigned short)(65536 - angle);
                            }
                            j = angle >> 4;
                            FUN_0205ab90(&pitch, DAT_020ed83c[2 * j], DAT_020ed83c[2 * j + 1]);
                            FUN_02036348(&dir3, (Vec *)(record + 12), &old);
                            dir3.y = 0;
                            FUN_02036368(&dir3);
                            angle = FUN_0205cc08(dir3.z);
                            if (dir3.x < 0) {
                                angle = (unsigned short)(65536 - angle);
                            }
                            j = angle >> 4;
                            FUN_0205abac(&yaw, DAT_020ed83c[2 * j], DAT_020ed83c[2 * j + 1]);
                            FUN_0205aed0(&pitch, &yaw, &pitch);
                            *(Mat *)(effect + 112) = pitch;
                        }
                        if (fx_lt(W(record, 68), DAT_0219fbe8[5])) {
                            W(record, 68) += DAT_0219fbe8[6];
                        }
                    }
                }
                break;
            case 2:
                if (!FUN_02075040(self, W(record, 4))) {
                    FUN_overlay_20__0219bc7c(record);
                }
                break;
            }
        }
    }
}

}
