// FUN_020bc360 @ 0x020bc360 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020bc360 @ 0x020bc360 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Close resource and free owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc360.txt.
 */
extern void FUN_02012748(void *),FUN_020ba494(void *),FUN_020bc5a0(void *),FUN_020ba8c4(void *),FUN_020ba8ac(void *);void *FUN_020bc360(char *self){*(unsigned int *)self=0x020fc970;if(*(int *)(self+4)==2)FUN_02012748(self+8);FUN_020ba494(self);FUN_020bc5a0(self);if(*(void **)(self+120)){FUN_020ba8c4(*(void **)(self+120));*(void **)(self+120)=0;}*(int *)(self+4)=3;FUN_020ba8ac(self);return self;}
