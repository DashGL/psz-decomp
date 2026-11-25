// flags: -O4,p -noThumb
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02011b20(unsigned int,unsigned int);
extern unsigned int FUN_02011a5c(unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_02011ac0(unsigned int,unsigned int);
extern unsigned int FUN_020119b8(unsigned int,unsigned int);
unsigned int FUN_0200dde4(unsigned int self){unsigned int node=FUN_02011b20(0x02101e3c,0);while(node){if(*(unsigned char *)(self+61)<*(unsigned char *)(node+61))break;node=FUN_02011b20(0x02101e3c,node);}return FUN_02011a5c(0x02101e3c,node,self);}
