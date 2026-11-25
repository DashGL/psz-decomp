// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

extern const short DAT_020ed83c[];
extern const int DAT_overlay_23__0219d764;
extern int FUN_overlay_23__0219933c(void *, Vec3 *);
extern unsigned int FUN_overlay_23__02198e38(void *, const Vec3 *, int);
extern int FUN_02072650(void *, int, int, int);
extern void FUN_02072750(void *, int, const Vec3 *);
extern int FUN_02036c34(void *);
extern int FUN_02040d2c(void *, int);
extern int FUN_0207281c(void *, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02072724(void *, int);
extern void FUN_02037924(void *);

static inline int fxmul(long long a, long long b) { return (int)((a * b + 0x800) >> 12); }
void FUN_overlay_23__02199400(unsigned char *self) {
    Vec3 target_pos;
    Vec3 self_pos;
    Vec3 offset_pos;
    unsigned char *actor;
    void *owner;
    int idx;
    long long dist;

    actor = *(unsigned char **)(self + 4);
    owner = *(void **)(self + 8);

    if (*(int *)(self + 0xc) == 0) {
        if (FUN_overlay_23__0219933c(owner, &target_pos) != 0) {
            FUN_overlay_23__02198e38(actor, &target_pos, 0x5000);
        }

        if (*(int *)(self + 0x14) >= 0x2d000 && *(int *)(self + 0x10) == -1) {
            self_pos = *(const Vec3 *)(actor + 0x38);
            idx = ((int)*(unsigned short *)(actor + 0x44) >> 4) << 1;
            dist = DAT_overlay_23__0219d764;
            *(int *)(self + 0x10) = FUN_02072650(actor, 0, 0, 0);

            offset_pos.x = self_pos.x + fxmul(DAT_020ed83c[idx], dist);
            offset_pos.y = self_pos.y;
            offset_pos.z = self_pos.z + fxmul(DAT_020ed83c[idx + 1], dist);
            FUN_02072750(actor, *(int *)(self + 0x10), &offset_pos);
        }

        *(int *)(self + 0x14) += FUN_02036c34(actor);
    }

    if (FUN_02040d2c(actor, 0) != 0) {
        if (*(int *)(self + 0xc) == 0) {
            if (FUN_0207281c(actor, *(int *)(self + 0x10)) > 0) {
                FUN_02040c0c(actor, 0, 7, 0x1000, 0);
                *(int *)(self + 0xc) = 1;
            } else {
                FUN_02040c0c(actor, 0, 8, 0x1000, 0);
                *(int *)(self + 0xc) = 2;
            }

            if (*(int *)(self + 0x10) != -1) {
                FUN_02072724(actor, *(int *)(self + 0x10));
                *(int *)(self + 0x10) = -1;
            }
        } else {
            FUN_02037924(owner);
        }
    }
}
