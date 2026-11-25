// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// Evidence: notes/sessions/matching-upper-continue-2026-11-12.md
// FUN_02076574 @ 0x02076574 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize registered object and mark category.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076574.txt.
 */
extern void FUN_0203526c(void *,unsigned int,void *); void *FUN_02076574(char *self,unsigned int id,unsigned int arg) { *(unsigned int *)self=0x020f9830; *(unsigned int *)(self+4)=0; *(unsigned int *)self=0x020fa0b0; *(unsigned int *)(self+8)=id; *(unsigned int *)(self+12)=arg; *(short *)(self+16)=-1; *(short *)(self+18)=-1; *(unsigned int *)(self+4)|=16; FUN_0203526c(*(void **)0x02108cf4,*(unsigned int *)(self+8),self); return self; }
