// FUN_020b7ba8 @ 0x020b7ba8 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020b7ba8 @ 0x020b7ba8 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Report nested signed type byte in52 through54.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7ba8.txt.
 */
int FUN_020b7ba8(void **self) { signed char **child=self[5]; unsigned int value=(int)**child; if(value-52<=2) return 1; return 0; }
