// flags: -O3,s
typedef struct { int x, y, z; } Vec;

extern int DAT_0219b374[];
extern int DAT_overlay_26__0219b374[];
extern short DAT_020ed83c[];
extern int FUN_02036c34(void *);
extern void FUN_020bc610(int *, const int *, const int *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_020b78d0(Vec *, const Vec *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02036384(void *, const Vec *);
void FUN_overlay_26__021986c8(char * self) {
    int delta, distance, rate, denominator;
    Vec forward, scaled, unit, target;
    int idx;
    long long x, y, z;

    delta = FUN_02036c34(self);
    denominator = DAT_0219b374[1] - DAT_0219b374[2];
    FUN_020bc610(&rate, DAT_overlay_26__0219b374, &denominator);
    FUN_020bc5cc(&distance, &rate, &delta);
    idx = (*(unsigned short *)((char *)self + 0x44) >> 4) * 2;
    forward.x = DAT_020ed83c[idx];
    forward.y = 0;
    forward.z = DAT_020ed83c[idx + 1];
    FUN_020b78d0(&unit, &forward);
    x = (long long)unit.x * distance;
    y = (long long)unit.y * distance;
    z = (long long)unit.z * distance;
    FUN_02035408(&scaled, (int)((x + 2048) >> 12), (int)((y + 2048) >> 12), (int)((z + 2048) >> 12));
    forward = scaled; { Vec *ap = (Vec *)((char *)self + 0x38); FUN_02035408(&target, *(int *)((char *)self + 0x38) + forward.x, ap->y + forward.y, ap->z + forward.z); }
    FUN_02036384(self, &target);
}

