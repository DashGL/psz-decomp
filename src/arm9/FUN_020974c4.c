// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// FUN_020974c4 @ 0x020974c4 (inventory code 0xb8, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Choose a target according to the configured selection mode.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020974c4.txt.
 */
extern int FUN_0208546c(void),FUN_020866b4(int,void *),FUN_02098064(int,int,void *,void *),FUN_0209806c(int,int,void *,void *);extern void FUN_020bc5cc(void *,void *,void *),FUN_0209794c(void *,int);int FUN_020974c4(char *s){int chosen=-1,position[3],d,c,b,a;switch(*(short *)(s+20)){case 1:if(FUN_020866b4(FUN_0208546c(),position)){FUN_020bc5cc(&d,s+24,s+24);chosen=FUN_02098064(*(int *)(s+4),*(int *)s,position,&d);}break;case 0:FUN_020bc5cc(&c,s+24,s+24);chosen=FUN_02098064(*(int *)(s+4),*(int *)s,s+64,&c);break;case 2:FUN_020bc5cc(&b,s+24,s+24);chosen=FUN_0209806c(*(int *)(s+4),*(int *)s,s+64,&b);break;default:FUN_020bc5cc(&a,s+24,s+24);chosen=FUN_02098064(*(int *)(s+4),*(int *)s,s+64,&a);break;}FUN_0209794c(s,chosen);return chosen!=-1;}
