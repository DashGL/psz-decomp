// FUN_overlay_20__0219ae44 @ 0x0219ae44 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219ae44 @ 0x0219ae44 (code 0x24, pool extent 0x28, thumb)
// check: vers=2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 20 reconstruction from extracted module bytes, 2026-11-04.
 * Compare child progress to global threshold, transition receiver then clear field.
 * Field identities remain provisional.
 */
extern void FUN_overlay_20__0219ae94(void *);
void FUN_overlay_20__0219ae44(unsigned int *p) {p[3]=((int *)p[1])[14]>=*(int *)0x020fc988;FUN_overlay_20__0219ae94(p);p[4]=0;}
