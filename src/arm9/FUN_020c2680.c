// FUN_020c2680 @ 0x020c2680 (0x20, thumb) - ported from FUN_020a8d00 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_020c2680 @ 0x020a8d00 (0x20, thumb). Node lookup called by banked
 * FUN_020a8194 after the validity gate (node==0 -> silent skip): -1 handle
 * -> 0; index the node table *(int **)ctx by handle; node record +8 == -1
 * -> 0; else return record[0] (the node pointer). Both failure doors
 * return inline (two movs r0,#0 blocks); the -1 constant materializes
 * once (movs r2,#0; mvns r2,r2) and is reused for the second compare.
 * Leaf, no relocations. Live bp census 2026-09-17 tranche 5
 * (scratch/census_0917e_summary.json): 57.2 hits/s, hottest of the scan.
 * Matched dsi/1.1..1.6sp2 (all nine) + all ten 2.0 builds; the 1.2 family
 * emits a far veneer and misses Thumb branch range (999 sentinel) — same
 * known class as FUN_020a8194/FUN_0206d350.
 */
typedef unsigned int u32;

int FUN_020c2680(u32 ctx, int handle)
{
    int *rec;

    if (handle == -1) {
        return 0;
    }
    rec = ((int **)*(int **)ctx)[handle];
    if (rec[2] == -1) {
        return 0;
    }
    return rec[0];
}
