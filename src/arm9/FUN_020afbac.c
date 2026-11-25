// FUN_020afbac @ 0x020afbac (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020afbac @ 0x020afbac (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy vector, perform hardware calculation, normalize and scale.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afbac.txt.
 */
typedef struct { int a,b,c; } Vector; extern int FUN_0205c520(int,int); extern void FUN_02036368(void *),FUN_02083a70(void *,int); void FUN_020afbac(Vector *out,char *source) { *out=*(Vector *)(source+24); FUN_0205c520(*(int *)(source+52)-82,102); FUN_02036368(out); FUN_02083a70(out,205); }
