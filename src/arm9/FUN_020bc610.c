// FUN_020bc610 @ 0x020bc610 (0x10, thumb) - ported from FUN_020aa62c [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_020bc610 @ 0x020aa62c (0x10, Thumb) — live game-side vector helper.
 * Loads the two input words and stores FUN_0205c520's scalar result.
 *
 * MATCHED: all 9 dsi builds, 1.2/sp3..sp4, and all 10 2.0-family builds.
 * Other 1.2 builds size out. Word compare and relocations verified.
 */
typedef unsigned int u32;

extern u32 FUN_0205c520(u32, u32);

void FUN_020bc610(u32 *out, u32 *a, u32 *b)
{
    *out = FUN_0205c520(*a, *b);
}
