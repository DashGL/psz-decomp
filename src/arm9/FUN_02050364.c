// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets.
// FUN_02050364 @ 0x02050364
// check: 2.0/sp2p3 target=0xbc candidate=0xbc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 69.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b69/02050364.txt.
 */
extern void * data_02108c84[];
extern int FUN_02037d20(void *,unsigned int);extern void FUN_02033fcc(void *,unsigned int);extern int FUN_02037c5c(void *,unsigned int);extern int FUN_02037b88(void *,unsigned int);extern void FUN_020ba8b4(void *);
void FUN_02050364(char *s){unsigned short *p=*(unsigned short **)(s+16);if(p){void *m=*data_02108c84;if(m){unsigned int count=*(unsigned int *)(s+20),i,j;for(i=0;i<count;i++,p+=7){for(j=0;j<3;j++)if(FUN_02037d20(m,p[j+4]))p[j+4]=65535;for(j=0;j<2;j++)FUN_02033fcc(m,p[j]);for(j=0;j<2;j++)if(FUN_02037c5c(m,p[j+2]))p[j+2]=65535;for(j=0;j<2;j++)if(FUN_02037b88(m,p[j]))p[j]=65535;}}if(*(void **)(s+16)){FUN_020ba8b4(*(void **)(s+16));*(void **)(s+16)=0;}}*(int *)(s+20)=0;}
