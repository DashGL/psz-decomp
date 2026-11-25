// FUN_0209f0ec @ 0x0209f0ec (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_0209f0ec @ 0x0209f0ec (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release two resources and detach special owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f0ec.txt.
 */
extern void FUN_02099480(void *),FUN_020ba494(void *);void *FUN_0209f0ec(char *self){if(*(void **)(self+48)){FUN_02099480(*(void **)(self+48));*(void **)(self+48)=0;}if(*(void **)(self+52)){if(*(int *)(self+8)==1)FUN_020ba494(self);FUN_02099480(*(void **)(self+52));*(void **)(self+52)=0;}return self;}
