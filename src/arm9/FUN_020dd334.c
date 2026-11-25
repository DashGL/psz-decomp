// FUN_020dd334 @ 0x020dd334 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020dd234(unsigned int);
extern unsigned int FUN_020dd2d0(unsigned int,unsigned int);
unsigned int FUN_020dd334(unsigned int self,unsigned int enabled){unsigned int flags;if(enabled)flags=FUN_020dd234(self)|8;else flags=FUN_020dd234(self)&~8u;return FUN_020dd2d0(self,flags);}
