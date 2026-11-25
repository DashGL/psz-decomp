// FUN_020302e8 @ 0x020302e8 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_020302e8 @ 0x020302e8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 3.
 * Read three words at child +4/+8/+c before storing destination; preserve destination.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b3/020302e8.txt.
 */
void *FUN_020302e8(unsigned int *dst,void **self) { unsigned int *child=self[1]; unsigned int c=child[3],b=child[2],a=child[1]; dst[0]=a; dst[1]=b; dst[2]=c; return dst; }
