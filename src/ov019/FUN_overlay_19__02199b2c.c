// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern short DAT_020ed83c[];
extern int DAT_0219d1e0;
extern void FUN_020bc610(int *, const int *, const int *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_02091cc0(Vec *, const Vec *, const int *);
extern void FUN_020bbfbc(Vec *, unsigned);
extern void FUN_overlay_19__02198920(Vec *, void *);
extern void FUN_0203647c(Vec *, const Vec *, const Vec *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_02044570(void *, int, int);
extern void FUN_020445a8(void *, int, int);
extern void FUN_02044630(void *, int, int);
extern void FUN_0204477c(void *, int, int, int);

void FUN_overlay_19__02199b2c(char *self, char *owner) {
    Vec position, forward, sum, rotated, anchor, delta;
    int divisor, speed, quotient, cosine;
    int qval;
    unsigned short angle;

    divisor = *(int *)(owner + 0x188);
    cosine = (DAT_020ed83c[((*(unsigned short *)(self + 0x5a) >> 4) << 1) + 1] + 4096) >> 1;
    FUN_020bc610(&quotient, &cosine, &divisor);
    qval = quotient;
    FUN_020bc5cc(&speed, &DAT_0219d1e0, &divisor);
    forward.x = 0;
    forward.y = 0;
    forward.z = 4096;
    FUN_02091cc0(&position, &forward, &speed);
    angle = *(unsigned short *)(self + 0x58);
    rotated = position;
    FUN_020bbfbc(&rotated, angle);
    FUN_overlay_19__02198920(&anchor, owner);
    FUN_0203647c(&sum, &rotated, &anchor);
    position = sum;
    position.y = qval + 4096;
    FUN_02036348(&delta, &position, (Vec *)(self + 0xc));
    *(Vec *)(self + 0x40) = delta;
    *(Vec *)(self + 0xc) = position;
    FUN_02044570(owner, *(int *)(self + 0x3c), 1);
    FUN_020445a8(owner, *(int *)(self + 0x3c), 1);
    FUN_02044630(owner, *(int *)(self + 0x3c), 1);
    FUN_0204477c(owner, *(int *)(self + 0x3c), *(int *)(self + 0xc), *(int *)(self + 0x14));
}
