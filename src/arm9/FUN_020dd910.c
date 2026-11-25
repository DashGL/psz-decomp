// FUN_020dd910 @ 0x020dd910 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA record and vector operations; alias-sensitive load/store order retained.
extern unsigned int FUN_020dd528(unsigned int,unsigned int,unsigned int);
unsigned int FUN_020dd910(unsigned int self,unsigned int record,unsigned int output){return FUN_020dd528(record,*(unsigned int *)(self+36),output);}
