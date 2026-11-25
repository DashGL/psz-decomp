// FUN_overlay_12__0211ee60 @ 0x0211ee60 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_12__0211ee60 @ 0x0211ee60 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Fill word range with source word read each iteration.
 * Field identities remain provisional.
 */
void FUN_overlay_12__0211ee60(unsigned int *first,unsigned int *last,const unsigned int *value) {int count=((int)((unsigned int)last-(unsigned int)first))/4;while(count>0){*first++=*value;count--;}}
