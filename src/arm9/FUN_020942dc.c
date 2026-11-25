// FUN_020942dc @ 0x020942dc (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020942dc @ 0x020942dc (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return three-word indexed element or default descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020942dc.txt.
 */
void *FUN_020942dc(char *self,int index) { if(index>=0 && index<3) return self+12*index; return (void *)0x020f4498; }
