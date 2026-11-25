// FUN_overlay_29__02199950 @ 0x02199950 (0x13a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// FUN_overlay_29__02199950.c
// check: vers=2.0/sp2p3 target=0x13a candidate=0x13a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

extern int FUN_overlay_29__02199b94(void *self);
extern int FUN_020370b8(void *owner, int target_id, Vec3 *out_diff);
extern int FUN_overlay_29__02199b4c(void *self);
extern void FUN_02037910(void *self, void *next_state);
extern void FUN_overlay_29__02199afc(void *self, int state_id);
extern int FUN_overlay_29__02199b18(void *self, const int *dist2);
extern int FUN_overlay_29__02199b60(void *self, const int *dist2);
extern int FUN_02037208(void *owner, int range);
extern void FUN_overlay_29__021998fc(void *self);

void FUN_overlay_29__02199950(char *self) {
    int flag = !(*(int *)(self + 8) != *(int *)(self + 0x10));

    if (flag != 0) {
        int target_id = FUN_overlay_29__02199b94(self);
        Vec3 diff;

        if (FUN_020370b8(*(void **)(self + 4), target_id, &diff) == 1) {
            long long dy = diff.y;
            long long dx = diff.x;
            long long dz = diff.z;
            int dz2 = (int)((dz * dz + 0x800) >> 12);
            int dx2 = (int)((dx * dx + 0x800) >> 12);
            int dy2 = (int)((dy * dy + 0x800) >> 12);
            int dist2 = dz2 + (dx2 + dy2);

            if (FUN_overlay_29__02199b4c(self) == 1) {
                FUN_02037910(self, *(void **)(self + 0x34));
                FUN_overlay_29__02199afc(self, 2);
            } else if (FUN_overlay_29__02199b18(self, &dist2) == 1) {
                FUN_02037910(self, *(void **)(self + 0x48));
                FUN_overlay_29__02199afc(self, 1);
            } else if (FUN_overlay_29__02199b60(self, &dist2) == 1) {
                FUN_02037910(self, *(void **)(self + 0x44));
                FUN_overlay_29__02199afc(self, 3);
            } else {
                FUN_02037910(self, *(void **)(self + 0x34));
                FUN_overlay_29__02199afc(self, 2);
                *(int *)(self + 0x60) = 0;
                *(int *)(self + 0x5c) = FUN_02037208(*(void **)(self + 4), 3);
            }
        } else {
            void *next;
            FUN_overlay_29__021998fc(self);
            next = *(void **)(self + 0x48);
            flag = !(next != *(void **)(self + 8));
            if (flag == 0) {
                FUN_02037910(self, next);
                FUN_overlay_29__02199afc(self, 1);
            }
        }
    }
}
