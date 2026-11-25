// FUN_overlay_22__0219f34c @ 0x0219f34c (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f34c @ 0x0219f34c (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * If owner child +10 exists, forward record embedded +c to two-argument operation.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_22__021a0658(void *,void *);
void FUN_overlay_22__0219f34c(void **self,char *record) { if(self[4]) FUN_overlay_22__021a0658(self[4],record+12); }
