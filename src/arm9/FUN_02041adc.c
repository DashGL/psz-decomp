// FUN_02041adc @ 0x02041adc (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_02041adc @ 0x02041adc (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 13.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b13/02041adc.txt.
 */
extern void *FUN_020ba374(void *,unsigned int *,int); extern unsigned int FUN_020ba440(void *);
void FUN_02041adc(char *s,void *arg) { unsigned int temp=0; void *p=FUN_020ba374(arg,&temp,16); *(void **)(s+8)=p; *(unsigned int *)(s+0xc)=FUN_020ba440(p); }
