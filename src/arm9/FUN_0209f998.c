// FUN_0209f998 @ 0x0209f998 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0209f998 @ 0x0209f998 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct base with forwarded descriptor, install table and cache computed field twice.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f998.txt.
 */
extern void FUN_0203020c(void *,void *,int); extern unsigned int FUN_0209fa44(void *); void *FUN_0209f998(char *self,void *descriptor) { unsigned int value; FUN_0203020c(self,descriptor,28); *(unsigned int *)self=0x020fb850; *(unsigned int *)(self+48)=**(unsigned int **)(self+4); *(unsigned int *)(self+52)=0; *(unsigned int *)(self+56)=0; value=FUN_0209fa44(self); *(unsigned int *)(self+52)=value; *(unsigned int *)(self+56)=value; return self; }
