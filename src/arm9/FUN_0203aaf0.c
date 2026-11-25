// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// FUN_0203aaf0 @ 0x0203aaf0
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_020ed314[];
extern unsigned int D_020ed204[];
extern unsigned int D_020ed28c[];
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 48.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b48/0203aaf0.txt.
 */
typedef struct{unsigned int x,y,z;} Vector;extern void FUN_020345f0(Vector *,void *);extern void *FUN_02090c20(void);extern void FUN_02090f74(short *,void *,Vector *,int);extern void FUN_020c193c(unsigned int,unsigned int,int,int,int);
void FUN_0203aaf0(char *s,int kind){unsigned int index=*(unsigned char *)(s+77);Vector v;short pair[2];if(kind>=0&&kind<2&&index<34){FUN_020345f0(&v,s+156);FUN_02090f74(pair,FUN_02090c20(),&v,0);switch(kind){case 0:FUN_020c193c(D_020ed314[index],D_020ed204[index],pair[0],pair[1],-1);break;case 1:FUN_020c193c(D_020ed314[index],D_020ed28c[index],pair[0],pair[1],-1);break;}}}
