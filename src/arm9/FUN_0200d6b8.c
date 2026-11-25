// flags: -O4,p -noThumb
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned char DAT_0200df5c[];
extern unsigned char DAT_02102288[];
extern unsigned int FUN_0200f18c(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
extern unsigned int FUN_0200f048(unsigned int,unsigned int);
extern unsigned int FUN_020119b8(unsigned int,unsigned int);
unsigned int FUN_0200d6b8(unsigned int owner,unsigned int archive,unsigned int size){unsigned int node=FUN_0200f18c(archive,size+20,((unsigned int)DAT_0200df5c),0,0),resource;if(!node)return 0;*(unsigned int *)(node+12)=0;*(unsigned int *)(node+16)=owner;*(unsigned int *)(node+8)=0;resource=FUN_0200f048(node+20,size);if(!resource)return 0;*(unsigned int *)(node+8)=resource;FUN_020119b8(((unsigned int)DAT_02102288)+owner*36+12,node);return 1;}
