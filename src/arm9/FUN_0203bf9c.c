// FUN_0203bf9c @ 0x0203bf9c (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bf9c @ 0x0203bf9c (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Compare unsigned halfword +150 against +5e for greater-or-equal.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/0203bf9c.txt.
 */
int FUN_0203bf9c(char *self) { return *(unsigned short *)(self+0x150)>=*(unsigned short *)(self+0x5e); }
