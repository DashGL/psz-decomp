// FUN_020bf62c @ 0x020bf62c (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020bf62c @ 0x020bf62c (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Sum two independently rounded fixed-point products.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bf62c.txt.
 */
int FUN_020bf62c(int *a,int *b){long long x=(long long)a[0]*b[0],y=(long long)a[1]*b[1];return (int)((x+2048)>>12)+(int)((y+2048)>>12);}
