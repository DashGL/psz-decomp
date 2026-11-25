// FUN_020bcdf4 @ 0x020bcdf4 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_020bcdf4 @ 0x020bcdf4 (inventory code 0x8, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear global pointer, retaining incoming receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bcdf4.txt.
 */
void *FUN_020bcdf4(void *self) { *(void **)0x0211b3b8=0; return self; }
