// FUN_02098444 @ 0x02098444 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_02098444 @ 0x02098444 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset optional child at +128.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098444.txt.
 */
extern void FUN_0209ef50(void *); void FUN_02098444(char *self) { void *p=*(void **)(self+296); if(p) FUN_0209ef50(p); }
