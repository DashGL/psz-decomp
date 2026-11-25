// FUN_overlay_12__0212bc2c @ 0x0212bc2c (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212bc2c @ 0x0212bc2c (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Return address of selected slot for signed indices zero or one.
 * Field identities remain provisional.
 */
void *FUN_overlay_12__0212bc2c(unsigned int *p) {int index=(int)p[109];if(index>=0 && index<=1)return (unsigned int *)p[108]+index;return (void *)~0U;}
