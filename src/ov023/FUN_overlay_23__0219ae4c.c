// FUN_overlay_23__0219ae4c @ 0x0219ae4c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219ae4c @ 0x0219ae4c (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Enable owner slot zero options then set owner flag.
 * Field identities remain provisional.
 */
extern void FUN_02043ea4(void *,unsigned int,unsigned int),FUN_02044570(void *,unsigned int,unsigned int),FUN_02037558(void *);
void FUN_overlay_23__0219ae4c(void **p) { void *owner=p[1]; FUN_02043ea4(owner,0,1); FUN_02044570(owner,0,1); FUN_02037558(owner); }
