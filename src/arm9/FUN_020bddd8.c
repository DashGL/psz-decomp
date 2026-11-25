// FUN_020bddd8 @ 0x020bddd8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// USA input/record adapters; concrete callee ABI and full extents in root batch263.
extern int FUN_020e25d0(void *,unsigned);int FUN_020bddd8(char *p,int enabled){p[0xf10]=enabled==1;return FUN_020e25d0(p+0xf00,20);}
