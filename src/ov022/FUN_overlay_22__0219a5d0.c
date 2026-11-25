// FUN_overlay_22__0219a5d0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_22__0219a5d0 @ 0x0219a5d0
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Clamp fixed-point progress and sample signed trigonometric table.
 * Field identities remain provisional.
 */
extern short data_020ed83c[];
int FUN_overlay_22__0219a5d0(int value) {unsigned short phase;if(value<0)value=0;else if(value>4096)value=4096;phase=(value*32768)/4096-16384;return (data_020ed83c[2*(phase>>4)]+4096)/2;}
