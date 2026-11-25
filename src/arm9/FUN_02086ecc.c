// FUN_02086ecc @ 0x02086ecc (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_02086ecc @ 0x02086ecc (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store halfword +c only when signed value is nonnegative and no greater than signed limit +e.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02086ecc.txt.
 */
void FUN_02086ecc(char *self,int value) { if(value>=0 && value<=*(short *)(self+14)) *(short *)(self+12)=value; }
