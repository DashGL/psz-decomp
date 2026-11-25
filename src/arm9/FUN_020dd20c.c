// FUN_020dd20c @ 0x020dd20c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020dd1b8(unsigned int,unsigned int,unsigned int,unsigned int);
unsigned int FUN_020dd20c(unsigned int self,unsigned int value,unsigned int field){unsigned int result=FUN_020dd1b8(self,field,0,2047);*(unsigned int *)(self+4)=value;return result;}
