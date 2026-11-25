// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// Signed loop-counter evidence: notes/sessions/continue-low-runtime-small-review-20261112.md
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020654dc(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020621a4(unsigned int self,unsigned int data,unsigned int mask,unsigned int value){unsigned int count=1,result;int i;FUN_020654dc(data,self+0x35e,330);for(i=0;i<15;i++)if(mask&(2u<<i))count=(count+1)&255;*(unsigned char *)(self+0x358)=(unsigned char)count;*(unsigned short *)(self+0x35a)=(unsigned short)(mask|1);*(unsigned short *)(self+0x35c)=(unsigned short)value;result=*(unsigned char *)(self+0x4b4)+1;*(unsigned char *)(self+0x4b4)=(unsigned char)result;return result;}
