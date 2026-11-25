// FUN_0209ec8c @ 0x0209ec8c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_0209ec8c @ 0x0209ec8c (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy matching global singleton owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209ec8c.txt.
 */
extern void FUN_0209f0ec(void *),FUN_020ba8ac(void *);int FUN_0209ec8c(void **self){void *p=*self;if(*(void **)0x0211a628==p){if(p){if(p){FUN_0209f0ec(p);FUN_020ba8ac(p);}*self=0;}*(void **)0x0211a628=0;return 1;}return 0;}
