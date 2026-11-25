// FUN_02032bfc @ 0x02032bfc (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02032bfc @ 0x02032bfc (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Forward nested source and signed index when source exists, otherwise invalidate destination.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02032bfc.txt.
 */
extern void FUN_02082ed0(void *,void *,int),FUN_0206d178(void *);
void FUN_02032bfc(void *dst,void **source,int index) { if(*source) FUN_02082ed0(dst,*source,index); else FUN_0206d178(dst); }
