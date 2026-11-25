// FUN_overlay_20__0219b200 @ 0x0219b200 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219b200 @ 0x0219b200 (code 0x1a, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Run setup, clear state and copy two resident defaults.
 * Field identities remain provisional.
 */
extern void FUN_overlay_20__0219b2b0(void *);
void FUN_overlay_20__0219b200(unsigned int *p) { FUN_overlay_20__0219b2b0(p); p[3]=0; p[14]=*(unsigned int *)0x020ed0a0; p[15]=*(unsigned int *)0x020fc988; }
