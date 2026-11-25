// FUN_02098d84 @ 0x02098d84 (0x16, thumb) - ported from FUN_02040e6c [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_02098d84 @ 0x02040e6c, Thumb, true size 0x16 (recorded 0x18 spans
 * the 2-byte inter-function pad; next fn FUN_02040e84).
 * Big-endian 4-byte assembler: (p[0]<<24)|(p[1]<<16)|(p[2]<<8)|p[3].
 * Plain or-chain spelled p0-first; MWCC schedules the loads itself
 * (p[2]/p[3] early, matching the target's five ldrb windows).
 * Called by banked FUN_0204f5a4.
 * MATCHED: first draft, family-neutral 19/24 builds (1.2 sizes out).
 * Reloc-free. Found via the fresh shortlist (census-to-bank).
 */
typedef unsigned char u8;
typedef unsigned int u32;

u32 FUN_02098d84(u8 *p) {
    return (u32)*p << 0x18 | (u32)*(u8 *)(p + 1) << 0x10 | (u32)*(u8 *)(p + 2) << 8 | (u32)*(u8 *)(p + 3);
}
