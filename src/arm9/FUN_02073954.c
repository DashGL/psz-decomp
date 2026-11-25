// FUN_02073954 @ 0x02073954 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02073954 @ 0x02073954 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Require both global signed bytes +10/+11 to be nonnegative.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073954.txt.
 */
int FUN_02073954(void) {
    signed char *state=(signed char *)0x0211a210;
    if(state[16]>=0 && state[17]>=0) return 1; return 0;
}
