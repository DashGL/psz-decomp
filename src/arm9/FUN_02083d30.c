// FUN_02083d30 @ 0x02083d30 (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_02083d30 @ 0x02083d30 (inventory code 0x78, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Multiply scalar and vector with fixed-point rounding into output.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02083d30.txt.
 */
extern void *FUN_02035408(void *,int,int,int);void *FUN_02083d30(void *out,int *scale,int *v){int factor=*scale;long long x=(long long)v[0]*factor,y=(long long)v[1]*factor,z=(long long)v[2]*factor;return FUN_02035408(out,(int)((x+2048)>>12),(int)((y+2048)>>12),(int)((z+2048)>>12));}
