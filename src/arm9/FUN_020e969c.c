// FUN_020e969c @ 0x020e969c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch48-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA typed tail-call adapters; full input/return ABI evidence in root batch249.
extern int FUN_020d3600(void *,void *,unsigned,int);extern int FUN_020e96ac(int (*)(void *,void *,unsigned,int));int FUN_020e969c(void){return FUN_020e96ac(FUN_020d3600);}
