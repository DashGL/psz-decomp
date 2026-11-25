// FUN_02038000 @ 0x02038000 (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02038000 @ 0x02038000 (inventory code 0x7c, thumb)
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 47.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b47/02038000.txt.
 */
extern void FUN_0203807c(void *,unsigned int,unsigned int,unsigned int);
void FUN_02038000(char *s,unsigned int x,unsigned int y,unsigned int z){*(unsigned int *)(s+156)=x;*(unsigned int *)(s+168)=*(unsigned int *)(s+156);*(unsigned int *)(s+180)=*(unsigned int *)(s+168);*(unsigned int *)(s+160)=y;*(unsigned int *)(s+172)=*(unsigned int *)(s+160);*(unsigned int *)(s+184)=*(unsigned int *)(s+172);*(unsigned int *)(s+164)=z;*(unsigned int *)(s+176)=*(unsigned int *)(s+164);*(unsigned int *)(s+188)=*(unsigned int *)(s+176);if(*(void **)(s+140))FUN_0203807c(*(void **)(s+140),*(unsigned int *)(s+156),*(unsigned int *)(s+160),*(unsigned int *)(s+164));}
