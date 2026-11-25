// FUN_02098030 @ 0x02098030 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_02098030 @ 0x02098030 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store word +6c and halfword thirty at +76.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098030.txt.
 */
void FUN_02098030(char *self,unsigned int value) { *(unsigned int *)(self+108)=value; *(unsigned short *)(self+118)=30; }
