// FUN_02075ec8 @ 0x02075ec8 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02075ec8 @ 0x02075ec8 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query helper for receiver word +fc and normalize to boolean.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02075ec8.txt.
 */
extern int FUN_02085880(int);
int FUN_02075ec8(char *self) { if(FUN_02085880(*(int *)(self+0xfc))) return 1; return 0; }
