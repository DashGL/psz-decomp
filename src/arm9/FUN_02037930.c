// FUN_02037930 @ 0x02037930 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02037930 @ 0x02037930 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 19.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b19/02037930.txt.
 */
extern void FUN_0208e684(void *,unsigned int,int);
void FUN_02037930(char *s,short *index,unsigned int *value) { if(*index<0) { FUN_0208e684(s+0x14,*value,*index); FUN_0208e684(s+0x20,*value,*index); } }
