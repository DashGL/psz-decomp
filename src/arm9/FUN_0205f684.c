// FUN_0205f684 @ 0x0205f684 (inventory code 0x60, arm)
// flags: -O4,p -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 229.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b229/0205f684.txt.
 */
extern void FUN_02064f78(unsigned int,const void *,void *,unsigned int,void *,void *),FUN_0206552c(const void *,void *,unsigned int);void FUN_0205f684(const void *source,unsigned int offset,unsigned int size){unsigned int channel=*(unsigned int *)0x020f96e4,base=0x06898000;if(channel!=~0u)FUN_02064f78(channel,source,(void *)(base+offset),size,0,0);else FUN_0206552c(source,(void *)(base+offset),size);}
