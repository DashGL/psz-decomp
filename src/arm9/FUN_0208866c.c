// FUN_0208866c @ 0x0208866c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_0208866c @ 0x0208866c (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear two global words.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208866c.txt.
 */
void FUN_0208866c(void) { ((unsigned int *)0x0211a560)[0]=0; ((unsigned int *)0x0211a560)[1]=0; }
