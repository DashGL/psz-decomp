// FUN_02072430 @ 0x02072430 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072430 @ 0x02072430 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release each registered resource and free record storage.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072430.txt.
 */
extern void *FUN_020be450(void);extern void FUN_020bed1c(void *,int),FUN_020ba8b4(void *);void FUN_02072430(char *self){if(*(void **)(self+168)){int i;for(i=0;i<*(int *)(self+172);i++)FUN_020bed1c(FUN_020be450(),*(int *)(*(char **)(self+168)+52*i));FUN_020ba8b4(*(void **)(self+168));*(void **)(self+168)=0;}}
