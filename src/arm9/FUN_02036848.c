// FUN_02036848 @ 0x02036848 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02036848 @ 0x02036848 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Add three source words into destination with word wrap; preserve destination.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/02036848.txt.
 */
void *FUN_02036848(unsigned int *dst,const unsigned int *src) { dst[0]+=src[0]; dst[1]+=src[1]; dst[2]+=src[2]; return dst; }
