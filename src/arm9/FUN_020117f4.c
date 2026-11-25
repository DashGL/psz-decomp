// FUN_020117f4 @ 0x020117f4 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_0200efe0(unsigned int);
extern void FUN_02065774(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020117f4(unsigned int self,unsigned int index){unsigned int p=FUN_0200efe0(index);*(unsigned int *)(self+164)=p;FUN_02065774(p,self+168,64);return 1;}
