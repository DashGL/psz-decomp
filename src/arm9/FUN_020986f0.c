// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// FUN_020986f0 @ 0x020986f0 (inventory code 0x6c, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compute actor-relative endpoint using a positive movement distance.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020986f0.txt.
 */
typedef struct {int v[3];} Vec;extern char *FUN_0208555c(int);extern int FUN_02098574(void *,void *,void *);extern void FUN_02083d30(void *,void *,void *),FUN_020345f0(void *,void *),FUN_0203647c(void *,void *,void *),FUN_02036348(void *,void *,void *);int FUN_020986f0(int *s,Vec *out,int *distance,void *origin,void *direction){char *actor=FUN_0208555c(*s);int count,scaled;Vec scale,result,end,position;if(actor){count=FUN_02098574(s,origin,direction);if(count>0){scaled=count<<12;FUN_02083d30(&scale,&scaled,direction);FUN_020345f0(&position,actor+156);FUN_0203647c(&end,origin,&scale);FUN_02036348(&result,&end,&position);*out=result;*distance=count;return 1;}}return 0;}
