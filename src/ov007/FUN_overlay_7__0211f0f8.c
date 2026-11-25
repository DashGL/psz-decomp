// FUN_overlay_7__0211f0f8 @ 0x0211f0f8 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_7__0211f0f8 @ 0x0211f0f8 (code 0x1e, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 7 reconstruction from extracted module bytes, 2026-11-04.
 * Replace four hardware display bitfields while preserving mask 0x43.
 * Field identities remain provisional.
 */
void FUN_overlay_7__0211f0f8(unsigned int a,unsigned int b,unsigned int c,unsigned int d) {volatile unsigned short *reg=(volatile unsigned short *)0x400100e;*reg=(*reg&0x43)|(a<<14)|(b<<7)|(c<<8)|(d<<2);}
