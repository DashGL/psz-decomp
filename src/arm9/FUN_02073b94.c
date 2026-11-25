// FUN_02073b94 @ 0x02073b94 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02073b94 @ 0x02073b94 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward two caller arguments through global object only for state three.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073b94.txt.
 */
extern int FUN_0207472c(void *,int,int); int FUN_02073b94(int a,int b) { signed char *global=(signed char *)0x0211a210; if(global[4]==3) { void *p=*(void **)(global+40); if(p) return FUN_0207472c(p,a,b); } return 0; }
