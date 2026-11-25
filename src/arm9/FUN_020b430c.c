// FUN_020b430c @ 0x020b430c (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020b430c @ 0x020b430c (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Replace minimum unsigned score and byte tag when uninitialized or lower.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b430c.txt.
 */
void FUN_020b430c(char *self,unsigned int tag,unsigned int score) { unsigned int old=*(unsigned int *)(self+8); if(old==0xffffffff || score<old) { *(unsigned int *)(self+8)=score; self[12]=tag; } }
