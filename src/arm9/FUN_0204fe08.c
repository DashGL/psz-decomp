// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe8, exact bytes and relocation targets.
typedef struct {unsigned int w[3];} Descriptor_0204fe08;
extern Descriptor_0204fe08 DAT_020ed6bc,DAT_020ed6c8;
// FUN_0204fe08 @ 0x0204fe08 (inventory code 0xe0, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 132.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b132/0204fe08.txt.
 */
extern void FUN_0204a9cc(void *),FUN_020bed1c(void *,int),FUN_0204fef0(void *,void *),FUN_0200c938(void *,int),FUN_020be4f8(void *,int,int);extern void *FUN_020be450(void);extern int FUN_02078198(unsigned int),FUN_020beccc(void *,void *,int,void *,void *);int FUN_0204fe08(char *s){Descriptor_0204fe08 a,b;unsigned int config[3],key[2];*(unsigned int *)(s+256)-=1;if(*(int *)(s+264))return 1;if(*(int *)(s+260)){*(unsigned int *)(s+272)=*(unsigned int *)(s+372);FUN_0204a9cc(s+268);*(int *)(s+264)=1;FUN_020bed1c(FUN_020be450(),*(int *)(s+372));*(int *)(s+372)=-1;}else if(*(int *)(s+256)<=0){a=DAT_020ed6bc;b=DAT_020ed6c8;if(FUN_02078198(*(unsigned int *)(s+268)))FUN_0204fef0(config,&b);else FUN_0204fef0(config,&a);FUN_0200c938(key,8);key[1]=*(unsigned int *)(s+268);*(int *)(s+372)=FUN_020beccc(FUN_020be450(),s+320,1,config,key);FUN_020be4f8(FUN_020be450(),*(int *)(s+372),0);*(int *)(s+260)=1;}return 0;}
