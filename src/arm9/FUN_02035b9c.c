// FUN_02035b9c @ 0x02035b9c (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02035b9c @ 0x02035b9c (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Copy six unsigned bytes in order; preserve destination.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/02035b9c.txt.
 */
void *FUN_02035b9c(unsigned char *dst,const unsigned char *src) { dst[0]=src[0]; dst[1]=src[1]; dst[2]=src[2]; dst[3]=src[3]; dst[4]=src[4]; dst[5]=src[5]; return dst; }
