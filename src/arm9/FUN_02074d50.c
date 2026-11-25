// FUN_02074d50 @ 0x02074d50 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02074d50 @ 0x02074d50 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Consume nonzero signed byte +28, clearing it and returning original value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074d50.txt.
 */
int FUN_02074d50(signed char *self) {
    int result=0; int value=self[40]; if(value) { result=value; self[40]=0; } return result;
}
