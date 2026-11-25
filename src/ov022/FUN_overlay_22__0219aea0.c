// FUN_overlay_22__0219aea0 @ 0x0219aea0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219aea0 @ 0x0219aea0 (code 0x18, pool extent 0x1c, thumb)
// check: vers=2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Release pointed-to handle when different from default and restore saved default.
 * Field identities remain provisional.
 */
extern void FUN_02075068(void *,unsigned int);
void FUN_overlay_22__0219aea0(void **p,unsigned int *slot) { unsigned int empty=*(unsigned int *)0x020ed09c; if(*slot!=empty) { FUN_02075068(p[1],*slot); *slot=empty; } }
