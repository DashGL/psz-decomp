// FUN_overlay_12__02134764 @ 0x02134764 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_overlay_12__02134764 @ 0x02134764 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Set four byte sentinels then clear four word fields.
 * Field identities remain provisional.
 */
void FUN_overlay_12__02134764(unsigned char *p) {int i;p[0]=255;p[1]=255;p[2]=255;p[3]=255;for(i=0;i<3;i++)((unsigned int *)(p+4))[i]=0;*(unsigned int *)(p+16)=0;}
