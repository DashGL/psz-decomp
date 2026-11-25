// FUN_0207f334 @ 0x0207f334 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207f334 @ 0x0207f334 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Inactive state always succeeds; active requires nonnegative stored selector equal supplied value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f334.txt.
 */
int FUN_0207f334(int *self,int value) { if(self[3]) { if(self[2]<0 || value!=self[2]) return 0; } return 1; }
