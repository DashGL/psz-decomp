// flags: -O3,s
typedef struct { int x,y,z; } Vec3;
extern int FUN_02036c34(void *);
extern const int DAT_0219aec8,DAT_0219aecc,DAT_020fc988;
extern const short DAT_020ed83c[];
extern void FUN_020bc610(int *,const int *,const int *);
extern void FUN_020bc5cc(int *,const int *,const int *);
extern void FUN_02035408(Vec3 *,int,int,int);
extern void FUN_02036384(void *,const Vec3 *);
extern void FUN_02037254(void *,int,int,const Vec3 *,int);
extern int FUN_02040d2c(void *,int);
extern int FUN_overlay_30__02199454(void *,Vec3 *);
extern void FUN_02036348(Vec3 *,const Vec3 *,const Vec3 *);
extern unsigned short FUN_overlay_30__0219901c(void *,const Vec3 *);
extern void FUN_02037924(void *);
extern void FUN_02040c0c(void *,int,int,int,int);
extern void FUN_overlay_30__02198d68(void *);
void FUN_overlay_30__02198be0(unsigned char *self)
{
    Vec3 displacement, old_pos, target, diff, pos;
    int dt, phase, period, ratio, step, amplitude, sine;
    unsigned char *actor;
    unsigned char *owner;
    const Vec3 *cur;
    int scale, index, result;

    actor = *(unsigned char **)(self + 4);
    dt = FUN_02036c34(actor);
    period = 0x08000000;
    FUN_020bc610(&ratio, (const int *)(self + 0x1c), &DAT_0219aec8);
    FUN_020bc5cc(&phase, &period, &ratio);
    displacement = *(const Vec3 *)(self + 0xc);
    index = (unsigned short)((unsigned int)phase >> 12);
    sine = DAT_020ed83c[(index >> 4) * 2];
    FUN_020bc5cc(&amplitude, &sine, &DAT_0219aecc);
    FUN_020bc5cc(&step, &amplitude, &dt);
    scale = step;
    displacement.x = (int)(((long long)displacement.x * scale + 0x800) >> 12);
    displacement.y = (int)(((long long)displacement.y * scale + 0x800) >> 12);
    displacement.z = (int)(((long long)displacement.z * scale + 0x800) >> 12);
    cur = (const Vec3 *)(actor + 0x38);
    FUN_02035408(&pos, cur->x + displacement.x, cur->y + displacement.y, cur->z + displacement.z);
    FUN_02036384(actor, &pos);
    FUN_02037254(actor, 17, 1, (const Vec3 *)(actor + 0x38), 0);
    *(int *)(self + 0x1c) += dt;
    if (FUN_02040d2c(actor, 0) != 0) {
        *(int *)(self + 0x18) -= 1;
        if (*(int *)(self + 0x18) == 0) {
            owner = *(unsigned char **)(self + 8);
            old_pos = *(const Vec3 *)(actor + 0x38);
            result = 0;
            if (FUN_overlay_30__02199454(owner, &target) == 1) {
                FUN_02036348(&diff, &target, &old_pos);
                if (FUN_overlay_30__0219901c(actor, &diff) < 0x4000) result = 2;
            }
            *(int *)(owner + 0x48) = result;
            FUN_02037924(owner);
        } else {
            FUN_02040c0c(actor, 0, 2, 0x1000, 0);
            FUN_overlay_30__02198d68(self);
            *(int *)(self + 0x1c) = DAT_020fc988;
        }
    }
}
