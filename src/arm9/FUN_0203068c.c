// FUN_0203068c @ 0x0203068c (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_0203068c @ 0x0203068c (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Map child byte +16 below 80 to identifier byte+204, otherwise all-ones.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/0203068c.txt.
 */
unsigned int FUN_0203068c(void **self) { unsigned char *child=self[1]; unsigned int value=child[22]; if(value<128) return value+0x204; return ~0u; }
