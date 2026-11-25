// FUN_0200f330 @ 0x0200f330 (0x34, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_02011974(unsigned int,unsigned int);
extern unsigned int FUN_0200f364(unsigned int);
unsigned int FUN_0200f330(unsigned int self,unsigned int heap){FUN_02011974(self+4,12);*(unsigned int *)self=heap;return FUN_0200f364(self)!=0;}
