// FUN_overlay_25__021992c4 @ 0x021992c4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_25__021992c4 @ 0x021992c4 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 25 reconstruction from extracted module bytes, 2026-11-04.
 * Resolve owner handle into forwarded three-word output; fail for all-ones handle.
 * Field identities remain provisional.
 */
extern int FUN_020866b4(unsigned int,void *);
int FUN_overlay_25__021992c4(unsigned int *p,void *out) { unsigned int h=p[21]; if(h!=~0U)return FUN_020866b4(h,out); return 0; }
