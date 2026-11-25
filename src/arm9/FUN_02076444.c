// FUN_02076444 @ 0x02076444 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076444 @ 0x02076444 (inventory code 0x50, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve target and copy computed position and orientation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076444.txt.
 */
typedef struct {unsigned int x,y,z;} Vector;typedef struct {unsigned int m[9];} Matrix;extern char *FUN_02075040(void *,int);extern void FUN_02076164(void *,void *,void *,void *);void FUN_02076444(void *self,char *source,char *target){signed char *desc=*(signed char **)(source+12);char *p;Vector pos;Matrix matrix;if(desc[0]==0)p=*(char **)(target+8);else p=FUN_02075040(self,*(int *)(target+4));if(p){FUN_02076164(self,desc,&pos,&matrix);*(Vector *)(p+92)=pos;*(Matrix *)(p+112)=matrix;}}
