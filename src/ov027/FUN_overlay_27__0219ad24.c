// FUN_overlay_27__0219ad24 @ 0x0219ad24 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_27__0219ad24 @ 0x0219ad24 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 27 reconstruction from extracted module bytes, 2026-11-04.
 * Store incoming record word, select owner value and lock flag.
 * Field identities remain provisional.
 */
extern void FUN_02037910(void *,unsigned int);
void FUN_overlay_27__0219ad24(unsigned int *p,unsigned int *record) { p[17]=*record; FUN_02037910(p,p[14]); p[11]|=1; }
