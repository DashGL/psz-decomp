// FUN_overlay_21__0219eecc @ 0x0219eecc (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_21__0219eecc @ 0x0219eecc (code 0x14, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 21 reconstruction from extracted module bytes, 2026-11-04.
 * Mark owner group then clear two local state words.
 * Field identities remain provisional.
 */
extern void FUN_overlay_21__02199100(void *,unsigned int);
void FUN_overlay_21__0219eecc(unsigned int *p) { FUN_overlay_21__02199100((void *)p[1],1); p[4]=0; p[3]=0; }
