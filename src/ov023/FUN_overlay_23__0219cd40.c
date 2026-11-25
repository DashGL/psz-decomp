// FUN_overlay_23__0219cd40 @ 0x0219cd40 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_23__0219cd40 @ 0x0219cd40 (code 0x20, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke owner operation then restore local handle default.
 * Field identities remain provisional.
 */
extern void FUN_02040c0c(void *,unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_overlay_23__0219cd40(unsigned int *p) { FUN_02040c0c((void *)p[1],0,12,0x1000,0); p[3]=*(unsigned int *)0x020ed09c; }
