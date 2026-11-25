// FUN_020c7e68 @ 0x020c7e68 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// USA typed tail-call adapters; full input/return ABI evidence in root batch249.
extern int FUN_020015ac(const void *,const void *,unsigned);int FUN_020c7e68(const void *a,const void *b){return FUN_020015ac(a,b,16);}
