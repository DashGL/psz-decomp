// FUN_overlay_22__0219f788 @ 0x0219f788 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219f788 @ 0x0219f788 (code 0x1a, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Install cleanup dispatch table, then release word +14 through optional global manager; return self.
 * Semantic field identities remain provisional; register-preserving return
 * types express observed ABI behavior where callers have not established intent.
 */
extern void FUN_overlay_22__0219f65c(void *,void *);
void *FUN_overlay_22__0219f788(void **self) { self[0]=(void *)0x021a1698; if(*(void **)0x021a1798) FUN_overlay_22__0219f65c(*(void **)0x021a1798,self[5]); return self; }
