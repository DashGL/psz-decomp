// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
typedef struct {unsigned int w[3];} Descriptor_0204d5cc;
extern Descriptor_0204d5cc DAT_020ed67c;
// FUN_0204d5cc @ 0x0204d5cc (inventory code 0x98, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 124.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b124/0204d5cc.txt.
 */
extern int FUN_0204dab0(unsigned int);extern void FUN_020bf680(void *,void *,int),FUN_020c0488(void *),FUN_02047798(void *,void *),FUN_0200c938(void *,int),FUN_020be4f8(void *,int,int);extern void *FUN_020be450(void);extern int FUN_020beccc(void *,void *,int,void *,void *);void FUN_0204d5cc(char *s){unsigned int pair[2],config[2];Descriptor_0204d5cc values;if(FUN_0204dab0(*(unsigned int *)(s+4))&&*(int *)(s+192)==-1){pair[0]=*(unsigned int *)(s+24);pair[1]=*(unsigned int *)(s+32);*(unsigned int *)(s+100)=4096;FUN_020bf680(s+104,pair,4096);FUN_020c0488(s+140);FUN_02047798(s+152,s+104);*(unsigned int *)(s+148)=4096;values=DAT_020ed67c;FUN_0200c938(config,8);config[1]=*(unsigned int *)(s+4);*(int *)(s+192)=FUN_020beccc(FUN_020be450(),s+140,1,&values,config);FUN_020be4f8(FUN_020be450(),*(int *)(s+192),0);}}
