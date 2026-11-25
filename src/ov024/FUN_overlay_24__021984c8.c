// FUN_overlay_24__021984c8 @ 0x021984c8 (0x12c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// FUN_overlay_24__021984c8.c
// check: vers=2.0/sp2p3 target=0x12c candidate=0x12c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

extern int DAT_0219c280;

extern int FUN_02040d2c(void *owner, int idx);
extern int FUN_overlay_24__021983a0(void *state, Vec3 *out_pos);
extern void FUN_02037924(void *state);
extern unsigned int FUN_overlay_24__02198e20(void *owner, const Vec3 *diff);
extern void FUN_020bc5cc(int *dst, const int *a, const int *b);
extern void FUN_overlay_24__02198e70(void *owner, const Vec3 *target_pos, int speed, int flag);
extern void FUN_02040c0c(void *owner, int a1, int anim_id, int speed, int a4);

void FUN_overlay_24__021984c8(char *self) {
    char *owner = *(char **)(self + 4);
    Vec3 owner_pos;
    Vec3 target_pos;
    Vec3 diff;
    int thresh;
    unsigned int ang_diff;
    long long dy;
    long long dx;
    long long dz;
    int dz2;
    int dx2;
    int dy2;
    int flag;

    if (FUN_02040d2c(owner, 0) == 0) {
        return;
    }

    owner_pos = *(Vec3 *)(owner + 0x38);
    if (!FUN_overlay_24__021983a0(*(void **)(self + 8), &target_pos)) {
        FUN_02037924(*(void **)(self + 8));
        return;
    }

    if (--(*(int *)(self + 0xc)) == 0) {
        FUN_02037924(*(void **)(self + 8));
        return;
    }

    diff.x = target_pos.x - owner_pos.x;
    diff.y = target_pos.y - owner_pos.y;
    diff.z = target_pos.z - owner_pos.z;

    ang_diff = FUN_overlay_24__02198e20(owner, &diff);
    FUN_020bc5cc(&thresh, &DAT_0219c280, &DAT_0219c280);

    dy = diff.y;
    dx = diff.x;
    dz = diff.z;
    dz2 = (int)((dz * dz + 0x800) >> 12);
    dx2 = (int)((dx * dx + 0x800) >> 12);
    dy2 = (int)((dy * dy + 0x800) >> 12);

    flag = !(dz2 + (dx2 + dy2) <= thresh);
    if (flag != 0 || ang_diff > 0x4000u) {
        FUN_02037924(*(void **)(self + 8));
    } else {
        FUN_overlay_24__02198e70(owner, &target_pos, 0x800, 0);
        FUN_02040c0c(*(void **)(self + 4), 0, 6, 0x1000, 0);
    }
}
