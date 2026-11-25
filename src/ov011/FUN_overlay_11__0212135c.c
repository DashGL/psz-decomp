// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_11__0212135c @ 0x0212135c (code 0x14, pool extent 0x18, thumb)
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Dispatch optional input-free callback for signed selector below limit; target has no lower bound check.
 * Field identities and high-level API contracts remain provisional.
 */
extern void (*D_02123898[])(void);
void FUN_overlay_11__0212135c(int selector) { if(selector<4) { void (*callback)(void)=D_02123898[selector]; if(callback) callback(); } }
