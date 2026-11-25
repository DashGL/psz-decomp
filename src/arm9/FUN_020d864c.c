// FUN_020d864c @ 0x020d864c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch46-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// USA collection/protocol helpers; full ABI and extents retained in root batch243.
extern int FUN_020083f4(const char *,const char *);int FUN_020d864c(const char **a,const char **b){if(!*a||!*b)return 1;return FUN_020083f4(*a,*b);}
