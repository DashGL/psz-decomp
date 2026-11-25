// FUN_overlay_30__0219a610 @ 0x0219a610 (0xb8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch3.json; original draft retained for referenced provenance.
// FUN_overlay_30__0219a610.c
// check: vers=2.0/sp2p3 target=0xb8 candidate=0xb8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {
    int x;
    int y;
    int z;
} Vec3;

extern int DAT_020fc988;

extern void FUN_02040c0c(void *owner, int a1, int anim_id, int speed, int a4);
extern int FUN_overlay_30__02199ab4(void *state, Vec3 *out_pos);
extern void FUN_02036348(Vec3 *dst, const Vec3 *a, const Vec3 *b);
extern void FUN_02036368(Vec3 *v);
extern unsigned short FUN_0205cc08(int z);

void FUN_overlay_30__0219a610(char *self) {
    char *owner = *(char **)(self + 4);
    char *state = *(char **)(self + 8);
    Vec3 target_pos;
    unsigned short rot;

    FUN_02040c0c(owner, 0, 9, 0x1000, 0);
    *(int *)(self + 0x14) = *(int *)(state + 0x7c);
    *(int *)(self + 0x18) = DAT_020fc988;
    *(int *)(self + 0x10) = *(int *)(state + 0x78);
    *(unsigned short *)(self + 0x1e) = *(unsigned short *)(state + 0x80);
    *(int *)(self + 0xc) = 0;

    rot = *(unsigned short *)(owner + 0x44);
    if (FUN_overlay_30__02199ab4(state, &target_pos)) {
        Vec3 diff;
        const Vec3 *owner_pos = (const Vec3 *)(owner + 0x38);
        switch (*(int *)(self + 0x10)) {
        case 0: {
            Vec3 tmp0;
            FUN_02036348(&tmp0, &target_pos, owner_pos);
            diff = tmp0;
            break;
        }
        case 1: {
            Vec3 tmp1;
            FUN_02036348(&tmp1, owner_pos, &target_pos);
            diff = tmp1;
            break;
        }
        }
        diff.y = 0;
        FUN_02036368(&diff);
        {
            unsigned short ang = FUN_0205cc08(diff.z);
            if (diff.x < 0) {
                ang = (unsigned short)(0x10000 - ang);
            }
            *(unsigned short *)(self + 0x1c) = ang;
        }
    } else {
        *(unsigned short *)(self + 0x1c) = (unsigned short)(rot + 0x8000);
    }
}
