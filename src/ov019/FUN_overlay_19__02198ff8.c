// FUN_overlay_19__02198ff8 @ 0x02198ff8 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch25.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198ff8 @ 0x02198ff8 (code 0x1e, pool extent 0x1e, thumb)
// check: vers=2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * Release record handle through incoming owner then store sentinel.
 * Field identities remain provisional.
 */
extern void FUN_02075068(void *,unsigned int);
void FUN_overlay_19__02198ff8(unsigned int *p,void *owner) { if(p[12]!=~0U) { FUN_02075068(owner,p[12]); p[12]=~0U; } }
