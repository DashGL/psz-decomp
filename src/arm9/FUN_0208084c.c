// FUN_0208084c @ 0x0208084c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_0208084c @ 0x0208084c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear byte +14 and cleanup each of four 28-byte records; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208084c.txt.
 */
extern void FUN_02080b24(void *);
void *FUN_0208084c(char *self) { int i; for(i=0;i<4;i++) { char *record=self+28*i; record[20]=0; FUN_02080b24(record); } return self; }
