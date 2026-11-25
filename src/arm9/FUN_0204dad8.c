// FUN_0204dad8 @ 0x0204dad8 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204dad8 @ 0x0204dad8 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Return whether signed helper result meets supplied threshold.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/0204dad8.txt.
 */
extern int FUN_020849d4(void *);
int FUN_0204dad8(void *self,int threshold) { int result=0; if(FUN_020849d4(self)>=threshold) result=1; return result; }
