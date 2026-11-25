// FUN_overlay_10__0212008c @ 0x0212008c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch47.json; original draft retained for referenced provenance.
// FUN_overlay_10__0212008c @ 0x0212008c (code 0x26, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 10 reconstruction from extracted module bytes, 2026-11-04.
 * Replace five display fields while preserving hardware mask 0x43.
 * Field identities remain provisional.
 */
void FUN_overlay_10__0212008c(unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e) {volatile unsigned short *reg=(volatile unsigned short *)0x0400000a;*reg=(*reg&0x43)|(a<<14)|(b<<7)|(c<<8)|(d<<2)|(e<<13);}
