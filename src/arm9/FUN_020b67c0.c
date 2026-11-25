// FUN_020b67c0 @ 0x020b67c0 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020b67c0 @ 0x020b67c0 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Extract five-bit field from halfword and offset nonzero third field by44.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b67c0.txt.
 */
unsigned int FUN_020b67c0(char *self,int index) { unsigned int value=((int)*(unsigned short *)(self+16)>>(5*index))&31; if(index==2 && value) value+=44; return value; }
