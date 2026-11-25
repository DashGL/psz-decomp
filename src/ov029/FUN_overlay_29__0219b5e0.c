// FUN_overlay_29__0219b5e0 @ 0x0219b5e0 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_29__0219b5e0 @ 0x0219b5e0 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 29 reconstruction from extracted module bytes, 2026-11-04.
 * Clear two state words and invoke owner operation.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_29__0219b5e0(unsigned int *p) { p[3]=0; p[4]=0; FUN_02040c0c((void *)p[1],0,3,0x1000,0); }
