// FUN_02076c4c @ 0x02076c4c (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076c4c @ 0x02076c4c (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear words zero/two and store input as word one; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076c4c.txt.
 */
void *FUN_02076c4c(unsigned int *self,unsigned int value) { self[0]=0; self[1]=value; self[2]=0; return self; }
