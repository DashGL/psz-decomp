// FUN_0203194c @ 0x0203194c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_0203194c @ 0x0203194c (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Clear state flag, clean singleton, touch global getter and clear manager field in observed call order.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/0203194c.txt.
 */
extern void FUN_02032a58(void *),FUN_02072d28(void *),FUN_0204f34c(void);
extern void *FUN_02072af0(void),*FUN_0204f3b8(void);
void FUN_0203194c(void) { FUN_02032a58(*(void **)0x02108c64); FUN_02072d28(FUN_02072af0()); FUN_0204f3b8(); FUN_0204f34c(); }
