// FUN_020b7b90 @ 0x020b7b90 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020b7b90 @ 0x020b7b90 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Report nested signed type byte in61 through68.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7b90.txt.
 */
int FUN_020b7b90(void **self) { signed char **child=self[5]; int value=**child; if(value>=61 && value<=68) return 1; return 0; }
