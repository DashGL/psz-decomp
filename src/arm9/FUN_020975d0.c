// FUN_020975d0 @ 0x020975d0 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020975d0 @ 0x020975d0 (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate selected target before forwarding state request.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020975d0.txt.
 */
extern int FUN_02078198(int),FUN_020b7c5c(int),FUN_02098154(void *,int,void *,int,int);int FUN_020975d0(char *s,int a,int b){if(*(int *)(s+12)==-1)return 0;if(FUN_02078198(*(int *)(s+12)) && !FUN_020b7c5c(*(int *)(s+12)))return 0;if(*(int *)(s+12)==**(int **)(s+8))return 0;return FUN_02098154(*(void **)(s+4),*(int *)s,s+64,a,b);}
