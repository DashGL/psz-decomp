// FUN_02044eb0 @ 0x02044eb0 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044eb0 @ 0x02044eb0 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Store pair at +134/+138 only when first input nonzero; always return zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/02044eb0.txt.
 */
int FUN_02044eb0(char *self,unsigned int a,unsigned int b) { if(a) { *(unsigned int *)(self+0x134)=a; *(unsigned int *)(self+0x138)=b; } return 0; }
