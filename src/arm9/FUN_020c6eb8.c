// FUN_020c6eb8 @ 0x020c6eb8 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020c6e10(unsigned int,int);
extern unsigned int FUN_020014f4(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020c6eb8(unsigned int self,int index){int last=*(unsigned int *)self-1;unsigned int dest,source,result;if(index<last){dest=FUN_020c6e10(self,index);source=FUN_020c6e10(self,(unsigned int)index+1);FUN_020014f4(dest,source,((unsigned int)last-index)*(*(unsigned int *)(self+8)));}result=*(unsigned int *)self-1;*(unsigned int *)self=result;return result;}
