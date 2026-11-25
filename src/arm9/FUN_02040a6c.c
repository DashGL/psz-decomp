// FUN_02040a6c @ 0x02040a6c (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02040a6c @ 0x02040a6c (inventory code 0x52, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 38.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b38/02040a6c.txt.
 */
extern void *FUN_0200c2dc(unsigned int,unsigned int,unsigned int,void *,void *);extern void FUN_02040ac4(void *);
void FUN_02040a6c(char *s){int i;*(int *)(s+0xbc)=*(int *)(*(char **)(s+20)+12);*(void **)(s+0xb8)=FUN_0200c2dc(*(unsigned int *)(s+0xbc),280,0,(void *)0x02040b45,0);for(i=0;i<*(int *)(s+0xbc);i++)FUN_02040ac4(*(char **)(s+0xb8)+280*i);}
