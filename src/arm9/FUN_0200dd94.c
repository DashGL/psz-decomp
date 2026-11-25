// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02011b20(unsigned int,unsigned int);
extern unsigned int FUN_02011a5c(unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_02011ac0(unsigned int,unsigned int);
extern unsigned int FUN_020119b8(unsigned int,unsigned int);
unsigned int FUN_0200dd94(unsigned int list,unsigned int self){unsigned int node=FUN_02011b20(list,0),result;while(node){if(*(unsigned char *)(self+61)<*(unsigned char *)(node+61))break;node=FUN_02011b20(list,node);}result=FUN_02011a5c(list,node,self);*(unsigned int *)(self+4)=list;return result;}
