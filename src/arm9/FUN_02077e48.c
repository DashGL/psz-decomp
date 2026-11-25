// FUN_02077e48 @ 0x02077e48 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02077e48 @ 0x02077e48 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Consume and clear one word.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077e48.txt.
 */
unsigned int FUN_02077e48(char *self) { unsigned int value=*(unsigned int *)(self+0x12c); *(unsigned int *)(self+0x12c)=0; return value; }
