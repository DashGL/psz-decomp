typedef struct {
    int x;
    int y;
    int z;
} Vec3;

typedef struct {
    int v;
} Fx;

extern const short DAT_020ed83c[];
extern int DAT_021a1328;
extern Fx DAT_020fc988;

extern void FUN_02091cc0(Vec3 *dst, const Vec3 *dir, const int *scale);
extern void FUN_0203647c(Vec3 *dst, const Vec3 *a, const Vec3 *b);
extern void FUN_02043ef0(void *owner, int part, Vec3 *pos, int rx, int ry, int rz);
extern void FUN_overlay_21__021991c8(void *owner, int a1, int a2, int a3, int a4, Fx a5, Fx a6);

void FUN_overlay_21__0219b154(char *self) {
    unsigned short base_ang = *(unsigned short *)(*(char **)(self + 4) + 0x108);
    unsigned short ang = (unsigned short)(*(unsigned short *)(self + 0x4c) + base_ang);
    int idx = ((int)ang >> 4) << 1;
    Vec3 dir;
    Vec3 pos1;
    Vec3 base;
    Vec3 off1;
    Vec3 pos2;
    Vec3 off2;
    Fx zero;
    char *owner;

    dir.x = DAT_020ed83c[idx];
    dir.y = 0;
    dir.z = DAT_020ed83c[idx + 1];

    base = *(Vec3 *)(*(char **)(self + 4) + 0xfc);
    FUN_02091cc0(&off1, &dir, (const int *)(self + 0x44));
    FUN_0203647c(&pos1, &base, &off1);
    *(Vec3 *)(self + 0x60) = pos1;

    FUN_02091cc0(&off2, &dir, &DAT_021a1328);
    FUN_0203647c(&pos2, (const Vec3 *)(self + 0x60), &off2);
    *(Vec3 *)(self + 0x6c) = pos2;
    *(int *)(self + 0x64) = *(int *)(self + 0x48);

    ang += *(unsigned short *)(self + 0x50);
    owner = *(char **)(self + 4);
    if (*(int *)(owner + 0xd4) == 1) {
        ang -= 0x8000;
    }

    FUN_02043ef0(owner, *(int *)(self + 0x28), (Vec3 *)(self + 0x60), 0, ang, 0);

    if (*(int *)(self + 0x10) == 1) {
        FUN_overlay_21__021991c8(*(void **)(self + 4), *(int *)(self + 0x2c), *(int *)(self + 0x28),
                                 *(int *)(self + 0x34), *(int *)(self + 0x38), *(Fx *)(self + 0x40), DAT_020fc988);
    }

    zero = DAT_020fc988;
    FUN_overlay_21__021991c8(*(void **)(self + 4), *(int *)(self + 0x30), *(int *)(self + 0x28),
                             *(int *)(self + 0x38), *(int *)(self + 0x3c), zero, zero);
}
