// FUN_02097acc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02097acc @ 0x02097acc (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve equipment stats and store scaled byte value.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097acc.txt.
 */
extern void *FUN_02099444(void);extern void FUN_02099a80(void *,void *,int,int);extern int FUN_02084684(int,void *,void *);int FUN_02097acc(char *self){unsigned int desc[4],stats[6];FUN_02099a80(FUN_02099444(),desc,*(int *)self,*(short *)(self+22));if(FUN_02084684(**(int **)(self+8),desc,stats)){*(int *)(self+28)=((unsigned char *)stats)[8]<<9;return 1;}return 0;}
