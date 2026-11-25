// FUN_020e2534 @ 0x020e2534 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// Connection metadata and decoding wrappers; explicit stack arguments and scalar returns.
extern unsigned int FUN_020e2544(unsigned int,void *,void *,void *,unsigned int *);
unsigned int FUN_020e2534(unsigned int id,void *out,unsigned int *size){return FUN_020e2544(id,0,0,out,size);}
