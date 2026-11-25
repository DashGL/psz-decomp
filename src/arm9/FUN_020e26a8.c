// FUN_020e26a8 @ 0x020e26a8 (0x8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch50-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x8 candidate=0x8 words=0 exact_bytes=0 bad_relocs=0
// Connection metadata and decoding wrappers; explicit stack arguments and scalar returns.
extern int FUN_020e03ac(const void *,unsigned int,void *,unsigned int);
int FUN_020e26a8(const void *input,unsigned int length,void *output,unsigned int capacity){return FUN_020e03ac(input,length,output,capacity);}
