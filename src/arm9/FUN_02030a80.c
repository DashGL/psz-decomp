// FUN_02030a80 @ 0x02030a80 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02030a80 @ 0x02030a80 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Reset optional child, then store signed descriptor byte +1 as child index.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/02030a80.txt.
 */
extern void FUN_02030918(void *);
void FUN_02030a80(void **self,signed char *descriptor) { unsigned int *child=self[0]; if(child) { FUN_02030918(child); child[2]=descriptor[1]; } }
