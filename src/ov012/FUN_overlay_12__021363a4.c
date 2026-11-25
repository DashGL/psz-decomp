// FUN_overlay_12__021363a4 @ 0x021363a4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__021363a4 @ 0x021363a4 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Clear active field, invalidate four byte identifiers and clear three receiver slots.
 * Field identities remain provisional.
 */
extern void FUN_02045848(void *);
void *FUN_overlay_12__021363a4(unsigned int *p) {int i;p[4]=0;FUN_02045848(p);for(i=0;i<3;i++)p[i+1]=0;return p;}
