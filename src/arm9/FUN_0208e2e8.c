// FUN_0208e2e8 @ 0x0208e2e8 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_0208e2e8 @ 0x0208e2e8 (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy owned object and two optional arrays.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208e2e8.txt.
 */
extern void FUN_02030aec(void *),FUN_020ba8ac(void *),FUN_020ba8b4(void *);void *FUN_0208e2e8(void **self){void *p=self[0];if(p){if(p){FUN_02030aec(p);FUN_020ba8ac(p);}self[0]=0;}if(self[4]){FUN_020ba8b4(self[4]);self[4]=0;}if(self[3]){FUN_020ba8b4(self[3]);self[3]=0;}return self;}
