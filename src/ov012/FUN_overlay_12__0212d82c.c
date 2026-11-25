// FUN_overlay_12__0212d82c @ 0x0212d82c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212d82c @ 0x0212d82c (code 0x10, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Replace hardware power-control bit fifteen with incoming setting.
 * Field identities remain provisional.
 */
void FUN_overlay_12__0212d82c(unsigned int value) {volatile unsigned short *reg=(volatile unsigned short *)0x04000304;*reg=(*reg&0xffff7fffU)|(value<<15);}
