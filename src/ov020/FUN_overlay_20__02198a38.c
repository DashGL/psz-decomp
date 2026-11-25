// flags: -O4,s
typedef struct { int x, y, z; } Vec;
#define I(p, o) (*(int *)((char *)(p) + (o)))
#define P(p, o) (*(void **)((char *)(p) + (o)))
#define H(p, o) (*(unsigned short *)((char *)(p) + (o)))
#define V(p, o) (*(Vec *)((char *)(p) + (o)))

extern unsigned char DAT_0219f940[];
extern int DAT_020fc988;
extern int DAT_0219f968, DAT_0219f964, DAT_0219f958, DAT_0219f954;
extern int DAT_0219f96c, DAT_0219f960, DAT_0219f95c, DAT_0219f950;
extern short DAT_020ed83c[];

extern void FUN_02092654(Vec *, const int *);
extern void FUN_020bc5e8(int *, const int *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_020bc658(int *, const int *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_02036368(Vec *);
extern int FUN_0205c86c(const Vec *);
extern unsigned short FUN_0205cc08(int);
extern unsigned int FUN_02009c84(int);
extern unsigned int FUN_02009d14(unsigned int, unsigned int);
extern int FUN_02009c50(unsigned int);
extern void FUN_02043f30(void *, int, const Vec *);
extern void FUN_02043f74(void *, int, int);
extern void FUN_02043fb4(void *, int, int);

static inline int gt_fx(const int *a, const int *b) { return !(*a <= *b); }
static inline int lt_fx(const int *a, const int *b) { return !(*a >= *b); }
void FUN_overlay_20__02198a38(void *self) {
    Vec wobble, delta, unit;
    int length, scaled, force, scaled2, force2, sine, negative, absolute, neg1, absolute2, neg2;
    unsigned short angle, roll, pitch;
    void *body;
    int clamp;

    if (I(self, 0xec) & 4) {
        int v = I(P(self, 0xd4), 0x50) + I(DAT_0219f940, 0x30);
        I(P(self, 0xd4), 0x50) = v;
        if (gt_fx(&v, &I(DAT_0219f940, 0x34)) != 0) {
            I(P(self, 0xd4), 0x50) = I(DAT_0219f940, 0x34);
        }
    } else {
        int v = I(P(self, 0xd4), 0x50) - I(DAT_0219f940, 0x30);
        I(P(self, 0xd4), 0x50) = v;
        if (lt_fx(&v, &DAT_020fc988) != 0) {
            I(P(self, 0xd4), 0x50) = DAT_020fc988;
        }
    }

    H(P(self, 0xd4), 0x4c) += 728;
    {
        int wy = DAT_020ed83c[((int)H(P(self, 0xd4), 0x4c) >> 4) * 2];
        wobble.x = 0;
        wobble.y = wy;
        wobble.z = 0;
    }
    FUN_02092654(&wobble, &I(P(self, 0xd4), 0x50));

    FUN_020bc5e8(&I(P(self, 0xd4), 0x60), &DAT_0219f968);
    FUN_020bc5e8(&I(P(self, 0xd4), 0x58), &DAT_0219f964);
    FUN_020bc5e8(&I(P(self, 0xd4), 0x5c), &DAT_0219f958);
    FUN_020bc5e8(&I(P(self, 0xd4), 0x54), &DAT_0219f954);

    FUN_02036348(&delta, &V(P(self, 0xd4), 0xc), &V(P(self, 0xd4), 0x18));
    length = FUN_0205c86c(&delta);
    unit = delta;
    FUN_02036368(&unit);

    if (!((I(P(self, 0xd4), 0) & 2) == 0) != 0) {
        int tmp;
        int *p58;
        angle = FUN_0205cc08(unit.z);
        if (unit.x < 0) {
            angle = (unsigned short)(0x10000 - angle);
        }
        angle = (unsigned short)(angle - H(self, 0x44));
        sine = DAT_020ed83c[((int)angle >> 4) * 2];
        FUN_020bc5cc(&scaled, &length, &sine);
        FUN_020bc5cc(&force, &scaled, &DAT_0219f96c);
        negative = -4096;
        FUN_020bc5e8(&force, &negative);
        tmp = I(P(self, 0xd4), 0x60) + force;
        I(P(self, 0xd4), 0x60) = tmp;
        body = P(self, 0xd4);
        I(body, 0x58) += tmp;
        p58 = &I(body, 0x58);
        FUN_020bc658(&absolute, p58);
        clamp = I(DAT_0219f940, 0x20);
        if (!(absolute < clamp) != 0) {
            int *p;
            if (*p58 >= 0) {
                p = &DAT_0219f960;
            } else {
                neg1 = -clamp;
                p = &neg1;
            }
            *p58 = *p;
        }
    }

    body = P(self, 0xd4);
    roll = (unsigned short)(FUN_02009c50(FUN_02009d14(0x43360b60, FUN_02009c84(I(body, 0x58)))) >> 12);

    if (!((I(body, 0) & 4) == 0) != 0) {
        int tmp;
        int *p54;
        scaled2 = delta.y;
        FUN_020bc5cc(&force2, &scaled2, &DAT_0219f95c);
        tmp = I(P(self, 0xd4), 0x5c) + force2;
        I(P(self, 0xd4), 0x5c) = tmp;
        body = P(self, 0xd4);
        I(body, 0x54) += tmp;
        p54 = &I(body, 0x54);
        FUN_020bc658(&absolute2, p54);
        clamp = I(DAT_0219f940, 0x10);
        if (!(absolute2 < clamp) != 0) {
            int *p;
            if (*p54 >= 0) {
                p = &DAT_0219f950;
            } else {
                neg2 = -clamp;
                p = &neg2;
            }
            *p54 = *p;
        }
    }

    pitch = (unsigned short)(FUN_02009c50(FUN_02009d14(0x43360b60, FUN_02009c84(I(P(self, 0xd4), 0x54)))) >> 12);
    FUN_02043f30(self, 0, &wobble);
    FUN_02043f74(self, 0, (unsigned short)(pitch + H(P(self, 0xd4), 0x70)));
    FUN_02043fb4(self, 0, (unsigned short)(roll + H(P(self, 0xd4), 0x72)));
}
