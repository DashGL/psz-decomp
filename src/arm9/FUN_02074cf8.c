// FUN_02074cf8 @ 0x02074cf8 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02074cf8 @ 0x02074cf8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test child word +4c through receiver +24.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074cf8.txt.
 */
int FUN_02074cf8(char *self) {
    char *child=*(char **)(self+36); if(*(unsigned int *)(child+76)) return 1; return 0;
}
