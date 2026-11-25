//cpp
// flags: -O4,p
struct Vec3 {
    int x;
    int y;
    int z;
    Vec3() {}
    Vec3(int vx, int vy, int vz) : x(vx), y(vy), z(vz) {}
};
extern "C" {
extern int FUN_overlay_20__021986bc(void *owner);
extern int FUN_020866b4(int target_id, Vec3 *out_pos);
extern void FUN_02036368(Vec3 *v);
extern unsigned short FUN_0205cc08(int z);

void FUN_overlay_20__0219a114(char *self, short *dmg, signed char *atk) {
    char *owner = *(char **)(self + 4);

    if (atk[9] == 1) {
        if (*(int *)(self + 0x94) > 0) {
            *(int *)(self + 0x94) += dmg[0];
            if (*(int *)(self + 0x94) <= 0) {
                FUN_overlay_20__021986bc(owner);
            }
        }
        *(int *)(self + 0xa4) -= dmg[0];
    }

    if (*(int *)(self + 0x98) > 0) {
        *(int *)(self + 0x98) += dmg[0];
    }

    *(int *)(self + 0xa0) -= dmg[0];
    *(int *)(self + 0x9c) -= dmg[0];

    if (*(int *)atk != *(int *)(owner + 0xc)) {
        Vec3 target_pos;
        if (FUN_020866b4(*(int *)atk, &target_pos) != 0) {
            Vec3 *owner_pos = (Vec3 *)(owner + 0x38);
            unsigned short owner_ang = *(unsigned short *)(owner + 0x44);
            Vec3 diff(target_pos.x - owner_pos->x, target_pos.y - owner_pos->y, target_pos.z - owner_pos->z);
            unsigned short ang;
            unsigned short delta;

            FUN_02036368(&diff);
            ang = FUN_0205cc08(diff.z);
            if (diff.x < 0) {
                ang = (unsigned short)(0x10000 - ang);
            }
            delta = (unsigned short)(ang - owner_ang);
            if (delta >= 0x8000) {
                delta = (unsigned short)(0x10000 - delta);
            }
            if (delta >= 0x2aaa) {
                *(int *)(self + 0xa8) -= dmg[0];
                *(int *)(self + 0xac) += 1;
            }
        }
    }
}
}
