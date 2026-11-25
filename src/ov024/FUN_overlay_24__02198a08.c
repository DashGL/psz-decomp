// FUN_overlay_24__02198a08 @ 0x02198a08 (0x134, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// FUN_overlay_24__02198a08.c
// check: vers=2.0/sp2p3 target=0x134 candidate=0x134 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

extern int DAT_0219c340;
extern int DAT_020fc988;

extern int FUN_overlay_24__021983a0(void *state, Vec3 *out_pos);
extern unsigned int FUN_overlay_24__02198e20(void *owner, const Vec3 *diff);
extern void FUN_020bc5cc(int *dst, const int *a, const int *b);
extern void FUN_02037924(void *state);
extern int FUN_02036c34(void *owner);

void FUN_overlay_24__02198a08(char *self) {
    char *owner = *(char **)(self + 4);
    char *state = *(char **)(self + 8);
    Vec3 owner_pos = *(Vec3 *)(owner + 0x38);
    Vec3 target_pos;
    int flag;

    if (FUN_overlay_24__021983a0(state, &target_pos) == 1) {
        Vec3 diff;
        int thresh;
        unsigned int ang_diff;
        long long dy;
        long long dx;
        long long dz;
        int dz2;
        int dx2;
        int dy2;

        diff.x = target_pos.x - owner_pos.x;
        diff.y = target_pos.y - owner_pos.y;
        diff.z = target_pos.z - owner_pos.z;

        ang_diff = FUN_overlay_24__02198e20(owner, &diff);
        FUN_020bc5cc(&thresh, &DAT_0219c340, &DAT_0219c340);

        dy = diff.y;
        dx = diff.x;
        dz = diff.z;
        dz2 = (int)((dz * dz + 0x800) >> 12);
        dx2 = (int)((dx * dx + 0x800) >> 12);
        dy2 = (int)((dy * dy + 0x800) >> 12);

        flag = !(dz2 + (dx2 + dy2) >= thresh);
        if (flag != 0) {
            *(int *)(state + 0x54) = (ang_diff < 0x4000u) ? 2 : 3;
            FUN_02037924(state);
            return;
        }
    }

    flag = !(DAT_020fc988 < *(int *)(self + 0xc));
    if (flag != 0) {
        *(int *)(state + 0x54) = (*(int *)(state + 0x58) != -1) ? 3 : 4;
        FUN_02037924(state);
    }

    *(int *)(self + 0xc) -= FUN_02036c34(owner);
}
