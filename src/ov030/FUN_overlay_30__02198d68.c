// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern int DAT_0219aed0;
extern const short DAT_020ed83c[];
extern const Vec3 DAT_020fc958;
extern int FUN_overlay_30__02199454(void *state, Vec3 *out_pos);
extern void FUN_02036348(Vec3 *dst, const Vec3 *a, const Vec3 *b);
#pragma thumb off
extern unsigned short FUN_0205c9e4(int x, int z);
#pragma thumb on
extern void FUN_020bc5cc(int *dst, const int *a, const int *b);
extern int FUN_02035b60(int range);
void FUN_overlay_30__02198d68(char *self) {
    char *state = *(char **)(self + 8);
    Vec3 owner_pos = *(Vec3 *)(*(char **)(self + 4) + 0x38);
    Vec3 target_pos;
    if (FUN_overlay_30__02199454(state, &target_pos) == 1) {
        Vec3 diff;
        unsigned short ang;
        int thresh;
        long long dy, dx, dz;
        int dz2, dx2, dy2, flag, idx;
        Vec3 dir;
        FUN_02036348(&diff, &target_pos, &owner_pos);
        ang = FUN_0205c9e4(diff.x, diff.z);
        FUN_020bc5cc(&thresh, &DAT_0219aed0, &DAT_0219aed0);
        dy = diff.y; dx = diff.x; dz = diff.z;
        dz2 = (int)((dz * dz + 0x800) >> 12);
        dx2 = (int)((dx * dx + 0x800) >> 12);
        dy2 = (int)((dy * dy + 0x800) >> 12);
        flag = !(dz2 + (dx2 + dy2) >= thresh);
        if (flag != 0) ang += FUN_02035b60(0x8000) + 0x4000;
        else ang += FUN_02035b60(0x4000) - 0x2000;
        idx = (ang >> 4) * 2;
        dir.x = DAT_020ed83c[idx];
        dir.y = 0;
        dir.z = DAT_020ed83c[idx + 1];
        *(Vec3 *)(self + 0xc) = dir;
    } else {
        *(Vec3 *)(self + 0xc) = DAT_020fc958;
    }
}
