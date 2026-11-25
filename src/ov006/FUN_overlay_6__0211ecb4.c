// FUN_overlay_6__0211ecb4 @ 0x0211ecb4 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_6__0211ecb4 @ 0x0211ecb4 (code 0x12, pool extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 6 reconstruction from extracted module bytes, 2026-11-04.
 * Release the owned allocation when present and return the receiver.
 * Field identities remain provisional.
 */
extern void FUN_020ba8c4(void *);void *FUN_overlay_6__0211ecb4(void *self){void *child=*(void **)self;if(child)FUN_020ba8c4(child);return self;}
