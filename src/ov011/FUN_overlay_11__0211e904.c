// FUN_overlay_11__0211e904 @ 0x0211e904 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__0211e904 @ 0x0211e904 (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Reject unsigned indices above 49 before bounds-checked halfword lookup.
 * Field identities and high-level API contracts remain provisional.
 */
extern unsigned int FUN_overlay_11__0211e8e8(void *,unsigned int);
unsigned int FUN_overlay_11__0211e904(void *self,unsigned int index) { if(index<=49) return FUN_overlay_11__0211e8e8(self,index); return 0; }
