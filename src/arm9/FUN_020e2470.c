// FUN_020e2470 @ 0x020e2470 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// Connection metadata and decoding wrappers; explicit stack arguments and scalar returns.
extern unsigned int FUN_020e2480(unsigned int,void *,void *,void *);
unsigned int FUN_020e2470(unsigned int id,void *out){return FUN_020e2480(id,0,0,out);}
