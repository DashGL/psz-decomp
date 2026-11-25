// FUN_02094ab0 @ 0x02094ab0 (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_02094ab0 @ 0x02094ab0 (inventory code 0x8, thumb)
// check: 2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set word +58 to minus one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094ab0.txt.
 */
void FUN_02094ab0(char *self) { *(int *)(self+88)=-1; }
