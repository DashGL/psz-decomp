// FUN_0207f528 @ 0x0207f528 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207f528 @ 0x0207f528 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset selected 8-byte record at +14 for signed index [0,2).
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f528.txt.
 */
extern void FUN_0207f4e4(void *);
void FUN_0207f528(char *self,int index) { if(index>=0 && index<2) FUN_0207f4e4(self+20+8*index); }
