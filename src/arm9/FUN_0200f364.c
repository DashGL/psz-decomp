// FUN_0200f364 @ 0x0200f364 (0x3c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02012454(unsigned int,unsigned int,int);
extern void FUN_0200f320(unsigned int);
extern void FUN_020119b8(unsigned int,unsigned int);
unsigned int FUN_0200f364(unsigned int self){unsigned int p=FUN_02012454(*(unsigned int *)self,20,4);if(!p)return 0;FUN_0200f320(p);FUN_020119b8(self+4,p);return 1;}
