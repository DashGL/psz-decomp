// FUN_overlay_22__0219a0f4 @ 0x0219a0f4 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a0f4 @ 0x0219a0f4 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke owner operation using nested selector and incoming mode.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_22__0219a0f4(void **p,unsigned int mode) { FUN_02040c0c(p[1],*(unsigned int *)p[3],mode,0x1000,0); }
