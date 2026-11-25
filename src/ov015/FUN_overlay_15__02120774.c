// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x28, exact bytes and relocation targets.
// FUN_overlay_15__02120774 @ 0x02120774 (code 0x28, pool extent 0x28, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Reverse four bytes of unsigned word.
 * Field identities remain provisional.
 */
unsigned int FUN_overlay_15__02120774(unsigned int v) {return ((v>>24)&255)|((v>>8)&0xff00)|((v<<8)&0xff0000)|((v<<24)&0xff000000);}
