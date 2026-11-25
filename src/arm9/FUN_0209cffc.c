// FUN_0209cffc @ 0x0209cffc (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_0209cffc @ 0x0209cffc (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return nonnegative unsigned difference of two optional child counters.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209cffc.txt.
 */
unsigned int FUN_0209cffc(unsigned int **self) { unsigned int *a=self[0]; if(a) { unsigned int *b=self[1]; if(b) { unsigned int av=a[3],bv=b[3]; if(bv>=av) return bv-av; } } return 0; }
