// FUN_020baa40 @ 0x020baa40 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020baa40 @ 0x020baa40 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compute signed modulo difference of circular buffer positions.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020baa40.txt.
 */
int FUN_020baa40(int *self) { int size=self[2]; return (size+(self[4]-self[3]))%size; }
