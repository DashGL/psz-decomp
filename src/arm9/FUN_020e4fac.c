// FUN_020e4fac @ 0x020e4fac (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch39-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// Connection state accessors; repeated getter calls retained around pointer writes.
extern unsigned char *FUN_020e961c(void);
unsigned int FUN_020e4fac(void **out){if(!FUN_020e961c())return 0;*out=FUN_020e961c()+0x2d0;return FUN_020e961c()[13]+1;}
