// FUN_0200f0b8 @ 0x0200f0b8 (0x18, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch45-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s -noThumb
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern void FUN_0200f0d0(unsigned int);
extern void FUN_02012448(unsigned int);
void FUN_0200f0b8(unsigned int self){FUN_0200f0d0(self);FUN_02012448(*(unsigned int *)self);}
