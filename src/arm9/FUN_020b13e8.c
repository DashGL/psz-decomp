// FUN_020b13e8 @ 0x020b13e8 (inventory code 0x110, thumb)
// check: 2.0/sp2p3 target=0x11a candidate=0x10e words=999 exact_bytes=999 bad_relocs=5
// near: ndiff=999/71 size=0x11a vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Emit state-timed positional sound cues and advance the frame counter.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b13e8.txt.
 */
typedef struct{int x,y,z;} Vec;extern void *FUN_02090c20(void);extern void FUN_020345f0(void *,void *),FUN_02090f74(void *,void *,void *,int),FUN_020c193c(int,int,int,int,int);void FUN_020b13e8(char *s){Vec a,b,c,d;short pa[2],pb[2],pc[2],pd[2];switch(*(short *)(s+92)){case 0:break;case 1:if(*(unsigned short *)(s+116)==12){FUN_020345f0(&a,s+52);FUN_02090f74(pa,FUN_02090c20(),&a,0);FUN_020c193c(58,1,pa[0],pa[1],*(int *)(s+44));}else if(*(unsigned short *)(s+116)==16){FUN_020345f0(&b,s+52);FUN_02090f74(pb,FUN_02090c20(),&b,0);FUN_020c193c(58,0,pb[0],pb[1],*(int *)(s+44));}break;case 2:if(*(unsigned short *)(s+116)==20){FUN_020345f0(&c,s+52);FUN_02090f74(pc,FUN_02090c20(),&c,0);FUN_020c193c(59,0,pc[0],pc[1],*(int *)(s+44));}break;case 3:if(*(unsigned short *)(s+116)==18){FUN_020345f0(&d,s+52);FUN_02090f74(pd,FUN_02090c20(),&d,0);FUN_020c193c(60,0,pd[0],pd[1],*(int *)(s+44));}break;case 4:break;}++*(unsigned short *)(s+116);}
