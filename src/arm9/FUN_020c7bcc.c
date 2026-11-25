// FUN_020c7bcc @ 0x020c7bcc (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch52-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA dynamic-array and callback helpers; full ABI and extents in root batch240.
extern struct{int words[2];void *(*allocate)(unsigned int);void (*release)(void *);void *(*resize)(void *,unsigned int);} DAT_0211cef4;
void *FUN_020c7bcc(unsigned int size){return DAT_0211cef4.allocate(size);}
