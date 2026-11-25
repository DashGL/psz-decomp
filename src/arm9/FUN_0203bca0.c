// FUN_0203bca0 @ 0x0203bca0 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bca0 @ 0x0203bca0 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Clear halfword +154; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/0203bca0.txt.
 */
void *FUN_0203bca0(char *self) { *(unsigned short *)(self+0x154)=0; return self; }
