// FUN_overlay_29__021998a4 @ 0x021998a4 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_29__021998a4 @ 0x021998a4 (code 0x1c, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Select owner value, lock it and request module mode five.
 * Field identities remain provisional.
 */
extern void FUN_02037910(void *,unsigned int),FUN_overlay_29__02199afc(void *,unsigned int);
void FUN_overlay_29__021998a4(unsigned int *p) { FUN_02037910(p,p[15]); p[11]|=1; FUN_overlay_29__02199afc(p,5); }
