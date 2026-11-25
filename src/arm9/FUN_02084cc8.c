// FUN_02084cc8 @ 0x02084cc8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_02084cc8 @ 0x02084cc8 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return word +fc from first nonnull player slot among four; otherwise zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084cc8.txt.
 */
extern char *FUN_0208558c(int);
unsigned int FUN_02084cc8(void) { int i; for(i=0;i<4;i++) { char *slot=FUN_0208558c(i); if(slot) return *(unsigned int *)(slot+0xfc); } return 0; }
