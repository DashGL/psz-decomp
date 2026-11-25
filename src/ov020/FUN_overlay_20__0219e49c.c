// flags: -O2
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

extern const short DAT_020ed83c[];
extern int FUN_02036c34(void *);
extern int FUN_020866b4(unsigned int, Vec3 *);
extern void FUN_0205c8cc(const Vec3 *, Vec3 *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_02037924(void *);

void FUN_overlay_20__0219e49c(unsigned char *self)
{
    Vec3 target_pos;
    Vec3 diff;
    unsigned char *actor;
    void *owner;
    unsigned short target_angle;
    unsigned short step;
    int dt;
    unsigned short cur_angle;
    int dir;
    unsigned short gap;
    int idx;
    int done;

    actor = *(unsigned char **)(self + 4);
    owner = *(void **)(self + 8);
    dt = FUN_02036c34(actor);

    if (FUN_020866b4(*(unsigned int *)(self + 0x18), &target_pos) != 0) {
        const Vec3 *op = (const Vec3 *)(actor + 0x38);
        int x, y, z;
        cur_angle = *(unsigned short *)(actor + 0x44);
        z = target_pos.z - op->z;
        y = target_pos.y - op->y;
        x = target_pos.x - op->x;
        diff.x = x;
        diff.y = y;
        diff.z = z;
        diff.y = 0;

        if (diff.x != 0 || diff.y != 0 || diff.z != 0) {
            FUN_0205c8cc(&diff, &diff);
        }

        target_angle = FUN_0205cc08(diff.z);
        if (diff.x < 0) {
            target_angle = (unsigned short)(0x10000 - target_angle);
        }

        dir = 1;
        gap = (unsigned short)(target_angle - cur_angle);
        if (gap >= 0x8000) {
            gap = (unsigned short)(0x10000 - gap);
            dir = 0;
        }

        step = (unsigned short)(((long long)*(unsigned short *)(self + 0xc) * dt + 0x800) >> 12);
        idx = (((*(int *)(self + 0x14) >> 12) << 15) / (*(int *)(self + 0x10) >> 12)) >> 4;
        step = (unsigned short)(((long long)step * DAT_020ed83c[idx * 2] + 0x800) >> 12);

        if (step > gap) {
            cur_angle = target_angle;
            FUN_02037924(owner);
        } else if (dir != 0) {
            cur_angle = (unsigned short)(cur_angle + step);
        } else {
            cur_angle = (unsigned short)(cur_angle - step);
        }

        *(unsigned short *)(actor + 0x44) = cur_angle;
    }

    *(int *)(self + 0x14) += dt;
    done = !(*(int *)(self + 0x14) < *(int *)(self + 0x10));
    if (done != 0) {
        FUN_02037924(owner);
    }
}
