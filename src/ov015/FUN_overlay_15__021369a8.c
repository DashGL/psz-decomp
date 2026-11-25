// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_15__021369a8 @ 0x021369a8 (code 0x26, pool extent 0x30, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Check all requested input bits unless hardware lid status is set.
 * Field identities remain provisional.
 */
extern unsigned short * D_0213e908[];
int FUN_overlay_15__021369a8(unsigned int mask) {unsigned short *p;if((*(volatile unsigned short *)0x027fffa8&0x8000)>>15)return 0;p=D_0213e908[1];return (p[26]&mask)==mask;}
