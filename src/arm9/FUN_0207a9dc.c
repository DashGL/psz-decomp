// FUN_0207a9dc @ 0x0207a9dc (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207a9dc @ 0x0207a9dc (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release mapped entity state and destroy effect bases.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207a9dc.txt.
 */
extern int FUN_02078188(int);extern void *FUN_020352a4(void *,int),*FUN_02039200(void *);extern void FUN_0203c17c(void *),FUN_0207a5b4(void *),FUN_02047434(void *),FUN_020ba8ac(void *);void *FUN_0207a9dc(char *self){*(unsigned int *)self=0x020fa3e0;if(FUN_02078188(*(int *)(self+232))){void *p=FUN_02039200(FUN_020352a4(*(void **)0x02108cf4,*(int *)(self+232)));if(p)FUN_0203c17c(p);}*(unsigned int *)self=0x020fa420;FUN_0207a5b4(self);FUN_02047434(self);return self;}
