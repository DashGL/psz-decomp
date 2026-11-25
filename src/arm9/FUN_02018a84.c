// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// FUN_02018a84 @ 0x02018a84
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int D_020f6718[];
extern unsigned int D_020f6714[];
extern unsigned int D_020f6710[];
extern void FUN_02065510(unsigned int,unsigned int,unsigned int);
unsigned int FUN_02018a84(unsigned int self,unsigned int resource){unsigned int value;FUN_02065510(0,self,72);*(unsigned int *)(self+12)=*D_020f6718;*(unsigned int *)(self+20)=*D_020f6714;value=*D_020f6710;*(unsigned int *)(self+28)=value;*(unsigned int *)(self+4)=resource;return value;}
