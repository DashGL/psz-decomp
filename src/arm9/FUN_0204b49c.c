// FUN_0204b49c @ 0x0204b49c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204b49c @ 0x0204b49c (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/0204b49c.txt.
 */
extern void *FUN_0204225c(void *,int); extern void FUN_02046b94(void *,void *);
void FUN_0204b49c(char *s,void *arg) { void *object=*(void **)(s+0x30); if(object) { int i; for(i=0;i<5;i++) if(((unsigned short *)(s+0x38))[i]!=0xffff) { void *p=FUN_0204225c(object,i); if(p) FUN_02046b94(p,arg); } } }
