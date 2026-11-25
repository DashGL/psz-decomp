// FUN_020afc40 @ 0x020afc40 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_020afc40 @ 0x020afc40 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy nested vector, normalize and scale.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020afc40.txt.
 */
typedef struct { int a,b,c; } Vector; extern void FUN_02036368(void *),FUN_02083a70(void *,int); void FUN_020afc40(Vector *out,char *source) { *out=*(Vector *)(*(char **)(source+64)+24); FUN_02036368(out); FUN_02083a70(out,205); }
