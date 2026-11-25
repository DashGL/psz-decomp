// FUN_02099358 @ 0x02099358 (inventory code 0x92, thumb)
// check: 2.0/sp2p3 target=0x92 candidate=0x90 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/37 size=0x92 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance delayed action and choose subsequent randomized state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099358.txt.
 */
extern int FUN_02098ed0(void *,void *),FUN_02035b60(int);extern void FUN_02098960(void *,void *,void *,int),FUN_0209885c(void *,void *,int,int),FUN_02098bc8(void *);void FUN_02099358(char *s){int v[3],r;int *p;if(*(short *)(s+6)==0){--*(int *)(s+8);if(*(int *)(s+8)<=0){*(int *)(s+8)=0;if(FUN_02098ed0(s,v)==1){p=*(int **)(s+12);FUN_02098960((void *)p[2],s+4,v,p[3]);}else{p=*(int **)(s+12);FUN_0209885c((void *)p[2],s+4,p[3],0);}*(short *)(s+6)=1;}}else{p=*(int **)(s+12);FUN_02098bc8((void *)p[2]);p=*(int **)(s+12);if(!((int *)p[2])[1]){p[12]=0;r=FUN_02035b60(3);switch(r){case 1:r=FUN_02035b60(15);p=*(int **)(s+12);p[13]=6;p[14]=r;break;case 2:r=FUN_02035b60(90);p=*(int **)(s+12);p[13]=14;p[14]=r;break;}}}}
