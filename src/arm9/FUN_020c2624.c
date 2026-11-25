// FUN_020c2624 @ 0x020c2624 (0x5c, thumb) - ported from FUN_020a8ca4 [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;

extern void FUN_020ba4d8(u32 id);
extern void FUN_020ba8c4(void *a0);
extern void FUN_020c2a58(u32 slot);

void FUN_020c2624(u32 *p, int *idx) {
    int v;
    u32 t;
    v = *idx;
    if (v != -1) {
        if (v > 8) {
            *idx = -1;
        } else {
            FUN_020ba4d8(((u32 *)((u32 *)*p)[v])[7]);
            FUN_020ba4d8(((u32 *)((u32 *)*p)[*idx])[8]);
            t = ((u32 *)*(u32 *)((u32 *)*p)[*idx])[1];
            if (t != 0) {
                if (t != 0) {
                    FUN_020ba8c4((void *)t);
                }
            }
            FUN_020c2a58(((u32 *)*p)[*idx]);
            *idx = -1;
        }
    }
}
