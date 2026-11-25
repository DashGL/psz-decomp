// FUN_0209ae8c @ 0x0209ae8c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_0209ae8c @ 0x0209ae8c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set tag four and choose halfword within inclusive caller range.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209ae8c.txt.
 */
extern unsigned int FUN_0209ad1c(unsigned int); void FUN_0209ae8c(char *self,unsigned int low,unsigned int high) { self[0]=4; *(unsigned short *)(self+2)=low+FUN_0209ad1c(high-low+1); }
