// FUN_02036348 @ 0x02036348 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02036348 @ 0x02036348 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Subtract three source words with wrap and pass components to triple setter.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/02036348.txt.
 */
extern void FUN_02035408(void *,unsigned int,unsigned int,unsigned int);
void FUN_02036348(void *dst,const unsigned int *a,const unsigned int *b) { FUN_02035408(dst,a[0]-b[0],a[1]-b[1],a[2]-b[2]); }
