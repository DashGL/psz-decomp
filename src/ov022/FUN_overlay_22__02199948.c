// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define B(p,o) (*(signed char *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

extern Vec3 DAT_020fc958;

#pragma thumb off
extern int FUN_0205c86c(Vec3 *);
extern unsigned FUN_02009c84(int);
extern unsigned FUN_0200923c(unsigned, unsigned);
extern unsigned FUN_02009f00(unsigned, unsigned);
extern int FUN_02009c50(unsigned);
extern unsigned short FUN_0205c9e4(int, int);
#pragma thumb on

extern int FUN_overlay_22__0219a110(void *);
extern int FUN_overlay_22__0219a130(void *);
extern int FUN_overlay_22__0219a140(void *, int);
extern void FUN_overlay_22__02198994(void *, int);
extern void FUN_overlay_22__0219a0f4(void *, int);
extern void FUN_02035880(void *, int, int, int, int);
extern void FUN_020358e8(void *, int, int, int);
extern void FUN_02035900(void *, int, int);
extern void *FUN_overlay_22__0219a638(int, int);
extern void FUN_02036368(Vec3 *);
extern void FUN_02092654(Vec3 *, int *);
extern void FUN_020bc648(int *, int *);
extern unsigned short FUN_overlay_22__0219a3c4(unsigned short, unsigned short, int);
extern void FUN_overlay_22__0219ae34(void *, int);
extern int FUN_overlay_22__0219a9a8(void *, int, Vec3 *, unsigned short *);
extern int FUN_overlay_22__0219ae68(void *, int, int, Vec3 *);
extern void FUN_overlay_22__0219aef4(void *, int, int);
extern void FUN_overlay_22__0219ad70(void *, int);
extern void FUN_overlay_22__0219af24(void *, int, int, int);
extern int FUN_overlay_22__0219ace0(void *, int, int);
extern void FUN_overlay_22__0219ad08(void *, int, int);
extern void FUN_overlay_22__0219ad2c(void *);
extern void FUN_overlay_22__0219aa30(void *, Vec3 *, int, int, int);
extern void FUN_overlay_22__02199bc0(void *);
extern void FUN_02035408(Vec3 *, int, int, int);

void FUN_overlay_22__02199948(void *self) {
    int state = FUN_overlay_22__0219a110(self), length, remaining, scale, rounded, reciprocal, handle;
    unsigned bits;
    unsigned short angle, angle2;
    Vec3 direction, movement, position, targetpos;
    void *target;

    switch (state) {
    case 35:
        if (FUN_overlay_22__0219a130(self)) FUN_overlay_22__02198994(self, 36);
        if (I(self, 0x48) == 60) {
            FUN_02035880(P(self, 4), I(P(self, 0xc), 0), 4, 0, 0);
            FUN_020358e8(P(self, 4), I(P(self, 0xc), 0), 4, 0x3c000);
        }
        break;
    case 36:
        direction = DAT_020fc958;
        target = FUN_overlay_22__0219a638(B(self, 0x14d), 1);
        if (target) {
            direction.x = I(target, 0xb4) - I(self, 0x10);
            direction.z = I(target, 0xbc) - I(self, 0x18);
        }
        length = FUN_0205c86c(&direction);
        if (length <= 41) {
            direction.z = 0x1000;
            length = FUN_0205c86c(&direction);
        }
        movement = direction;
        FUN_02036368(&movement);
        scale = length - 0x5000;
        FUN_02092654(&movement, &scale);
        remaining = 72 - I(self, 0x48);
        if (remaining < 1) remaining = 1;
        if (remaining > 0) bits = FUN_0200923c(0x3f000000, FUN_02009c84((int)((unsigned)remaining << 12)));
        else bits = FUN_02009f00(FUN_02009c84((int)((unsigned)remaining << 12)), 0x3f000000);
        rounded = FUN_02009c50(bits);
        FUN_020bc648(&reciprocal, &rounded);
        FUN_02092654(&movement, &reciprocal);
        I(self, 0x10) += movement.x;
        I(self, 0x14) += movement.y;
        I(self, 0x18) += movement.z;
        angle = FUN_0205c9e4(direction.x, direction.z);
        H(self, 0x2a) = FUN_overlay_22__0219a3c4(H(self, 0x2a), angle, 0x888);
        FUN_overlay_22__0219ae34(self, 16);
        if (I(self, 0x48) >= 71) {
            position = DAT_020fc958;
            FUN_overlay_22__0219a9a8(self, 0, &position, &angle2);
            handle = FUN_overlay_22__0219ae68(self, 12, 0, &position);
            FUN_overlay_22__0219aef4(self, handle, H(self, 0x2a));
            FUN_overlay_22__0219ad70(self, 17);
            FUN_overlay_22__0219a0f4(self, 37);
        }
        break;
    case 37:
        if (FUN_overlay_22__0219a140(self, 0x8000) == 1) {
            target = FUN_overlay_22__0219a638(B(self, 0x14d), 1);
            if (target) {
                FUN_02035408(&targetpos, I(target, 0xb4), I(target, 0xb8), I(target, 0xbc));
                handle = FUN_overlay_22__0219ae68(self, 26, 0, &targetpos);
                FUN_overlay_22__0219af24(self, handle, 16, 1);
            }
            if (FUN_overlay_22__0219ace0(self, 11, 0) == 1) FUN_overlay_22__0219ad08(self, I(self, 0x10), I(self, 0x18));
        }
        if (FUN_overlay_22__0219a130(self)) {
            FUN_overlay_22__0219ad2c(self);
            FUN_overlay_22__02198994(self, 38);
            FUN_02035880(P(self, 4), I(P(self, 0xc), 0), 4, 1, 0x1000);
        }
        break;
    case 38:
        if (I(self, 0x48) == 109) FUN_02035900(P(self, 4), I(P(self, 0xc), 0), 4);
        break;
    }
    FUN_overlay_22__0219aa30(self, &V(self, 0x10), H(self, 0x28), H(self, 0x2a), H(self, 0x2c));
    switch (state) {
    case 35:
    case 36:
    case 37:
    case 38:
        break;
    default:
        FUN_overlay_22__02199bc0(self);
        break;
    }
}
