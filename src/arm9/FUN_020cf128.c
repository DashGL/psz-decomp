// FUN_020cf128 @ 0x020cf128 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch49-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA owned-buffer and collection helpers; root batch242 retains ABI and extents.
extern void FUN_020c7bec(void *);void FUN_020cf128(void **p){FUN_020c7bec(*p);*p=0;}
