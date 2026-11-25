// FUN_0200e42c @ 0x0200e42c (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_0200d644(unsigned int);
extern unsigned int FUN_02011ac0(unsigned int,unsigned int);
unsigned int FUN_0200e42c(unsigned int self){unsigned int flags;FUN_0200d644(*(unsigned int *)(self+64));FUN_02011ac0(0x0210270c,self);flags=*(unsigned int *)(self+36)&~1u;*(unsigned int *)(self+36)=flags;return flags;}
