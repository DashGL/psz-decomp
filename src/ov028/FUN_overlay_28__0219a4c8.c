// FUN_overlay_28__0219a4c8 @ 0x0219a4c8 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_28__0219a4c8 @ 0x0219a4c8 (code 0x26, pool extent 0x26, thumb)
// check: vers=2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * Apply fallback state for valid event then override when child subtype is one.
 * Field identities remain provisional.
 */
extern void FUN_02037910(void *,int);
void FUN_overlay_28__0219a4c8(unsigned int *p,unsigned int unused1,unsigned int unused2,int event) {if(event!=-1)FUN_02037910(p,p[14]);if(((unsigned int *)p[1])[53]==1)FUN_02037910(p,p[12]);}
