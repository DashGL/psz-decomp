// FUN_overlay_11__02121404 @ 0x02121404 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_overlay_11__02121404 @ 0x02121404 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 11 reconstruction from extracted module bytes, 2026-11-04.
 * Free optional buffer, clear owner slot and return owner.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_020ba8b4(void *);
void *FUN_overlay_11__02121404(void **self) { if(self[2]) { FUN_020ba8b4(self[2]); self[2]=0; } return self; }
