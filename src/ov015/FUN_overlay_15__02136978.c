// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_overlay_15__02136978 @ 0x02136978, verified extent 0x30.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0213e908[];
// FUN_overlay_15__02136978 @ 0x02136978 (code 0x26, pool extent 0x30, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Check all requested input bits unless hardware lid status is set.
 * Field identities remain provisional.
 */
int FUN_overlay_15__02136978(unsigned int mask) {unsigned short *p;if((*(volatile unsigned short *)0x027fffa8&0x8000)>>15)return 0;p=((unsigned short **)((unsigned int)DAT_0213e908 + 0u))[1];return (p[25]&mask)==mask;}
