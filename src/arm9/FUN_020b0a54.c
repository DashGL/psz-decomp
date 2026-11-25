// FUN_020b0a54 @ 0x020b0a54 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020b0a54 @ 0x020b0a54 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set receiver flag bit zero and run cleanup helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0a54.txt.
 */
extern void FUN_020b1f48(void *); void FUN_020b0a54(unsigned int *self) { self[1]|=1; FUN_020b1f48(self); }
