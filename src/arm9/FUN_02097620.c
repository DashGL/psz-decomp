// FUN_02097620 @ 0x02097620 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_02097620 @ 0x02097620 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset state and selector when predicate one succeeds.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097620.txt.
 */
extern int FUN_02098dcc(void *,int); extern void FUN_02096c64(void *),FUN_02096c84(void *,void *); int FUN_02097620(char *self) { if(FUN_02098dcc(*(void **)(self+8),1)) { FUN_02096c64(self+36); FUN_02096c84(self+32,(void *)0x020f4510); return 0; } return 1; }
