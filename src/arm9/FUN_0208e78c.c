// FUN_0208e78c @ 0x0208e78c (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_0208e78c @ 0x0208e78c (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy first words from three pointed arguments into receiver; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208e78c.txt.
 */
void *FUN_0208e78c(unsigned int *self,unsigned int *a,unsigned int *b,unsigned int *c) { self[0]=*a; self[1]=*b; self[2]=*c; return self; }
