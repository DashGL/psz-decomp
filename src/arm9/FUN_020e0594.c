// FUN_020e0594 @ 0x020e0594 (0xa, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch50-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xa candidate=0xa words=0 exact_bytes=0 bad_relocs=0
// Allocation metadata size getter; fixed helper subtracts the 32-byte header.
extern unsigned int *FUN_020e0580(void *);
unsigned int FUN_020e0594(void *p){return FUN_020e0580(p)[1];}
