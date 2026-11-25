// FUN_020bb098 @ 0x020bb098 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020bb098 @ 0x020bb098 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy four signed bytes from source+4 to receiver+c.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bb098.txt.
 */
void FUN_020bb098(signed char *self,signed char *source) { int i; for(i=0;i<4;i++) self[i+12]=source[i+4]; }
