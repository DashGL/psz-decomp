// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x140, exact bytes and relocation targets.
// flags: -O4,p
struct Vec3_c67d8 {
    int x, y, z;
};

struct SubC67d8 {
    int f00;
    char *f04;
    int *f08;
    char pad0c[0x24];
    int f30;
    char pad34[0x1c];
    unsigned int f50;
};

struct EnemyC67d8 {
    int f00;
    int f04;
    int f08;
    struct SubC67d8 *f0c;
};

struct TargetC67d8 {
    char pad00[0x9c];
    struct Vec3_c67d8 pos;
    char pada8[0x18];
    unsigned short angle;
};

extern short DAT_020ed83c[];
extern struct Vec3_c67d8 DAT_020fc958;

extern void FUN_02098bc8(void *);
extern struct TargetC67d8 *FUN_02085640(void);
extern int FUN_0203bee0(struct TargetC67d8 *);
extern void *FUN_02096488(void);
extern void FUN_02096b18(void *, struct Vec3_c67d8 *, int, struct Vec3_c67d8 *, int);
extern void FUN_02098660(void *, void *, int *, struct Vec3_c67d8 *, struct Vec3_c67d8 *, struct Vec3_c67d8 *, int);
extern void FUN_020987d0(void *, void *);
extern void FUN_0209882c(void *);
extern int FUN_0209c774(void *, int, int);

void FUN_020c67d8(struct EnemyC67d8 *self) {
    self->f08 -= 1;
    if (self->f08 > 0) {
        FUN_02098bc8(self->f0c->f08);
    } else {
        struct TargetC67d8 *target = FUN_02085640();
        if (target != 0) {
            struct Vec3_c67d8 pos;
            struct Vec3_c67d8 dir;
            struct Vec3_c67d8 local_18;
            struct Vec3_c67d8 local_0c;
            int idx;
            int dist;

            struct Vec3_c67d8 *p = &target->pos;
            pos.x = target->pos.x;
            pos.y = p->y;
            pos.z = p->z;
            idx = (target->angle >> 4) * 2;
            dir.x = DAT_020ed83c[idx];
            dir.y = 0;
            dir.z = DAT_020ed83c[idx + 1];
            dist = FUN_0203bee0(target);
            dir.x = (int)(((long long)dir.x * dist + 0x800) >> 12);
            dir.y = (int)(((long long)dir.y * dist + 0x800) >> 12);
            dir.z = (int)(((long long)dir.z * dist + 0x800) >> 12);
            local_18 = DAT_020fc958;
            FUN_02096b18(FUN_02096488(), &local_18, self->f0c->f00, &DAT_020fc958, 0);
            FUN_02098660(self->f0c->f08, &local_0c, &self->f08, &pos, &dir, &local_18, 0x2000);
            if (self->f08 >= 2) {
                FUN_020987d0(self->f0c->f08, &local_0c);
            } else {
                FUN_0209882c(self->f0c->f08);
                self->f08 = 0x1e;
            }
        }
    }
    if (FUN_0209c774(self->f0c->f04 + 0x78, *self->f0c->f08, 7) == 0) {
        self->f0c->f30 = 0;
        self->f0c->f50 |= 2;
    }
}
