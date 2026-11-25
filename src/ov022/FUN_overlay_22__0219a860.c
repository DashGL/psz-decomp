// FUN_overlay_22__0219a860 @ 0x0219a860 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219a860 @ 0x0219a860 (code 0x18, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Test resident optional object signed state byte for two.
 * Field identities remain provisional.
 */
int FUN_overlay_22__0219a860(void) { signed char *p=*(signed char **)0x02108d04; return p && p[0x44]==2; }
