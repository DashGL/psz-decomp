// FUN_overlay_20__0219cd68 @ 0x0219cd68 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219cd68 @ 0x0219cd68 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Advance state after child presence query returns false.
 * Field identities remain provisional.
 */
extern int FUN_overlay_20__02199054(void *);
extern void FUN_overlay_20__0219cd84(void *);
void FUN_overlay_20__0219cd68(unsigned int *p) { if(!FUN_overlay_20__02199054((void *)p[1])) { FUN_overlay_20__0219cd84(p); p[3]=1; } }
