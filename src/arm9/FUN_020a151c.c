// FUN_020a151c @ 0x020a151c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020a151c @ 0x020a151c (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Increment mapped signed halfword counter below9999.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a151c.txt.
 */
extern int FUN_02084b14(int); void FUN_020a151c(short *self,int kind) { int index=FUN_02084b14(kind); if(index>=0 && index<7 && self[index]<9999) self[index]++; }
