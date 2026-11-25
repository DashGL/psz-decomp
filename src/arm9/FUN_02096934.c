// FUN_02096934 @ 0x02096934 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_02096934 @ 0x02096934 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear selected bit in both halfword masks.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02096934.txt.
 */
void FUN_02096934(char *self,unsigned int index) { unsigned int mask=~(1u<<index); *(unsigned short *)(self+36)&=mask; *(unsigned short *)(self+38)&=mask; }
