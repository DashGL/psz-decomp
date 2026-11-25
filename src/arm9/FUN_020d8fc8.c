// FUN_020d8fc8 @ 0x020d8fc8 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// USA collection/protocol helpers; full ABI and extents retained in root batch243.
extern void FUN_020d8294(void *,void *);void FUN_020d8fc8(char *s,void *entry){void *old=*(void **)(s+2008);if(!old)FUN_020d8294(entry,0);else FUN_020d8294(entry,old);*(void **)(s+2008)=entry;}
