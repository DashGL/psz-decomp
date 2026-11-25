// FUN_020c2608 @ 0x020c2608 (0x1a, thumb) - ported from FUN_020a8c88 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_020c2608 @ 0x020a8c88 (true 0x1a, thumb; recorded inventory 0x1c spans
 * the 2 pad halfwords before banked FUN_020a8ca4). Draw-item validity gate
 * called by banked FUN_020a8194 (res==0 -> silent skip): index the node
 * table *(int **)ctx (singleton ctx from FUN_020a8654) by handle, require
 * both fields +0x10 and +0x14 nonzero; leaf, no relocations.
 * Live bp census 2026-09-17 tranche 5 (scratch/census_0917e_summary.json):
 * 56.1 hits/s (r0=022aea50 ctx const, r1=2).
 * Matched ALL 24 builds (dsi 9 + 1.2 5 + 2.0 10).
 */
typedef unsigned int u32;

int FUN_020c2608(u32 ctx, int handle)
{
    int *rec;

    rec = ((int **)*(int **)ctx)[handle];
    if (rec[4] != 0 && rec[5] != 0) {
        return 1;
    }
    return 0;
}
