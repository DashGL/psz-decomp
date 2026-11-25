// FUN_02031f88 @ 0x02031f88 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031f88 @ 0x02031f88 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/02031f88.txt.
 */
extern unsigned int FUN_02084c70(void *); extern void FUN_0207f308(void *,void *,void *,void *,unsigned int,void *,int);
void FUN_02031f88(char *s,void *a,void *b,void *c,void *d) { unsigned int value=FUN_02084c70((void *)0x0211a51c); void *p=*(void **)(s+0x24); if(p) FUN_0207f308(p,a,b,c,value,d,0); }
