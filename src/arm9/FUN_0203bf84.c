// FUN_0203bf84 @ 0x0203bf84 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bf84 @ 0x0203bf84 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Compare unsigned halfword +14e against +5c for greater-or-equal.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/0203bf84.txt.
 */
int FUN_0203bf84(char *self) { return *(unsigned short *)(self+0x14e)>=*(unsigned short *)(self+0x5c); }
