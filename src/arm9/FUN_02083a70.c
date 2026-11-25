// FUN_02083a70 @ 0x02083a70 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_02083a70 @ 0x02083a70 (inventory code 0x64, thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Scale three fixed-point vector coordinates with rounding.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083a70.txt.
 */
void FUN_02083a70(int *v,int factor){v[0]=(int)(((long long)v[0]*factor+2048)>>12);v[1]=(int)(((long long)v[1]*factor+2048)>>12);v[2]=(int)(((long long)v[2]*factor+2048)>>12);}
