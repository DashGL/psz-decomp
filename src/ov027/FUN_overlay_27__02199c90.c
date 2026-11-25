// FUN_overlay_27__02199c90 @ 0x02199c90 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_27__02199c90 @ 0x02199c90 (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * When record first word is nonzero, set child active flag through one-argument helper.
 * Field identities and high-level API contracts remain provisional.
 */
extern void FUN_overlay_27__0219a014(void *);
void FUN_overlay_27__02199c90(void **self,unsigned int *record) { unsigned int enabled=*record; void *child=self[4]; if(enabled) FUN_overlay_27__0219a014(child); }
