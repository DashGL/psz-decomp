// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02069964(void);
extern unsigned int FUN_02069978(void);
extern void FUN_020673f0(unsigned int,unsigned int);
unsigned int FUN_0206a488(unsigned int self){unsigned int node,next;FUN_02069964();node=*(unsigned int *)(self+24);while(node){next=*(unsigned int *)(node+4);*(unsigned int *)node=0;*(unsigned int *)(node+4)=0;FUN_020673f0(node,8);node=next;}return FUN_02069978();}
