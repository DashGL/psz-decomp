// FUN_02033abc @ 0x02033abc (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033abc @ 0x02033abc (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 33.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b33/02033abc.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_0206e40c(void *,void *,void *,unsigned int,void *,void *,void *); extern void FUN_02033a4c(void *,void *);
void *FUN_02033abc(char *s,void *a,void *b,void *c) { void *p=FUN_020ba894(212); if(p) p=FUN_0206e40c(p,*(void **)(s+12),*(void **)(s+16),*(unsigned short *)(s+26),c,a,b); if(p) { FUN_02033a4c(s,p); return p; } return 0; }
