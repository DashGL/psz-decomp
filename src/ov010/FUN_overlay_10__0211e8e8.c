// FUN_overlay_10__0211e8e8 @ 0x0211e8e8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211e8e8 @ 0x0211e8e8 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Read optional halfword array with signed bounds.
 * Field identities remain provisional.
 */
unsigned int FUN_overlay_10__0211e8e8(unsigned int *p,int index) {unsigned short *data=(unsigned short *)p[0];if(data && index>=0 && index<(int)p[1])return data[index];return 0;}
