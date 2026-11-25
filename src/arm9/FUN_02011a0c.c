// FUN_02011a0c @ 0x02011a0c (0x50, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_0201198c(unsigned int,unsigned int);
void FUN_02011a0c(unsigned int list,unsigned int item){unsigned int off,p;if(!*(unsigned int *)list){FUN_0201198c(list,item);return;}off=*(unsigned short *)(list+10);*(unsigned int *)(item+off)=0;p=*(unsigned int *)list;*(unsigned int *)(item+off+4)=p;off=*(unsigned short *)(list+10);p=*(unsigned int *)list;*(unsigned int *)(p+off)=item;*(unsigned int *)list=item;*(unsigned short *)(list+8)=(unsigned short)(*(unsigned short *)(list+8)+1);}
