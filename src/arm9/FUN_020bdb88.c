// FUN_020bdb88 @ 0x020bdb88 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020bdb88 @ 0x020bdb88 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply callback state transitions or continue setup.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bdb88.txt.
 */
extern void FUN_020bda44(void *); void FUN_020bdb88(char *self,int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e,unsigned int f) { if(a==0) { if(b && (c==1 || d==1)) { self[28]=4; return; } FUN_020bda44(self); } else self[29]=2; }
