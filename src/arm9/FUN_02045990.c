// FUN_02045990 @ 0x02045990 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02045990 @ 0x02045990 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Copy four bytes in order; preserve destination.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/02045990.txt.
 */
void *FUN_02045990(unsigned char *dst,const unsigned char *src) { dst[0]=src[0]; dst[1]=src[1]; dst[2]=src[2]; dst[3]=src[3]; return dst; }
