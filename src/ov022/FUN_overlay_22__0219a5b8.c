// FUN_overlay_22__0219a5b8 @ 0x0219a5b8 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a5b8 @ 0x0219a5b8 (code 0xc, pool extent 0xc, thumb)
// check: vers=2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Read signed first byte through owner +4, nested +14, and data pointer.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_22__0219a5b8(void **self) { char *owner=self[1]; void *holder=*(void **)(owner+20); return **(signed char **)holder; }
