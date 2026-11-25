// FUN_overlay_22__021a0640 @ 0x021a0640 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_22__021a0640 @ 0x021a0640 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Forward incoming record to optional child only when owner states agree.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__021982c8(void *,void *);
void FUN_overlay_22__021a0640(unsigned int *p,void *record) { if(p[2]==p[27] && p[12]) FUN_overlay_22__021982c8((void *)p[12],record); }
