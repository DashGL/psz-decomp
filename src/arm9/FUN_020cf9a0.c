// FUN_020cf9a0 @ 0x020cf9a0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch41-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA owned-buffer and collection helpers; root batch242 retains ABI and extents.
extern void FUN_020c7bec(void *);void FUN_020cf9a0(void **p){FUN_020c7bec(p[3]);p[3]=0;FUN_020c7bec(p[2]);p[2]=0;FUN_020c7bec(p);}
