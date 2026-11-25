// FUN_overlay_28__02198b68 @ 0x02198b68 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_28__02198b68 @ 0x02198b68 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 28 reconstruction from extracted module bytes, 2026-11-04.
 * If fourth argument is not sentinel, update owner value then clear state.
 * Field identities remain provisional.
 */
extern void FUN_02037910(void *,unsigned int);
void FUN_overlay_28__02198b68(unsigned int *p,unsigned int a,unsigned int b,unsigned int value) { if(value!=~0U) { FUN_02037910(p,p[14]); p[20]=0; } }
