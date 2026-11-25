// FUN_020797cc @ 0x020797cc (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_020797cc @ 0x020797cc (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize mixed fields and allocate32-byte owned heap using incoming size.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020797cc.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020c133c(void *,unsigned int); void *FUN_020797cc(char *self,unsigned int size) { void *p; *(int *)self=-1; *(unsigned int *)(self+4)=0; *(unsigned int *)(self+8)=0; *(unsigned int *)(self+12)=0; *(unsigned short *)(self+16)=0; *(unsigned short *)(self+18)=0; p=FUN_020ba894(32); if(p) p=FUN_020c133c(p,size); *(void **)(self+4)=p; return self; }
