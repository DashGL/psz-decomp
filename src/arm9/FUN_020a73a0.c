// FUN_020a73a0 @ 0x020a73a0 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020a73a0 @ 0x020a73a0 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset text panel and populate valid selected resource string.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a73a0.txt.
 */
extern void FUN_020c38f0(void *,int),FUN_020c3788(void *,void *,int,int,int);extern void *FUN_0208f068(void),*FUN_0208efa8(void *,int,int,int);void FUN_020a73a0(char *s,int index){if(*(void **)(s+320)){FUN_020c38f0(*(void **)(s+320),0);if(index>=0){void *p=FUN_0208f068();if(p)FUN_020c3788(*(void **)(s+320),FUN_0208efa8(p,*(int *)(s+324),0,index),0,0,2);}}}
