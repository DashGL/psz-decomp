// FUN_020afe98 @ 0x020afe98 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020afe98 @ 0x020afe98 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Read receiver word for signed index zero through27, else zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afe98.txt.
 */
unsigned int FUN_020afe98(unsigned int *self,int index) { if(index>=0 && index<28) return self[index]; return 0; }
