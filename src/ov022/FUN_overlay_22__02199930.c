// FUN_overlay_22__02199930 @ 0x02199930 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_22__02199930 @ 0x02199930 (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 22 reconstruction from extracted module bytes, 2026-11-04.
 * Release owner slot then initialize indexed resource mode four.
 * Field identities remain provisional.
 */
extern void FUN_overlay_22__0219ad2c(void *),FUN_02035900(void *,unsigned int,unsigned int);
void FUN_overlay_22__02199930(void **p) { FUN_overlay_22__0219ad2c(p); FUN_02035900(p[1],*(unsigned int *)p[3],4); }
