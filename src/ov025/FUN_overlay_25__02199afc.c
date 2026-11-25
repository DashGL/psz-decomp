// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern unsigned long long DAT_0211c844[3];
extern void FUN_02036f7c(void *, Vec3 *);
extern void FUN_020bbfbc(Vec3 *, unsigned short);
extern int FUN_overlay_25__0219a3f0(void *, Vec3 *);
extern void FUN_02036348(Vec3 *, const Vec3 *, const Vec3 *);
extern void FUN_02036368(Vec3 *);
extern unsigned short FUN_0205c9e4(int, int);
extern int FUN_02036c34(void *);
extern const int DAT_0219ae14[], DAT_0219ae24;
extern void FUN_020bc610(int *, const int *, const int *);
extern void FUN_020bc5cc(int *, const int *, const int *);

void FUN_overlay_25__02199afc(unsigned char *actor, int mode) {
    Vec3 target, pos, diff;
    int dt, step, ratio, denominator, scale;
    void *owner = *(void **)(actor + 0x10);
    unsigned short yaw, offset;

    FUN_02036f7c(actor, (Vec3 *)(actor + 0xd4));
    yaw = *(unsigned short *)(actor + 0x44);
    if (mode == 2 && *(int *)(actor + 0xe0) == 0) {
        unsigned long long n = DAT_0211c844[1] * DAT_0211c844[0] + DAT_0211c844[2];
        DAT_0211c844[0] = n;
        offset = (unsigned short)(((n >> 32) * 0x2aaaULL) >> 32);
        offset = (unsigned short)(offset - 0x1555);
        yaw = (unsigned short)(yaw + offset);
        FUN_020bbfbc((Vec3 *)(actor + 0xd4), offset);
    } else if (FUN_overlay_25__0219a3f0(owner, &target) != 0) {
        pos = *(const Vec3 *)(actor + 0x38);
        FUN_02036348(&diff, &target, &pos);
        *(Vec3 *)(actor + 0xd4) = diff;
        FUN_02036368((Vec3 *)(actor + 0xd4));
        yaw = FUN_0205c9e4(*(int *)(actor + 0xd4), *(int *)(actor + 0xdc));
    }
    *(unsigned short *)(actor + 0x44) = yaw;
    dt = FUN_02036c34(actor);
    denominator = DAT_0219ae14[5] - DAT_0219ae14[0];
    FUN_020bc610(&ratio, &DAT_0219ae24, &denominator);
    FUN_020bc5cc(&step, &ratio, &dt);
    scale = step;
    *(int *)(actor + 0xd4) = (int)(((long long)*(int *)(actor + 0xd4) * scale + 0x800) >> 12);
    *(int *)(actor + 0xd8) = (int)(((long long)*(int *)(actor + 0xd8) * scale + 0x800) >> 12);
    *(int *)(actor + 0xdc) = (int)(((long long)*(int *)(actor + 0xdc) * scale + 0x800) >> 12);
}
