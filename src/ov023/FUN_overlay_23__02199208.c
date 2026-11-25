// flags: -O4,s
typedef struct { int x; int y; int z; } Vec3;
extern int DAT_0219d714[];
extern int FUN_02037294(void *owner, const Vec3 *pos);
extern int FUN_overlay_23__0219933c(void *self, Vec3 *out_pos);
extern void FUN_02037910(void *self, void *next_state);

void FUN_overlay_23__02199208(char *self) {
    char *owner = *(char **)(self + 4);
    int flag = !(*(int *)(self + 8) != *(int *)(self + 0x10));
    if (flag != 0) {
        Vec3 owner_pos = *(Vec3 *)(owner + 0x38);
        Vec3 target_pos;
        *(int *)(self + 0x50) = FUN_02037294(owner, &owner_pos);
        if (FUN_overlay_23__0219933c(self, &target_pos) != 0) {
            int dy = ((volatile Vec3 *)&target_pos)->y - owner_pos.y;
            int dz = ((volatile Vec3 *)&target_pos)->z - owner_pos.z;
            int dx = target_pos.x - owner_pos.x;
            long long zz = (long long)dz * dz;
            long long xx = (long long)dx * dx;
            long long yy = (long long)dy * dy;
            int dist2 = (int)((zz + 0x800) >> 12) + ((int)((xx + 0x800) >> 12) + (int)((yy + 0x800) >> 12));
            int mode = *(int *)(self + 0x4c);
            if ((unsigned int)(mode - 1) <= 1 && (flag = !(dist2 >= DAT_0219d714[3])) != 0) {
                *(int *)(self + 0x4c) = 3;
                FUN_02037910(self, *(void **)(self + 0x3c));
            } else if (mode == 1) {
                *(int *)(self + 0x4c) = 2;
                FUN_02037910(self, *(void **)(self + 0x38));
            } else if (mode == 3 && (flag = !(dist2 >= DAT_0219d714[1])) != 0) {
                *(int *)(self + 0x4c) = 4;
                FUN_02037910(self, *(void **)(self + 0x40));
            } else {
                *(int *)(self + 0x4c) = 1;
                FUN_02037910(self, *(void **)(self + 0x34));
            }
        } else {
            *(int *)(self + 0x4c) = 1;
            FUN_02037910(self, *(void **)(self + 0x34));
        }
    }
}
