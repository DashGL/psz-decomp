// FUN_overlay_22__021a0658 @ 0x021a0658 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a0658 @ 0x021a0658 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Forward incoming record to optional child only for parent type A.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__021982d8(void *,void *);
void FUN_overlay_22__021a0658(void **p,void *record) { void **parent=p[1]; if(parent && **(signed char **)parent[5]==65 && p[12])FUN_overlay_22__021982d8(p[12],record); }
