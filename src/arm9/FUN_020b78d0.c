// FUN_020b78d0 @ 0x020b78d0 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020b78d0 @ 0x020b78d0 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy vector and normalize only when nonzero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b78d0.txt.
 */
typedef struct { int x,y,z; } V; extern void FUN_0205c8cc(V *,V *); void FUN_020b78d0(V *out,const V *in) { *out=*in; if(out->x || out->y || out->z) FUN_0205c8cc(out,out); }
