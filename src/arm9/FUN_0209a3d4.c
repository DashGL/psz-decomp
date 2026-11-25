// FUN_0209a3d4 @ 0x0209a3d4 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_0209a3d4 @ 0x0209a3d4 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct registered category object with sentinel fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a3d4.txt.
 */
extern void FUN_0206e760(void *),FUN_0203526c(void *,unsigned int,void *);void *FUN_0209a3d4(char *self,unsigned int id){FUN_0206e760(self);*(unsigned int *)self=0x020fb3c8;*(unsigned int *)(self+8)=id;*(short *)(self+12)=-1;*(short *)(self+14)=-1;*(int *)(self+16)=0;*(int *)(self+20)=-1;*(unsigned int *)(self+4)|=32;FUN_0203526c(*(void **)0x02108cf4,*(unsigned int *)(self+8),self);return self;}
