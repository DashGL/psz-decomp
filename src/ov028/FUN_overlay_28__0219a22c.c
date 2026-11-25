// FUN_overlay_28__0219a22c @ 0x0219a22c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219a22c @ 0x0219a22c (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Combine flag-eight presence with mode-one comparison.
 * Field identities remain provisional.
 */
int FUN_overlay_28__0219a22c(unsigned int *p) {int flag=(p[54]&8)!=0;int mode=p[53]==1;return flag|mode;}
