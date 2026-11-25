// FUN_02084368 @ 0x02084368 (0x6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_02084368 @ 0x02084368 (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0x6 candidate=0x6 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read unsigned halfword +94.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084368.txt.
 */
unsigned int FUN_02084368(char *self) { return *(unsigned short *)(self+0x94); }
