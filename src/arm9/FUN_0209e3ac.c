// FUN_0209e3ac @ 0x0209e3ac (0x1a, thumb) - ported from FUN_0209a678 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x1c, but the real body is 0x1a -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x1a.
 */
typedef unsigned int u32;
typedef int s32;

extern s32 FUN_0209e390(u32 a, int b);

s32 FUN_0209e3ac(u32 a, int b)
{
    s32 half;

    half = FUN_0209e390(a, b) / 2;
    if (b == 1 && half == 1) {
        return 2;
    }
    return half;
}
