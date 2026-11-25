// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_22__0219f568 @ 0x0219f568 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f568 @ 0x0219f568 (code 0x1e, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Lazily allocate and initialize module registry and return its pointer.
 * Field identities remain provisional.
 */
extern void *FUN_020ba894(unsigned int),*FUN_overlay_22__0219f6b8(void *);
void *FUN_overlay_22__0219f568(void *unused_receiver) { void *p=*(void **)0x021a1798; if(!p) { p=FUN_020ba894(84); if(p)p=FUN_overlay_22__0219f6b8(p); *(void **)0x021a1798=p; } return p; }

// Caller/callee ABI evidence: Caller219ef00 explicitly MOV r0,r5 at219ef2e before call; getter ignores this prepared receiver.
