// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { char pad[0x68]; int thresh; int max_dist; } Ov19Config;
extern Ov19Config DAT_0219d170;
extern int DAT_020ed0a0;
extern char *FUN_overlay_19__02198c94(void *self, int idx);
extern void FUN_020345f0(Vec3 *out_pos, void *src);
extern void FUN_02036348(Vec3 *dst, const Vec3 *a, const Vec3 *b);
extern void FUN_02037390(int *out_dist, const Vec3 *diff);
extern int FUN_02072650(void *owner, int a1, int a2, int a3);
extern void FUN_02072750(void *owner, int handle, void *pos);
extern void FUN_02072724(void *owner, int index);
extern void FUN_0204477c(void *owner, int a1, int x, int z);
extern void FUN_02044570(void *owner, int a1, int a2);
extern void *FUN_02129ed4(void);
extern void FUN_0212a294(void *mgr, int x, int z, int a3, int mode);
void FUN_overlay_19__0219a2f0(char *self, void *owner) {
    int st = *(int *)(self + 0x24);
    int flag = 1;
    if ((unsigned int)(st - 3) <= 3 && ((1 << (st - 3)) & 0xd) != 0) flag = 0;
    if (flag == 1) {
        int min_dist = DAT_0219d170.max_dist;
        if (*(int *)(self + 0x10) < 0x2000) {
            Vec3 self_pos = *(Vec3 *)(self + 0xc);
            int i = 0;
            self_pos.y = 0;
            do {
                char *target = FUN_overlay_19__02198c94(self, i);
                if (target != 0) {
                    Vec3 diff;
                    Vec3 target_pos;
                    volatile int dist;
                    FUN_020345f0(&target_pos, target + 0x9c);
                    FUN_02036348(&diff, &target_pos, &self_pos);
                    FUN_02037390((int *)&dist, &diff);
                    flag = !(dist >= min_dist);
                    if (flag != 0) min_dist = dist;
                }
                i++;
            } while (i <= 3);
        }
        flag = !(min_dist > DAT_0219d170.thresh);
        if (flag != 0) *(int *)(self + 0x64) = 10;
    }
    if (*(int *)(self + 0x64) > 0) {
        if (*(int *)(self + 0x38) == DAT_020ed0a0) *(int *)(self + 0x38) = FUN_02072650(owner, 4, 0, 0);
        FUN_02072750(owner, *(int *)(self + 0x38), self + 0xc);
        *(int *)(self + 0x64) -= 1;
    } else {
        int none = DAT_020ed0a0;
        if (*(int *)(self + 0x38) != none) {
            FUN_02072724(owner, *(int *)(self + 0x38));
            *(int *)(self + 0x38) = none;
        }
    }
    flag = !(*(int *)(self + 0x24) == 3);
    if (flag == 1) FUN_0204477c(owner, *(int *)(self + 0x3c), *(int *)(self + 0xc), *(int *)(self + 0x14));
    else FUN_02044570(owner, *(int *)(self + 0x3c), 0);
    {
        int x = *(int *)(self + 0xc);
        int z = *(int *)(self + 0x14);
        int mode = 0;
        int id = *(int *)(self + 0x28);
        if (*(int *)(self + 0x60) <= 0) mode = 2;
        FUN_0212a294(FUN_02129ed4(), x, z, id + 1, mode);
    }
}