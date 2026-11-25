// FUN_020affe0 @ 0x020affe0 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020affe0 @ 0x020affe0 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct category object with forwarded source descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020affe0.txt.
 */
extern void FUN_0203020c(void *,void *,int);void *FUN_020affe0(char *self,void *desc){int type;FUN_0203020c(self,desc,36);*(unsigned int *)self=0x020fc5e8;*(void **)(self+48)=**(void ***)(self+4);*(int *)(self+52)=0;*(int *)(self+56)=0;type=**(signed char **)(self+48);if(type==0){*(int *)(self+52)=9;*(int *)(self+56)=0;}else if(type==1){*(int *)(self+52)=15;*(int *)(self+56)=0;}return self;}
