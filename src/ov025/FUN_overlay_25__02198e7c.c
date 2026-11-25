// FUN_overlay_25__02198e7c @ 0x02198e7c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_25__02198e7c @ 0x02198e7c (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Release extended owner handle if non-sentinel then reset it.
 * Field identities remain provisional.
 */
extern void FUN_02075068(void *,unsigned int);
void FUN_overlay_25__02198e7c(unsigned int *p) { if(p[54]!=~0U) { FUN_02075068(p,p[54]); p[54]=~0U; } }
