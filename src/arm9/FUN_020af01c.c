// FUN_020af01c @ 0x020af01c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020af01c @ 0x020af01c (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize table, zero field and two caller fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020af01c.txt.
 */
void *FUN_020af01c(unsigned int *self,unsigned int a,unsigned int b) { self[0]=0x020faab0; self[1]=0; self[2]=a; self[3]=b; return self; }
