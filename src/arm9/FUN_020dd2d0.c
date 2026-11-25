// FUN_020dd2d0 @ 0x020dd2d0 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020dd1b8(unsigned int,unsigned int,unsigned int,unsigned int);
unsigned int FUN_020dd2d0(unsigned int self,unsigned int flags){return FUN_020dd1b8(self,flags,11,0x1fffff);}
