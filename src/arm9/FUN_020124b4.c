// FUN_020124b4 @ 0x020124b4 (0x50, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch43-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_0201231c(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020124b4(unsigned int self,unsigned int value){unsigned int old=*(unsigned int *)(self+36),p=FUN_0201231c(self+36,16,4);if(!p)return 0;*(unsigned int *)p=value;*(unsigned int *)(p+4)=old;*(unsigned int *)(p+8)=*(unsigned int *)(self+40);*(unsigned int *)(p+12)=*(unsigned int *)(self+44);*(unsigned int *)(self+44)=p;return 1;}
