// FUN_020991c0 @ 0x020991c0 (0x66, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_020991c0 @ 0x020991c0 (inventory code 0x66, thumb)
// check: 2.0/sp2p3 target=0x66 candidate=0x66 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Scale vector by referenced fixed-point factor and return vector.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020991c0.txt.
 */
int *FUN_020991c0(int *v,int *scale){int f=*scale;v[0]=(int)(((long long)v[0]*f+2048)>>12);v[1]=(int)(((long long)v[1]*f+2048)>>12);v[2]=(int)(((long long)v[2]*f+2048)>>12);return v;}
