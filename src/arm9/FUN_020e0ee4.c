// flags: -O4,s
// check: 2.0/sp2p3 target=0x1b4 candidate=0x1b4 words=46 exact_bytes=167 bad_relocs=10
// near: ndiff=46/109 size=0x1b4 vers=2.0/sp2p3 next="Thumb state-switch ordering and repeated callback-registration error exits"
// Connection state pump with result-to-error mapping retained; root batch279.
typedef unsigned int U;extern char *UNK_0211dcbc;
#define G UNK_0211dcbc
#define W(n) (*(U *)(G+(n)))
extern int FUN_020e0a28(void),FUN_020e0558(void),FUN_020c7d98(void),FUN_020e1778(int),FUN_020c8878(void *,U,U,U),FUN_020c88d4(void *,int,void *,U);
extern void FUN_020e1708(void),FUN_020e170c(U),FUN_020e1de4(void),FUN_020e1ebc(int,int),FUN_020e1e08(void),FUN_020e2740(void),FUN_020e3d84(int),FUN_020e9a64(void),FUN_020d66bc(void *);
extern void FUN_020e1a08(void),FUN_020e1a34(void),FUN_020e29bc(void),FUN_020e2990(void),FUN_020e29d8(void);
void FUN_020e0ee4(void){int result;
if(FUN_020e0a28())FUN_020e1708();if(!G||!W(36)||FUN_020e0558())return;
switch(W(36)){
case 1:switch(FUN_020c7d98()){
case 1:
if(FUN_020e1778(FUN_020c8878(G+28,W(160),16,11)))return;
if(FUN_020e1778(FUN_020c88d4(G+28,0,(void *)FUN_020e1a08,0)))return;
if(FUN_020e1778(FUN_020c88d4(G+28,3,(void *)FUN_020e1a34,0)))return;
if(FUN_020e1778(FUN_020c88d4(G+28,7,(void *)FUN_020e29bc,0)))return;
if(FUN_020e1778(FUN_020c88d4(G+28,1,(void *)FUN_020e2990,0)))return;
if(FUN_020e1778(FUN_020c88d4(G+28,2,(void *)FUN_020e29d8,0)))return;
FUN_020e170c(2);FUN_020e1de4();break;
case 2:FUN_020e1ebc(3,-20110);return;
case 3:FUN_020e1ebc(4,-20101);return;
}break;
case 2:FUN_020e1e08();break;
case 3:case 4:FUN_020e2740();FUN_020e3d84(0);break;
case 5:FUN_020e3d84(1);FUN_020e2740();break;
case 6:FUN_020e9a64();FUN_020e2740();if(*(volatile unsigned char *)(G+909)==2||*(volatile unsigned char *)(G+909)==3)FUN_020e3d84(1);else if(W(0))FUN_020e3d84(0);break;
}
if((unsigned char)G[912]==1){if(W(904)){FUN_020d66bc((void *)W(904));W(904)=0;}G[912]=0;}
}
