// FUN_020bfdc8 @ 0x020bfdc8 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020bfdc8 @ 0x020bfdc8 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Swap query operands and negate optional result vector.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bfdc8.txt.
 */
extern int FUN_020bfb84(void *,void *,unsigned int *); int FUN_020bfdc8(void *a,void *b,unsigned int *out) { int result=FUN_020bfb84(b,a,out); if(result && out) { out[0]*=(unsigned int)-1; out[1]*=(unsigned int)-1; } return result; }
