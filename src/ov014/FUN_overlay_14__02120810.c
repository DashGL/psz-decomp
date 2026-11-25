// FUN_overlay_14__02120810 @ 0x02120810 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120810 @ 0x02120810 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Copy available descriptor sections and trailing status byte.
 * Field identities remain provisional.
 */
extern void FUN_overlay_14__02120798(void *,const void *);
extern void FUN_overlay_14__021207ec(void *,const void *);
int FUN_overlay_14__02120810(const unsigned char *p,unsigned char *out) {if(p[3]){FUN_overlay_14__02120798(out,p+8);FUN_overlay_14__021207ec(out+36,p+44);out[86]=p[4];return 1;}return 0;}
