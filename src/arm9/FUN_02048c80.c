// FUN_02048c80 @ 0x02048c80 (0xa0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048c80 @ 0x02048c80 (inventory code 0xa0, thumb)
// check: 2.0/sp2p3 target=0xa0 candidate=0xa0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 63.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b63/02048c80.txt.
 */
extern char *FUN_0204daa8(unsigned int);extern void *FUN_02048d20(unsigned int,void *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,int);extern void FUN_020478ec(void *,void *,void *,void *);
void FUN_02048c80(char *s){char *p=FUN_0204daa8(*(unsigned int *)(s+232));if(p){unsigned int value=*(unsigned int *)(s+308),kind=*(unsigned int *)(s+284);if(kind==10)value=(int)(value<<13)/4096;FUN_02048d20(kind,s+92,*(unsigned short *)(p+192),*(unsigned int *)(s+232),*(unsigned int *)(s+296),*(unsigned int *)(s+256),value,0);}else{void *obj=FUN_02048d20(*(unsigned int *)(s+284),s+92,*(unsigned short *)(s+288),*(unsigned int *)(s+232),*(unsigned int *)(s+296),*(unsigned int *)(s+256),*(unsigned int *)(s+308),0);if(obj)FUN_020478ec(obj,s+312,s+364,s+376);}}
