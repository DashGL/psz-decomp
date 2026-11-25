// FUN_020723bc @ 0x020723bc (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020723bc @ 0x020723bc (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and initialize five embedded resource records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020723bc.txt.
 */
extern void *FUN_020ba8a0(unsigned int);extern void FUN_02072400(void *);void FUN_020723bc(char *self){int i;*(int *)(self+172)=5;*(void **)(self+168)=FUN_020ba8a0(52*(*(int *)(self+172)));for(i=0;i<*(int *)(self+172);i++)FUN_02072400(*(char **)(self+168)+52*i);}
