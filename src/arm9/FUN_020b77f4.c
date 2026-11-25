// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xa8, exact bytes and relocation targets.
// FUN_020b77f4 @ 0x020b77f4 (inventory code 0xa8, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reflect target position across a stored center and start its timer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b77f4.txt.
 */
typedef struct {int x,y,z;} V;extern int FUN_02098ed0(void *,void *);extern void FUN_02035408(void *,int,int,int),FUN_020989b4(void *,void *);void FUN_020b77f4(int *s){V target,diff,scaled;V *center;if(FUN_02098ed0(s,&target)){center=(V *)(s[3]+64);FUN_02035408(&scaled,(int)(((long long)center->x*8192+2048)>>12),(int)(((long long)center->y*8192+2048)>>12),(int)(((long long)center->z*8192+2048)>>12));FUN_02035408(&diff,scaled.x-target.x,scaled.y-target.y,scaled.z-target.z);target=diff;FUN_020989b4((void *)((int *)s[3])[2],&target);s[2]=60;}else s[2]=0;}
