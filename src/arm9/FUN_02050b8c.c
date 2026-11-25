// FUN_02050b8c @ 0x02050b8c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// FUN_02050b8c @ 0x02050b8c (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Compare supplied word against unsigned halfword +50.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/02050b8c.txt.
 */
int FUN_02050b8c(char *self,unsigned int value) { return value==*(unsigned short *)(self+0x50); }
