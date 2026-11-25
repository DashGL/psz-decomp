// FUN_02072858 @ 0x02072858 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072858 @ 0x02072858 (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear state flag and release flagged resource records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072858.txt.
 */
extern void *FUN_020be450(void);extern void FUN_020bed1c(void *,int);void FUN_02072858(char *self){int i;*(unsigned int *)(self+148)&=~4;for(i=0;i<*(int *)(self+172);i++){char *p=*(char **)(self+168)+52*i;if(((signed char *)p)[18]&1){FUN_020bed1c(FUN_020be450(),*(int *)p);*(int *)p=-1;}}}
