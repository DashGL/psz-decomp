// FUN_02080d3c @ 0x02080d3c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA input/record adapters; concrete callee ABI and full extents in root batch263.
extern int FUN_02080b7c(const unsigned char *,unsigned char *);int FUN_02080d3c(unsigned char *dest,const unsigned char *source){return FUN_02080b7c(source,dest);}
