// FUN_02097b58 @ 0x02097b58 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_02097b58 @ 0x02097b58 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy owner only when it matches global singleton.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097b58.txt.
 */
extern void FUN_02097c1c(void *),FUN_020ba8ac(void *);int FUN_02097b58(void **self){void *p=*self;if(*(void **)0x0211a610==p){if(p){if(p){FUN_02097c1c(p);FUN_020ba8ac(p);}*self=0;}*(void **)0x0211a610=0;return 1;}return 0;}
