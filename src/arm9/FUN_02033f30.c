// FUN_02033f30 @ 0x02033f30 (0x3e, thumb) - ported from FUN_020a51b0 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1020 promotion): the inventory records this
 * span as 0x40, but the real body is 0x3e -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x3e.
 */
typedef unsigned int u32;
extern u32 *FUN_02033c9c(u32 *a0, u32 a2);
extern u32 *FUN_02033c6c(u32 *a0, u32 idx);
extern void FUN_02033f70(u32 *a0, u32 idx, u32 a2);
extern void FUN_02037d4c(u32 *a0, u32 idx, u32 a2);

void FUN_02033f30(u32 *a0, u32 idx, u32 a2)
{
    unsigned char *p2;
    u32 *q;

    p2 = (unsigned char *)FUN_02033c9c(a0, a2);
    q = FUN_02033c6c(a0, idx);
    if (q != 0) {
        if (p2 != 0) {
            if (p2[0xd] != 0) {
                FUN_02033f70(a0, idx, a2);
                return;
            }
            FUN_02037d4c(a0, idx, a2);
        }
    }
}
