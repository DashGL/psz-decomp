// FUN_0208ef48 @ 0x0208ef48 (0x60, thumb) - ported from FUN_020a27e4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_0208ef48 @ 0x020a27e4 (0x60, Thumb), verified dsi/1.1.
 * Game descriptor table slot allocation/key lookup, called by banked a3794/a3874. Three inputs:17-entry table, resource source, key. a2798 returns index or sentinel-10 (search existing entries). Entry layout ptr0/index4/key8; negative index and failed load return-1. Out-parameter to aaf50 is a zeroed stack local, not a fourth argument. File loading remains external. No pool; returna2842 ends exact60.
 * 2026-10-15: unchanged recovered body matches with -O4,s; default -O4,p
 * caused the previously recorded compiler residual. Full words and relocations pass.
 * True extent checked against ROM return/pool boundaries; trailing inventory
 * padding is excluded when present. Gameplay has not been tested.
 */
typedef unsigned int u32;

extern int FUN_0208eefc(u32 **tbl, u32 key);
extern u32 *FUN_020ba374(u32 src, u32 *out, u32 len);

int FUN_0208ef48(u32 **tbl, u32 param_2, u32 key)
{
    int idx;
    u32 local_18;
    int i;
    idx = FUN_0208eefc(tbl, key);
    if (idx == -10) {
        for (i = 0; i < 0x11; i++) {
            u32 *e = tbl[i];
            if (e == 0) {
                continue;
            }
            if (key != e[2]) {
                continue;
            }
            return e[1];
        }
    } else if (idx >= 0) {
        local_18 = 0;
        tbl[idx][0] = FUN_020ba374(param_2, &local_18, 0x20);
        if (tbl[idx][0] != 0) {
            return idx;
        }
    }
    return -1;
}
