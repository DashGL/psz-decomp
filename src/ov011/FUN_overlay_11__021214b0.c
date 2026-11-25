// FUN_overlay_11__021214b0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_11__021214b0 @ 0x021214b0 (code 0x28, pool extent 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Decrement cyclic selection, skip special event slot and wrap.
 * Field identities remain provisional.
 */
extern char G_0211A208[];
void FUN_overlay_11__021214b0(unsigned int *p) {--p[0];if(((signed char *)G_0211A208)[1]==1 && p[0]==5)--p[0];if((int)p[0]<0)p[0]=p[1]-1;}
