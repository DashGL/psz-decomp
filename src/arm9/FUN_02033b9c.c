// FUN_02033b9c @ 0x02033b9c (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033b9c @ 0x02033b9c (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 33.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b33/02033b9c.txt.
 */
extern void *FUN_020ba894(unsigned int); extern char *FUN_0203415c(void *,void *); extern void FUN_02033fe0(void *,void *);
void *FUN_02033b9c(void *arg) { char *p=FUN_020ba894(476); char *g=(char *)0x02108c74; if(p) p=FUN_0203415c(p,arg); if(!p) return 0; ++*(unsigned short *)g; *(unsigned short *)(p+28)=*(unsigned short *)g; if(!*(void **)(g+16)) *(void **)(g+16)=p; else FUN_02033fe0(*(void **)(g+16),p); return p; }
