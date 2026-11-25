// FUN_overlay_12__0212d3fc @ 0x0212d3fc (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212d3fc @ 0x0212d3fc (code 0x2e, pool extent 0x2e, thumb)
// check: vers=2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Set a previously clear bounded bit and report whether it changed.
 * Field identities remain provisional.
 */
extern int FUN_020a1580(unsigned int,const unsigned char *);
int FUN_overlay_12__0212d3fc(unsigned int i,unsigned char *bits) {if(i<100 && !FUN_020a1580(i,bits)){bits[i>>3]|=(unsigned char)(1<<(i&7));return 1;}return 0;}
