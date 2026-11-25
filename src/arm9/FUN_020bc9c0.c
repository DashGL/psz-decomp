// FUN_020bc9c0 @ 0x020bc9c0 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020bc9c0 @ 0x020bc9c0 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compute two-dimensional cross product from separately rounded fixed-point products.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc9c0.txt.
 */
void FUN_020bc9c0(int *out,int *a,int *b){long long first=(long long)a[0]*b[1],second=(long long)a[1]*b[0];*out=(int)((first+2048)>>12)-(int)((second+2048)>>12);}
