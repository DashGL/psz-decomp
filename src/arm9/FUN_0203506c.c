// FUN_0203506c @ 0x0203506c (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_0203506c @ 0x0203506c (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 32.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b32/0203506c.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_020bc7e0(void *,void *);
void FUN_0203506c(char *s) { char *g=*(char **)0x02108d64; void *p=0; int i; if(g) p=*(void **)(g+0x1c); if(p) { void *q=FUN_020ba894(0x44); if(q) q=FUN_020bc7e0(q,p); *(void **)(s+12)=q; } for(i=0;i<11;i++) s[0x40+52*i]=0; }
