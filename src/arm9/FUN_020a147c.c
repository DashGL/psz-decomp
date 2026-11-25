// FUN_020a147c @ 0x020a147c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_020a147c @ 0x020a147c (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store saturated minimum nonzero byte for statistic10 through14.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a147c.txt.
 */
void FUN_020a147c(unsigned char *self,int index,unsigned int value) { if(index>=10 && index<=14) { unsigned char v; if(value>255) value=255; v=value; self+=153; if(!self[index] || v<self[index]) self[index]=v; } }
