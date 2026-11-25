// FUN_02039050 @ 0x02039050 (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02039050 @ 0x02039050 (inventory code 0x8, thumb)
// check: 2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 2.
 * Write word +238, preserving self as return value.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b2/02039050.txt.
 */
void *FUN_02039050(char *self,unsigned int value) { *(unsigned int *)(self+0x238)=value; return self; }
