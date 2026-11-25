// FUN_02085450 @ 0x02085450 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_02085450 @ 0x02085450 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read signed global manager halfword +25e, default zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02085450.txt.
 */
int FUN_02085450(void) { char *manager=*(char **)0x0211a52c; if(manager) return *(short *)(manager+0x25e); return 0; }
