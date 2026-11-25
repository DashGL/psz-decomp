// FUN_020aea90 @ 0x020aea90 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020aea90 @ 0x020aea90 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct derived owner and optional enabled component.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aea90.txt.
 */
extern void FUN_020af8e0(void *),FUN_020302dc(void *);extern void *FUN_020ba894(unsigned int),*FUN_02034700(void *);void *FUN_020aea90(char *self){void *p;FUN_020af8e0(self);*(unsigned int *)self=0x020fc4b0;*(int *)(self+104)=0;FUN_020302dc(self+108);*(int *)(self+112)=-1;p=FUN_020ba894(12);if(p)p=FUN_02034700(p);*(void **)(self+104)=p;if(p)*(int *)((char *)p+8)=1;return self;}
