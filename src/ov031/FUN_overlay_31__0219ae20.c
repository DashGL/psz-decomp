// FUN_overlay_31__0219ae20 @ 0x0219ae20 (0x130, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// check: vers=2.0/sp2p3 target=0x130 candidate=0x130 words=0 exact_bytes=0 bad_relocs=0
static inline int check_flag2(unsigned char *actor)
{
    return (*(unsigned int *)(actor + 0xd4) & 2) ? 1 : 0;
}
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

extern void FUN_overlay_31__0219bfc0(void *, Vec3 *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern int FUN_overlay_31__0219bfa4(void *, int);
extern int FUN_02036c34(void *);

void FUN_overlay_31__0219ae20(unsigned char *self)
{
    Vec3 target_pos;
    Vec3 self_pos;
    int thresh;
    void *owner;
    unsigned char *actor;
    int dx;
    int dy;
    int dz;
    int dz2;
    int dx2;
    int dy2;
    int next_state;
    int c1;
    int c2;
    int flag;

    owner = *(void **)(self + 8);
    actor = *(unsigned char **)(self + 4);

    c1 = !(*(int *)0x020fc988 < *(int *)(self + 0xc));
    if (c1 != 0) {
        if (check_flag2(actor) == 1) {
            target_pos = *(const Vec3 *)0x020fc958;
            FUN_overlay_31__0219bfc0(owner, &target_pos);
            self_pos = *(const Vec3 *)(actor + 0x38);

            dx = target_pos.x - self_pos.x;
            dy = target_pos.y - self_pos.y;
            dz = target_pos.z - self_pos.z;

            FUN_020bc5cc(&thresh, (const int *)0x0219ceec, (const int *)0x0219ceec);

            dz2 = (int)(((long long)dz * dz + 0x800) >> 12);
            dx2 = (int)(((long long)dx * dx + 0x800) >> 12);
            dy2 = (int)(((long long)dy * dy + 0x800) >> 12);

            flag = !(dz2 + (dx2 + dy2) >= thresh);
            if (flag != 0) {
                next_state = 8;
            } else {
                next_state = 6;
            }
        } else {
            next_state = 5;
        }

        if (FUN_overlay_31__0219bfa4(owner, next_state) == 0) {
            *(int *)(self + 0xc) = 0x1f4000;
        }
    }

    *(int *)(self + 0xc) -= FUN_02036c34(actor);
}
