// FUN_020a4cbc @ 0x020a4cbc (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020a4cbc @ 0x020a4cbc (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set narrowed mask bits in indexed halfword.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a4cbc.txt.
 */
void FUN_020a4cbc(char *self,unsigned int index,unsigned int mask) { ((unsigned short *)(self+84))[index]|=(unsigned short)mask; }
