// FUN_overlay_22__02199f78 @ 0x02199f78 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_22__02199f78 @ 0x02199f78 (code 0x12, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Store four signed-byte values, including fifth incoming stack argument.
 * Field identities remain provisional.
 */
void *FUN_overlay_22__02199f78(signed char *p,signed char a,signed char b,signed char c,signed char d) { p[0]=a; p[1]=b; p[2]=c; p[3]=d; return p; }
