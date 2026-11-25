// FUN_0204a88c @ 0x0204a88c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a88c @ 0x0204a88c (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 25.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b25/0204a88c.txt.
 */
extern void FUN_020c193c(void *,void *,void *,void *,int);
void FUN_0204a88c(void *a,void *b,int count,void *c,void *d) { char *p=*(char **)0x0210e234; unsigned int enabled=1; if(p) enabled=*(unsigned int *)(p+0x60); if(enabled) { if(count>=0) FUN_020c193c(a,b,c,d,count); else FUN_020c193c(a,b,c,d,-1); } }
