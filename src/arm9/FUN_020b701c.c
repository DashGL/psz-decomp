// FUN_020b701c @ 0x020b701c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020b701c @ 0x020b701c (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Subtract19 and divide signed value by two, accepting quotient zero through four.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b701c.txt.
 */
int FUN_020b701c(void *unused,int value) { int result=(value-19)/2; if(result<0 || result>=5) return -1; return result; }
