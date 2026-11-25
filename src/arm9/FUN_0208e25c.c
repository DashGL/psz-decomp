// FUN_0208e25c @ 0x0208e25c (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_0208e25c @ 0x0208e25c (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Scale two fixed-point components with rounded signed products.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208e25c.txt.
 */
void FUN_0208e25c(int *s,int *factor){int f=*factor;s[0]=(int)(((long long)s[0]*f+2048)>>12);s[1]=(int)(((long long)s[1]*f+2048)>>12);}
