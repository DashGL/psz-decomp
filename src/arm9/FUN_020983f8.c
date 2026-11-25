// FUN_020983f8 @ 0x020983f8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020983f8 @ 0x020983f8 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return first word of selected nonnull child or minus one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020983f8.txt.
 */
int FUN_020983f8(int **self,int index) { if(index>=0 && index<5) { int *p=self[index]; if(p) return *p; } return -1; }
