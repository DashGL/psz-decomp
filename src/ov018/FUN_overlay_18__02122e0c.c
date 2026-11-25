// FUN_overlay_18__02122e0c @ 0x02122e0c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_18__02122e0c @ 0x02122e0c (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Copy eight descriptor bytes then trailing state byte.
 * Field identities remain provisional.
 */
extern void FUN_overlay_18__02122e20(void *,const void *);
void FUN_overlay_18__02122e0c(unsigned char *p,const unsigned char *in) {FUN_overlay_18__02122e20(p,in+36);p[8]=in[44];}
