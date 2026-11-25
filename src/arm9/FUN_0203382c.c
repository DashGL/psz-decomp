// FUN_0203382c @ 0x0203382c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_0203382c @ 0x0203382c (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Test global flag bit zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/0203382c.txt.
 */
int FUN_0203382c(void) { return (*(unsigned int *)0x02108c6c & 1)!=0; }
