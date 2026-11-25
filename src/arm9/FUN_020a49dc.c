// FUN_020a49dc @ 0x020a49dc (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_020a49dc @ 0x020a49dc (inventory code 0x4, thumb)
// check: 2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return constant 0x10018.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a49dc.txt.
 */
unsigned int FUN_020a49dc(void) { return 0x10018; }
