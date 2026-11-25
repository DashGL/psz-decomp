// FUN_overlay_22__0219f030 @ 0x0219f030 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f030 @ 0x0219f030 (code 0x20, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke optional resident child virtual method with incoming mode and report availability.
 * Field identities remain provisional.
 */
typedef void (*Method)(void *,int);
int FUN_overlay_22__0219f030(int mode) { void **global=*(void ***)0x02108c84; if(global) { void *child=global[23]; if(child) { ((Method *)(*(void **)child))[21](child,mode); return 1; } } return 0; }
