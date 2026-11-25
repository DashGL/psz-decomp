// FUN_020be480 @ 0x020be480 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020be480 @ 0x020be480 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run two receiver cleanup helpers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be480.txt.
 */
extern void FUN_020bee0c(void *),FUN_020be76c(void *); void FUN_020be480(void *self) { FUN_020bee0c(self); FUN_020be76c(self); }
